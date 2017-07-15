#include <__TEMP_WAIT_TOWER.hpp>


START_ATF_NAMESPACE
    __TEMP_WAIT_TOWER::__TEMP_WAIT_TOWER()
    {
        using org_ptr = void (WINAPIV*)(struct __TEMP_WAIT_TOWER*);
        (org_ptr(0x140132ae0L))(this);
    };
    void __TEMP_WAIT_TOWER::ctor___TEMP_WAIT_TOWER()
    {
        using org_ptr = void (WINAPIV*)(struct __TEMP_WAIT_TOWER*);
        (org_ptr(0x140132ae0L))(this);
    };
END_ATF_NAMESPACE
