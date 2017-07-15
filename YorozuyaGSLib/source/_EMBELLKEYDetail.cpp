#include <_EMBELLKEYDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_EMBELLKEYCovDBKey2_ptr _EMBELLKEYCovDBKey2_next(nullptr);
        Info::_EMBELLKEYCovDBKey2_clbk _EMBELLKEYCovDBKey2_user(nullptr);
        
        Info::_EMBELLKEYIsFilled4_ptr _EMBELLKEYIsFilled4_next(nullptr);
        Info::_EMBELLKEYIsFilled4_clbk _EMBELLKEYIsFilled4_user(nullptr);
        
        Info::_EMBELLKEYLoadDBKey6_ptr _EMBELLKEYLoadDBKey6_next(nullptr);
        Info::_EMBELLKEYLoadDBKey6_clbk _EMBELLKEYLoadDBKey6_user(nullptr);
        
        Info::_EMBELLKEYSetRelease8_ptr _EMBELLKEYSetRelease8_next(nullptr);
        Info::_EMBELLKEYSetRelease8_clbk _EMBELLKEYSetRelease8_user(nullptr);
        
        int _EMBELLKEYCovDBKey2_wrapper(struct _EMBELLKEY* _this)
        {
           return _EMBELLKEYCovDBKey2_user(_this, _EMBELLKEYCovDBKey2_next);
        };
        bool _EMBELLKEYIsFilled4_wrapper(struct _EMBELLKEY* _this)
        {
           return _EMBELLKEYIsFilled4_user(_this, _EMBELLKEYIsFilled4_next);
        };
        void _EMBELLKEYLoadDBKey6_wrapper(struct _EMBELLKEY* _this, int pl_nKey)
        {
           _EMBELLKEYLoadDBKey6_user(_this, pl_nKey, _EMBELLKEYLoadDBKey6_next);
        };
        void _EMBELLKEYSetRelease8_wrapper(struct _EMBELLKEY* _this)
        {
           _EMBELLKEYSetRelease8_user(_this, _EMBELLKEYSetRelease8_next);
        };
        
        ::std::array<hook_record, 4> _EMBELLKEY_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bf2a0L,
                (LPVOID *)&_EMBELLKEYCovDBKey2_user,
                (LPVOID *)&_EMBELLKEYCovDBKey2_next,
                (LPVOID)cast_pointer_function(_EMBELLKEYCovDBKey2_wrapper),
                (LPVOID)cast_pointer_function((int(_EMBELLKEY::*)())&_EMBELLKEY::CovDBKey)
            },
            _hook_record {
                (LPVOID)0x14010e320L,
                (LPVOID *)&_EMBELLKEYIsFilled4_user,
                (LPVOID *)&_EMBELLKEYIsFilled4_next,
                (LPVOID)cast_pointer_function(_EMBELLKEYIsFilled4_wrapper),
                (LPVOID)cast_pointer_function((bool(_EMBELLKEY::*)())&_EMBELLKEY::IsFilled)
            },
            _hook_record {
                (LPVOID)0x1401bf0d0L,
                (LPVOID *)&_EMBELLKEYLoadDBKey6_user,
                (LPVOID *)&_EMBELLKEYLoadDBKey6_next,
                (LPVOID)cast_pointer_function(_EMBELLKEYLoadDBKey6_wrapper),
                (LPVOID)cast_pointer_function((void(_EMBELLKEY::*)(int))&_EMBELLKEY::LoadDBKey)
            },
            _hook_record {
                (LPVOID)0x140075b70L,
                (LPVOID *)&_EMBELLKEYSetRelease8_user,
                (LPVOID *)&_EMBELLKEYSetRelease8_next,
                (LPVOID)cast_pointer_function(_EMBELLKEYSetRelease8_wrapper),
                (LPVOID)cast_pointer_function((void(_EMBELLKEY::*)())&_EMBELLKEY::SetRelease)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
