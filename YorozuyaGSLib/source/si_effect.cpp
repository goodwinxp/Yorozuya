#include <si_effect.hpp>


START_ATF_NAMESPACE
    char si_effect::GetCountOfEffect()
    {
        using org_ptr = char (WINAPIV*)(struct si_effect*);
        return (org_ptr(0x1402e3c90L))(this);
    };
    char si_effect::GetCountOfItem()
    {
        using org_ptr = char (WINAPIV*)(struct si_effect*);
        return (org_ptr(0x1402e3c00L))(this);
    };
    void si_effect::init()
    {
        using org_ptr = void (WINAPIV*)(struct si_effect*);
        (org_ptr(0x1402e3690L))(this);
    };
    void si_effect::set_effect_count_info(char byCountOfItem, char byCountOfEffect)
    {
        using org_ptr = void (WINAPIV*)(struct si_effect*, char, char);
        (org_ptr(0x1402e3b30L))(this, byCountOfItem, byCountOfEffect);
    };
    si_effect::si_effect()
    {
        using org_ptr = void (WINAPIV*)(struct si_effect*);
        (org_ptr(0x1402e3640L))(this);
    };
    void si_effect::ctor_si_effect()
    {
        using org_ptr = void (WINAPIV*)(struct si_effect*);
        (org_ptr(0x1402e3640L))(this);
    };
END_ATF_NAMESPACE
