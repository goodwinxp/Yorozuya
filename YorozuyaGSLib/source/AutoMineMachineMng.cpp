#include <AutoMineMachineMng.hpp>


START_ATF_NAMESPACE
    AutoMineMachineMng::AutoMineMachineMng()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachineMng*);
        (org_ptr(0x1402d5d10L))(this);
    };
    void AutoMineMachineMng::ctor_AutoMineMachineMng()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachineMng*);
        (org_ptr(0x1402d5d10L))(this);
    };
    bool AutoMineMachineMng::BatteryCharge(int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*);
        return (org_ptr(0x1402d6980L))(this, n, pMsg);
    };
    void AutoMineMachineMng::ChangeOwner(int nRaceCode, struct CGuild* pGuild, char byCollisionType)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachineMng*, int, struct CGuild*, char);
        (org_ptr(0x1402d60a0L))(this, nRaceCode, pGuild, byCollisionType);
    };
    bool AutoMineMachineMng::CloseUI(int n)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int);
        return (org_ptr(0x1402d6370L))(this, n);
    };
    bool AutoMineMachineMng::Command(int n, int nType, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, int, char*);
        return (org_ptr(0x1402d61d0L))(this, n, nType, pMsg);
    };
    struct AutoMineMachine* AutoMineMachineMng::GetMachine(char byRace, char byCollisionType)
    {
        using org_ptr = struct AutoMineMachine* (WINAPIV*)(struct AutoMineMachineMng*, char, char);
        return (org_ptr(0x14029d710L))(this, byRace, byCollisionType);
    };
    bool AutoMineMachineMng::GetOutOre(int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*);
        return (org_ptr(0x1402d6750L))(this, n, pMsg);
    };
    bool AutoMineMachineMng::Initialzie()
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*);
        return (org_ptr(0x1402d5dc0L))(this);
    };
    struct AutoMineMachineMng* AutoMineMachineMng::Instance()
    {
        using org_ptr = struct AutoMineMachineMng* (WINAPIV*)();
        return (org_ptr(0x1402d5bd0L))();
    };
    void AutoMineMachineMng::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachineMng*);
        (org_ptr(0x1402d6110L))(this);
    };
    bool AutoMineMachineMng::MoveOrePos(int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*);
        return (org_ptr(0x1402d6850L))(this, n, pMsg);
    };
    bool AutoMineMachineMng::OpenUI(int n)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int);
        return (org_ptr(0x1402d61f0L))(this, n);
    };
    bool AutoMineMachineMng::OreMerge(int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*);
        return (org_ptr(0x1402d6a90L))(this, n, pMsg);
    };
    void AutoMineMachineMng::Release()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1402d5c90L))();
    };
    bool AutoMineMachineMng::SelectOreType(int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int, char*);
        return (org_ptr(0x1402d6640L))(this, n, pMsg);
    };
    void AutoMineMachineMng::SendMsg_ResultCode(int n, char byType, char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachineMng*, int, char, char);
        (org_ptr(0x1402d6b90L))(this, n, byType, byRetCode);
    };
    bool AutoMineMachineMng::StartWorkMachine(int n)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int);
        return (org_ptr(0x1402d6460L))(this, n);
    };
    bool AutoMineMachineMng::StopWorkMachine(int n)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachineMng*, int);
        return (org_ptr(0x1402d6550L))(this, n);
    };
    char AutoMineMachineMng::_db_qry_insert_newowner(char* pdata)
    {
        using org_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        return (org_ptr(0x1402d6dc0L))(this, pdata);
    };
    char AutoMineMachineMng::_db_qry_update_battery_charge(char* pdata)
    {
        using org_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        return (org_ptr(0x1402d6ed0L))(this, pdata);
    };
    char AutoMineMachineMng::_db_qry_update_battery_discharge(char* pdata)
    {
        using org_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        return (org_ptr(0x1402d6fc0L))(this, pdata);
    };
    char AutoMineMachineMng::_db_qry_update_mineore(char* pdata)
    {
        using org_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        return (org_ptr(0x1402d7040L))(this, pdata);
    };
    char AutoMineMachineMng::_db_qry_update_moveore(char* pdata)
    {
        using org_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        return (org_ptr(0x1402d71f0L))(this, pdata);
    };
    char AutoMineMachineMng::_db_qry_update_selore(char* pdata)
    {
        using org_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        return (org_ptr(0x1402d7170L))(this, pdata);
    };
    char AutoMineMachineMng::_db_qry_update_workstate(char* pdata)
    {
        using org_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        return (org_ptr(0x1402d70f0L))(this, pdata);
    };
    char AutoMineMachineMng::get_type(struct CPlayer* pUser, char byRace)
    {
        using org_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, struct CPlayer*, char);
        return (org_ptr(0x1402d6000L))(this, pUser, byRace);
    };
    char AutoMineMachineMng::request_db_query(char* pdata)
    {
        using org_ptr = char (WINAPIV*)(struct AutoMineMachineMng*, char*);
        return (org_ptr(0x1402d6c30L))(this, pdata);
    };
    void AutoMineMachineMng::result_db_query(char byRet, char* pdata)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachineMng*, char, char*);
        (org_ptr(0x1402d6d30L))(this, byRet, pdata);
    };
    AutoMineMachineMng::~AutoMineMachineMng()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachineMng*);
        (org_ptr(0x1402d5d70L))(this);
    };
    void AutoMineMachineMng::dtor_AutoMineMachineMng()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachineMng*);
        (org_ptr(0x1402d5d70L))(this);
    };
END_ATF_NAMESPACE
