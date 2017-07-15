#include <AutominePersonalMgr.hpp>


START_ATF_NAMESPACE
    AutominePersonalMgr::AutominePersonalMgr()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*);
        (org_ptr(0x1402de440L))(this);
    };
    void AutominePersonalMgr::ctor_AutominePersonalMgr()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*);
        (org_ptr(0x1402de440L))(this);
    };
    bool AutominePersonalMgr::CreateDBTable()
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*);
        return (org_ptr(0x1402de950L))(this);
    };
    bool AutominePersonalMgr::Is_MineRun(int n)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int);
        return (org_ptr(0x1402dfac0L))(this, n);
    };
    bool AutominePersonalMgr::Open_InfoUI(int n, char* pmsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        return (org_ptr(0x1402e0120L))(this, n, pmsg);
    };
    bool AutominePersonalMgr::Open_InvenUI(int n, char* pmsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        return (org_ptr(0x1402e0060L))(this, n, pmsg);
    };
    bool AutominePersonalMgr::check_dummy(struct CMapData* pMap, char byCurDummyIndex, float* pfCurPos)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, struct CMapData*, char, float*);
        return (org_ptr(0x1402deba0L))(this, pMap, byCurDummyIndex, pfCurPos);
    };
    bool AutominePersonalMgr::check_machine(int n, unsigned int dwSerial, struct AutominePersonal* pMachine, struct _STORAGE_LIST::_db_con* pcitem)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, unsigned int, struct AutominePersonal*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1402dec40L))(this, n, dwSerial, pMachine, pcitem);
    };
    bool AutominePersonalMgr::db_load_inven(unsigned int dwSerial, struct _PERSONALAMINE_INVEN_DB_BASE* pCon)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, unsigned int, struct _PERSONALAMINE_INVEN_DB_BASE*);
        return (org_ptr(0x1402e05d0L))(this, dwSerial, pCon);
    };
    bool AutominePersonalMgr::extract_battery(int n)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int);
        return (org_ptr(0x1402dfb50L))(this, n);
    };
    bool AutominePersonalMgr::extract_battery(int n, char* pmsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        return (org_ptr(0x1402df720L))(this, n, pmsg);
    };
    struct _STORAGE_LIST::_db_con* AutominePersonalMgr::get_localitem(struct CPlayer* pOne, uint16_t wItemSerial)
    {
        using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct AutominePersonalMgr*, struct CPlayer*, uint16_t);
        return (org_ptr(0x1402e1850L))(this, pOne, wItemSerial);
    };
    struct AutominePersonal* AutominePersonalMgr::get_machine(int nIdx)
    {
        using org_ptr = struct AutominePersonal* (WINAPIV*)(struct AutominePersonalMgr*, int);
        return (org_ptr(0x14010e0d0L))(this, nIdx);
    };
    bool AutominePersonalMgr::init_objects()
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*);
        return (org_ptr(0x1402de9e0L))(this);
    };
    bool AutominePersonalMgr::initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*);
        return (org_ptr(0x1402de760L))(this);
    };
    bool AutominePersonalMgr::insert_battery(int n, char* pmsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        return (org_ptr(0x1402df540L))(this, n, pmsg);
    };
    bool AutominePersonalMgr::install(int n, char* pmsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        return (org_ptr(0x1402deeb0L))(this, n, pmsg);
    };
    struct AutominePersonalMgr* AutominePersonalMgr::instance()
    {
        using org_ptr = struct AutominePersonalMgr* (WINAPIV*)();
        return (org_ptr(0x1402de560L))();
    };
    bool AutominePersonalMgr::make_storagebox(int n, char* pmsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        return (org_ptr(0x1402ded30L))(this, n, pmsg);
    };
    void AutominePersonalMgr::pop_dqs_makestorage(char byRet, char* pdata)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, char, char*);
        (org_ptr(0x1402e0aa0L))(this, byRet, pdata);
    };
    bool AutominePersonalMgr::pop_ore(int n, char* pmsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        return (org_ptr(0x1402e0260L))(this, n, pmsg);
    };
    void AutominePersonalMgr::push_dqs_makestorage(int n, unsigned int dwAvatorSerial, unsigned int dwTotGold)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, int, unsigned int, unsigned int);
        (org_ptr(0x1402e0a00L))(this, n, dwAvatorSerial, dwTotGold);
    };
    void AutominePersonalMgr::release()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1402de620L))();
    };
    int AutominePersonalMgr::request_query(char* pdata)
    {
        using org_ptr = int (WINAPIV*)(struct AutominePersonalMgr*, char*);
        return (org_ptr(0x1402e0720L))(this, pdata);
    };
    void AutominePersonalMgr::result_query(char byRet, char* pdata)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, char, char*);
        (org_ptr(0x1402e09a0L))(this, byRet, pdata);
    };
    bool AutominePersonalMgr::selectore(int n, char* pmsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        return (org_ptr(0x1402df3b0L))(this, n, pmsg);
    };
    void AutominePersonalMgr::send_ecode(int n, char byCode)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, int, char);
        (org_ptr(0x1402e0c20L))(this, n, byCode);
    };
    bool AutominePersonalMgr::uninstall(int n)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int);
        return (org_ptr(0x1402dff30L))(this, n);
    };
    bool AutominePersonalMgr::uninstall(int n, char* pmsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        return (org_ptr(0x1402df290L))(this, n, pmsg);
    };
    AutominePersonalMgr::~AutominePersonalMgr()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*);
        (org_ptr(0x1402de4e0L))(this);
    };
    void AutominePersonalMgr::dtor_AutominePersonalMgr()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*);
        (org_ptr(0x1402de4e0L))(this);
    };
END_ATF_NAMESPACE
