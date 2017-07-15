#include <si_interpret.hpp>


START_ATF_NAMESPACE
    char si_interpret::GetCountOfEffect(int idx)
    {
        using org_ptr = char (WINAPIV*)(struct si_interpret*, int);
        return (org_ptr(0x1402e3c20L))(this, idx);
    };
    char si_interpret::GetCountOfItem(int idx)
    {
        using org_ptr = char (WINAPIV*)(struct si_interpret*, int);
        return (org_ptr(0x1402e3b90L))(this, idx);
    };
    int si_interpret::GetEffectCode(int idx)
    {
        using org_ptr = int (WINAPIV*)(struct si_interpret*, int);
        return (org_ptr(0x14007da60L))(this, idx);
    };
    char si_interpret::GetEffectTypeCount()
    {
        using org_ptr = char (WINAPIV*)(struct si_interpret*);
        return (org_ptr(0x1402e3b70L))(this);
    };
    float si_interpret::GetEffectValue(int idx)
    {
        using org_ptr = float (WINAPIV*)(struct si_interpret*, int);
        return (org_ptr(0x14007daa0L))(this, idx);
    };
    void si_interpret::init()
    {
        using org_ptr = void (WINAPIV*)(struct si_interpret*);
        (org_ptr(0x1402e36b0L))(this);
    };
    bool si_interpret::set_effect_interpret(struct _SetItemEff_fld* pFld)
    {
        using org_ptr = bool (WINAPIV*)(struct si_interpret*, struct _SetItemEff_fld*);
        return (org_ptr(0x1402e3730L))(this, pFld);
    };
    si_interpret::si_interpret()
    {
        using org_ptr = void (WINAPIV*)(struct si_interpret*);
        (org_ptr(0x1402e35c0L))(this);
    };
    void si_interpret::ctor_si_interpret()
    {
        using org_ptr = void (WINAPIV*)(struct si_interpret*);
        (org_ptr(0x1402e35c0L))(this);
    };
    
END_ATF_NAMESPACE
