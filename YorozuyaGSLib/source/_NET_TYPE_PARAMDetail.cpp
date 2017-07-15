#include <_NET_TYPE_PARAMDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_NET_TYPE_PARAMctor__NET_TYPE_PARAM2_ptr _NET_TYPE_PARAMctor__NET_TYPE_PARAM2_next(nullptr);
        Info::_NET_TYPE_PARAMctor__NET_TYPE_PARAM2_clbk _NET_TYPE_PARAMctor__NET_TYPE_PARAM2_user(nullptr);
        
        
        void _NET_TYPE_PARAMctor__NET_TYPE_PARAM2_wrapper(struct _NET_TYPE_PARAM* _this)
        {
           _NET_TYPE_PARAMctor__NET_TYPE_PARAM2_user(_this, _NET_TYPE_PARAMctor__NET_TYPE_PARAM2_next);
        };
        
        ::std::array<hook_record, 1> _NET_TYPE_PARAM_functions = 
        {
            _hook_record {
                (LPVOID)0x140204be0L,
                (LPVOID *)&_NET_TYPE_PARAMctor__NET_TYPE_PARAM2_user,
                (LPVOID *)&_NET_TYPE_PARAMctor__NET_TYPE_PARAM2_next,
                (LPVOID)cast_pointer_function(_NET_TYPE_PARAMctor__NET_TYPE_PARAM2_wrapper),
                (LPVOID)cast_pointer_function((void(_NET_TYPE_PARAM::*)())&_NET_TYPE_PARAM::ctor__NET_TYPE_PARAM)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
