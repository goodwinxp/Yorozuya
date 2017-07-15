#include <_ANIMUS_RETURN_DELAYDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_ANIMUS_RETURN_DELAYProcess2_ptr _ANIMUS_RETURN_DELAYProcess2_next(nullptr);
        Info::_ANIMUS_RETURN_DELAYProcess2_clbk _ANIMUS_RETURN_DELAYProcess2_user(nullptr);
        
        
        Info::_ANIMUS_RETURN_DELAYctor__ANIMUS_RETURN_DELAY4_ptr _ANIMUS_RETURN_DELAYctor__ANIMUS_RETURN_DELAY4_next(nullptr);
        Info::_ANIMUS_RETURN_DELAYctor__ANIMUS_RETURN_DELAY4_clbk _ANIMUS_RETURN_DELAYctor__ANIMUS_RETURN_DELAY4_user(nullptr);
        
        
        Info::_ANIMUS_RETURN_DELAYdtor__ANIMUS_RETURN_DELAY6_ptr _ANIMUS_RETURN_DELAYdtor__ANIMUS_RETURN_DELAY6_next(nullptr);
        Info::_ANIMUS_RETURN_DELAYdtor__ANIMUS_RETURN_DELAY6_clbk _ANIMUS_RETURN_DELAYdtor__ANIMUS_RETURN_DELAY6_user(nullptr);
        
        void _ANIMUS_RETURN_DELAYProcess2_wrapper(struct _ANIMUS_RETURN_DELAY* _this, unsigned int dwIndex, unsigned int dwSerial)
        {
           _ANIMUS_RETURN_DELAYProcess2_user(_this, dwIndex, dwSerial, _ANIMUS_RETURN_DELAYProcess2_next);
        };
        
        void _ANIMUS_RETURN_DELAYctor__ANIMUS_RETURN_DELAY4_wrapper(struct _ANIMUS_RETURN_DELAY* _this)
        {
           _ANIMUS_RETURN_DELAYctor__ANIMUS_RETURN_DELAY4_user(_this, _ANIMUS_RETURN_DELAYctor__ANIMUS_RETURN_DELAY4_next);
        };
        
        void _ANIMUS_RETURN_DELAYdtor__ANIMUS_RETURN_DELAY6_wrapper(struct _ANIMUS_RETURN_DELAY* _this)
        {
           _ANIMUS_RETURN_DELAYdtor__ANIMUS_RETURN_DELAY6_user(_this, _ANIMUS_RETURN_DELAYdtor__ANIMUS_RETURN_DELAY6_next);
        };
        
        ::std::array<hook_record, 3> _ANIMUS_RETURN_DELAY_functions = 
        {
            _hook_record {
                (LPVOID)0x140066400L,
                (LPVOID *)&_ANIMUS_RETURN_DELAYProcess2_user,
                (LPVOID *)&_ANIMUS_RETURN_DELAYProcess2_next,
                (LPVOID)cast_pointer_function(_ANIMUS_RETURN_DELAYProcess2_wrapper),
                (LPVOID)cast_pointer_function((void(_ANIMUS_RETURN_DELAY::*)(unsigned int, unsigned int))&_ANIMUS_RETURN_DELAY::Process)
            },
            _hook_record {
                (LPVOID)0x14007f200L,
                (LPVOID *)&_ANIMUS_RETURN_DELAYctor__ANIMUS_RETURN_DELAY4_user,
                (LPVOID *)&_ANIMUS_RETURN_DELAYctor__ANIMUS_RETURN_DELAY4_next,
                (LPVOID)cast_pointer_function(_ANIMUS_RETURN_DELAYctor__ANIMUS_RETURN_DELAY4_wrapper),
                (LPVOID)cast_pointer_function((void(_ANIMUS_RETURN_DELAY::*)())&_ANIMUS_RETURN_DELAY::ctor__ANIMUS_RETURN_DELAY)
            },
            _hook_record {
                (LPVOID)0x140080370L,
                (LPVOID *)&_ANIMUS_RETURN_DELAYdtor__ANIMUS_RETURN_DELAY6_user,
                (LPVOID *)&_ANIMUS_RETURN_DELAYdtor__ANIMUS_RETURN_DELAY6_next,
                (LPVOID)cast_pointer_function(_ANIMUS_RETURN_DELAYdtor__ANIMUS_RETURN_DELAY6_wrapper),
                (LPVOID)cast_pointer_function((void(_ANIMUS_RETURN_DELAY::*)())&_ANIMUS_RETURN_DELAY::dtor__ANIMUS_RETURN_DELAY)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
