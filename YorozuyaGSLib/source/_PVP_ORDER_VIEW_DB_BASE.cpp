#include <_PVP_ORDER_VIEW_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _PVP_ORDER_VIEW_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _PVP_ORDER_VIEW_DB_BASE*);
        (org_ptr(0x140077d50L))(this);
    };
END_ATF_NAMESPACE
