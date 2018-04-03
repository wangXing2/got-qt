

#pragma once

#ifndef GO_MOC_H
#define GO_MOC_H

#include <stdint.h>

#ifdef __cplusplus
class QmlBridge;
void QmlBridge_QmlBridge_QRegisterMetaTypes();
class Person;
void Person_Person_QRegisterMetaTypes();
class PersonModel;
void PersonModel_PersonModel_QRegisterMetaTypes();
extern "C" {
#endif

struct Moc_PackedString { char* data; long long len; };
struct Moc_PackedList { void* data; long long len; };
struct Moc_PackedString Person_FirstName(void* ptr);
struct Moc_PackedString Person_FirstNameDefault(void* ptr);
void Person_SetFirstName(void* ptr, struct Moc_PackedString firstName);
void Person_SetFirstNameDefault(void* ptr, struct Moc_PackedString firstName);
void Person_ConnectFirstNameChanged(void* ptr);
void Person_DisconnectFirstNameChanged(void* ptr);
void Person_FirstNameChanged(void* ptr, struct Moc_PackedString firstName);
struct Moc_PackedString Person_LastName(void* ptr);
struct Moc_PackedString Person_LastNameDefault(void* ptr);
void Person_SetLastName(void* ptr, struct Moc_PackedString lastName);
void Person_SetLastNameDefault(void* ptr, struct Moc_PackedString lastName);
void Person_ConnectLastNameChanged(void* ptr);
void Person_DisconnectLastNameChanged(void* ptr);
void Person_LastNameChanged(void* ptr, struct Moc_PackedString lastName);
struct Moc_PackedString Person_Email(void* ptr);
struct Moc_PackedString Person_EmailDefault(void* ptr);
void Person_SetEmail(void* ptr, struct Moc_PackedString email);
void Person_SetEmailDefault(void* ptr, struct Moc_PackedString email);
void Person_ConnectEmailChanged(void* ptr);
void Person_DisconnectEmailChanged(void* ptr);
void Person_EmailChanged(void* ptr, struct Moc_PackedString email);
int Person_Person_QRegisterMetaType();
int Person_Person_QRegisterMetaType2(char* typeName);
int Person_Person_QmlRegisterType();
int Person_Person_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
void* Person___dynamicPropertyNames_atList(void* ptr, int i);
void Person___dynamicPropertyNames_setList(void* ptr, void* i);
void* Person___dynamicPropertyNames_newList(void* ptr);
void* Person___findChildren_atList2(void* ptr, int i);
void Person___findChildren_setList2(void* ptr, void* i);
void* Person___findChildren_newList2(void* ptr);
void* Person___findChildren_atList3(void* ptr, int i);
void Person___findChildren_setList3(void* ptr, void* i);
void* Person___findChildren_newList3(void* ptr);
void* Person___findChildren_atList(void* ptr, int i);
void Person___findChildren_setList(void* ptr, void* i);
void* Person___findChildren_newList(void* ptr);
void* Person___children_atList(void* ptr, int i);
void Person___children_setList(void* ptr, void* i);
void* Person___children_newList(void* ptr);
void* Person_NewPerson(void* parent);
void Person_DestroyPerson(void* ptr);
void Person_DestroyPersonDefault(void* ptr);
char Person_EventDefault(void* ptr, void* e);
char Person_EventFilterDefault(void* ptr, void* watched, void* event);
void Person_ChildEventDefault(void* ptr, void* event);
void Person_ConnectNotifyDefault(void* ptr, void* sign);
void Person_CustomEventDefault(void* ptr, void* event);
void Person_DeleteLaterDefault(void* ptr);
void Person_DisconnectNotifyDefault(void* ptr, void* sign);
void Person_TimerEventDefault(void* ptr, void* event);
;
void PersonModel_AddPerson(void* ptr, void* v0);
void PersonModel_EditPerson(void* ptr, int row, struct Moc_PackedString firstName, struct Moc_PackedString lastName, struct Moc_PackedString email);
void PersonModel_RemovePerson(void* ptr, int row);
struct Moc_PackedList PersonModel_Roles(void* ptr);
struct Moc_PackedList PersonModel_RolesDefault(void* ptr);
void PersonModel_SetRoles(void* ptr, void* roles);
void PersonModel_SetRolesDefault(void* ptr, void* roles);
void PersonModel_ConnectRolesChanged(void* ptr);
void PersonModel_DisconnectRolesChanged(void* ptr);
void PersonModel_RolesChanged(void* ptr, void* roles);
struct Moc_PackedList PersonModel_People(void* ptr);
struct Moc_PackedList PersonModel_PeopleDefault(void* ptr);
void PersonModel_SetPeople(void* ptr, void* people);
void PersonModel_SetPeopleDefault(void* ptr, void* people);
void PersonModel_ConnectPeopleChanged(void* ptr);
void PersonModel_DisconnectPeopleChanged(void* ptr);
void PersonModel_PeopleChanged(void* ptr, void* people);
int PersonModel_PersonModel_QRegisterMetaType();
int PersonModel_PersonModel_QRegisterMetaType2(char* typeName);
int PersonModel_PersonModel_QmlRegisterType();
int PersonModel_PersonModel_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
int PersonModel_____setItemData_keyList_atList(void* ptr, int i);
void PersonModel_____setItemData_keyList_setList(void* ptr, int i);
void* PersonModel_____setItemData_keyList_newList(void* ptr);
int PersonModel_____roleNames_keyList_atList(void* ptr, int i);
void PersonModel_____roleNames_keyList_setList(void* ptr, int i);
void* PersonModel_____roleNames_keyList_newList(void* ptr);
int PersonModel_____itemData_keyList_atList(void* ptr, int i);
void PersonModel_____itemData_keyList_setList(void* ptr, int i);
void* PersonModel_____itemData_keyList_newList(void* ptr);
void* PersonModel___setItemData_roles_atList(void* ptr, int i);
void PersonModel___setItemData_roles_setList(void* ptr, int key, void* i);
void* PersonModel___setItemData_roles_newList(void* ptr);
struct Moc_PackedList PersonModel___setItemData_keyList(void* ptr);
void* PersonModel___changePersistentIndexList_from_atList(void* ptr, int i);
void PersonModel___changePersistentIndexList_from_setList(void* ptr, void* i);
void* PersonModel___changePersistentIndexList_from_newList(void* ptr);
void* PersonModel___changePersistentIndexList_to_atList(void* ptr, int i);
void PersonModel___changePersistentIndexList_to_setList(void* ptr, void* i);
void* PersonModel___changePersistentIndexList_to_newList(void* ptr);
int PersonModel___dataChanged_roles_atList(void* ptr, int i);
void PersonModel___dataChanged_roles_setList(void* ptr, int i);
void* PersonModel___dataChanged_roles_newList(void* ptr);
void* PersonModel___layoutAboutToBeChanged_parents_atList(void* ptr, int i);
void PersonModel___layoutAboutToBeChanged_parents_setList(void* ptr, void* i);
void* PersonModel___layoutAboutToBeChanged_parents_newList(void* ptr);
void* PersonModel___layoutChanged_parents_atList(void* ptr, int i);
void PersonModel___layoutChanged_parents_setList(void* ptr, void* i);
void* PersonModel___layoutChanged_parents_newList(void* ptr);
void* PersonModel___roleNames_atList(void* ptr, int i);
void PersonModel___roleNames_setList(void* ptr, int key, void* i);
void* PersonModel___roleNames_newList(void* ptr);
struct Moc_PackedList PersonModel___roleNames_keyList(void* ptr);
void* PersonModel___itemData_atList(void* ptr, int i);
void PersonModel___itemData_setList(void* ptr, int key, void* i);
void* PersonModel___itemData_newList(void* ptr);
struct Moc_PackedList PersonModel___itemData_keyList(void* ptr);
void* PersonModel___mimeData_indexes_atList(void* ptr, int i);
void PersonModel___mimeData_indexes_setList(void* ptr, void* i);
void* PersonModel___mimeData_indexes_newList(void* ptr);
void* PersonModel___match_atList(void* ptr, int i);
void PersonModel___match_setList(void* ptr, void* i);
void* PersonModel___match_newList(void* ptr);
void* PersonModel___persistentIndexList_atList(void* ptr, int i);
void PersonModel___persistentIndexList_setList(void* ptr, void* i);
void* PersonModel___persistentIndexList_newList(void* ptr);
int PersonModel_____doSetRoleNames_keyList_atList(void* ptr, int i);
void PersonModel_____doSetRoleNames_keyList_setList(void* ptr, int i);
void* PersonModel_____doSetRoleNames_keyList_newList(void* ptr);
int PersonModel_____setRoleNames_keyList_atList(void* ptr, int i);
void PersonModel_____setRoleNames_keyList_setList(void* ptr, int i);
void* PersonModel_____setRoleNames_keyList_newList(void* ptr);
void* PersonModel___dynamicPropertyNames_atList(void* ptr, int i);
void PersonModel___dynamicPropertyNames_setList(void* ptr, void* i);
void* PersonModel___dynamicPropertyNames_newList(void* ptr);
void* PersonModel___findChildren_atList2(void* ptr, int i);
void PersonModel___findChildren_setList2(void* ptr, void* i);
void* PersonModel___findChildren_newList2(void* ptr);
void* PersonModel___findChildren_atList3(void* ptr, int i);
void PersonModel___findChildren_setList3(void* ptr, void* i);
void* PersonModel___findChildren_newList3(void* ptr);
void* PersonModel___findChildren_atList(void* ptr, int i);
void PersonModel___findChildren_setList(void* ptr, void* i);
void* PersonModel___findChildren_newList(void* ptr);
void* PersonModel___children_atList(void* ptr, int i);
void PersonModel___children_setList(void* ptr, void* i);
void* PersonModel___children_newList(void* ptr);
void* PersonModel___roles_atList(void* ptr, int i);
void PersonModel___roles_setList(void* ptr, int key, void* i);
void* PersonModel___roles_newList(void* ptr);
struct Moc_PackedList PersonModel___roles_keyList(void* ptr);
void* PersonModel___setRoles_roles_atList(void* ptr, int i);
void PersonModel___setRoles_roles_setList(void* ptr, int key, void* i);
void* PersonModel___setRoles_roles_newList(void* ptr);
struct Moc_PackedList PersonModel___setRoles_keyList(void* ptr);
void* PersonModel___rolesChanged_roles_atList(void* ptr, int i);
void PersonModel___rolesChanged_roles_setList(void* ptr, int key, void* i);
void* PersonModel___rolesChanged_roles_newList(void* ptr);
struct Moc_PackedList PersonModel___rolesChanged_keyList(void* ptr);
void* PersonModel___people_atList(void* ptr, int i);
void PersonModel___people_setList(void* ptr, void* i);
void* PersonModel___people_newList(void* ptr);
void* PersonModel___setPeople_people_atList(void* ptr, int i);
void PersonModel___setPeople_people_setList(void* ptr, void* i);
void* PersonModel___setPeople_people_newList(void* ptr);
void* PersonModel___peopleChanged_people_atList(void* ptr, int i);
void PersonModel___peopleChanged_people_setList(void* ptr, void* i);
void* PersonModel___peopleChanged_people_newList(void* ptr);
int PersonModel_____roles_keyList_atList(void* ptr, int i);
void PersonModel_____roles_keyList_setList(void* ptr, int i);
void* PersonModel_____roles_keyList_newList(void* ptr);
int PersonModel_____setRoles_keyList_atList(void* ptr, int i);
void PersonModel_____setRoles_keyList_setList(void* ptr, int i);
void* PersonModel_____setRoles_keyList_newList(void* ptr);
int PersonModel_____rolesChanged_keyList_atList(void* ptr, int i);
void PersonModel_____rolesChanged_keyList_setList(void* ptr, int i);
void* PersonModel_____rolesChanged_keyList_newList(void* ptr);
void* PersonModel_NewPersonModel(void* parent);
void PersonModel_DestroyPersonModel(void* ptr);
char PersonModel_DropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
void* PersonModel_IndexDefault(void* ptr, int row, int column, void* parent);
void* PersonModel_SiblingDefault(void* ptr, int row, int column, void* idx);
long long PersonModel_FlagsDefault(void* ptr, void* index);
char PersonModel_InsertColumnsDefault(void* ptr, int column, int count, void* parent);
char PersonModel_InsertRowsDefault(void* ptr, int row, int count, void* parent);
char PersonModel_MoveColumnsDefault(void* ptr, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
char PersonModel_MoveRowsDefault(void* ptr, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
char PersonModel_RemoveColumnsDefault(void* ptr, int column, int count, void* parent);
char PersonModel_RemoveRowsDefault(void* ptr, int row, int count, void* parent);
char PersonModel_SetDataDefault(void* ptr, void* index, void* value, int role);
char PersonModel_SetHeaderDataDefault(void* ptr, int section, long long orientation, void* value, int role);
char PersonModel_SetItemDataDefault(void* ptr, void* index, void* roles);
char PersonModel_SubmitDefault(void* ptr);
void PersonModel_FetchMoreDefault(void* ptr, void* parent);
void PersonModel_ResetInternalDataDefault(void* ptr);
void PersonModel_RevertDefault(void* ptr);
void PersonModel_SortDefault(void* ptr, int column, long long order);
struct Moc_PackedList PersonModel_RoleNamesDefault(void* ptr);
struct Moc_PackedList PersonModel_ItemDataDefault(void* ptr, void* index);
void* PersonModel_MimeDataDefault(void* ptr, void* indexes);
void* PersonModel_BuddyDefault(void* ptr, void* index);
void* PersonModel_ParentDefault(void* ptr, void* index);
struct Moc_PackedList PersonModel_MatchDefault(void* ptr, void* start, int role, void* value, int hits, long long flags);
void* PersonModel_SpanDefault(void* ptr, void* index);
struct Moc_PackedString PersonModel_MimeTypesDefault(void* ptr);
void* PersonModel_DataDefault(void* ptr, void* index, int role);
void* PersonModel_HeaderDataDefault(void* ptr, int section, long long orientation, int role);
long long PersonModel_SupportedDragActionsDefault(void* ptr);
long long PersonModel_SupportedDropActionsDefault(void* ptr);
char PersonModel_CanDropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
char PersonModel_CanFetchMoreDefault(void* ptr, void* parent);
char PersonModel_HasChildrenDefault(void* ptr, void* parent);
int PersonModel_ColumnCountDefault(void* ptr, void* parent);
int PersonModel_RowCountDefault(void* ptr, void* parent);
char PersonModel_EventDefault(void* ptr, void* e);
char PersonModel_EventFilterDefault(void* ptr, void* watched, void* event);
void PersonModel_ChildEventDefault(void* ptr, void* event);
void PersonModel_ConnectNotifyDefault(void* ptr, void* sign);
void PersonModel_CustomEventDefault(void* ptr, void* event);
void PersonModel_DeleteLaterDefault(void* ptr);
void PersonModel_DisconnectNotifyDefault(void* ptr, void* sign);
void PersonModel_TimerEventDefault(void* ptr, void* event);
;
void QmlBridge_ConnectUpdateLoader(void* ptr);
void QmlBridge_DisconnectUpdateLoader(void* ptr);
void QmlBridge_UpdateLoader(void* ptr, struct Moc_PackedString p);
void QmlBridge_ConnectUpdateSettings(void* ptr);
void QmlBridge_DisconnectUpdateSettings(void* ptr);
void QmlBridge_UpdateSettings(void* ptr, struct Moc_PackedString author, struct Moc_PackedString mode, struct Moc_PackedString date, struct Moc_PackedString host, struct Moc_PackedString version, struct Moc_PackedString port, char hotload);
void QmlBridge_ConnectSendTime(void* ptr);
void QmlBridge_DisconnectSendTime(void* ptr);
void QmlBridge_SendTime(void* ptr, struct Moc_PackedString data);
void QmlBridge_ConnectUpdateProcessStatus(void* ptr);
void QmlBridge_DisconnectUpdateProcessStatus(void* ptr);
void QmlBridge_UpdateProcessStatus(void* ptr, double c);
struct Moc_PackedString QmlBridge_Calculator(void* ptr, struct Moc_PackedString number1, struct Moc_PackedString number2);
void QmlBridge_StartAsynchronousProcess(void* ptr);
int QmlBridge_QmlBridge_QRegisterMetaType();
int QmlBridge_QmlBridge_QRegisterMetaType2(char* typeName);
int QmlBridge_QmlBridge_QmlRegisterType();
int QmlBridge_QmlBridge_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
void* QmlBridge___dynamicPropertyNames_atList(void* ptr, int i);
void QmlBridge___dynamicPropertyNames_setList(void* ptr, void* i);
void* QmlBridge___dynamicPropertyNames_newList(void* ptr);
void* QmlBridge___findChildren_atList2(void* ptr, int i);
void QmlBridge___findChildren_setList2(void* ptr, void* i);
void* QmlBridge___findChildren_newList2(void* ptr);
void* QmlBridge___findChildren_atList3(void* ptr, int i);
void QmlBridge___findChildren_setList3(void* ptr, void* i);
void* QmlBridge___findChildren_newList3(void* ptr);
void* QmlBridge___findChildren_atList(void* ptr, int i);
void QmlBridge___findChildren_setList(void* ptr, void* i);
void* QmlBridge___findChildren_newList(void* ptr);
void* QmlBridge___children_atList(void* ptr, int i);
void QmlBridge___children_setList(void* ptr, void* i);
void* QmlBridge___children_newList(void* ptr);
void* QmlBridge_NewQmlBridge(void* parent);
void QmlBridge_DestroyQmlBridge(void* ptr);
void QmlBridge_DestroyQmlBridgeDefault(void* ptr);
char QmlBridge_EventDefault(void* ptr, void* e);
char QmlBridge_EventFilterDefault(void* ptr, void* watched, void* event);
void QmlBridge_ChildEventDefault(void* ptr, void* event);
void QmlBridge_ConnectNotifyDefault(void* ptr, void* sign);
void QmlBridge_CustomEventDefault(void* ptr, void* event);
void QmlBridge_DeleteLaterDefault(void* ptr);
void QmlBridge_DisconnectNotifyDefault(void* ptr, void* sign);
void QmlBridge_TimerEventDefault(void* ptr, void* event);
;

#ifdef __cplusplus
}
#endif

#endif