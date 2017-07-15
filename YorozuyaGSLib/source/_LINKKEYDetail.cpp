#include <_LINKKEYDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_LINKKEYCovDBKey2_ptr _LINKKEYCovDBKey2_next(nullptr);
        Info::_LINKKEYCovDBKey2_clbk _LINKKEYCovDBKey2_user(nullptr);
        
        Info::_LINKKEYGetCode4_ptr _LINKKEYGetCode4_next(nullptr);
        Info::_LINKKEYGetCode4_clbk _LINKKEYGetCode4_user(nullptr);
        
        Info::_LINKKEYGetIndex6_ptr _LINKKEYGetIndex6_next(nullptr);
        Info::_LINKKEYGetIndex6_clbk _LINKKEYGetIndex6_user(nullptr);
        
        Info::_LINKKEYIsFilled8_ptr _LINKKEYIsFilled8_next(nullptr);
        Info::_LINKKEYIsFilled8_clbk _LINKKEYIsFilled8_user(nullptr);
        
        Info::_LINKKEYLoadDBKey10_ptr _LINKKEYLoadDBKey10_next(nullptr);
        Info::_LINKKEYLoadDBKey10_clbk _LINKKEYLoadDBKey10_user(nullptr);
        
        Info::_LINKKEYSetData12_ptr _LINKKEYSetData12_next(nullptr);
        Info::_LINKKEYSetData12_clbk _LINKKEYSetData12_user(nullptr);
        
        Info::_LINKKEYSetRelease14_ptr _LINKKEYSetRelease14_next(nullptr);
        Info::_LINKKEYSetRelease14_clbk _LINKKEYSetRelease14_user(nullptr);
        
        int16_t _LINKKEYCovDBKey2_wrapper(struct _LINKKEY* _this)
        {
           return _LINKKEYCovDBKey2_user(_this, _LINKKEYCovDBKey2_next);
        };
        uint16_t _LINKKEYGetCode4_wrapper(struct _LINKKEY* _this)
        {
           return _LINKKEYGetCode4_user(_this, _LINKKEYGetCode4_next);
        };
        uint16_t _LINKKEYGetIndex6_wrapper(struct _LINKKEY* _this)
        {
           return _LINKKEYGetIndex6_user(_this, _LINKKEYGetIndex6_next);
        };
        bool _LINKKEYIsFilled8_wrapper(struct _LINKKEY* _this)
        {
           return _LINKKEYIsFilled8_user(_this, _LINKKEYIsFilled8_next);
        };
        void _LINKKEYLoadDBKey10_wrapper(struct _LINKKEY* _this, int16_t pl_zKey)
        {
           _LINKKEYLoadDBKey10_user(_this, pl_zKey, _LINKKEYLoadDBKey10_next);
        };
        void _LINKKEYSetData12_wrapper(struct _LINKKEY* _this, uint16_t wCode, uint16_t wIndex)
        {
           _LINKKEYSetData12_user(_this, wCode, wIndex, _LINKKEYSetData12_next);
        };
        void _LINKKEYSetRelease14_wrapper(struct _LINKKEY* _this)
        {
           _LINKKEYSetRelease14_user(_this, _LINKKEYSetRelease14_next);
        };
        
        ::std::array<hook_record, 7> _LINKKEY_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bf300L,
                (LPVOID *)&_LINKKEYCovDBKey2_user,
                (LPVOID *)&_LINKKEYCovDBKey2_next,
                (LPVOID)cast_pointer_function(_LINKKEYCovDBKey2_wrapper),
                (LPVOID)cast_pointer_function((int16_t(_LINKKEY::*)())&_LINKKEY::CovDBKey)
            },
            _hook_record {
                (LPVOID)0x1400ef990L,
                (LPVOID *)&_LINKKEYGetCode4_user,
                (LPVOID *)&_LINKKEYGetCode4_next,
                (LPVOID)cast_pointer_function(_LINKKEYGetCode4_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(_LINKKEY::*)())&_LINKKEY::GetCode)
            },
            _hook_record {
                (LPVOID)0x1400ef9b0L,
                (LPVOID *)&_LINKKEYGetIndex6_user,
                (LPVOID *)&_LINKKEYGetIndex6_next,
                (LPVOID)cast_pointer_function(_LINKKEYGetIndex6_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(_LINKKEY::*)())&_LINKKEY::GetIndex)
            },
            _hook_record {
                (LPVOID)0x1400ef920L,
                (LPVOID *)&_LINKKEYIsFilled8_user,
                (LPVOID *)&_LINKKEYIsFilled8_next,
                (LPVOID)cast_pointer_function(_LINKKEYIsFilled8_wrapper),
                (LPVOID)cast_pointer_function((bool(_LINKKEY::*)())&_LINKKEY::IsFilled)
            },
            _hook_record {
                (LPVOID)0x1401bf110L,
                (LPVOID *)&_LINKKEYLoadDBKey10_user,
                (LPVOID *)&_LINKKEYLoadDBKey10_next,
                (LPVOID)cast_pointer_function(_LINKKEYLoadDBKey10_wrapper),
                (LPVOID)cast_pointer_function((void(_LINKKEY::*)(int16_t))&_LINKKEY::LoadDBKey)
            },
            _hook_record {
                (LPVOID)0x1400ef950L,
                (LPVOID *)&_LINKKEYSetData12_user,
                (LPVOID *)&_LINKKEYSetData12_next,
                (LPVOID)cast_pointer_function(_LINKKEYSetData12_wrapper),
                (LPVOID)cast_pointer_function((void(_LINKKEY::*)(uint16_t, uint16_t))&_LINKKEY::SetData)
            },
            _hook_record {
                (LPVOID)0x140075970L,
                (LPVOID *)&_LINKKEYSetRelease14_user,
                (LPVOID *)&_LINKKEYSetRelease14_next,
                (LPVOID)cast_pointer_function(_LINKKEYSetRelease14_wrapper),
                (LPVOID)cast_pointer_function((void(_LINKKEY::*)())&_LINKKEY::SetRelease)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
