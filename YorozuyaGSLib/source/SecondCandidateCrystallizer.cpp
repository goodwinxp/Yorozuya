#include <SecondCandidateCrystallizer.hpp>


START_ATF_NAMESPACE
    int SecondCandidateCrystallizer::Doit(Cmd eCmd, struct CPlayer* pOne, char* pdata)
    {
        using org_ptr = int (WINAPIV*)(struct SecondCandidateCrystallizer*, Cmd, struct CPlayer*, char*);
        return (org_ptr(0x1402be6c0L))(this, eCmd, pOne, pdata);
    };
    bool SecondCandidateCrystallizer::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct SecondCandidateCrystallizer*);
        return (org_ptr(0x1402be590L))(this);
    };
    SecondCandidateCrystallizer::SecondCandidateCrystallizer()
        : ElectProcessor(ElectProcessor::ProcessorType::_eSecondCandidateCrystallizer)
    {
        using org_ptr = void (WINAPIV*)(struct SecondCandidateCrystallizer*);
        (org_ptr(0x1402be530L))(this);
    };
    void SecondCandidateCrystallizer::ctor_SecondCandidateCrystallizer()
    {
        using org_ptr = void (WINAPIV*)(struct SecondCandidateCrystallizer*);
        (org_ptr(0x1402be530L))(this);
    };
    SecondCandidateCrystallizer::~SecondCandidateCrystallizer()
    {
        using org_ptr = void (WINAPIV*)(struct SecondCandidateCrystallizer*);
        (org_ptr(0x1402be820L))(this);
    };
    void SecondCandidateCrystallizer::dtor_SecondCandidateCrystallizer()
    {
        using org_ptr = void (WINAPIV*)(struct SecondCandidateCrystallizer*);
        (org_ptr(0x1402be820L))(this);
    };
END_ATF_NAMESPACE
