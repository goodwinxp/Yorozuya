#include <_target_monster_contsf_allinform_zocl.hpp>


START_ATF_NAMESPACE
    void _target_monster_contsf_allinform_zocl::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _target_monster_contsf_allinform_zocl*);
        (org_ptr(0x140074040L))(this);
    };
    bool _target_monster_contsf_allinform_zocl::IsSame(struct _target_monster_contsf_allinform_zocl* src1, struct _target_monster_contsf_allinform_zocl* src2)
    {
        using org_ptr = bool (WINAPIV*)(struct _target_monster_contsf_allinform_zocl*, struct _target_monster_contsf_allinform_zocl*);
        return (org_ptr(0x1400f01a0L))(src1, src2);
    };
    _target_monster_contsf_allinform_zocl::_target_monster_contsf_allinform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _target_monster_contsf_allinform_zocl*);
        (org_ptr(0x140073ff0L))(this);
    };
    void _target_monster_contsf_allinform_zocl::ctor__target_monster_contsf_allinform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _target_monster_contsf_allinform_zocl*);
        (org_ptr(0x140073ff0L))(this);
    };
    int _target_monster_contsf_allinform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _target_monster_contsf_allinform_zocl*);
        return (org_ptr(0x1400f0140L))(this);
    };
    
END_ATF_NAMESPACE
