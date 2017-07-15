#include <FinalDecisionApplyer.hpp>


START_ATF_NAMESPACE
    int FinalDecisionApplyer::Doit(Cmd eCmd, struct CPlayer* pOne, char* pdata)
    {
        using org_ptr = int (WINAPIV*)(struct FinalDecisionApplyer*, Cmd, struct CPlayer*, char*);
        return (org_ptr(0x1402bd920L))(this, eCmd, pOne, pdata);
    };
    FinalDecisionApplyer::FinalDecisionApplyer()
        : ElectProcessor(ProcessorType::_eFinalDecisionApplyer)
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionApplyer*);
        (org_ptr(0x1402bd790L))(this);
    };
    void FinalDecisionApplyer::ctor_FinalDecisionApplyer()
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionApplyer*);
        (org_ptr(0x1402bd790L))(this);
    };
    bool FinalDecisionApplyer::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct FinalDecisionApplyer*);
        return (org_ptr(0x1402bd7f0L))(this);
    };
    void FinalDecisionApplyer::_FinalDecisionApply()
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionApplyer*);
        (org_ptr(0x1402bd990L))(this);
    };
    FinalDecisionApplyer::~FinalDecisionApplyer()
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionApplyer*);
        (org_ptr(0x1402bdd90L))(this);
    };
    void FinalDecisionApplyer::dtor_FinalDecisionApplyer()
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionApplyer*);
        (org_ptr(0x1402bdd90L))(this);
    };
END_ATF_NAMESPACE
