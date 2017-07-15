#include <CLuaLootingMgr.hpp>


START_ATF_NAMESPACE
    bool CLuaLootingMgr::AddNovusItem(char* strItemCode, struct CMapData* pMap, uint16_t wLayerIndex, float* fPos, uint16_t wLootRange, unsigned int dwOverlapCnt, unsigned int dwItemNum, char byCreateType)
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaLootingMgr*, char*, struct CMapData*, uint16_t, float*, uint16_t, unsigned int, unsigned int, char);
        return (org_ptr(0x140404ee0L))(this, strItemCode, pMap, wLayerIndex, fPos, wLootRange, dwOverlapCnt, dwItemNum, byCreateType);
    };
    CLuaLootingMgr::CLuaLootingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaLootingMgr*);
        (org_ptr(0x140404dd0L))(this);
    };
    void CLuaLootingMgr::ctor_CLuaLootingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaLootingMgr*);
        (org_ptr(0x140404dd0L))(this);
    };
    void CLuaLootingMgr::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1402035e0L))();
    };
    bool CLuaLootingMgr::InitSDM(unsigned int dwLoopLootingCount, unsigned int dwLoopLootingTerm)
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaLootingMgr*, unsigned int, unsigned int);
        return (org_ptr(0x140404ea0L))(this, dwLoopLootingCount, dwLoopLootingTerm);
    };
    struct CLuaLootingMgr* CLuaLootingMgr::Instance()
    {
        using org_ptr = struct CLuaLootingMgr* (WINAPIV*)();
        return (org_ptr(0x1404010f0L))();
    };
    void CLuaLootingMgr::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaLootingMgr*);
        (org_ptr(0x140405180L))(this);
    };
    CLuaLootingMgr::~CLuaLootingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaLootingMgr*);
        (org_ptr(0x140404e60L))(this);
    };
    void CLuaLootingMgr::dtor_CLuaLootingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaLootingMgr*);
        (org_ptr(0x140404e60L))(this);
    };
END_ATF_NAMESPACE
