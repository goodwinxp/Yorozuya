#include <CNetFrameRateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNetFrameRatector_CNetFrameRate2_ptr CNetFrameRatector_CNetFrameRate2_next(nullptr);
        Info::CNetFrameRatector_CNetFrameRate2_clbk CNetFrameRatector_CNetFrameRate2_user(nullptr);
        
        Info::CNetFrameRateCalcFrameRate4_ptr CNetFrameRateCalcFrameRate4_next(nullptr);
        Info::CNetFrameRateCalcFrameRate4_clbk CNetFrameRateCalcFrameRate4_user(nullptr);
        
        
        void CNetFrameRatector_CNetFrameRate2_wrapper(struct CNetFrameRate* _this)
        {
           CNetFrameRatector_CNetFrameRate2_user(_this, CNetFrameRatector_CNetFrameRate2_next);
        };
        void CNetFrameRateCalcFrameRate4_wrapper(struct CNetFrameRate* _this)
        {
           CNetFrameRateCalcFrameRate4_user(_this, CNetFrameRateCalcFrameRate4_next);
        };
        
        ::std::array<hook_record, 2> CNetFrameRate_functions = 
        {
            _hook_record {
                (LPVOID)0x14047c990L,
                (LPVOID *)&CNetFrameRatector_CNetFrameRate2_user,
                (LPVOID *)&CNetFrameRatector_CNetFrameRate2_next,
                (LPVOID)cast_pointer_function(CNetFrameRatector_CNetFrameRate2_wrapper),
                (LPVOID)cast_pointer_function((void(CNetFrameRate::*)())&CNetFrameRate::ctor_CNetFrameRate)
            },
            _hook_record {
                (LPVOID)0x14047d8c0L,
                (LPVOID *)&CNetFrameRateCalcFrameRate4_user,
                (LPVOID *)&CNetFrameRateCalcFrameRate4_next,
                (LPVOID)cast_pointer_function(CNetFrameRateCalcFrameRate4_wrapper),
                (LPVOID)cast_pointer_function((void(CNetFrameRate::*)())&CNetFrameRate::CalcFrameRate)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
