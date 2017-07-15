#include <_CRYMSG_LISTDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_CRYMSG_LISTInit2_ptr _CRYMSG_LISTInit2_next(nullptr);
        Info::_CRYMSG_LISTInit2_clbk _CRYMSG_LISTInit2_user(nullptr);
        
        
        Info::_CRYMSG_LISTctor__CRYMSG_LIST4_ptr _CRYMSG_LISTctor__CRYMSG_LIST4_next(nullptr);
        Info::_CRYMSG_LISTctor__CRYMSG_LIST4_clbk _CRYMSG_LISTctor__CRYMSG_LIST4_user(nullptr);
        
        void _CRYMSG_LISTInit2_wrapper(struct _CRYMSG_LIST* _this)
        {
           _CRYMSG_LISTInit2_user(_this, _CRYMSG_LISTInit2_next);
        };
        
        void _CRYMSG_LISTctor__CRYMSG_LIST4_wrapper(struct _CRYMSG_LIST* _this)
        {
           _CRYMSG_LISTctor__CRYMSG_LIST4_user(_this, _CRYMSG_LISTctor__CRYMSG_LIST4_next);
        };
        
        ::std::array<hook_record, 2> _CRYMSG_LIST_functions = 
        {
            _hook_record {
                (LPVOID)0x140073a80L,
                (LPVOID *)&_CRYMSG_LISTInit2_user,
                (LPVOID *)&_CRYMSG_LISTInit2_next,
                (LPVOID)cast_pointer_function(_CRYMSG_LISTInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_CRYMSG_LIST::*)())&_CRYMSG_LIST::Init)
            },
            _hook_record {
                (LPVOID)0x1400739a0L,
                (LPVOID *)&_CRYMSG_LISTctor__CRYMSG_LIST4_user,
                (LPVOID *)&_CRYMSG_LISTctor__CRYMSG_LIST4_next,
                (LPVOID)cast_pointer_function(_CRYMSG_LISTctor__CRYMSG_LIST4_wrapper),
                (LPVOID)cast_pointer_function((void(_CRYMSG_LIST::*)())&_CRYMSG_LIST::ctor__CRYMSG_LIST)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
