#include <CRadarItemMgr.hpp>


START_ATF_NAMESPACE
    CRadarItemMgr::CRadarItemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRadarItemMgr*);
        (org_ptr(0x1402e49c0L))(this);
    };
    void CRadarItemMgr::ctor_CRadarItemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRadarItemMgr*);
        (org_ptr(0x1402e49c0L))(this);
    };
    unsigned int CRadarItemMgr::CalcDelay()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CRadarItemMgr*);
        return (org_ptr(0x1402e5410L))(this);
    };
    unsigned int CRadarItemMgr::GetDelayTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CRadarItemMgr*);
        return (org_ptr(0x1402e54c0L))(this);
    };
    unsigned int CRadarItemMgr::GetStartTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CRadarItemMgr*);
        return (org_ptr(0x1402e54e0L))(this);
    };
    void CRadarItemMgr::Init(unsigned int dwDelayTime)
    {
        using org_ptr = void (WINAPIV*)(struct CRadarItemMgr*, unsigned int);
        (org_ptr(0x1402e4b00L))(this, dwDelayTime);
    };
    void CRadarItemMgr::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CRadarItemMgr*);
        (org_ptr(0x1402e4a20L))(this);
    };
    bool CRadarItemMgr::IsRadarUse()
    {
        using org_ptr = bool (WINAPIV*)(struct CRadarItemMgr*);
        return (org_ptr(0x1402e4d00L))(this);
    };
    bool CRadarItemMgr::IsUpdate()
    {
        using org_ptr = bool (WINAPIV*)(struct CRadarItemMgr*);
        return (org_ptr(0x1402e4db0L))(this);
    };
    bool CRadarItemMgr::IsUse()
    {
        using org_ptr = bool (WINAPIV*)(struct CRadarItemMgr*);
        return (org_ptr(0x1402e4d90L))(this);
    };
    bool CRadarItemMgr::RadarProc(struct _RadarItem_fld* pRadarFld)
    {
        using org_ptr = bool (WINAPIV*)(struct CRadarItemMgr*, struct _RadarItem_fld*);
        return (org_ptr(0x1402e4e30L))(this, pRadarFld);
    };
    void CRadarItemMgr::ResetFlags()
    {
        using org_ptr = void (WINAPIV*)(struct CRadarItemMgr*);
        (org_ptr(0x1402e4dd0L))(this);
    };
    void CRadarItemMgr::ResetUpdate()
    {
        using org_ptr = void (WINAPIV*)(struct CRadarItemMgr*);
        (org_ptr(0x1402e4e10L))(this);
    };
    void CRadarItemMgr::SetUseRadar(char** strRadarCode, struct CPlayer* pMaster, unsigned int dwDurTime, unsigned int dwDelayTime)
    {
        using org_ptr = void (WINAPIV*)(struct CRadarItemMgr*, char**, struct CPlayer*, unsigned int, unsigned int);
        (org_ptr(0x1402e4c20L))(this, strRadarCode, pMaster, dwDurTime, dwDelayTime);
    };
    CRadarItemMgr::~CRadarItemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRadarItemMgr*);
        (org_ptr(0x1402e4a10L))(this);
    };
    void CRadarItemMgr::dtor_CRadarItemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRadarItemMgr*);
        (org_ptr(0x1402e4a10L))(this);
    };
END_ATF_NAMESPACE
