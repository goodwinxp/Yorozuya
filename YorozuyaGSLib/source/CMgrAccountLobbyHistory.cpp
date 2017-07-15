#include <CMgrAccountLobbyHistory.hpp>


START_ATF_NAMESPACE
    CMgrAccountLobbyHistory::CMgrAccountLobbyHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*);
        (org_ptr(0x140232cc0L))(this);
    };
    void CMgrAccountLobbyHistory::ctor_CMgrAccountLobbyHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*);
        (org_ptr(0x140232cc0L))(this);
    };
    void CMgrAccountLobbyHistory::GetNewFileName(unsigned int dwAccountSerial, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, unsigned int, char*);
        (org_ptr(0x140233460L))(this, dwAccountSerial, pszFileName);
    };
    void CMgrAccountLobbyHistory::IOThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x140233a00L))(pv);
    };
    void CMgrAccountLobbyHistory::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*);
        (org_ptr(0x140233700L))(this);
    };
    void CMgrAccountLobbyHistory::WriteFile(char* pszFileName, char* pszLog)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*, char*);
        (org_ptr(0x140233790L))(this, pszFileName, pszLog);
    };
    void CMgrAccountLobbyHistory::add_char_complete(char byRetCode, struct _REGED_AVATOR_DB* pInsertData, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, struct _REGED_AVATOR_DB*, char*);
        (org_ptr(0x1402340d0L))(this, byRetCode, pInsertData, pszFileName);
    };
    void CMgrAccountLobbyHistory::add_char_request(char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*);
        (org_ptr(0x140234030L))(this, pszFileName);
    };
    void CMgrAccountLobbyHistory::del_char_complete(char byRetCode, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, char*);
        (org_ptr(0x140234330L))(this, byRetCode, pszFileName);
    };
    void CMgrAccountLobbyHistory::del_char_request(char bySlotIndex, unsigned int dwAvatorSerial, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, unsigned int, char*);
        (org_ptr(0x140234270L))(this, bySlotIndex, dwAvatorSerial, pszFileName);
    };
    void CMgrAccountLobbyHistory::enter_lobby(unsigned int dwAccountSerial, char* pAccountID, char byUserDgr, unsigned int dwIpAddress, bool bFirst, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, unsigned int, char*, char, unsigned int, bool, char*);
        (org_ptr(0x140233c00L))(this, dwAccountSerial, pAccountID, byUserDgr, dwIpAddress, bFirst, pszFileName);
    };
    void CMgrAccountLobbyHistory::lobby_disconnect(struct _qry_case_lobby_logout* pRegeData, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, struct _qry_case_lobby_logout*, char*);
        (org_ptr(0x140234bb0L))(this, pRegeData, pszFileName);
    };
    void CMgrAccountLobbyHistory::player_create(bool bFirstStart, struct _AVATOR_DATA* pAvator, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, bool, struct _AVATOR_DATA*, char*);
        (org_ptr(0x1402346b0L))(this, bFirstStart, pAvator, pszFileName);
    };
    void CMgrAccountLobbyHistory::player_create_complete_money(struct _AVATOR_DATA* pAvator, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, struct _AVATOR_DATA*, char*);
        (org_ptr(0x1402347f0L))(this, pAvator, pszFileName);
    };
    void CMgrAccountLobbyHistory::player_money_fix(unsigned int dwOldDalant, unsigned int dwOldGold, struct _AVATOR_DATA* pAvator, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, unsigned int, unsigned int, struct _AVATOR_DATA*, char*);
        (org_ptr(0x1402348a0L))(this, dwOldDalant, dwOldGold, pAvator, pszFileName);
    };
    void CMgrAccountLobbyHistory::recovery_char_complete(char byRetCode, struct _REGED* pAvator, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, struct _REGED*, char*);
        (org_ptr(0x140234a30L))(this, byRetCode, pAvator, pszFileName);
    };
    void CMgrAccountLobbyHistory::reged_char_complete(char byRetCode, int nCharNum, struct _REGED* pRegedList, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, int, struct _REGED*, char*);
        (org_ptr(0x140233dc0L))(this, byRetCode, nCharNum, pRegedList, pszFileName);
    };
    void CMgrAccountLobbyHistory::reged_char_request(char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*);
        (org_ptr(0x140233d20L))(this, pszFileName);
    };
    void CMgrAccountLobbyHistory::sel_char_complete(char byRetCode, struct _AVATOR_DATA* pAvator, unsigned int dwAddDalant, unsigned int dwAddGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, struct _AVATOR_DATA*, unsigned int, unsigned int, char*);
        (org_ptr(0x140234510L))(this, byRetCode, pAvator, dwAddDalant, dwAddGold, pszFileName);
    };
    void CMgrAccountLobbyHistory::sel_char_request(char bySlotIndex, unsigned int dwAvatorSerial, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, unsigned int, char*);
        (org_ptr(0x140234450L))(this, bySlotIndex, dwAvatorSerial, pszFileName);
    };
    void CMgrAccountLobbyHistory::tutorial_process_report_recv(char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*);
        (org_ptr(0x140234980L))(this, pszFileName);
    };
    CMgrAccountLobbyHistory::~CMgrAccountLobbyHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*);
        (org_ptr(0x140233230L))(this);
    };
    void CMgrAccountLobbyHistory::dtor_CMgrAccountLobbyHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*);
        (org_ptr(0x140233230L))(this);
    };
    
    
    
    
END_ATF_NAMESPACE
