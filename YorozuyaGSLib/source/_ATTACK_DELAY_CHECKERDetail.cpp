#include <_ATTACK_DELAY_CHECKERDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_ATTACK_DELAY_CHECKERInit2_ptr _ATTACK_DELAY_CHECKERInit2_next(nullptr);
        Info::_ATTACK_DELAY_CHECKERInit2_clbk _ATTACK_DELAY_CHECKERInit2_user(nullptr);
        
        Info::_ATTACK_DELAY_CHECKERIsDelay4_ptr _ATTACK_DELAY_CHECKERIsDelay4_next(nullptr);
        Info::_ATTACK_DELAY_CHECKERIsDelay4_clbk _ATTACK_DELAY_CHECKERIsDelay4_user(nullptr);
        
        Info::_ATTACK_DELAY_CHECKERSetDelay6_ptr _ATTACK_DELAY_CHECKERSetDelay6_next(nullptr);
        Info::_ATTACK_DELAY_CHECKERSetDelay6_clbk _ATTACK_DELAY_CHECKERSetDelay6_user(nullptr);
        
        
        Info::_ATTACK_DELAY_CHECKERctor__ATTACK_DELAY_CHECKER8_ptr _ATTACK_DELAY_CHECKERctor__ATTACK_DELAY_CHECKER8_next(nullptr);
        Info::_ATTACK_DELAY_CHECKERctor__ATTACK_DELAY_CHECKER8_clbk _ATTACK_DELAY_CHECKERctor__ATTACK_DELAY_CHECKER8_user(nullptr);
        
        Info::_ATTACK_DELAY_CHECKER_delay_check10_ptr _ATTACK_DELAY_CHECKER_delay_check10_next(nullptr);
        Info::_ATTACK_DELAY_CHECKER_delay_check10_clbk _ATTACK_DELAY_CHECKER_delay_check10_user(nullptr);
        
        void _ATTACK_DELAY_CHECKERInit2_wrapper(struct _ATTACK_DELAY_CHECKER* _this)
        {
           _ATTACK_DELAY_CHECKERInit2_user(_this, _ATTACK_DELAY_CHECKERInit2_next);
        };
        bool _ATTACK_DELAY_CHECKERIsDelay4_wrapper(struct _ATTACK_DELAY_CHECKER* _this, char code, uint16_t index, char mastery)
        {
           return _ATTACK_DELAY_CHECKERIsDelay4_user(_this, code, index, mastery, _ATTACK_DELAY_CHECKERIsDelay4_next);
        };
        void _ATTACK_DELAY_CHECKERSetDelay6_wrapper(struct _ATTACK_DELAY_CHECKER* _this, unsigned int delay)
        {
           _ATTACK_DELAY_CHECKERSetDelay6_user(_this, delay, _ATTACK_DELAY_CHECKERSetDelay6_next);
        };
        
        void _ATTACK_DELAY_CHECKERctor__ATTACK_DELAY_CHECKER8_wrapper(struct _ATTACK_DELAY_CHECKER* _this)
        {
           _ATTACK_DELAY_CHECKERctor__ATTACK_DELAY_CHECKER8_user(_this, _ATTACK_DELAY_CHECKERctor__ATTACK_DELAY_CHECKER8_next);
        };
        bool _ATTACK_DELAY_CHECKER_delay_check10_wrapper(struct _ATTACK_DELAY_CHECKER* _this, char code, uint16_t index, char mastery)
        {
           return _ATTACK_DELAY_CHECKER_delay_check10_user(_this, code, index, mastery, _ATTACK_DELAY_CHECKER_delay_check10_next);
        };
        
        ::std::array<hook_record, 5> _ATTACK_DELAY_CHECKER_functions = 
        {
            _hook_record {
                (LPVOID)0x140072e60L,
                (LPVOID *)&_ATTACK_DELAY_CHECKERInit2_user,
                (LPVOID *)&_ATTACK_DELAY_CHECKERInit2_next,
                (LPVOID)cast_pointer_function(_ATTACK_DELAY_CHECKERInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_ATTACK_DELAY_CHECKER::*)())&_ATTACK_DELAY_CHECKER::Init)
            },
            _hook_record {
                (LPVOID)0x14008ec60L,
                (LPVOID *)&_ATTACK_DELAY_CHECKERIsDelay4_user,
                (LPVOID *)&_ATTACK_DELAY_CHECKERIsDelay4_next,
                (LPVOID)cast_pointer_function(_ATTACK_DELAY_CHECKERIsDelay4_wrapper),
                (LPVOID)cast_pointer_function((bool(_ATTACK_DELAY_CHECKER::*)(char, uint16_t, char))&_ATTACK_DELAY_CHECKER::IsDelay)
            },
            _hook_record {
                (LPVOID)0x14008e760L,
                (LPVOID *)&_ATTACK_DELAY_CHECKERSetDelay6_user,
                (LPVOID *)&_ATTACK_DELAY_CHECKERSetDelay6_next,
                (LPVOID)cast_pointer_function(_ATTACK_DELAY_CHECKERSetDelay6_wrapper),
                (LPVOID)cast_pointer_function((void(_ATTACK_DELAY_CHECKER::*)(unsigned int))&_ATTACK_DELAY_CHECKER::SetDelay)
            },
            _hook_record {
                (LPVOID)0x140072d80L,
                (LPVOID *)&_ATTACK_DELAY_CHECKERctor__ATTACK_DELAY_CHECKER8_user,
                (LPVOID *)&_ATTACK_DELAY_CHECKERctor__ATTACK_DELAY_CHECKER8_next,
                (LPVOID)cast_pointer_function(_ATTACK_DELAY_CHECKERctor__ATTACK_DELAY_CHECKER8_wrapper),
                (LPVOID)cast_pointer_function((void(_ATTACK_DELAY_CHECKER::*)())&_ATTACK_DELAY_CHECKER::ctor__ATTACK_DELAY_CHECKER)
            },
            _hook_record {
                (LPVOID)0x14008ed10L,
                (LPVOID *)&_ATTACK_DELAY_CHECKER_delay_check10_user,
                (LPVOID *)&_ATTACK_DELAY_CHECKER_delay_check10_next,
                (LPVOID)cast_pointer_function(_ATTACK_DELAY_CHECKER_delay_check10_wrapper),
                (LPVOID)cast_pointer_function((bool(_ATTACK_DELAY_CHECKER::*)(char, uint16_t, char))&_ATTACK_DELAY_CHECKER::_delay_check)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
