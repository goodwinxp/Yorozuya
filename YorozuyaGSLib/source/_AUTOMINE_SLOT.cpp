#include <_AUTOMINE_SLOT.hpp>


START_ATF_NAMESPACE
    _AUTOMINE_SLOT::_AUTOMINE_SLOT()
    {
        using org_ptr = void (WINAPIV*)(struct _AUTOMINE_SLOT*);
        (org_ptr(0x1402d4180L))(this);
    };
    void _AUTOMINE_SLOT::ctor__AUTOMINE_SLOT()
    {
        using org_ptr = void (WINAPIV*)(struct _AUTOMINE_SLOT*);
        (org_ptr(0x1402d4180L))(this);
    };
END_ATF_NAMESPACE
