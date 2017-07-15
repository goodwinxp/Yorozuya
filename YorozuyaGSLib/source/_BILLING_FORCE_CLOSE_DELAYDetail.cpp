#include <_BILLING_FORCE_CLOSE_DELAYDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_BILLING_FORCE_CLOSE_DELAYProcess2_ptr _BILLING_FORCE_CLOSE_DELAYProcess2_next(nullptr);
        Info::_BILLING_FORCE_CLOSE_DELAYProcess2_clbk _BILLING_FORCE_CLOSE_DELAYProcess2_user(nullptr);
        
        
        Info::_BILLING_FORCE_CLOSE_DELAYctor__BILLING_FORCE_CLOSE_DELAY4_ptr _BILLING_FORCE_CLOSE_DELAYctor__BILLING_FORCE_CLOSE_DELAY4_next(nullptr);
        Info::_BILLING_FORCE_CLOSE_DELAYctor__BILLING_FORCE_CLOSE_DELAY4_clbk _BILLING_FORCE_CLOSE_DELAYctor__BILLING_FORCE_CLOSE_DELAY4_user(nullptr);
        
        
        Info::_BILLING_FORCE_CLOSE_DELAYdtor__BILLING_FORCE_CLOSE_DELAY6_ptr _BILLING_FORCE_CLOSE_DELAYdtor__BILLING_FORCE_CLOSE_DELAY6_next(nullptr);
        Info::_BILLING_FORCE_CLOSE_DELAYdtor__BILLING_FORCE_CLOSE_DELAY6_clbk _BILLING_FORCE_CLOSE_DELAYdtor__BILLING_FORCE_CLOSE_DELAY6_user(nullptr);
        
        void _BILLING_FORCE_CLOSE_DELAYProcess2_wrapper(struct _BILLING_FORCE_CLOSE_DELAY* _this, unsigned int dwIndex, unsigned int dwSerial)
        {
           _BILLING_FORCE_CLOSE_DELAYProcess2_user(_this, dwIndex, dwSerial, _BILLING_FORCE_CLOSE_DELAYProcess2_next);
        };
        
        void _BILLING_FORCE_CLOSE_DELAYctor__BILLING_FORCE_CLOSE_DELAY4_wrapper(struct _BILLING_FORCE_CLOSE_DELAY* _this)
        {
           _BILLING_FORCE_CLOSE_DELAYctor__BILLING_FORCE_CLOSE_DELAY4_user(_this, _BILLING_FORCE_CLOSE_DELAYctor__BILLING_FORCE_CLOSE_DELAY4_next);
        };
        
        void _BILLING_FORCE_CLOSE_DELAYdtor__BILLING_FORCE_CLOSE_DELAY6_wrapper(struct _BILLING_FORCE_CLOSE_DELAY* _this)
        {
           _BILLING_FORCE_CLOSE_DELAYdtor__BILLING_FORCE_CLOSE_DELAY6_user(_this, _BILLING_FORCE_CLOSE_DELAYdtor__BILLING_FORCE_CLOSE_DELAY6_next);
        };
        
        ::std::array<hook_record, 3> _BILLING_FORCE_CLOSE_DELAY_functions = 
        {
            _hook_record {
                (LPVOID)0x140066480L,
                (LPVOID *)&_BILLING_FORCE_CLOSE_DELAYProcess2_user,
                (LPVOID *)&_BILLING_FORCE_CLOSE_DELAYProcess2_next,
                (LPVOID)cast_pointer_function(_BILLING_FORCE_CLOSE_DELAYProcess2_wrapper),
                (LPVOID)cast_pointer_function((void(_BILLING_FORCE_CLOSE_DELAY::*)(unsigned int, unsigned int))&_BILLING_FORCE_CLOSE_DELAY::Process)
            },
            _hook_record {
                (LPVOID)0x14007f390L,
                (LPVOID *)&_BILLING_FORCE_CLOSE_DELAYctor__BILLING_FORCE_CLOSE_DELAY4_user,
                (LPVOID *)&_BILLING_FORCE_CLOSE_DELAYctor__BILLING_FORCE_CLOSE_DELAY4_next,
                (LPVOID)cast_pointer_function(_BILLING_FORCE_CLOSE_DELAYctor__BILLING_FORCE_CLOSE_DELAY4_wrapper),
                (LPVOID)cast_pointer_function((void(_BILLING_FORCE_CLOSE_DELAY::*)())&_BILLING_FORCE_CLOSE_DELAY::ctor__BILLING_FORCE_CLOSE_DELAY)
            },
            _hook_record {
                (LPVOID)0x140080490L,
                (LPVOID *)&_BILLING_FORCE_CLOSE_DELAYdtor__BILLING_FORCE_CLOSE_DELAY6_user,
                (LPVOID *)&_BILLING_FORCE_CLOSE_DELAYdtor__BILLING_FORCE_CLOSE_DELAY6_next,
                (LPVOID)cast_pointer_function(_BILLING_FORCE_CLOSE_DELAYdtor__BILLING_FORCE_CLOSE_DELAY6_wrapper),
                (LPVOID)cast_pointer_function((void(_BILLING_FORCE_CLOSE_DELAY::*)())&_BILLING_FORCE_CLOSE_DELAY::dtor__BILLING_FORCE_CLOSE_DELAY)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
