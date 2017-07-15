#include <CPathMgr.hpp>


START_ATF_NAMESPACE
    CPathMgr::CPathMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CPathMgr*);
        (org_ptr(0x1401559f0L))(this);
    };
    void CPathMgr::ctor_CPathMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CPathMgr*);
        (org_ptr(0x1401559f0L))(this);
    };
    void CPathMgr::Copy(struct CPathMgr* pDst)
    {
        using org_ptr = void (WINAPIV*)(struct CPathMgr*, struct CPathMgr*);
        (org_ptr(0x140155bb0L))(this, pDst);
    };
    char CPathMgr::GetPathSize()
    {
        using org_ptr = char (WINAPIV*)(struct CPathMgr*);
        return (org_ptr(0x1401558b0L))(this);
    };
    void CPathMgr::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CPathMgr*);
        (org_ptr(0x140155ab0L))(this);
    };
    int CPathMgr::PopNextPath(float* pPos)
    {
        using org_ptr = int (WINAPIV*)(struct CPathMgr*, float*);
        return (org_ptr(0x140155ae0L))(this, pPos);
    };
    int CPathMgr::SearchPathA(struct CMonster* pMon, float* vTarPos, int bBackupRestore)
    {
        using org_ptr = int (WINAPIV*)(struct CPathMgr*, struct CMonster*, float*, int);
        return (org_ptr(0x140155c90L))(this, pMon, vTarPos, bBackupRestore);
    };
    CPathMgr::~CPathMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CPathMgr*);
        (org_ptr(0x140155a60L))(this);
    };
    void CPathMgr::dtor_CPathMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CPathMgr*);
        (org_ptr(0x140155a60L))(this);
    };
END_ATF_NAMESPACE
