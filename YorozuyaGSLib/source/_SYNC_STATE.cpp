#include <_SYNC_STATE.hpp>


START_ATF_NAMESPACE
    void _SYNC_STATE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _SYNC_STATE*);
        (org_ptr(0x14011f120L))(this);
    };
    _SYNC_STATE::_SYNC_STATE()
    {
        using org_ptr = void (WINAPIV*)(struct _SYNC_STATE*);
        (org_ptr(0x14011f0d0L))(this);
    };
    void _SYNC_STATE::ctor__SYNC_STATE()
    {
        using org_ptr = void (WINAPIV*)(struct _SYNC_STATE*);
        (org_ptr(0x14011f0d0L))(this);
    };
    bool _SYNC_STATE::chk_enter()
    {
        using org_ptr = bool (WINAPIV*)(struct _SYNC_STATE*);
        return (org_ptr(0x14011f200L))(this);
    };
    bool _SYNC_STATE::chk_reged()
    {
        using org_ptr = bool (WINAPIV*)(struct _SYNC_STATE*);
        return (org_ptr(0x14011f510L))(this);
    };
    bool _SYNC_STATE::chk_select()
    {
        using org_ptr = bool (WINAPIV*)(struct _SYNC_STATE*);
        return (org_ptr(0x14011f8a0L))(this);
    };
    void _SYNC_STATE::re_lobby()
    {
        using org_ptr = void (WINAPIV*)(struct _SYNC_STATE*);
        (org_ptr(0x14011fba0L))(this);
    };
END_ATF_NAMESPACE
