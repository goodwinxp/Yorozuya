#include <_event_set_lootingDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_event_set_lootingctor__event_set_looting2_ptr _event_set_lootingctor__event_set_looting2_next(nullptr);
        Info::_event_set_lootingctor__event_set_looting2_clbk _event_set_lootingctor__event_set_looting2_user(nullptr);
        
        Info::_event_set_lootinginit4_ptr _event_set_lootinginit4_next(nullptr);
        Info::_event_set_lootinginit4_clbk _event_set_lootinginit4_user(nullptr);
        
        
        void _event_set_lootingctor__event_set_looting2_wrapper(struct _event_set_looting* _this)
        {
           _event_set_lootingctor__event_set_looting2_user(_this, _event_set_lootingctor__event_set_looting2_next);
        };
        void _event_set_lootinginit4_wrapper(struct _event_set_looting* _this)
        {
           _event_set_lootinginit4_user(_this, _event_set_lootinginit4_next);
        };
        
        ::std::array<hook_record, 2> _event_set_looting_functions = 
        {
            _hook_record {
                (LPVOID)0x1402a9f70L,
                (LPVOID *)&_event_set_lootingctor__event_set_looting2_user,
                (LPVOID *)&_event_set_lootingctor__event_set_looting2_next,
                (LPVOID)cast_pointer_function(_event_set_lootingctor__event_set_looting2_wrapper),
                (LPVOID)cast_pointer_function((void(_event_set_looting::*)())&_event_set_looting::ctor__event_set_looting)
            },
            _hook_record {
                (LPVOID)0x1402a9fc0L,
                (LPVOID *)&_event_set_lootinginit4_user,
                (LPVOID *)&_event_set_lootinginit4_next,
                (LPVOID)cast_pointer_function(_event_set_lootinginit4_wrapper),
                (LPVOID)cast_pointer_function((void(_event_set_looting::*)())&_event_set_looting::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
