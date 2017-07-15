#include <ControllerTaxRateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::ControllerTaxRatector_ControllerTaxRate2_ptr ControllerTaxRatector_ControllerTaxRate2_next(nullptr);
        Info::ControllerTaxRatector_ControllerTaxRate2_clbk ControllerTaxRatector_ControllerTaxRate2_user(nullptr);
        
        Info::ControllerTaxRatecalcTaxRate7_ptr ControllerTaxRatecalcTaxRate7_next(nullptr);
        Info::ControllerTaxRatecalcTaxRate7_clbk ControllerTaxRatecalcTaxRate7_user(nullptr);
        
        Info::ControllerTaxRatecheckLimitTaxRate9_ptr ControllerTaxRatecheckLimitTaxRate9_next(nullptr);
        Info::ControllerTaxRatecheckLimitTaxRate9_clbk ControllerTaxRatecheckLimitTaxRate9_user(nullptr);
        
        Info::ControllerTaxRategetCurTaxRate11_ptr ControllerTaxRategetCurTaxRate11_next(nullptr);
        Info::ControllerTaxRategetCurTaxRate11_clbk ControllerTaxRategetCurTaxRate11_user(nullptr);
        
        Info::ControllerTaxRatesetCurTaxRate13_ptr ControllerTaxRatesetCurTaxRate13_next(nullptr);
        Info::ControllerTaxRatesetCurTaxRate13_clbk ControllerTaxRatesetCurTaxRate13_user(nullptr);
        
        Info::ControllerTaxRatesetLimitTaxRate15_ptr ControllerTaxRatesetLimitTaxRate15_next(nullptr);
        Info::ControllerTaxRatesetLimitTaxRate15_clbk ControllerTaxRatesetLimitTaxRate15_user(nullptr);
        
        
        Info::ControllerTaxRatedtor_ControllerTaxRate17_ptr ControllerTaxRatedtor_ControllerTaxRate17_next(nullptr);
        Info::ControllerTaxRatedtor_ControllerTaxRate17_clbk ControllerTaxRatedtor_ControllerTaxRate17_user(nullptr);
        
        
        void ControllerTaxRatector_ControllerTaxRate2_wrapper(struct ControllerTaxRate* _this)
        {
           ControllerTaxRatector_ControllerTaxRate2_user(_this, ControllerTaxRatector_ControllerTaxRate2_next);
        };
        unsigned int ControllerTaxRatecalcTaxRate7_wrapper(struct ControllerTaxRate* _this, unsigned int dalant)
        {
           return ControllerTaxRatecalcTaxRate7_user(_this, dalant, ControllerTaxRatecalcTaxRate7_next);
        };
        bool ControllerTaxRatecheckLimitTaxRate9_wrapper(struct ControllerTaxRate* _this, float fTaxRate)
        {
           return ControllerTaxRatecheckLimitTaxRate9_user(_this, fTaxRate, ControllerTaxRatecheckLimitTaxRate9_next);
        };
        float ControllerTaxRategetCurTaxRate11_wrapper(struct ControllerTaxRate* _this)
        {
           return ControllerTaxRategetCurTaxRate11_user(_this, ControllerTaxRategetCurTaxRate11_next);
        };
        void ControllerTaxRatesetCurTaxRate13_wrapper(struct ControllerTaxRate* _this, float fTaxRate)
        {
           ControllerTaxRatesetCurTaxRate13_user(_this, fTaxRate, ControllerTaxRatesetCurTaxRate13_next);
        };
        void ControllerTaxRatesetLimitTaxRate15_wrapper(struct ControllerTaxRate* _this, float fMin, float fMax)
        {
           ControllerTaxRatesetLimitTaxRate15_user(_this, fMin, fMax, ControllerTaxRatesetLimitTaxRate15_next);
        };
        
        void ControllerTaxRatedtor_ControllerTaxRate17_wrapper(struct ControllerTaxRate* _this)
        {
           ControllerTaxRatedtor_ControllerTaxRate17_user(_this, ControllerTaxRatedtor_ControllerTaxRate17_next);
        };
        
        ::std::array<hook_record, 7> ControllerTaxRate_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d96e0L,
                (LPVOID *)&ControllerTaxRatector_ControllerTaxRate2_user,
                (LPVOID *)&ControllerTaxRatector_ControllerTaxRate2_next,
                (LPVOID)cast_pointer_function(ControllerTaxRatector_ControllerTaxRate2_wrapper),
                (LPVOID)cast_pointer_function((void(ControllerTaxRate::*)())&ControllerTaxRate::ctor_ControllerTaxRate)
            },
            _hook_record {
                (LPVOID)0x1402d98c0L,
                (LPVOID *)&ControllerTaxRatecalcTaxRate7_user,
                (LPVOID *)&ControllerTaxRatecalcTaxRate7_next,
                (LPVOID)cast_pointer_function(ControllerTaxRatecalcTaxRate7_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(ControllerTaxRate::*)(unsigned int))&ControllerTaxRate::calcTaxRate)
            },
            _hook_record {
                (LPVOID)0x1402d9b80L,
                (LPVOID *)&ControllerTaxRatecheckLimitTaxRate9_user,
                (LPVOID *)&ControllerTaxRatecheckLimitTaxRate9_next,
                (LPVOID)cast_pointer_function(ControllerTaxRatecheckLimitTaxRate9_wrapper),
                (LPVOID)cast_pointer_function((bool(ControllerTaxRate::*)(float))&ControllerTaxRate::checkLimitTaxRate)
            },
            _hook_record {
                (LPVOID)0x1402d9950L,
                (LPVOID *)&ControllerTaxRategetCurTaxRate11_user,
                (LPVOID *)&ControllerTaxRategetCurTaxRate11_next,
                (LPVOID)cast_pointer_function(ControllerTaxRategetCurTaxRate11_wrapper),
                (LPVOID)cast_pointer_function((float(ControllerTaxRate::*)())&ControllerTaxRate::getCurTaxRate)
            },
            _hook_record {
                (LPVOID)0x1402d9b50L,
                (LPVOID *)&ControllerTaxRatesetCurTaxRate13_user,
                (LPVOID *)&ControllerTaxRatesetCurTaxRate13_next,
                (LPVOID)cast_pointer_function(ControllerTaxRatesetCurTaxRate13_wrapper),
                (LPVOID)cast_pointer_function((void(ControllerTaxRate::*)(float))&ControllerTaxRate::setCurTaxRate)
            },
            _hook_record {
                (LPVOID)0x1402d9870L,
                (LPVOID *)&ControllerTaxRatesetLimitTaxRate15_user,
                (LPVOID *)&ControllerTaxRatesetLimitTaxRate15_next,
                (LPVOID)cast_pointer_function(ControllerTaxRatesetLimitTaxRate15_wrapper),
                (LPVOID)cast_pointer_function((void(ControllerTaxRate::*)(float, float))&ControllerTaxRate::setLimitTaxRate)
            },
            _hook_record {
                (LPVOID)0x1402d9730L,
                (LPVOID *)&ControllerTaxRatedtor_ControllerTaxRate17_user,
                (LPVOID *)&ControllerTaxRatedtor_ControllerTaxRate17_next,
                (LPVOID)cast_pointer_function(ControllerTaxRatedtor_ControllerTaxRate17_wrapper),
                (LPVOID)cast_pointer_function((void(ControllerTaxRate::*)())&ControllerTaxRate::dtor_ControllerTaxRate)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
