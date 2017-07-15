#include <CUnmannedTraderRequestLimiterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderRequestLimiterctor_CUnmannedTraderRequestLimiter2_ptr CUnmannedTraderRequestLimiterctor_CUnmannedTraderRequestLimiter2_next(nullptr);
        Info::CUnmannedTraderRequestLimiterctor_CUnmannedTraderRequestLimiter2_clbk CUnmannedTraderRequestLimiterctor_CUnmannedTraderRequestLimiter2_user(nullptr);
        
        Info::CUnmannedTraderRequestLimiterClearRequset4_ptr CUnmannedTraderRequestLimiterClearRequset4_next(nullptr);
        Info::CUnmannedTraderRequestLimiterClearRequset4_clbk CUnmannedTraderRequestLimiterClearRequset4_user(nullptr);
        
        Info::CUnmannedTraderRequestLimiterIsEmpty6_ptr CUnmannedTraderRequestLimiterIsEmpty6_next(nullptr);
        Info::CUnmannedTraderRequestLimiterIsEmpty6_clbk CUnmannedTraderRequestLimiterIsEmpty6_user(nullptr);
        
        Info::CUnmannedTraderRequestLimiterSetRequest8_ptr CUnmannedTraderRequestLimiterSetRequest8_next(nullptr);
        Info::CUnmannedTraderRequestLimiterSetRequest8_clbk CUnmannedTraderRequestLimiterSetRequest8_user(nullptr);
        
        
        Info::CUnmannedTraderRequestLimiterdtor_CUnmannedTraderRequestLimiter10_ptr CUnmannedTraderRequestLimiterdtor_CUnmannedTraderRequestLimiter10_next(nullptr);
        Info::CUnmannedTraderRequestLimiterdtor_CUnmannedTraderRequestLimiter10_clbk CUnmannedTraderRequestLimiterdtor_CUnmannedTraderRequestLimiter10_user(nullptr);
        
        
        void CUnmannedTraderRequestLimiterctor_CUnmannedTraderRequestLimiter2_wrapper(struct CUnmannedTraderRequestLimiter* _this)
        {
           CUnmannedTraderRequestLimiterctor_CUnmannedTraderRequestLimiter2_user(_this, CUnmannedTraderRequestLimiterctor_CUnmannedTraderRequestLimiter2_next);
        };
        void CUnmannedTraderRequestLimiterClearRequset4_wrapper(struct CUnmannedTraderRequestLimiter* _this)
        {
           CUnmannedTraderRequestLimiterClearRequset4_user(_this, CUnmannedTraderRequestLimiterClearRequset4_next);
        };
        bool CUnmannedTraderRequestLimiterIsEmpty6_wrapper(struct CUnmannedTraderRequestLimiter* _this)
        {
           return CUnmannedTraderRequestLimiterIsEmpty6_user(_this, CUnmannedTraderRequestLimiterIsEmpty6_next);
        };
        void CUnmannedTraderRequestLimiterSetRequest8_wrapper(struct CUnmannedTraderRequestLimiter* _this, int iRequest)
        {
           CUnmannedTraderRequestLimiterSetRequest8_user(_this, iRequest, CUnmannedTraderRequestLimiterSetRequest8_next);
        };
        
        void CUnmannedTraderRequestLimiterdtor_CUnmannedTraderRequestLimiter10_wrapper(struct CUnmannedTraderRequestLimiter* _this)
        {
           CUnmannedTraderRequestLimiterdtor_CUnmannedTraderRequestLimiter10_user(_this, CUnmannedTraderRequestLimiterdtor_CUnmannedTraderRequestLimiter10_next);
        };
        
        ::std::array<hook_record, 5> CUnmannedTraderRequestLimiter_functions = 
        {
            _hook_record {
                (LPVOID)0x14035f1f0L,
                (LPVOID *)&CUnmannedTraderRequestLimiterctor_CUnmannedTraderRequestLimiter2_user,
                (LPVOID *)&CUnmannedTraderRequestLimiterctor_CUnmannedTraderRequestLimiter2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderRequestLimiterctor_CUnmannedTraderRequestLimiter2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderRequestLimiter::*)())&CUnmannedTraderRequestLimiter::ctor_CUnmannedTraderRequestLimiter)
            },
            _hook_record {
                (LPVOID)0x14035f6a0L,
                (LPVOID *)&CUnmannedTraderRequestLimiterClearRequset4_user,
                (LPVOID *)&CUnmannedTraderRequestLimiterClearRequset4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderRequestLimiterClearRequset4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderRequestLimiter::*)())&CUnmannedTraderRequestLimiter::ClearRequset)
            },
            _hook_record {
                (LPVOID)0x140360550L,
                (LPVOID *)&CUnmannedTraderRequestLimiterIsEmpty6_user,
                (LPVOID *)&CUnmannedTraderRequestLimiterIsEmpty6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderRequestLimiterIsEmpty6_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderRequestLimiter::*)())&CUnmannedTraderRequestLimiter::IsEmpty)
            },
            _hook_record {
                (LPVOID)0x14035f6c0L,
                (LPVOID *)&CUnmannedTraderRequestLimiterSetRequest8_user,
                (LPVOID *)&CUnmannedTraderRequestLimiterSetRequest8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderRequestLimiterSetRequest8_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderRequestLimiter::*)(int))&CUnmannedTraderRequestLimiter::SetRequest)
            },
            _hook_record {
                (LPVOID)0x14035f210L,
                (LPVOID *)&CUnmannedTraderRequestLimiterdtor_CUnmannedTraderRequestLimiter10_user,
                (LPVOID *)&CUnmannedTraderRequestLimiterdtor_CUnmannedTraderRequestLimiter10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderRequestLimiterdtor_CUnmannedTraderRequestLimiter10_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderRequestLimiter::*)())&CUnmannedTraderRequestLimiter::dtor_CUnmannedTraderRequestLimiter)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
