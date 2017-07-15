#include <CMapData.hpp>


START_ATF_NAMESPACE
    CMapData::CMapData()
    {
        using org_ptr = void (WINAPIV*)(struct CMapData*);
        (org_ptr(0x140180050L))(this);
    };
    void CMapData::ctor_CMapData()
    {
        using org_ptr = void (WINAPIV*)(struct CMapData*);
        (org_ptr(0x140180050L))(this);
    };
    bool CMapData::CheckCenterPosDummy(struct _dummy_position* pPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, struct _dummy_position*);
        return (org_ptr(0x1401855d0L))(this, pPos);
    };
    bool CMapData::ConvertLocal(struct _dummy_position* pPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, struct _dummy_position*);
        return (org_ptr(0x140185100L))(this, pPos);
    };
    bool CMapData::ConvertLocalToWorldDummy(struct CDummyPosTable* pPosTable, bool bCheckCenter)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, struct CDummyPosTable*, bool);
        return (org_ptr(0x140185050L))(this, pPosTable, bCheckCenter);
    };
    void CMapData::EnterMap(struct CGameObject* pObj, unsigned int dwSecIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CMapData*, struct CGameObject*, unsigned int);
        (org_ptr(0x140184d30L))(this, pObj, dwSecIndex);
    };
    void CMapData::ExitMap(struct CGameObject* pObj, unsigned int dwSecIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CMapData*, struct CGameObject*, unsigned int);
        (org_ptr(0x140184ec0L))(this, pObj, dwSecIndex);
    };
    struct _bsp_info* CMapData::GetBspInfo()
    {
        using org_ptr = struct _bsp_info* (WINAPIV*)(struct CMapData*);
        return (org_ptr(0x1401843c0L))(this);
    };
    struct _dummy_position* CMapData::GetDummyPostion(char* pszDummyCode)
    {
        using org_ptr = struct _dummy_position* (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x140186440L))(this, pszDummyCode);
    };
    int CMapData::GetLevelLimit()
    {
        using org_ptr = int (WINAPIV*)(struct CMapData*);
        return (org_ptr(0x140186690L))(this);
    };
    struct _portal_dummy* CMapData::GetLinkPortal(char* pPortalCode)
    {
        using org_ptr = struct _portal_dummy* (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x1401846e0L))(this, pPortalCode);
    };
    char CMapData::GetMapCode()
    {
        using org_ptr = char (WINAPIV*)(struct CMapData*);
        return (org_ptr(0x1400c2cd0L))(this);
    };
    struct _portal_dummy* CMapData::GetPortal(char* pPortalCode)
    {
        using org_ptr = struct _portal_dummy* (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x140184550L))(this, pPortalCode);
    };
    struct _portal_dummy* CMapData::GetPortal(int nPortalIndex)
    {
        using org_ptr = struct _portal_dummy* (WINAPIV*)(struct CMapData*, int);
        return (org_ptr(0x1401846a0L))(this, nPortalIndex);
    };
    int CMapData::GetPortalInx(char* pPortalCode)
    {
        using org_ptr = int (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x140184600L))(this, pPortalCode);
    };
    char CMapData::GetRaceTown(float* fPos, char byRaceCode)
    {
        using org_ptr = char (WINAPIV*)(struct CMapData*, float*, char);
        return (org_ptr(0x1401862d0L))(this, fPos, byRaceCode);
    };
    bool CMapData::GetRandPosInDummy(struct _dummy_position* pPos, float* pNewPos, bool bRePos)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, struct _dummy_position*, float*, bool);
        return (org_ptr(0x1401857a0L))(this, pPos, pNewPos, bRePos);
    };
    bool CMapData::GetRandPosInRange(float* pStdPos, int nRange, float* pNewPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, float*, int, float*);
        return (org_ptr(0x140185b10L))(this, pStdPos, nRange, pNewPos);
    };
    bool CMapData::GetRandPosVirtualDum(float* pStdPos, int nRange, float* pNewPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, float*, int, float*);
        return (org_ptr(0x140185c70L))(this, pStdPos, nRange, pNewPos);
    };
    bool CMapData::GetRandPosVirtualDumExcludeStdRange(float* pStdPos, int nRange, int iExcludeRange, float* pNewPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, float*, int, int, float*);
        return (org_ptr(0x140185ee0L))(this, pStdPos, nRange, iExcludeRange, pNewPos);
    };
    void CMapData::GetRectInRadius(struct _pnt_rect* pRect, int nRadius, int nSecNum)
    {
        using org_ptr = void (WINAPIV*)(struct CMapData*, struct _pnt_rect*, int, int);
        (org_ptr(0x1401843e0L))(this, pRect, nRadius, nSecNum);
    };
    int CMapData::GetResDummySector(int nDummyIndex, float* pCurPos)
    {
        using org_ptr = int (WINAPIV*)(struct CMapData*, int, float*);
        return (org_ptr(0x140184950L))(this, nDummyIndex, pCurPos);
    };
    struct _sec_info* CMapData::GetSecInfo()
    {
        using org_ptr = struct _sec_info* (WINAPIV*)(struct CMapData*);
        return (org_ptr(0x1401843a0L))(this);
    };
    int CMapData::GetSectorIndex(float* pPos)
    {
        using org_ptr = int (WINAPIV*)(struct CMapData*, float*);
        return (org_ptr(0x140184790L))(this, pPos);
    };
    struct CObjectList* CMapData::GetSectorListObj(uint16_t wLayerIndex, unsigned int dwSecIndex)
    {
        using org_ptr = struct CObjectList* (WINAPIV*)(struct CMapData*, uint16_t, unsigned int);
        return (org_ptr(0x140184890L))(this, wLayerIndex, dwSecIndex);
    };
    struct CObjectList* CMapData::GetSectorListPlayer(uint16_t wLayerIndex, unsigned int dwSecIndex)
    {
        using org_ptr = struct CObjectList* (WINAPIV*)(struct CMapData*, uint16_t, unsigned int);
        return (org_ptr(0x1401848d0L))(this, wLayerIndex, dwSecIndex);
    };
    struct CObjectList* CMapData::GetSectorListTower(uint16_t wLayerIndex, unsigned int dwSecIndex)
    {
        using org_ptr = struct CObjectList* (WINAPIV*)(struct CMapData*, uint16_t, unsigned int);
        return (org_ptr(0x140184910L))(this, wLayerIndex, dwSecIndex);
    };
    int CMapData::GetSectorNumByLayerIndex(uint16_t wLayerIndex)
    {
        using org_ptr = int (WINAPIV*)(struct CMapData*, uint16_t);
        return (org_ptr(0x1401866d0L))(this, wLayerIndex);
    };
    void CMapData::Init(struct _map_fld* pMapSet)
    {
        using org_ptr = void (WINAPIV*)(struct CMapData*, struct _map_fld*);
        (org_ptr(0x140180d40L))(this, pMapSet);
    };
    bool CMapData::IsMapIn(float* fPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, float*);
        return (org_ptr(0x140184b40L))(this, fPos);
    };
    bool CMapData::LoadDummy(char* pszDummyCode, struct _dummy_position* pPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*, struct _dummy_position*);
        return (org_ptr(0x140184250L))(this, pszDummyCode, pPos);
    };
    bool CMapData::LoadHolySystemDummy(char* pszDummyCode, struct _dummy_position* pPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*, struct _dummy_position*);
        return (org_ptr(0x140183e30L))(this, pszDummyCode, pPos);
    };
    void CMapData::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CMapData*);
        (org_ptr(0x140181510L))(this);
    };
    bool CMapData::OpenMap(char* pszMapCode, struct _map_fld* pMapSet, bool bUse)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*, struct _map_fld*, bool);
        return (org_ptr(0x140180d80L))(this, pszMapCode, pMapSet, bUse);
    };
    bool CMapData::UpdateSecterList(struct CGameObject* pObj, unsigned int dwOldSec, unsigned int dwNewSec)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, struct CGameObject*, unsigned int, unsigned int);
        return (org_ptr(0x140184be0L))(this, pObj, dwOldSec, dwNewSec);
    };
    bool CMapData::_LoadBind(char* pszMapCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x1401832e0L))(this, pszMapCode);
    };
    bool CMapData::_LoadBspSec(char* pszMapCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x1401815a0L))(this, pszMapCode);
    };
    bool CMapData::_LoadMonBlk(char* pszMapCode, struct _map_fld* pMapFld)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*, struct _map_fld*);
        return (org_ptr(0x140181850L))(this, pszMapCode, pMapFld);
    };
    bool CMapData::_LoadPortal(char* pszMapCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x1401825b0L))(this, pszMapCode);
    };
    bool CMapData::_LoadQuest(char* pszMapCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x140183b60L))(this, pszMapCode);
    };
    bool CMapData::_LoadResource(char* pszMapCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x1401835b0L))(this, pszMapCode);
    };
    bool CMapData::_LoadSafe(char* pszMapCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x140183f80L))(this, pszMapCode);
    };
    bool CMapData::_LoadStart(char* pszMapCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x140182ee0L))(this, pszMapCode);
    };
    bool CMapData::_LoadStoreDummy(char* pszMapCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        return (org_ptr(0x140182a10L))(this, pszMapCode);
    };
    CMapData::~CMapData()
    {
        using org_ptr = void (WINAPIV*)(struct CMapData*);
        (org_ptr(0x140180590L))(this);
    };
    void CMapData::dtor_CMapData()
    {
        using org_ptr = void (WINAPIV*)(struct CMapData*);
        (org_ptr(0x140180590L))(this);
    };
END_ATF_NAMESPACE
