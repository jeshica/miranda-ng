#ifndef _GLOBAL_H_
#define _GLOBAL_H_

static LIST<void> arMonitoredWindows(3, PtrKeySortT);

static IconItem Icons[] = 
{
	{ LPGEN("Unread message icon"), "unread_icon", IDI_UNREAD },
	{ LPGEN("Read message icon"), "read_icon", IDI_READ },
	{ LPGEN("Failed sending icon"), "fail_icon", IDI_FAIL },
	{ LPGEN("Sending message icon"), "nosent_icon", IDI_NOSENT }
};

enum SRMM_ICON_TYPE
{
	ICON_HIDDEN,
	ICON_READ,
	ICON_UNREAD,
	ICON_FAILED,
	ICON_NOSENT
};

#define FLAG_CONTAINS(x,y)      ((x & y) == y)
#define DBKEY_MESSAGE_READ_TIME "LastMsgReadTime"

int OnModulesLoaded(WPARAM, LPARAM);
INT_PTR DummyService(WPARAM, LPARAM);


#endif //_GLOBAL_H_