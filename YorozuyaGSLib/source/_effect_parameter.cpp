#include <_effect_parameter.hpp>


START_ATF_NAMESPACE
    void _effect_parameter::AllocEffParam()
    {
        using org_ptr = void (WINAPIV*)(struct _effect_parameter*);
        (org_ptr(0x1400748f0L))(this);
    };
    float _effect_parameter::GetEff_Have(int nParamIndex)
    {
        using org_ptr = float (WINAPIV*)(struct _effect_parameter*, int);
        return (org_ptr(0x140078d80L))(this, nParamIndex);
    };
    float _effect_parameter::GetEff_Plus(int nParamIndex)
    {
        using org_ptr = float (WINAPIV*)(struct _effect_parameter*, int);
        return (org_ptr(0x1400789f0L))(this, nParamIndex);
    };
    float _effect_parameter::GetEff_Rate(int nParamIndex)
    {
        using org_ptr = float (WINAPIV*)(struct _effect_parameter*, int);
        return (org_ptr(0x1400742c0L))(this, nParamIndex);
    };
    bool _effect_parameter::GetEff_State(int nParamIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct _effect_parameter*, int);
        return (org_ptr(0x14007a590L))(this, nParamIndex);
    };
    void _effect_parameter::InitEffHave()
    {
        using org_ptr = void (WINAPIV*)(struct _effect_parameter*);
        (org_ptr(0x14007aa90L))(this);
    };
    void _effect_parameter::InitEffParam()
    {
        using org_ptr = void (WINAPIV*)(struct _effect_parameter*);
        (org_ptr(0x140074960L))(this);
    };
    bool _effect_parameter::SetEff_Plus(int nParamIndex, float fVar, bool bAdd)
    {
        using org_ptr = bool (WINAPIV*)(struct _effect_parameter*, int, float, bool);
        return (org_ptr(0x14007ad40L))(this, nParamIndex, fVar, bAdd);
    };
    bool _effect_parameter::SetEff_Rate(int nParamIndex, float fVar, bool bAdd)
    {
        using org_ptr = bool (WINAPIV*)(struct _effect_parameter*, int, float, bool);
        return (org_ptr(0x14007ac80L))(this, nParamIndex, fVar, bAdd);
    };
    bool _effect_parameter::SetEff_State(int nParamIndex, bool bVar)
    {
        using org_ptr = bool (WINAPIV*)(struct _effect_parameter*, int, bool);
        return (org_ptr(0x14007ae20L))(this, nParamIndex, bVar);
    };
    void _effect_parameter::SetLock(bool bLock)
    {
        using org_ptr = void (WINAPIV*)(struct _effect_parameter*, bool);
        (org_ptr(0x14007a8b0L))(this, bLock);
    };
    _effect_parameter::_effect_parameter()
    {
        using org_ptr = void (WINAPIV*)(struct _effect_parameter*);
        (org_ptr(0x14017a410L))(this);
    };
    void _effect_parameter::ctor__effect_parameter()
    {
        using org_ptr = void (WINAPIV*)(struct _effect_parameter*);
        (org_ptr(0x14017a410L))(this);
    };
    _effect_parameter::~_effect_parameter()
    {
        using org_ptr = void (WINAPIV*)(struct _effect_parameter*);
        (org_ptr(0x14017a450L))(this);
    };
    void _effect_parameter::dtor__effect_parameter()
    {
        using org_ptr = void (WINAPIV*)(struct _effect_parameter*);
        (org_ptr(0x14017a450L))(this);
    };
    
END_ATF_NAMESPACE
