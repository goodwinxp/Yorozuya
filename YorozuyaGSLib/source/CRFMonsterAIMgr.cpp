#include <CRFMonsterAIMgr.hpp>


START_ATF_NAMESPACE
    CRFMonsterAIMgr::CRFMonsterAIMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRFMonsterAIMgr*);
        (org_ptr(0x14014c1e0L))(this);
    };
    void CRFMonsterAIMgr::ctor_CRFMonsterAIMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRFMonsterAIMgr*);
        (org_ptr(0x14014c1e0L))(this);
    };
    void CRFMonsterAIMgr::Destory()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140203300L))();
    };
    struct UsPoint* CRFMonsterAIMgr::GetStateTBL(struct UsPoint* result, int nIndex)
    {
        using org_ptr = struct UsPoint* (WINAPIV*)(struct CRFMonsterAIMgr*, struct UsPoint*, int);
        return (org_ptr(0x14014c040L))(this, result, nIndex);
    };
    struct CRFMonsterAIMgr* CRFMonsterAIMgr::Instance()
    {
        using org_ptr = struct CRFMonsterAIMgr* (WINAPIV*)();
        return (org_ptr(0x14014c100L))();
    };
    CRFMonsterAIMgr::~CRFMonsterAIMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRFMonsterAIMgr*);
        (org_ptr(0x140203400L))(this);
    };
    void CRFMonsterAIMgr::dtor_CRFMonsterAIMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRFMonsterAIMgr*);
        (org_ptr(0x140203400L))(this);
    };
END_ATF_NAMESPACE
