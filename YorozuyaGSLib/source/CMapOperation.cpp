#include <CMapOperation.hpp>


START_ATF_NAMESPACE
    CMapOperation::CMapOperation()
    {
        using org_ptr = void (WINAPIV*)(struct CMapOperation*);
        (org_ptr(0x140195e20L))(this);
    };
    void CMapOperation::ctor_CMapOperation()
    {
        using org_ptr = void (WINAPIV*)(struct CMapOperation*);
        (org_ptr(0x140195e20L))(this);
    };
    void CMapOperation::CheckMapPortalLink()
    {
        using org_ptr = void (WINAPIV*)(struct CMapOperation*);
        (org_ptr(0x140197d40L))(this);
    };
    int CMapOperation::GetMap(struct CMapData* pMap)
    {
        using org_ptr = int (WINAPIV*)(struct CMapOperation*, struct CMapData*);
        return (org_ptr(0x1401979b0L))(this, pMap);
    };
    struct CMapData* CMapOperation::GetMap(char* szMapCode)
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct CMapOperation*, char*);
        return (org_ptr(0x140197a30L))(this, szMapCode);
    };
    struct CMapData* CMapOperation::GetMap(int nIndex)
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct CMapOperation*, int);
        return (org_ptr(0x140197970L))(this, nIndex);
    };
    struct CMapData* CMapOperation::GetPosStartMap(char byRaceCode, bool bRand, float* pfoutPos)
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct CMapOperation*, char, bool, float*);
        return (org_ptr(0x140197b90L))(this, byRaceCode, bRand, pfoutPos);
    };
    struct CMapData* CMapOperation::GetSettlementMapData(int iRace, int iTh)
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct CMapOperation*, int, int);
        return (org_ptr(0x1402d7960L))(this, iRace, iTh);
    };
    struct CMapData* CMapOperation::GetStartMap(char byRaceCode)
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct CMapOperation*, char);
        return (org_ptr(0x140197ae0L))(this, byRaceCode);
    };
    bool CMapOperation::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CMapOperation*);
        return (org_ptr(0x140196300L))(this);
    };
    bool CMapOperation::IsExistStdMapID(int iMapID)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapOperation*, int);
        return (org_ptr(0x140120ab0L))(this, iMapID);
    };
    bool CMapOperation::IsInRegion(char* pszRegionCode, struct CGameObject* pObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapOperation*, char*, struct CGameObject*);
        return (org_ptr(0x140197c50L))(this, pszRegionCode, pObj);
    };
    bool CMapOperation::LoadMaps()
    {
        using org_ptr = bool (WINAPIV*)(struct CMapOperation*);
        return (org_ptr(0x140196750L))(this);
    };
    bool CMapOperation::LoadRegion()
    {
        using org_ptr = bool (WINAPIV*)(struct CMapOperation*);
        return (org_ptr(0x140196c40L))(this);
    };
    void CMapOperation::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CMapOperation*);
        (org_ptr(0x140196f30L))(this);
    };
    void CMapOperation::RespawnMonster()
    {
        using org_ptr = void (WINAPIV*)(struct CMapOperation*);
        (org_ptr(0x140197190L))(this);
    };
    CMapOperation::~CMapOperation()
    {
        using org_ptr = void (WINAPIV*)(struct CMapOperation*);
        (org_ptr(0x1401960c0L))(this);
    };
    void CMapOperation::dtor_CMapOperation()
    {
        using org_ptr = void (WINAPIV*)(struct CMapOperation*);
        (org_ptr(0x1401960c0L))(this);
    };
END_ATF_NAMESPACE
