#include <CRaceBossWinRate.hpp>


START_ATF_NAMESPACE
    CRaceBossWinRate::CRaceBossWinRate()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*);
        (org_ptr(0x14024d390L))(this);
    };
    void CRaceBossWinRate::ctor_CRaceBossWinRate()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*);
        (org_ptr(0x14024d390L))(this);
    };
    void CRaceBossWinRate::CompleteBossAccmulationWinRate(struct _qry_case_raceboss_accumulation_winrate* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*, struct _qry_case_raceboss_accumulation_winrate*);
        (org_ptr(0x14024cf50L))(this, pData);
    };
    void CRaceBossWinRate::Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*);
        (org_ptr(0x14024c230L))(this);
    };
    struct CRaceBossWinRate* CRaceBossWinRate::Instance()
    {
        using org_ptr = struct CRaceBossWinRate* (WINAPIV*)();
        return (org_ptr(0x14024c170L))();
    };
    char CRaceBossWinRate::LoadBossAccmulationWinRate(struct _qry_case_raceboss_accumulation_winrate* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CRaceBossWinRate*, struct _qry_case_raceboss_accumulation_winrate*);
        return (org_ptr(0x14024cdb0L))(this, pData);
    };
    bool CRaceBossWinRate::LoadBossCurrentWinRate()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBossWinRate*);
        return (org_ptr(0x14024cbd0L))(this);
    };
    bool CRaceBossWinRate::LoadDB()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBossWinRate*);
        return (org_ptr(0x14024cb70L))(this);
    };
    bool CRaceBossWinRate::LoadINI()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBossWinRate*);
        return (org_ptr(0x14024caa0L))(this);
    };
    void CRaceBossWinRate::Notify(char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*, char);
        (org_ptr(0x14024c570L))(this, byRace);
    };
    void CRaceBossWinRate::Notify(char byRace, uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*, char, uint16_t);
        (org_ptr(0x14024c700L))(this, byRace, wIndex);
    };
    void CRaceBossWinRate::Notify()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*);
        (org_ptr(0x14024c420L))(this);
    };
    bool CRaceBossWinRate::SaveINI()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBossWinRate*);
        return (org_ptr(0x14024c810L))(this);
    };
    void CRaceBossWinRate::UpdateRaceBossWinRate(char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*, char);
        (org_ptr(0x14024c2c0L))(this, byRace);
    };
    void CRaceBossWinRate::UpdateRaceBossWinRate()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*);
        (org_ptr(0x14024c2f0L))(this);
    };
    void CRaceBossWinRate::UpdateTotalCnt()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*);
        (org_ptr(0x14024c360L))(this);
    };
    void CRaceBossWinRate::UpdateWinCnt(char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*, char);
        (org_ptr(0x14024c3b0L))(this, byRace);
    };
    CRaceBossWinRate::~CRaceBossWinRate()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*);
        (org_ptr(0x14024d4b0L))(this);
    };
    void CRaceBossWinRate::dtor_CRaceBossWinRate()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossWinRate*);
        (org_ptr(0x14024d4b0L))(this);
    };
END_ATF_NAMESPACE
