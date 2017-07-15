#include <AutoMineMachine.hpp>


START_ATF_NAMESPACE
    AutoMineMachine::AutoMineMachine()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
        (org_ptr(0x1402d0340L))(this);
    };
    void AutoMineMachine::ctor_AutoMineMachine()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
        (org_ptr(0x1402d0340L))(this);
    };
    void AutoMineMachine::ChangeOwner(struct CGuild* pOwnerGuild)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, struct CGuild*);
        (org_ptr(0x1402d0ec0L))(this, pOwnerGuild);
    };
    void AutoMineMachine::Charge(int n, int nCharge, int nGold)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, int, int);
        (org_ptr(0x1402d1590L))(this, n, nCharge, nGold);
    };
    void AutoMineMachine::Discharge()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
        (org_ptr(0x1402d1790L))(this);
    };
    void AutoMineMachine::GetMachineInfo(struct _DB_LOAD_AUTOMINE_MACHINE* pInfo)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, struct _DB_LOAD_AUTOMINE_MACHINE*);
        (org_ptr(0x1402d1250L))(this, pInfo);
    };
    void AutoMineMachine::GetOutOreInAutoMine(struct CPlayer* pUser, char* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, struct CPlayer*, char*);
        (org_ptr(0x1402d1ad0L))(this, pUser, pMsg);
    };
    struct CGuild* AutoMineMachine::GetOwnerGuild()
    {
        using org_ptr = struct CGuild* (WINAPIV*)(struct AutoMineMachine*);
        return (org_ptr(0x14029d6f0L))(this);
    };
    void AutoMineMachine::GetState(unsigned int* dwState)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, unsigned int*);
        (org_ptr(0x1402d17b0L))(this, dwState);
    };
    bool AutoMineMachine::Initialize(char byRace, char byCollisionType)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachine*, char, char);
        return (org_ptr(0x1402d0570L))(this, byRace, byCollisionType);
    };
    bool AutoMineMachine::IsMaster(struct CPlayer* pUser)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachine*, struct CPlayer*);
        return (org_ptr(0x1402d1020L))(this, pUser);
    };
    bool AutoMineMachine::LoadDatabase(struct _DB_LOAD_AUTOMINE_MACHINE* pdata)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachine*, struct _DB_LOAD_AUTOMINE_MACHINE*);
        return (org_ptr(0x1402d0940L))(this, pdata);
    };
    void AutoMineMachine::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
        (org_ptr(0x1402d2530L))(this);
    };
    void AutoMineMachine::MoveOreInAutoMine(int n, char sl, char ss, char dl, char ds)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, char, char, char, char);
        (org_ptr(0x1402d1800L))(this, n, sl, ss, dl, ds);
    };
    void AutoMineMachine::OreMerge(int n, char* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, char*);
        (org_ptr(0x1402d1fd0L))(this, n, pMsg);
    };
    void AutoMineMachine::SelectOre(int n, char byOre)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, char);
        (org_ptr(0x1402d1430L))(this, n, byOre);
    };
    void AutoMineMachine::SendMsg_MachineInfo(int n)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int);
        (org_ptr(0x1402d2830L))(this, n);
    };
    void AutoMineMachine::SendMsg_ResultCode(int n, char byType, char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, char, char);
        (org_ptr(0x1402d2a80L))(this, n, byType, byRetCode);
    };
    void AutoMineMachine::SetOpenUI(bool bOpen)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, bool);
        (org_ptr(0x1402d7940L))(this, bOpen);
    };
    bool AutoMineMachine::SetOwner(char byRace, char byCollisionType, struct CGuild* pGuild)
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachine*, char, char, struct CGuild*);
        return (org_ptr(0x1402d0d10L))(this, byRace, byCollisionType, pGuild);
    };
    void AutoMineMachine::Start(int n)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int);
        (org_ptr(0x1402d10b0L))(this, n);
    };
    void AutoMineMachine::Stop(int n)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int);
        (org_ptr(0x1402d1180L))(this, n);
    };
    void AutoMineMachine::SubChargeCost(char byRet, char* pdata)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, char, char*);
        (org_ptr(0x1402d25e0L))(this, byRet, pdata);
    };
    int AutoMineMachine::_Convert_GoldToGage(int nGold)
    {
        using org_ptr = int (WINAPIV*)(struct AutoMineMachine*, int);
        return (org_ptr(0x1402d1520L))(this, nGold);
    };
    bool AutoMineMachine::_InitMineOre()
    {
        using org_ptr = bool (WINAPIV*)(struct AutoMineMachine*);
        return (org_ptr(0x1402d07e0L))(this);
    };
    void AutoMineMachine::_Mining()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
        (org_ptr(0x1402d20f0L))(this);
    };
    void AutoMineMachine::push_dqs_battery_charge(uint16_t wIndex, int ncharge, int ncost)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, uint16_t, int, int);
        (org_ptr(0x1402d2bd0L))(this, wIndex, ncharge, ncost);
    };
    void AutoMineMachine::push_dqs_battery_discharge()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
        (org_ptr(0x1402d2db0L))(this);
    };
    void AutoMineMachine::push_dqs_getore(int nP, int nS, char byNum)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, int, char);
        (org_ptr(0x1402d2fa0L))(this, nP, nS, byNum);
    };
    void AutoMineMachine::push_dqs_mineore(int nP, int nS)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, int);
        (org_ptr(0x1402d2e70L))(this, nP, nS);
    };
    void AutoMineMachine::push_dqs_moveore(int nDBSlot_S, struct _INVENKEY* pSKey, char bySNum, int nDBSlot_D, struct _INVENKEY* pDKey, char byDNum)
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, struct _INVENKEY*, char, int, struct _INVENKEY*, char);
        (org_ptr(0x1402d3090L))(this, nDBSlot_S, pSKey, bySNum, nDBSlot_D, pDKey, byDNum);
    };
    void AutoMineMachine::push_dqs_newowner()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
        (org_ptr(0x1402d2b20L))(this);
    };
    void AutoMineMachine::push_dqs_selore()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
        (org_ptr(0x1402d3290L))(this);
    };
    void AutoMineMachine::push_dqs_workingstate()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
        (org_ptr(0x1402d31d0L))(this);
    };
    AutoMineMachine::~AutoMineMachine()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
        (org_ptr(0x1402d04a0L))(this);
    };
    void AutoMineMachine::dtor_AutoMineMachine()
    {
        using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
        (org_ptr(0x1402d04a0L))(this);
    };
END_ATF_NAMESPACE
