#include <__monster_group.hpp>


START_ATF_NAMESPACE
    __monster_group::__monster_group()
    {
        using org_ptr = void (WINAPIV*)(struct __monster_group*);
        (org_ptr(0x140279fb0L))(this);
    };
    void __monster_group::ctor___monster_group()
    {
        using org_ptr = void (WINAPIV*)(struct __monster_group*);
        (org_ptr(0x140279fb0L))(this);
    };
END_ATF_NAMESPACE
