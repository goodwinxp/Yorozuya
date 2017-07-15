#include <__add_monster.hpp>


START_ATF_NAMESPACE
    __add_monster::__add_monster()
    {
        using org_ptr = void (WINAPIV*)(struct __add_monster*);
        (org_ptr(0x14027a3f0L))(this);
    };
    void __add_monster::ctor___add_monster()
    {
        using org_ptr = void (WINAPIV*)(struct __add_monster*);
        (org_ptr(0x14027a3f0L))(this);
    };
END_ATF_NAMESPACE
