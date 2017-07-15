#include <_SOCK_TYPE_PARAMDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_ptr _SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_next(nullptr);
        Info::_SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_clbk _SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_user(nullptr);
        
        
        void _SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_wrapper(struct _SOCK_TYPE_PARAM* _this)
        {
           _SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_user(_this, _SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_next);
        };
        
        ::std::array<hook_record, 1> _SOCK_TYPE_PARAM_functions = 
        {
            _hook_record {
                (LPVOID)0x140204d40L,
                (LPVOID *)&_SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_user,
                (LPVOID *)&_SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_next,
                (LPVOID)cast_pointer_function(_SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_wrapper),
                (LPVOID)cast_pointer_function((void(_SOCK_TYPE_PARAM::*)())&_SOCK_TYPE_PARAM::ctor__SOCK_TYPE_PARAM)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
