#include <FinalDecisionProcessor.hpp>


START_ATF_NAMESPACE
    int FinalDecisionProcessor::Doit(Cmd eCmd, struct CPlayer* pOne, char* pdata)
    {
        using org_ptr = int (WINAPIV*)(struct FinalDecisionProcessor*, Cmd, struct CPlayer*, char*);
        return (org_ptr(0x1402bdf90L))(this, eCmd, pOne, pdata);
    };
    FinalDecisionProcessor::FinalDecisionProcessor()
        : ElectProcessor(ProcessorType::_eFinalDecisionProcessor)
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionProcessor*);
        (org_ptr(0x1402bddd0L))(this);
    };
    void FinalDecisionProcessor::ctor_FinalDecisionProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionProcessor*);
        (org_ptr(0x1402bddd0L))(this);
    };
    bool FinalDecisionProcessor::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct FinalDecisionProcessor*);
        return (org_ptr(0x1402bde80L))(this);
    };
    void FinalDecisionProcessor::_FinalDecision()
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionProcessor*);
        (org_ptr(0x1402be0e0L))(this);
    };
    void FinalDecisionProcessor::_ReqNetFinalDecision(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionProcessor*, struct CPlayer*);
        (org_ptr(0x1402be030L))(this, pOne);
    };
    void FinalDecisionProcessor::_SetWinner()
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionProcessor*);
        (org_ptr(0x1402be200L))(this);
    };
    FinalDecisionProcessor::~FinalDecisionProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionProcessor*);
        (org_ptr(0x1402be4e0L))(this);
    };
    void FinalDecisionProcessor::dtor_FinalDecisionProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct FinalDecisionProcessor*);
        (org_ptr(0x1402be4e0L))(this);
    };
END_ATF_NAMESPACE
