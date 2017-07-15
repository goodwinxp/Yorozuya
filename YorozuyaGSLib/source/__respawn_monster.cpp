#include <__respawn_monster.hpp>


START_ATF_NAMESPACE
    __respawn_monster::__respawn_monster()
    {
        using org_ptr = void (WINAPIV*)(struct __respawn_monster*);
        (org_ptr(0x14027a450L))(this);
    };
    void __respawn_monster::ctor___respawn_monster()
    {
        using org_ptr = void (WINAPIV*)(struct __respawn_monster*);
        (org_ptr(0x14027a450L))(this);
    };
END_ATF_NAMESPACE
