#include <CConnNumPHMgr.hpp>


START_ATF_NAMESPACE
    CConnNumPHMgr::CConnNumPHMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CConnNumPHMgr*);
        (org_ptr(0x140202d70L))(this);
    };
    void CConnNumPHMgr::ctor_CConnNumPHMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CConnNumPHMgr*);
        (org_ptr(0x140202d70L))(this);
    };
    struct _USER_NUM_SHEET* CConnNumPHMgr::Check(int nLoginNum)
    {
        using org_ptr = struct _USER_NUM_SHEET* (WINAPIV*)(struct CConnNumPHMgr*, int);
        return (org_ptr(0x140207e60L))(this, nLoginNum);
    };
    int CConnNumPHMgr::GetCurHour()
    {
        using org_ptr = int (WINAPIV*)(struct CConnNumPHMgr*);
        return (org_ptr(0x140202ee0L))(this);
    };
    void CConnNumPHMgr::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CConnNumPHMgr*);
        (org_ptr(0x140202e70L))(this);
    };
    int CConnNumPHMgr::__cnt_per_h::GetAverageUserNumPerHour()
    {
        using org_ptr = int (WINAPIV*)(struct CConnNumPHMgr::__cnt_per_h*);
        return (org_ptr(0x140208010L))(this);
    };
    void CConnNumPHMgr::__cnt_per_h::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CConnNumPHMgr::__cnt_per_h*);
        (org_ptr(0x140202e20L))(this);
    };
    CConnNumPHMgr::__cnt_per_h::__cnt_per_h()
    {
        using org_ptr = void (WINAPIV*)(struct CConnNumPHMgr::__cnt_per_h*);
        (org_ptr(0x140202dd0L))(this);
    };
    void CConnNumPHMgr::__cnt_per_h::ctor___cnt_per_h()
    {
        using org_ptr = void (WINAPIV*)(struct CConnNumPHMgr::__cnt_per_h*);
        (org_ptr(0x140202dd0L))(this);
    };
END_ATF_NAMESPACE
