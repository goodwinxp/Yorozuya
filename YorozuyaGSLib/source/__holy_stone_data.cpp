#include <__holy_stone_data.hpp>


START_ATF_NAMESPACE
    __holy_stone_data::__holy_stone_data()
    {
        using org_ptr = void (WINAPIV*)(struct __holy_stone_data*);
        (org_ptr(0x1402840a0L))(this);
    };
    void __holy_stone_data::ctor___holy_stone_data()
    {
        using org_ptr = void (WINAPIV*)(struct __holy_stone_data*);
        (org_ptr(0x1402840a0L))(this);
    };
END_ATF_NAMESPACE
