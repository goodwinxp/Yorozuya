#include <CMgrAvatorQuestHistory.hpp>


START_ATF_NAMESPACE
    CMgrAvatorQuestHistory::CMgrAvatorQuestHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*);
        (org_ptr(0x140247280L))(this);
    };
    void CMgrAvatorQuestHistory::ctor_CMgrAvatorQuestHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*);
        (org_ptr(0x140247280L))(this);
    };
    void CMgrAvatorQuestHistory::GetNewFileName(unsigned int dwAvatorSerial, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*, unsigned int, char*);
        (org_ptr(0x1402476c0L))(this, dwAvatorSerial, pszFileName);
    };
    int CMgrAvatorQuestHistory::GetTotalWaitSize()
    {
        using org_ptr = int (WINAPIV*)(struct CMgrAvatorQuestHistory*);
        return (org_ptr(0x140248090L))(this);
    };
    void CMgrAvatorQuestHistory::IOThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x140247ea0L))(pv);
    };
    void CMgrAvatorQuestHistory::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*);
        (org_ptr(0x140247960L))(this);
    };
    void CMgrAvatorQuestHistory::WriteFile(char* pszFileName, char* pszLog)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*, char*, char*);
        (org_ptr(0x140247d90L))(this, pszFileName, pszLog);
    };
    void CMgrAvatorQuestHistory::char_copy(char* pszDstName, unsigned int dwDstSerial, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*, char*, unsigned int, char*);
        (org_ptr(0x140247d10L))(this, pszDstName, dwDstSerial, pszFileName);
    };
    void CMgrAvatorQuestHistory::complete_quest(int nSlot, char* pszQuestCode, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*, int, char*, char*);
        (org_ptr(0x140247bf0L))(this, nSlot, pszQuestCode, pszFileName);
    };
    void CMgrAvatorQuestHistory::fail_quest(int nSlot, char* pszQuestCode, char* pszFailCode, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*, int, char*, char*, char*);
        (org_ptr(0x140247c80L))(this, nSlot, pszQuestCode, pszFailCode, pszFileName);
    };
    void CMgrAvatorQuestHistory::init_quest(char* pszAvatorName, struct _QUEST_DB_BASE* pQuestDB, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*, char*, struct _QUEST_DB_BASE*, char*);
        (org_ptr(0x1402479d0L))(this, pszAvatorName, pQuestDB, pszFileName);
    };
    void CMgrAvatorQuestHistory::insert_quest(int nSlot, char* pszQuestCode, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*, int, char*, char*);
        (org_ptr(0x140247b60L))(this, nSlot, pszQuestCode, pszFileName);
    };
    CMgrAvatorQuestHistory::~CMgrAvatorQuestHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*);
        (org_ptr(0x1402475a0L))(this);
    };
    void CMgrAvatorQuestHistory::dtor_CMgrAvatorQuestHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorQuestHistory*);
        (org_ptr(0x1402475a0L))(this);
    };
    
END_ATF_NAMESPACE
