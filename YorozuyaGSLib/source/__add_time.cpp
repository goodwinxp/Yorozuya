#include <__add_time.hpp>


START_ATF_NAMESPACE
    __add_time::__add_time()
    {
        using org_ptr = void (WINAPIV*)(struct __add_time*);
        (org_ptr(0x14027a620L))(this);
    };
    void __add_time::ctor___add_time()
    {
        using org_ptr = void (WINAPIV*)(struct __add_time*);
        (org_ptr(0x14027a620L))(this);
    };
END_ATF_NAMESPACE
