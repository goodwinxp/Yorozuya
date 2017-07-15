#include <CMonsterAI.hpp>


START_ATF_NAMESPACE
    CMonsterAI::CMonsterAI()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAI*);
        (org_ptr(0x14014f950L))(this);
    };
    void CMonsterAI::ctor_CMonsterAI()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAI*);
        (org_ptr(0x14014f950L))(this);
    };
    unsigned int CMonsterAI::GetBattleModeTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CMonsterAI*);
        return (org_ptr(0x140155890L))(this);
    };
    struct CPathMgr* CMonsterAI::GetPathFinder()
    {
        using org_ptr = struct CPathMgr* (WINAPIV*)(struct CMonsterAI*);
        return (org_ptr(0x1401555b0L))(this);
    };
    struct SF_Timer* CMonsterAI::GetTimer(int nIndex)
    {
        using org_ptr = struct SF_Timer* (WINAPIV*)(struct CMonsterAI*, int);
        return (org_ptr(0x14014fb30L))(this, nIndex);
    };
    void CMonsterAI::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAI*);
        (org_ptr(0x14014fac0L))(this);
    };
    void CMonsterAI::SetBattleModeTime(unsigned int dwTempBattleModeTime)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAI*, unsigned int);
        (org_ptr(0x1401555f0L))(this, dwTempBattleModeTime);
    };
    int CMonsterAI::SetMyData(struct UsStateTBL* pStateTBL, void* pObject)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterAI*, struct UsStateTBL*, void*);
        return (org_ptr(0x14014fb70L))(this, pStateTBL, pObject);
    };
    CMonsterAI::~CMonsterAI()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAI*);
        (org_ptr(0x14014fa30L))(this);
    };
    void CMonsterAI::dtor_CMonsterAI()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAI*);
        (org_ptr(0x14014fa30L))(this);
    };
END_ATF_NAMESPACE
