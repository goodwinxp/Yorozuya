#include <_target_monster_aggro_inform_zocl.hpp>


START_ATF_NAMESPACE
    void _target_monster_aggro_inform_zocl::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _target_monster_aggro_inform_zocl*);
        (org_ptr(0x1400f0060L))(this);
    };
    _target_monster_aggro_inform_zocl::_target_monster_aggro_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _target_monster_aggro_inform_zocl*);
        (org_ptr(0x1400f0010L))(this);
    };
    void _target_monster_aggro_inform_zocl::ctor__target_monster_aggro_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _target_monster_aggro_inform_zocl*);
        (org_ptr(0x1400f0010L))(this);
    };
    
END_ATF_NAMESPACE
