#include <CNuclearBombMgr.hpp>


START_ATF_NAMESPACE
    CNuclearBombMgr::CNuclearBombMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBombMgr*);
        (org_ptr(0x14013a2b0L))(this);
    };
    void CNuclearBombMgr::ctor_CNuclearBombMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBombMgr*);
        (org_ptr(0x14013a2b0L))(this);
    };
    void CNuclearBombMgr::CheckNuclearState(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBombMgr*, struct CPlayer*);
        (org_ptr(0x14013a850L))(this, pOne);
    };
    bool CNuclearBombMgr::CreateMissile(struct CPlayer* pMaster, float* fPos, unsigned int WarnTime, unsigned int InformTime, unsigned int StartTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CNuclearBombMgr*, struct CPlayer*, float*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x14013b3f0L))(this, pMaster, fPos, WarnTime, InformTime, StartTime);
    };
    void CNuclearBombMgr::Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBombMgr*);
        (org_ptr(0x14013a460L))(this);
    };
    char CNuclearBombMgr::GetBossType(char byRace, unsigned int dwSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CNuclearBombMgr*, char, unsigned int);
        return (org_ptr(0x14013a7c0L))(this, byRace, dwSerial);
    };
    struct CNuclearBombMgr* CNuclearBombMgr::Instance()
    {
        using org_ptr = struct CNuclearBombMgr* (WINAPIV*)();
        return (org_ptr(0x14013a3a0L))();
    };
    bool CNuclearBombMgr::IsPatriarch(struct CPlayer* pOne)
    {
        using org_ptr = bool (WINAPIV*)(struct CNuclearBombMgr*, struct CPlayer*);
        return (org_ptr(0x14013aad0L))(this, pOne);
    };
    bool CNuclearBombMgr::LoadIni()
    {
        using org_ptr = bool (WINAPIV*)(struct CNuclearBombMgr*);
        return (org_ptr(0x14013a5e0L))(this);
    };
    void CNuclearBombMgr::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBombMgr*);
        (org_ptr(0x14013b650L))(this);
    };
    bool CNuclearBombMgr::MissileInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CNuclearBombMgr*);
        return (org_ptr(0x14013a4f0L))(this);
    };
    bool CNuclearBombMgr::Request_EnableNuclearControl(int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNuclearBombMgr*, int, char*);
        return (org_ptr(0x14013ab60L))(this, n, pMsg);
    };
    bool CNuclearBombMgr::Request_SelectDropPosition(int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNuclearBombMgr*, int, char*);
        return (org_ptr(0x14013ae80L))(this, n, pMsg);
    };
    void CNuclearBombMgr::SendMsg_Result(int n, char byCode)
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBombMgr*, int, char);
        (org_ptr(0x14013b5b0L))(this, n, byCode);
    };
    CNuclearBombMgr::~CNuclearBombMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBombMgr*);
        (org_ptr(0x14013a330L))(this);
    };
    void CNuclearBombMgr::dtor_CNuclearBombMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBombMgr*);
        (org_ptr(0x14013a330L))(this);
    };
END_ATF_NAMESPACE
