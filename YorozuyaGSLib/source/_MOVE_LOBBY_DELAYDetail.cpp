#include <_MOVE_LOBBY_DELAYDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_MOVE_LOBBY_DELAYProcess2_ptr _MOVE_LOBBY_DELAYProcess2_next(nullptr);
        Info::_MOVE_LOBBY_DELAYProcess2_clbk _MOVE_LOBBY_DELAYProcess2_user(nullptr);
        
        
        Info::_MOVE_LOBBY_DELAYctor__MOVE_LOBBY_DELAY4_ptr _MOVE_LOBBY_DELAYctor__MOVE_LOBBY_DELAY4_next(nullptr);
        Info::_MOVE_LOBBY_DELAYctor__MOVE_LOBBY_DELAY4_clbk _MOVE_LOBBY_DELAYctor__MOVE_LOBBY_DELAY4_user(nullptr);
        
        
        Info::_MOVE_LOBBY_DELAYdtor__MOVE_LOBBY_DELAY6_ptr _MOVE_LOBBY_DELAYdtor__MOVE_LOBBY_DELAY6_next(nullptr);
        Info::_MOVE_LOBBY_DELAYdtor__MOVE_LOBBY_DELAY6_clbk _MOVE_LOBBY_DELAYdtor__MOVE_LOBBY_DELAY6_user(nullptr);
        
        void _MOVE_LOBBY_DELAYProcess2_wrapper(struct _MOVE_LOBBY_DELAY* _this, unsigned int dwIndex, unsigned int dwSerial)
        {
           _MOVE_LOBBY_DELAYProcess2_user(_this, dwIndex, dwSerial, _MOVE_LOBBY_DELAYProcess2_next);
        };
        
        void _MOVE_LOBBY_DELAYctor__MOVE_LOBBY_DELAY4_wrapper(struct _MOVE_LOBBY_DELAY* _this)
        {
           _MOVE_LOBBY_DELAYctor__MOVE_LOBBY_DELAY4_user(_this, _MOVE_LOBBY_DELAYctor__MOVE_LOBBY_DELAY4_next);
        };
        
        void _MOVE_LOBBY_DELAYdtor__MOVE_LOBBY_DELAY6_wrapper(struct _MOVE_LOBBY_DELAY* _this)
        {
           _MOVE_LOBBY_DELAYdtor__MOVE_LOBBY_DELAY6_user(_this, _MOVE_LOBBY_DELAYdtor__MOVE_LOBBY_DELAY6_next);
        };
        
        ::std::array<hook_record, 3> _MOVE_LOBBY_DELAY_functions = 
        {
            _hook_record {
                (LPVOID)0x14011b430L,
                (LPVOID *)&_MOVE_LOBBY_DELAYProcess2_user,
                (LPVOID *)&_MOVE_LOBBY_DELAYProcess2_next,
                (LPVOID)cast_pointer_function(_MOVE_LOBBY_DELAYProcess2_wrapper),
                (LPVOID)cast_pointer_function((void(_MOVE_LOBBY_DELAY::*)(unsigned int, unsigned int))&_MOVE_LOBBY_DELAY::Process)
            },
            _hook_record {
                (LPVOID)0x140120ee0L,
                (LPVOID *)&_MOVE_LOBBY_DELAYctor__MOVE_LOBBY_DELAY4_user,
                (LPVOID *)&_MOVE_LOBBY_DELAYctor__MOVE_LOBBY_DELAY4_next,
                (LPVOID)cast_pointer_function(_MOVE_LOBBY_DELAYctor__MOVE_LOBBY_DELAY4_wrapper),
                (LPVOID)cast_pointer_function((void(_MOVE_LOBBY_DELAY::*)())&_MOVE_LOBBY_DELAY::ctor__MOVE_LOBBY_DELAY)
            },
            _hook_record {
                (LPVOID)0x140120f50L,
                (LPVOID *)&_MOVE_LOBBY_DELAYdtor__MOVE_LOBBY_DELAY6_user,
                (LPVOID *)&_MOVE_LOBBY_DELAYdtor__MOVE_LOBBY_DELAY6_next,
                (LPVOID)cast_pointer_function(_MOVE_LOBBY_DELAYdtor__MOVE_LOBBY_DELAY6_wrapper),
                (LPVOID)cast_pointer_function((void(_MOVE_LOBBY_DELAY::*)())&_MOVE_LOBBY_DELAY::dtor__MOVE_LOBBY_DELAY)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
