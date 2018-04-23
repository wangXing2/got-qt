package main

import (
	"encoding/json"
	"fmt"
	"github.com/therecipe/qt/core"
	"github.com/therecipe/qt/quick"
	"github.com/therecipe/qt/widgets"
	"github.com/gobuffalo/packr" //for compiled files
	"os"
	"path/filepath"
	"strings"
)

type Config struct {
	Author  string `"json":"author"`
	Date    string `"json":"date"`
	Mode    string `"json":"mode"`
	Host    string `"json":"host"`
	Version string `"json":"version"`
	Port    string `"json":"port"`
	Hotload bool   `"json":"hotload"`
}

func LoadConfiguration() (error, Config) {
	var config Config

	//lets compile the config.json file into the binary so its easily accessible
	box := packr.NewBox("./configfiles")
	if configFile, err := box.MustBytes("config.json"); err != nil {
		return err, config
	} else {
		json.Unmarshal(configFile, &config)
		return nil, config
	}
}
func main() {
	//0. set any required env vars for qt
	os.Setenv("QT_QUICK_CONTROLS_STYLE", "material") //set style to material
	os.Setenv("QML_DISABLE_DISK_CACHE", "true") //disable caching files

	//1. the hotloader needs a path to the qml files highest directory
	// change this if you are working elsewhere
	var topLevel = filepath.Join(os.Getenv("GOPATH"), "src", "github.com", "amlwwalker", "got-qt", "qt", "qml")

	//2. load the configuration file
	_, config := LoadConfiguration()

	//3. Create a bridge to the frontend
	var qmlBridge = NewQmlBridge(nil)
	qmlBridge.ConfigureBridge(config)
	// turn on high definition scaling
	core.QCoreApplication_SetAttribute(core.Qt__AA_EnableHighDpiScaling, true)

	//4. Configure the qml binding and create an application
	widgets.NewQApplication(len(os.Args), os.Args)

	//create a view
	var view = quick.NewQQuickView(nil)
	view.SetTitle("got-qt")
	qmlBridge.OpenWithDefaultApplication() //try and open a default directory
	//configure the view to know about the bridge
	//this needs to happen before anything happens on another thread
	//else the thread might beat the context property to setup
	view.RootContext().SetContextProperty("QmlBridge", qmlBridge)
	view.RootContext().SetContextProperty("ContactsModel", qmlBridge.business.pModel)
	view.RootContext().SetContextProperty("SearchModel", qmlBridge.business.sModel)
	view.RootContext().SetContextProperty("FilesModel", qmlBridge.business.fModel)

	//5. Configure hotloading
	//configure the loader to handle updating qml live
	loader := func(p string) {
		fmt.Println("changed:", p)
		view.SetSource(core.NewQUrl())
		view.Engine().ClearComponentCache()
		view.SetSource(core.NewQUrl3(topLevel+"/loader.qml", 0))
		if !strings.Contains(p, "/loader.qml") {
			relativePath := strings.Replace(p, topLevel+"/", "", -1)
			qmlBridge.UpdateLoader(relativePath)
		}
	}
	var notifier NotificationHandler
	notifier.Initialise()
	//decide whether to enable hotloading (must be disabled for deployment)
	if !config.Hotload {
		fmt.Println("compiling qml into binary...")
		view.SetSource(core.NewQUrl3("qrc:/qml/loader-production.qml", 0))
		notifier.Push("Hotloading", "Disabled")
	} else {
		view.SetSource(core.NewQUrl3(topLevel+"/loader.qml", 0))
		go qmlBridge.hotLoader.startWatcher(loader)
		notifier.Push("Hotloading", "Enabled")
	}

	//6. Complete setup, and start the UI
	view.SetResizeMode(quick.QQuickView__SizeRootObjectToView)
	view.Show()
	widgets.QApplication_Exec()

}
