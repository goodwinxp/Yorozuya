#include <_dh_player_mgr.hpp>


START_ATF_NAMESPACE
    void _dh_player_mgr::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_player_mgr*);
        (org_ptr(0x14026eae0L))(this);
    };
    bool _dh_player_mgr::IsFill()
    {
        using org_ptr = bool (WINAPIV*)(struct _dh_player_mgr*);
        return (org_ptr(0x14026efa0L))(this);
    };
    _dh_player_mgr::_dh_player_mgr()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_player_mgr*);
        (org_ptr(0x14026ea90L))(this);
    };
    void _dh_player_mgr::ctor__dh_player_mgr()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_player_mgr*);
        (org_ptr(0x14026ea90L))(this);
    };
    void _dh_player_mgr::_pos::init()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_player_mgr::_pos*);
        (org_ptr(0x14026eb50L))(this);
    };
    void _dh_player_mgr::_pos::set(struct CMapData* map, uint16_t layer, float* pos)
    {
        using org_ptr = void (WINAPIV*)(struct _dh_player_mgr::_pos*, struct CMapData*, uint16_t, float*);
        (org_ptr(0x14026f390L))(this, map, layer, pos);
    };
END_ATF_NAMESPACE
