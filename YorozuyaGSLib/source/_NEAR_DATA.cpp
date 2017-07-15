#include <_NEAR_DATA.hpp>


START_ATF_NAMESPACE
    void _NEAR_DATA::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _NEAR_DATA*);
        (org_ptr(0x140155570L))(this);
    };
    _NEAR_DATA::_NEAR_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct _NEAR_DATA*);
        (org_ptr(0x140155520L))(this);
    };
    void _NEAR_DATA::ctor__NEAR_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct _NEAR_DATA*);
        (org_ptr(0x140155520L))(this);
    };
END_ATF_NAMESPACE
