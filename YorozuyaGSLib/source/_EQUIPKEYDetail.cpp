#include <_EQUIPKEYDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_EQUIPKEYCovDBKey2_ptr _EQUIPKEYCovDBKey2_next(nullptr);
        Info::_EQUIPKEYCovDBKey2_clbk _EQUIPKEYCovDBKey2_user(nullptr);
        
        Info::_EQUIPKEYIsFilled4_ptr _EQUIPKEYIsFilled4_next(nullptr);
        Info::_EQUIPKEYIsFilled4_clbk _EQUIPKEYIsFilled4_user(nullptr);
        
        Info::_EQUIPKEYLoadDBKey6_ptr _EQUIPKEYLoadDBKey6_next(nullptr);
        Info::_EQUIPKEYLoadDBKey6_clbk _EQUIPKEYLoadDBKey6_user(nullptr);
        
        Info::_EQUIPKEYSetRelease8_ptr _EQUIPKEYSetRelease8_next(nullptr);
        Info::_EQUIPKEYSetRelease8_clbk _EQUIPKEYSetRelease8_user(nullptr);
        
        int16_t _EQUIPKEYCovDBKey2_wrapper(struct _EQUIPKEY* _this)
        {
           return _EQUIPKEYCovDBKey2_user(_this, _EQUIPKEYCovDBKey2_next);
        };
        bool _EQUIPKEYIsFilled4_wrapper(struct _EQUIPKEY* _this)
        {
           return _EQUIPKEYIsFilled4_user(_this, _EQUIPKEYIsFilled4_next);
        };
        void _EQUIPKEYLoadDBKey6_wrapper(struct _EQUIPKEY* _this, int16_t pl_zKey)
        {
           _EQUIPKEYLoadDBKey6_user(_this, pl_zKey, _EQUIPKEYLoadDBKey6_next);
        };
        void _EQUIPKEYSetRelease8_wrapper(struct _EQUIPKEY* _this)
        {
           _EQUIPKEYSetRelease8_user(_this, _EQUIPKEYSetRelease8_next);
        };
        
        ::std::array<hook_record, 4> _EQUIPKEY_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bf280L,
                (LPVOID *)&_EQUIPKEYCovDBKey2_user,
                (LPVOID *)&_EQUIPKEYCovDBKey2_next,
                (LPVOID)cast_pointer_function(_EQUIPKEYCovDBKey2_wrapper),
                (LPVOID)cast_pointer_function((int16_t(_EQUIPKEY::*)())&_EQUIPKEY::CovDBKey)
            },
            _hook_record {
                (LPVOID)0x14010e2f0L,
                (LPVOID *)&_EQUIPKEYIsFilled4_user,
                (LPVOID *)&_EQUIPKEYIsFilled4_next,
                (LPVOID)cast_pointer_function(_EQUIPKEYIsFilled4_wrapper),
                (LPVOID)cast_pointer_function((bool(_EQUIPKEY::*)())&_EQUIPKEY::IsFilled)
            },
            _hook_record {
                (LPVOID)0x1401bf020L,
                (LPVOID *)&_EQUIPKEYLoadDBKey6_user,
                (LPVOID *)&_EQUIPKEYLoadDBKey6_next,
                (LPVOID)cast_pointer_function(_EQUIPKEYLoadDBKey6_wrapper),
                (LPVOID)cast_pointer_function((void(_EQUIPKEY::*)(int16_t))&_EQUIPKEY::LoadDBKey)
            },
            _hook_record {
                (LPVOID)0x140075580L,
                (LPVOID *)&_EQUIPKEYSetRelease8_user,
                (LPVOID *)&_EQUIPKEYSetRelease8_next,
                (LPVOID)cast_pointer_function(_EQUIPKEYSetRelease8_wrapper),
                (LPVOID)cast_pointer_function((void(_EQUIPKEY::*)())&_EQUIPKEY::SetRelease)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
