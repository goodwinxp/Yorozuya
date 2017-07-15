#include <_SYN_HEADERDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_SYN_HEADERctor__SYN_HEADER2_ptr _SYN_HEADERctor__SYN_HEADER2_next(nullptr);
        Info::_SYN_HEADERctor__SYN_HEADER2_clbk _SYN_HEADERctor__SYN_HEADER2_user(nullptr);
        
        
        void _SYN_HEADERctor__SYN_HEADER2_wrapper(struct _SYN_HEADER* _this)
        {
           _SYN_HEADERctor__SYN_HEADER2_user(_this, _SYN_HEADERctor__SYN_HEADER2_next);
        };
        
        ::std::array<hook_record, 1> _SYN_HEADER_functions = 
        {
            _hook_record {
                (LPVOID)0x14043ed80L,
                (LPVOID *)&_SYN_HEADERctor__SYN_HEADER2_user,
                (LPVOID *)&_SYN_HEADERctor__SYN_HEADER2_next,
                (LPVOID)cast_pointer_function(_SYN_HEADERctor__SYN_HEADER2_wrapper),
                (LPVOID)cast_pointer_function((void(_SYN_HEADER::*)())&_SYN_HEADER::ctor__SYN_HEADER)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
