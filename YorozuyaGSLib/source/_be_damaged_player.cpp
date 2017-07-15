#include <_be_damaged_player.hpp>


START_ATF_NAMESPACE
    _be_damaged_player::_be_damaged_player()
    {
        using org_ptr = void (WINAPIV*)(struct _be_damaged_player*);
        (org_ptr(0x14013e450L))(this);
    };
    void _be_damaged_player::ctor__be_damaged_player()
    {
        using org_ptr = void (WINAPIV*)(struct _be_damaged_player*);
        (org_ptr(0x14013e450L))(this);
    };
END_ATF_NAMESPACE
