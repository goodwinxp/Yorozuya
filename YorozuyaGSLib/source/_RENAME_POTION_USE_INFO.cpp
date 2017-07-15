#include <_RENAME_POTION_USE_INFO.hpp>


START_ATF_NAMESPACE
    void _RENAME_POTION_USE_INFO::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _RENAME_POTION_USE_INFO*);
        (org_ptr(0x140073dd0L))(this);
    };
    _RENAME_POTION_USE_INFO::_RENAME_POTION_USE_INFO()
    {
        using org_ptr = void (WINAPIV*)(struct _RENAME_POTION_USE_INFO*);
        (org_ptr(0x140073d80L))(this);
    };
    void _RENAME_POTION_USE_INFO::ctor__RENAME_POTION_USE_INFO()
    {
        using org_ptr = void (WINAPIV*)(struct _RENAME_POTION_USE_INFO*);
        (org_ptr(0x140073d80L))(this);
    };
END_ATF_NAMESPACE
