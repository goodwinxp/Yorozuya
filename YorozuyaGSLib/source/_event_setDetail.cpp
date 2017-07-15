#include <_event_setDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_event_setctor__event_set2_ptr _event_setctor__event_set2_next(nullptr);
        Info::_event_setctor__event_set2_clbk _event_setctor__event_set2_user(nullptr);
        
        Info::_event_setinit4_ptr _event_setinit4_next(nullptr);
        Info::_event_setinit4_clbk _event_setinit4_user(nullptr);
        
        
        void _event_setctor__event_set2_wrapper(struct _event_set* _this)
        {
           _event_setctor__event_set2_user(_this, _event_setctor__event_set2_next);
        };
        void _event_setinit4_wrapper(struct _event_set* _this)
        {
           _event_setinit4_user(_this, _event_setinit4_next);
        };
        
        ::std::array<hook_record, 2> _event_set_functions = 
        {
            _hook_record {
                (LPVOID)0x1402a9db0L,
                (LPVOID *)&_event_setctor__event_set2_user,
                (LPVOID *)&_event_setctor__event_set2_next,
                (LPVOID)cast_pointer_function(_event_setctor__event_set2_wrapper),
                (LPVOID)cast_pointer_function((void(_event_set::*)())&_event_set::ctor__event_set)
            },
            _hook_record {
                (LPVOID)0x1402a9e30L,
                (LPVOID *)&_event_setinit4_user,
                (LPVOID *)&_event_setinit4_next,
                (LPVOID)cast_pointer_function(_event_setinit4_wrapper),
                (LPVOID)cast_pointer_function((void(_event_set::*)())&_event_set::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
