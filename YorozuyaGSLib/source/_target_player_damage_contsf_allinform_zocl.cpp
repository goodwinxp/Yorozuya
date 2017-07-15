#include <_target_player_damage_contsf_allinform_zocl.hpp>


START_ATF_NAMESPACE
    void _target_player_damage_contsf_allinform_zocl::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _target_player_damage_contsf_allinform_zocl*);
        (org_ptr(0x140074110L))(this);
    };
    bool _target_player_damage_contsf_allinform_zocl::IsSame(struct _target_player_damage_contsf_allinform_zocl* src1, struct _target_player_damage_contsf_allinform_zocl* src2)
    {
        using org_ptr = bool (WINAPIV*)(struct _target_player_damage_contsf_allinform_zocl*, struct _target_player_damage_contsf_allinform_zocl*);
        return (org_ptr(0x1400f02b0L))(src1, src2);
    };
    _target_player_damage_contsf_allinform_zocl::_target_player_damage_contsf_allinform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _target_player_damage_contsf_allinform_zocl*);
        (org_ptr(0x1400740c0L))(this);
    };
    void _target_player_damage_contsf_allinform_zocl::ctor__target_player_damage_contsf_allinform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _target_player_damage_contsf_allinform_zocl*);
        (org_ptr(0x1400740c0L))(this);
    };
    int _target_player_damage_contsf_allinform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _target_player_damage_contsf_allinform_zocl*);
        return (org_ptr(0x1400f0250L))(this);
    };
    
END_ATF_NAMESPACE
