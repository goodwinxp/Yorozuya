#include <__holy_keeper_data.hpp>


START_ATF_NAMESPACE
    __holy_keeper_data::__holy_keeper_data()
    {
        using org_ptr = void (WINAPIV*)(struct __holy_keeper_data*);
        (org_ptr(0x140284010L))(this);
    };
    void __holy_keeper_data::ctor___holy_keeper_data()
    {
        using org_ptr = void (WINAPIV*)(struct __holy_keeper_data*);
        (org_ptr(0x140284010L))(this);
    };
END_ATF_NAMESPACE
