#include <_event_respawnDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_event_respawnctor__event_respawn2_ptr _event_respawnctor__event_respawn2_next(nullptr);
        Info::_event_respawnctor__event_respawn2_clbk _event_respawnctor__event_respawn2_user(nullptr);
        
        
        void _event_respawnctor__event_respawn2_wrapper(struct _event_respawn* _this)
        {
           _event_respawnctor__event_respawn2_user(_this, _event_respawnctor__event_respawn2_next);
        };
        
        ::std::array<hook_record, 1> _event_respawn_functions = 
        {
            _hook_record {
                (LPVOID)0x1402a7740L,
                (LPVOID *)&_event_respawnctor__event_respawn2_user,
                (LPVOID *)&_event_respawnctor__event_respawn2_next,
                (LPVOID)cast_pointer_function(_event_respawnctor__event_respawn2_wrapper),
                (LPVOID)cast_pointer_function((void(_event_respawn::*)())&_event_respawn::ctor__event_respawn)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
