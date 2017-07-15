#include <FinalDecisionApplyerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::FinalDecisionApplyerDoit2_ptr FinalDecisionApplyerDoit2_next(nullptr);
        Info::FinalDecisionApplyerDoit2_clbk FinalDecisionApplyerDoit2_user(nullptr);
        
        
        Info::FinalDecisionApplyerctor_FinalDecisionApplyer4_ptr FinalDecisionApplyerctor_FinalDecisionApplyer4_next(nullptr);
        Info::FinalDecisionApplyerctor_FinalDecisionApplyer4_clbk FinalDecisionApplyerctor_FinalDecisionApplyer4_user(nullptr);
        
        Info::FinalDecisionApplyerInitialize6_ptr FinalDecisionApplyerInitialize6_next(nullptr);
        Info::FinalDecisionApplyerInitialize6_clbk FinalDecisionApplyerInitialize6_user(nullptr);
        
        Info::FinalDecisionApplyer_FinalDecisionApply8_ptr FinalDecisionApplyer_FinalDecisionApply8_next(nullptr);
        Info::FinalDecisionApplyer_FinalDecisionApply8_clbk FinalDecisionApplyer_FinalDecisionApply8_user(nullptr);
        
        
        Info::FinalDecisionApplyerdtor_FinalDecisionApplyer13_ptr FinalDecisionApplyerdtor_FinalDecisionApplyer13_next(nullptr);
        Info::FinalDecisionApplyerdtor_FinalDecisionApplyer13_clbk FinalDecisionApplyerdtor_FinalDecisionApplyer13_user(nullptr);
        
        int FinalDecisionApplyerDoit2_wrapper(struct FinalDecisionApplyer* _this, Cmd eCmd, struct CPlayer* pOne, char* pdata)
        {
           return FinalDecisionApplyerDoit2_user(_this, eCmd, pOne, pdata, FinalDecisionApplyerDoit2_next);
        };
        
        void FinalDecisionApplyerctor_FinalDecisionApplyer4_wrapper(struct FinalDecisionApplyer* _this)
        {
           FinalDecisionApplyerctor_FinalDecisionApplyer4_user(_this, FinalDecisionApplyerctor_FinalDecisionApplyer4_next);
        };
        bool FinalDecisionApplyerInitialize6_wrapper(struct FinalDecisionApplyer* _this)
        {
           return FinalDecisionApplyerInitialize6_user(_this, FinalDecisionApplyerInitialize6_next);
        };
        void FinalDecisionApplyer_FinalDecisionApply8_wrapper(struct FinalDecisionApplyer* _this)
        {
           FinalDecisionApplyer_FinalDecisionApply8_user(_this, FinalDecisionApplyer_FinalDecisionApply8_next);
        };
        
        void FinalDecisionApplyerdtor_FinalDecisionApplyer13_wrapper(struct FinalDecisionApplyer* _this)
        {
           FinalDecisionApplyerdtor_FinalDecisionApplyer13_user(_this, FinalDecisionApplyerdtor_FinalDecisionApplyer13_next);
        };
        
        ::std::array<hook_record, 5> FinalDecisionApplyer_functions = 
        {
            _hook_record {
                (LPVOID)0x1402bd920L,
                (LPVOID *)&FinalDecisionApplyerDoit2_user,
                (LPVOID *)&FinalDecisionApplyerDoit2_next,
                (LPVOID)cast_pointer_function(FinalDecisionApplyerDoit2_wrapper),
                (LPVOID)cast_pointer_function((int(FinalDecisionApplyer::*)(Cmd, struct CPlayer*, char*))&FinalDecisionApplyer::Doit)
            },
            _hook_record {
                (LPVOID)0x1402bd790L,
                (LPVOID *)&FinalDecisionApplyerctor_FinalDecisionApplyer4_user,
                (LPVOID *)&FinalDecisionApplyerctor_FinalDecisionApplyer4_next,
                (LPVOID)cast_pointer_function(FinalDecisionApplyerctor_FinalDecisionApplyer4_wrapper),
                (LPVOID)cast_pointer_function((void(FinalDecisionApplyer::*)())&FinalDecisionApplyer::ctor_FinalDecisionApplyer)
            },
            _hook_record {
                (LPVOID)0x1402bd7f0L,
                (LPVOID *)&FinalDecisionApplyerInitialize6_user,
                (LPVOID *)&FinalDecisionApplyerInitialize6_next,
                (LPVOID)cast_pointer_function(FinalDecisionApplyerInitialize6_wrapper),
                (LPVOID)cast_pointer_function((bool(FinalDecisionApplyer::*)())&FinalDecisionApplyer::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402bd990L,
                (LPVOID *)&FinalDecisionApplyer_FinalDecisionApply8_user,
                (LPVOID *)&FinalDecisionApplyer_FinalDecisionApply8_next,
                (LPVOID)cast_pointer_function(FinalDecisionApplyer_FinalDecisionApply8_wrapper),
                (LPVOID)cast_pointer_function((void(FinalDecisionApplyer::*)())&FinalDecisionApplyer::_FinalDecisionApply)
            },
            _hook_record {
                (LPVOID)0x1402bdd90L,
                (LPVOID *)&FinalDecisionApplyerdtor_FinalDecisionApplyer13_user,
                (LPVOID *)&FinalDecisionApplyerdtor_FinalDecisionApplyer13_next,
                (LPVOID)cast_pointer_function(FinalDecisionApplyerdtor_FinalDecisionApplyer13_wrapper),
                (LPVOID)cast_pointer_function((void(FinalDecisionApplyer::*)())&FinalDecisionApplyer::dtor_FinalDecisionApplyer)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
