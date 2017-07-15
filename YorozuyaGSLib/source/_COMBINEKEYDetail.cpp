#include <_COMBINEKEYDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_COMBINEKEYCovDBKey2_ptr _COMBINEKEYCovDBKey2_next(nullptr);
        Info::_COMBINEKEYCovDBKey2_clbk _COMBINEKEYCovDBKey2_user(nullptr);
        
        Info::_COMBINEKEYIsFilled4_ptr _COMBINEKEYIsFilled4_next(nullptr);
        Info::_COMBINEKEYIsFilled4_clbk _COMBINEKEYIsFilled4_user(nullptr);
        
        Info::_COMBINEKEYLoadDBKey6_ptr _COMBINEKEYLoadDBKey6_next(nullptr);
        Info::_COMBINEKEYLoadDBKey6_clbk _COMBINEKEYLoadDBKey6_user(nullptr);
        
        Info::_COMBINEKEYSetRelease8_ptr _COMBINEKEYSetRelease8_next(nullptr);
        Info::_COMBINEKEYSetRelease8_clbk _COMBINEKEYSetRelease8_user(nullptr);
        
        int _COMBINEKEYCovDBKey2_wrapper(struct _COMBINEKEY* _this)
        {
           return _COMBINEKEYCovDBKey2_user(_this, _COMBINEKEYCovDBKey2_next);
        };
        bool _COMBINEKEYIsFilled4_wrapper(struct _COMBINEKEY* _this)
        {
           return _COMBINEKEYIsFilled4_user(_this, _COMBINEKEYIsFilled4_next);
        };
        void _COMBINEKEYLoadDBKey6_wrapper(struct _COMBINEKEY* _this, int pl_nKey)
        {
           _COMBINEKEYLoadDBKey6_user(_this, pl_nKey, _COMBINEKEYLoadDBKey6_next);
        };
        void _COMBINEKEYSetRelease8_wrapper(struct _COMBINEKEY* _this)
        {
           _COMBINEKEYSetRelease8_user(_this, _COMBINEKEYSetRelease8_next);
        };
        
        ::std::array<hook_record, 4> _COMBINEKEY_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bf320L,
                (LPVOID *)&_COMBINEKEYCovDBKey2_user,
                (LPVOID *)&_COMBINEKEYCovDBKey2_next,
                (LPVOID)cast_pointer_function(_COMBINEKEYCovDBKey2_wrapper),
                (LPVOID)cast_pointer_function((int(_COMBINEKEY::*)())&_COMBINEKEY::CovDBKey)
            },
            _hook_record {
                (LPVOID)0x1402af7d0L,
                (LPVOID *)&_COMBINEKEYIsFilled4_user,
                (LPVOID *)&_COMBINEKEYIsFilled4_next,
                (LPVOID)cast_pointer_function(_COMBINEKEYIsFilled4_wrapper),
                (LPVOID)cast_pointer_function((bool(_COMBINEKEY::*)())&_COMBINEKEY::IsFilled)
            },
            _hook_record {
                (LPVOID)0x1401bf260L,
                (LPVOID *)&_COMBINEKEYLoadDBKey6_user,
                (LPVOID *)&_COMBINEKEYLoadDBKey6_next,
                (LPVOID)cast_pointer_function(_COMBINEKEYLoadDBKey6_wrapper),
                (LPVOID)cast_pointer_function((void(_COMBINEKEY::*)(int))&_COMBINEKEY::LoadDBKey)
            },
            _hook_record {
                (LPVOID)0x1400772b0L,
                (LPVOID *)&_COMBINEKEYSetRelease8_user,
                (LPVOID *)&_COMBINEKEYSetRelease8_next,
                (LPVOID)cast_pointer_function(_COMBINEKEYSetRelease8_wrapper),
                (LPVOID)cast_pointer_function((void(_COMBINEKEY::*)())&_COMBINEKEY::SetRelease)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
