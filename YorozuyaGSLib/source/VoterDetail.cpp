#include <VoterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::VoterDoit2_ptr VoterDoit2_next(nullptr);
        Info::VoterDoit2_clbk VoterDoit2_user(nullptr);
        
        Info::VoterInitialize4_ptr VoterInitialize4_next(nullptr);
        Info::VoterInitialize4_clbk VoterInitialize4_user(nullptr);
        
        Info::VoterIsRegistedVotePaper6_ptr VoterIsRegistedVotePaper6_next(nullptr);
        Info::VoterIsRegistedVotePaper6_clbk VoterIsRegistedVotePaper6_user(nullptr);
        
        
        Info::Voterctor_Voter8_ptr Voterctor_Voter8_next(nullptr);
        Info::Voterctor_Voter8_clbk Voterctor_Voter8_user(nullptr);
        
        Info::Voter_MakeVotePaper10_ptr Voter_MakeVotePaper10_next(nullptr);
        Info::Voter_MakeVotePaper10_clbk Voter_MakeVotePaper10_user(nullptr);
        
        Info::Voter_SendVotePaper12_ptr Voter_SendVotePaper12_next(nullptr);
        Info::Voter_SendVotePaper12_clbk Voter_SendVotePaper12_user(nullptr);
        
        Info::Voter_SendVotePaperAll14_ptr Voter_SendVotePaperAll14_next(nullptr);
        Info::Voter_SendVotePaperAll14_clbk Voter_SendVotePaperAll14_user(nullptr);
        
        Info::Voter_SendVoteScore16_ptr Voter_SendVoteScore16_next(nullptr);
        Info::Voter_SendVoteScore16_clbk Voter_SendVoteScore16_user(nullptr);
        
        Info::Voter_SendVoteScoreAll18_ptr Voter_SendVoteScoreAll18_next(nullptr);
        Info::Voter_SendVoteScoreAll18_clbk Voter_SendVoteScoreAll18_user(nullptr);
        
        Info::Voter_SetVoteScoreInfo20_ptr Voter_SetVoteScoreInfo20_next(nullptr);
        Info::Voter_SetVoteScoreInfo20_clbk Voter_SetVoteScoreInfo20_user(nullptr);
        
        Info::Voter_Vote22_ptr Voter_Vote22_next(nullptr);
        Info::Voter_Vote22_clbk Voter_Vote22_user(nullptr);
        
        
        Info::Voterdtor_Voter27_ptr Voterdtor_Voter27_next(nullptr);
        Info::Voterdtor_Voter27_clbk Voterdtor_Voter27_user(nullptr);
        
        int VoterDoit2_wrapper(struct Voter* _this, Cmd eCmd, struct CPlayer* pOne, char* pdata)
        {
           return VoterDoit2_user(_this, eCmd, pOne, pdata, VoterDoit2_next);
        };
        bool VoterInitialize4_wrapper(struct Voter* _this)
        {
           return VoterInitialize4_user(_this, VoterInitialize4_next);
        };
        bool VoterIsRegistedVotePaper6_wrapper(struct Voter* _this, char byRace, char* pwszName)
        {
           return VoterIsRegistedVotePaper6_user(_this, byRace, pwszName, VoterIsRegistedVotePaper6_next);
        };
        
        void Voterctor_Voter8_wrapper(struct Voter* _this)
        {
           Voterctor_Voter8_user(_this, Voterctor_Voter8_next);
        };
        void Voter_MakeVotePaper10_wrapper(struct Voter* _this)
        {
           Voter_MakeVotePaper10_user(_this, Voter_MakeVotePaper10_next);
        };
        int Voter_SendVotePaper12_wrapper(struct Voter* _this, struct CPlayer* pOne)
        {
           return Voter_SendVotePaper12_user(_this, pOne, Voter_SendVotePaper12_next);
        };
        void Voter_SendVotePaperAll14_wrapper(struct Voter* _this)
        {
           Voter_SendVotePaperAll14_user(_this, Voter_SendVotePaperAll14_next);
        };
        void Voter_SendVoteScore16_wrapper(struct Voter* _this, struct CPlayer* pOne)
        {
           Voter_SendVoteScore16_user(_this, pOne, Voter_SendVoteScore16_next);
        };
        void Voter_SendVoteScoreAll18_wrapper(struct Voter* _this, char byRace)
        {
           Voter_SendVoteScoreAll18_user(_this, byRace, Voter_SendVoteScoreAll18_next);
        };
        void Voter_SetVoteScoreInfo20_wrapper(struct Voter* _this, char byRace, char* wszName, bool bAbstention)
        {
           Voter_SetVoteScoreInfo20_user(_this, byRace, wszName, bAbstention, Voter_SetVoteScoreInfo20_next);
        };
        int Voter_Vote22_wrapper(struct Voter* _this, struct CPlayer* pOne, char* pdata)
        {
           return Voter_Vote22_user(_this, pOne, pdata, Voter_Vote22_next);
        };
        
        void Voterdtor_Voter27_wrapper(struct Voter* _this)
        {
           Voterdtor_Voter27_user(_this, Voterdtor_Voter27_next);
        };
        
        ::std::array<hook_record, 12> Voter_functions = 
        {
            _hook_record {
                (LPVOID)0x1402bea50L,
                (LPVOID *)&VoterDoit2_user,
                (LPVOID *)&VoterDoit2_next,
                (LPVOID)cast_pointer_function(VoterDoit2_wrapper),
                (LPVOID)cast_pointer_function((int(Voter::*)(Cmd, struct CPlayer*, char*))&Voter::Doit)
            },
            _hook_record {
                (LPVOID)0x1402be940L,
                (LPVOID *)&VoterInitialize4_user,
                (LPVOID *)&VoterInitialize4_next,
                (LPVOID)cast_pointer_function(VoterInitialize4_wrapper),
                (LPVOID)cast_pointer_function((bool(Voter::*)())&Voter::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402bfa90L,
                (LPVOID *)&VoterIsRegistedVotePaper6_user,
                (LPVOID *)&VoterIsRegistedVotePaper6_next,
                (LPVOID)cast_pointer_function(VoterIsRegistedVotePaper6_wrapper),
                (LPVOID)cast_pointer_function((bool(Voter::*)(char, char*))&Voter::IsRegistedVotePaper)
            },
            _hook_record {
                (LPVOID)0x1402be860L,
                (LPVOID *)&Voterctor_Voter8_user,
                (LPVOID *)&Voterctor_Voter8_next,
                (LPVOID)cast_pointer_function(Voterctor_Voter8_wrapper),
                (LPVOID)cast_pointer_function((void(Voter::*)())&Voter::ctor_Voter)
            },
            _hook_record {
                (LPVOID)0x1402bf610L,
                (LPVOID *)&Voter_MakeVotePaper10_user,
                (LPVOID *)&Voter_MakeVotePaper10_next,
                (LPVOID)cast_pointer_function(Voter_MakeVotePaper10_wrapper),
                (LPVOID)cast_pointer_function((void(Voter::*)())&Voter::_MakeVotePaper)
            },
            _hook_record {
                (LPVOID)0x1402c0140L,
                (LPVOID *)&Voter_SendVotePaper12_user,
                (LPVOID *)&Voter_SendVotePaper12_next,
                (LPVOID)cast_pointer_function(Voter_SendVotePaper12_wrapper),
                (LPVOID)cast_pointer_function((int(Voter::*)(struct CPlayer*))&Voter::_SendVotePaper)
            },
            _hook_record {
                (LPVOID)0x1402beb20L,
                (LPVOID *)&Voter_SendVotePaperAll14_user,
                (LPVOID *)&Voter_SendVotePaperAll14_next,
                (LPVOID)cast_pointer_function(Voter_SendVotePaperAll14_wrapper),
                (LPVOID)cast_pointer_function((void(Voter::*)())&Voter::_SendVotePaperAll)
            },
            _hook_record {
                (LPVOID)0x1402bede0L,
                (LPVOID *)&Voter_SendVoteScore16_user,
                (LPVOID *)&Voter_SendVoteScore16_next,
                (LPVOID)cast_pointer_function(Voter_SendVoteScore16_wrapper),
                (LPVOID)cast_pointer_function((void(Voter::*)(struct CPlayer*))&Voter::_SendVoteScore)
            },
            _hook_record {
                (LPVOID)0x1402beec0L,
                (LPVOID *)&Voter_SendVoteScoreAll18_user,
                (LPVOID *)&Voter_SendVoteScoreAll18_next,
                (LPVOID)cast_pointer_function(Voter_SendVoteScoreAll18_wrapper),
                (LPVOID)cast_pointer_function((void(Voter::*)(char))&Voter::_SendVoteScoreAll)
            },
            _hook_record {
                (LPVOID)0x1402bf3d0L,
                (LPVOID *)&Voter_SetVoteScoreInfo20_user,
                (LPVOID *)&Voter_SetVoteScoreInfo20_next,
                (LPVOID)cast_pointer_function(Voter_SetVoteScoreInfo20_wrapper),
                (LPVOID)cast_pointer_function((void(Voter::*)(char, char*, bool))&Voter::_SetVoteScoreInfo)
            },
            _hook_record {
                (LPVOID)0x1402befd0L,
                (LPVOID *)&Voter_Vote22_user,
                (LPVOID *)&Voter_Vote22_next,
                (LPVOID)cast_pointer_function(Voter_Vote22_wrapper),
                (LPVOID)cast_pointer_function((int(Voter::*)(struct CPlayer*, char*))&Voter::_Vote)
            },
            _hook_record {
                (LPVOID)0x1402c0100L,
                (LPVOID *)&Voterdtor_Voter27_user,
                (LPVOID *)&Voterdtor_Voter27_next,
                (LPVOID)cast_pointer_function(Voterdtor_Voter27_wrapper),
                (LPVOID)cast_pointer_function((void(Voter::*)())&Voter::dtor_Voter)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
