#include <CFrameRateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CFrameRatector_CFrameRate2_ptr CFrameRatector_CFrameRate2_next(nullptr);
        Info::CFrameRatector_CFrameRate2_clbk CFrameRatector_CFrameRate2_user(nullptr);
        
        Info::CFrameRateCalcSpeedPerFrame4_ptr CFrameRateCalcSpeedPerFrame4_next(nullptr);
        Info::CFrameRateCalcSpeedPerFrame4_clbk CFrameRateCalcSpeedPerFrame4_user(nullptr);
        
        Info::CFrameRateGetFPS6_ptr CFrameRateGetFPS6_next(nullptr);
        Info::CFrameRateGetFPS6_clbk CFrameRateGetFPS6_user(nullptr);
        
        Info::CFrameRateGetSpeedPerFrame8_ptr CFrameRateGetSpeedPerFrame8_next(nullptr);
        Info::CFrameRateGetSpeedPerFrame8_clbk CFrameRateGetSpeedPerFrame8_user(nullptr);
        
        
        Info::CFrameRatedtor_CFrameRate13_ptr CFrameRatedtor_CFrameRate13_next(nullptr);
        Info::CFrameRatedtor_CFrameRate13_clbk CFrameRatedtor_CFrameRate13_user(nullptr);
        
        
        void CFrameRatector_CFrameRate2_wrapper(struct CFrameRate* _this)
        {
           CFrameRatector_CFrameRate2_user(_this, CFrameRatector_CFrameRate2_next);
        };
        void CFrameRateCalcSpeedPerFrame4_wrapper(struct CFrameRate* _this)
        {
           CFrameRateCalcSpeedPerFrame4_user(_this, CFrameRateCalcSpeedPerFrame4_next);
        };
        unsigned int CFrameRateGetFPS6_wrapper(struct CFrameRate* _this)
        {
           return CFrameRateGetFPS6_user(_this, CFrameRateGetFPS6_next);
        };
        float CFrameRateGetSpeedPerFrame8_wrapper(struct CFrameRate* _this)
        {
           return CFrameRateGetSpeedPerFrame8_user(_this, CFrameRateGetSpeedPerFrame8_next);
        };
        
        void CFrameRatedtor_CFrameRate13_wrapper(struct CFrameRate* _this)
        {
           CFrameRatedtor_CFrameRate13_user(_this, CFrameRatedtor_CFrameRate13_next);
        };
        
        ::std::array<hook_record, 5> CFrameRate_functions = 
        {
            _hook_record {
                (LPVOID)0x140438d80L,
                (LPVOID *)&CFrameRatector_CFrameRate2_user,
                (LPVOID *)&CFrameRatector_CFrameRate2_next,
                (LPVOID)cast_pointer_function(CFrameRatector_CFrameRate2_wrapper),
                (LPVOID)cast_pointer_function((void(CFrameRate::*)())&CFrameRate::ctor_CFrameRate)
            },
            _hook_record {
                (LPVOID)0x140438dc0L,
                (LPVOID *)&CFrameRateCalcSpeedPerFrame4_user,
                (LPVOID *)&CFrameRateCalcSpeedPerFrame4_next,
                (LPVOID)cast_pointer_function(CFrameRateCalcSpeedPerFrame4_wrapper),
                (LPVOID)cast_pointer_function((void(CFrameRate::*)())&CFrameRate::CalcSpeedPerFrame)
            },
            _hook_record {
                (LPVOID)0x140438f30L,
                (LPVOID *)&CFrameRateGetFPS6_user,
                (LPVOID *)&CFrameRateGetFPS6_next,
                (LPVOID)cast_pointer_function(CFrameRateGetFPS6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CFrameRate::*)())&CFrameRate::GetFPS)
            },
            _hook_record {
                (LPVOID)0x140438ef0L,
                (LPVOID *)&CFrameRateGetSpeedPerFrame8_user,
                (LPVOID *)&CFrameRateGetSpeedPerFrame8_next,
                (LPVOID)cast_pointer_function(CFrameRateGetSpeedPerFrame8_wrapper),
                (LPVOID)cast_pointer_function((float(CFrameRate::*)())&CFrameRate::GetSpeedPerFrame)
            },
            _hook_record {
                (LPVOID)0x1402023e0L,
                (LPVOID *)&CFrameRatedtor_CFrameRate13_user,
                (LPVOID *)&CFrameRatedtor_CFrameRate13_next,
                (LPVOID)cast_pointer_function(CFrameRatedtor_CFrameRate13_wrapper),
                (LPVOID)cast_pointer_function((void(CFrameRate::*)())&CFrameRate::dtor_CFrameRate)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
