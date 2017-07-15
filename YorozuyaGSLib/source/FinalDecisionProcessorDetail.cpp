#include <FinalDecisionProcessorDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::FinalDecisionProcessorDoit2_ptr FinalDecisionProcessorDoit2_next(nullptr);
        Info::FinalDecisionProcessorDoit2_clbk FinalDecisionProcessorDoit2_user(nullptr);
        
        
        Info::FinalDecisionProcessorctor_FinalDecisionProcessor4_ptr FinalDecisionProcessorctor_FinalDecisionProcessor4_next(nullptr);
        Info::FinalDecisionProcessorctor_FinalDecisionProcessor4_clbk FinalDecisionProcessorctor_FinalDecisionProcessor4_user(nullptr);
        
        Info::FinalDecisionProcessorInitialize6_ptr FinalDecisionProcessorInitialize6_next(nullptr);
        Info::FinalDecisionProcessorInitialize6_clbk FinalDecisionProcessorInitialize6_user(nullptr);
        
        Info::FinalDecisionProcessor_FinalDecision8_ptr FinalDecisionProcessor_FinalDecision8_next(nullptr);
        Info::FinalDecisionProcessor_FinalDecision8_clbk FinalDecisionProcessor_FinalDecision8_user(nullptr);
        
        Info::FinalDecisionProcessor_ReqNetFinalDecision10_ptr FinalDecisionProcessor_ReqNetFinalDecision10_next(nullptr);
        Info::FinalDecisionProcessor_ReqNetFinalDecision10_clbk FinalDecisionProcessor_ReqNetFinalDecision10_user(nullptr);
        
        Info::FinalDecisionProcessor_SetWinner12_ptr FinalDecisionProcessor_SetWinner12_next(nullptr);
        Info::FinalDecisionProcessor_SetWinner12_clbk FinalDecisionProcessor_SetWinner12_user(nullptr);
        
        
        Info::FinalDecisionProcessordtor_FinalDecisionProcessor17_ptr FinalDecisionProcessordtor_FinalDecisionProcessor17_next(nullptr);
        Info::FinalDecisionProcessordtor_FinalDecisionProcessor17_clbk FinalDecisionProcessordtor_FinalDecisionProcessor17_user(nullptr);
        
        int FinalDecisionProcessorDoit2_wrapper(struct FinalDecisionProcessor* _this, Cmd eCmd, struct CPlayer* pOne, char* pdata)
        {
           return FinalDecisionProcessorDoit2_user(_this, eCmd, pOne, pdata, FinalDecisionProcessorDoit2_next);
        };
        
        void FinalDecisionProcessorctor_FinalDecisionProcessor4_wrapper(struct FinalDecisionProcessor* _this)
        {
           FinalDecisionProcessorctor_FinalDecisionProcessor4_user(_this, FinalDecisionProcessorctor_FinalDecisionProcessor4_next);
        };
        bool FinalDecisionProcessorInitialize6_wrapper(struct FinalDecisionProcessor* _this)
        {
           return FinalDecisionProcessorInitialize6_user(_this, FinalDecisionProcessorInitialize6_next);
        };
        void FinalDecisionProcessor_FinalDecision8_wrapper(struct FinalDecisionProcessor* _this)
        {
           FinalDecisionProcessor_FinalDecision8_user(_this, FinalDecisionProcessor_FinalDecision8_next);
        };
        void FinalDecisionProcessor_ReqNetFinalDecision10_wrapper(struct FinalDecisionProcessor* _this, struct CPlayer* pOne)
        {
           FinalDecisionProcessor_ReqNetFinalDecision10_user(_this, pOne, FinalDecisionProcessor_ReqNetFinalDecision10_next);
        };
        void FinalDecisionProcessor_SetWinner12_wrapper(struct FinalDecisionProcessor* _this)
        {
           FinalDecisionProcessor_SetWinner12_user(_this, FinalDecisionProcessor_SetWinner12_next);
        };
        
        void FinalDecisionProcessordtor_FinalDecisionProcessor17_wrapper(struct FinalDecisionProcessor* _this)
        {
           FinalDecisionProcessordtor_FinalDecisionProcessor17_user(_this, FinalDecisionProcessordtor_FinalDecisionProcessor17_next);
        };
        
        ::std::array<hook_record, 7> FinalDecisionProcessor_functions = 
        {
            _hook_record {
                (LPVOID)0x1402bdf90L,
                (LPVOID *)&FinalDecisionProcessorDoit2_user,
                (LPVOID *)&FinalDecisionProcessorDoit2_next,
                (LPVOID)cast_pointer_function(FinalDecisionProcessorDoit2_wrapper),
                (LPVOID)cast_pointer_function((int(FinalDecisionProcessor::*)(Cmd, struct CPlayer*, char*))&FinalDecisionProcessor::Doit)
            },
            _hook_record {
                (LPVOID)0x1402bddd0L,
                (LPVOID *)&FinalDecisionProcessorctor_FinalDecisionProcessor4_user,
                (LPVOID *)&FinalDecisionProcessorctor_FinalDecisionProcessor4_next,
                (LPVOID)cast_pointer_function(FinalDecisionProcessorctor_FinalDecisionProcessor4_wrapper),
                (LPVOID)cast_pointer_function((void(FinalDecisionProcessor::*)())&FinalDecisionProcessor::ctor_FinalDecisionProcessor)
            },
            _hook_record {
                (LPVOID)0x1402bde80L,
                (LPVOID *)&FinalDecisionProcessorInitialize6_user,
                (LPVOID *)&FinalDecisionProcessorInitialize6_next,
                (LPVOID)cast_pointer_function(FinalDecisionProcessorInitialize6_wrapper),
                (LPVOID)cast_pointer_function((bool(FinalDecisionProcessor::*)())&FinalDecisionProcessor::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402be0e0L,
                (LPVOID *)&FinalDecisionProcessor_FinalDecision8_user,
                (LPVOID *)&FinalDecisionProcessor_FinalDecision8_next,
                (LPVOID)cast_pointer_function(FinalDecisionProcessor_FinalDecision8_wrapper),
                (LPVOID)cast_pointer_function((void(FinalDecisionProcessor::*)())&FinalDecisionProcessor::_FinalDecision)
            },
            _hook_record {
                (LPVOID)0x1402be030L,
                (LPVOID *)&FinalDecisionProcessor_ReqNetFinalDecision10_user,
                (LPVOID *)&FinalDecisionProcessor_ReqNetFinalDecision10_next,
                (LPVOID)cast_pointer_function(FinalDecisionProcessor_ReqNetFinalDecision10_wrapper),
                (LPVOID)cast_pointer_function((void(FinalDecisionProcessor::*)(struct CPlayer*))&FinalDecisionProcessor::_ReqNetFinalDecision)
            },
            _hook_record {
                (LPVOID)0x1402be200L,
                (LPVOID *)&FinalDecisionProcessor_SetWinner12_user,
                (LPVOID *)&FinalDecisionProcessor_SetWinner12_next,
                (LPVOID)cast_pointer_function(FinalDecisionProcessor_SetWinner12_wrapper),
                (LPVOID)cast_pointer_function((void(FinalDecisionProcessor::*)())&FinalDecisionProcessor::_SetWinner)
            },
            _hook_record {
                (LPVOID)0x1402be4e0L,
                (LPVOID *)&FinalDecisionProcessordtor_FinalDecisionProcessor17_user,
                (LPVOID *)&FinalDecisionProcessordtor_FinalDecisionProcessor17_next,
                (LPVOID)cast_pointer_function(FinalDecisionProcessordtor_FinalDecisionProcessor17_wrapper),
                (LPVOID)cast_pointer_function((void(FinalDecisionProcessor::*)())&FinalDecisionProcessor::dtor_FinalDecisionProcessor)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
