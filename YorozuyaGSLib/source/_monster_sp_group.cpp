#include <_monster_sp_group.hpp>


START_ATF_NAMESPACE
    _monster_sp_group::_monster_sp_group()
    {
        using org_ptr = void (WINAPIV*)(struct _monster_sp_group*);
        (org_ptr(0x1401618d0L))(this);
    };
    void _monster_sp_group::ctor__monster_sp_group()
    {
        using org_ptr = void (WINAPIV*)(struct _monster_sp_group*);
        (org_ptr(0x1401618d0L))(this);
    };
    
END_ATF_NAMESPACE
