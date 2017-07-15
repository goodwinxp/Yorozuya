#include <Voter.hpp>


START_ATF_NAMESPACE
    int Voter::Doit(Cmd eCmd, struct CPlayer* pOne, char* pdata)
    {
        using org_ptr = int (WINAPIV*)(struct Voter*, Cmd, struct CPlayer*, char*);
        return (org_ptr(0x1402bea50L))(this, eCmd, pOne, pdata);
    };
    bool Voter::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct Voter*);
        return (org_ptr(0x1402be940L))(this);
    };
    bool Voter::IsRegistedVotePaper(char byRace, char* pwszName)
    {
        using org_ptr = bool (WINAPIV*)(struct Voter*, char, char*);
        return (org_ptr(0x1402bfa90L))(this, byRace, pwszName);
    };
    Voter::Voter()
        : ElectProcessor(ElectProcessor::ProcessorType::_eVoter)
    {
        using org_ptr = void (WINAPIV*)(struct Voter*);
        (org_ptr(0x1402be860L))(this);
    };
    void Voter::ctor_Voter()
    {
        using org_ptr = void (WINAPIV*)(struct Voter*);
        (org_ptr(0x1402be860L))(this);
    };
    void Voter::_MakeVotePaper()
    {
        using org_ptr = void (WINAPIV*)(struct Voter*);
        (org_ptr(0x1402bf610L))(this);
    };
    int Voter::_SendVotePaper(struct CPlayer* pOne)
    {
        using org_ptr = int (WINAPIV*)(struct Voter*, struct CPlayer*);
        return (org_ptr(0x1402c0140L))(this, pOne);
    };
    void Voter::_SendVotePaperAll()
    {
        using org_ptr = void (WINAPIV*)(struct Voter*);
        (org_ptr(0x1402beb20L))(this);
    };
    void Voter::_SendVoteScore(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct Voter*, struct CPlayer*);
        (org_ptr(0x1402bede0L))(this, pOne);
    };
    void Voter::_SendVoteScoreAll(char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct Voter*, char);
        (org_ptr(0x1402beec0L))(this, byRace);
    };
    void Voter::_SetVoteScoreInfo(char byRace, char* wszName, bool bAbstention)
    {
        using org_ptr = void (WINAPIV*)(struct Voter*, char, char*, bool);
        (org_ptr(0x1402bf3d0L))(this, byRace, wszName, bAbstention);
    };
    int Voter::_Vote(struct CPlayer* pOne, char* pdata)
    {
        using org_ptr = int (WINAPIV*)(struct Voter*, struct CPlayer*, char*);
        return (org_ptr(0x1402befd0L))(this, pOne, pdata);
    };
    Voter::~Voter()
    {
        using org_ptr = void (WINAPIV*)(struct Voter*);
        (org_ptr(0x1402c0100L))(this);
    };
    void Voter::dtor_Voter()
    {
        using org_ptr = void (WINAPIV*)(struct Voter*);
        (org_ptr(0x1402c0100L))(this);
    };
END_ATF_NAMESPACE
