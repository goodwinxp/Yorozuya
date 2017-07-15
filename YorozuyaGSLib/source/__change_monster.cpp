#include <__change_monster.hpp>


START_ATF_NAMESPACE
    __change_monster::__change_monster()
    {
        using org_ptr = void (WINAPIV*)(struct __change_monster*);
        (org_ptr(0x14027a4d0L))(this);
    };
    void __change_monster::ctor___change_monster()
    {
        using org_ptr = void (WINAPIV*)(struct __change_monster*);
        (org_ptr(0x14027a4d0L))(this);
    };
    __change_monster::~__change_monster()
    {
        using org_ptr = void (WINAPIV*)(struct __change_monster*);
        (org_ptr(0x140272e60L))(this);
    };
    void __change_monster::dtor___change_monster()
    {
        using org_ptr = void (WINAPIV*)(struct __change_monster*);
        (org_ptr(0x140272e60L))(this);
    };
END_ATF_NAMESPACE
