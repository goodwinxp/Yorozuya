#include <_socketDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_socketInitParam2_ptr _socketInitParam2_next(nullptr);
        Info::_socketInitParam2_clbk _socketInitParam2_user(nullptr);
        
        
        Info::_socketctor__socket4_ptr _socketctor__socket4_next(nullptr);
        Info::_socketctor__socket4_clbk _socketctor__socket4_user(nullptr);
        
        
        Info::_socketdtor__socket8_ptr _socketdtor__socket8_next(nullptr);
        Info::_socketdtor__socket8_clbk _socketdtor__socket8_user(nullptr);
        
        void _socketInitParam2_wrapper(struct _socket* _this)
        {
           _socketInitParam2_user(_this, _socketInitParam2_next);
        };
        
        void _socketctor__socket4_wrapper(struct _socket* _this)
        {
           _socketctor__socket4_user(_this, _socketctor__socket4_next);
        };
        
        void _socketdtor__socket8_wrapper(struct _socket* _this)
        {
           _socketdtor__socket8_user(_this, _socketdtor__socket8_next);
        };
        
        ::std::array<hook_record, 3> _socket_functions = 
        {
            _hook_record {
                (LPVOID)0x14047f910L,
                (LPVOID *)&_socketInitParam2_user,
                (LPVOID *)&_socketInitParam2_next,
                (LPVOID)cast_pointer_function(_socketInitParam2_wrapper),
                (LPVOID)cast_pointer_function((void(_socket::*)())&_socket::InitParam)
            },
            _hook_record {
                (LPVOID)0x14047f8b0L,
                (LPVOID *)&_socketctor__socket4_user,
                (LPVOID *)&_socketctor__socket4_next,
                (LPVOID)cast_pointer_function(_socketctor__socket4_wrapper),
                (LPVOID)cast_pointer_function((void(_socket::*)())&_socket::ctor__socket)
            },
            _hook_record {
                (LPVOID)0x14047f900L,
                (LPVOID *)&_socketdtor__socket8_user,
                (LPVOID *)&_socketdtor__socket8_next,
                (LPVOID)cast_pointer_function(_socketdtor__socket8_wrapper),
                (LPVOID)cast_pointer_function((void(_socket::*)())&_socket::dtor__socket)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
