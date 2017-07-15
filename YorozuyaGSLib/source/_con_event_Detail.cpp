#include <_con_event_Detail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_con_event_ctor__con_event_2_ptr _con_event_ctor__con_event_2_next(nullptr);
        Info::_con_event_ctor__con_event_2_clbk _con_event_ctor__con_event_2_user(nullptr);
        
        
        Info::_con_event_dtor__con_event_4_ptr _con_event_dtor__con_event_4_next(nullptr);
        Info::_con_event_dtor__con_event_4_clbk _con_event_dtor__con_event_4_user(nullptr);
        
        
        void _con_event_ctor__con_event_2_wrapper(struct _con_event_* _this)
        {
           _con_event_ctor__con_event_2_user(_this, _con_event_ctor__con_event_2_next);
        };
        
        void _con_event_dtor__con_event_4_wrapper(struct _con_event_* _this)
        {
           _con_event_dtor__con_event_4_user(_this, _con_event_dtor__con_event_4_next);
        };
        
        ::std::array<hook_record, 2> _con_event__functions = 
        {
            _hook_record {
                (LPVOID)0x140304660L,
                (LPVOID *)&_con_event_ctor__con_event_2_user,
                (LPVOID *)&_con_event_ctor__con_event_2_next,
                (LPVOID)cast_pointer_function(_con_event_ctor__con_event_2_wrapper),
                (LPVOID)cast_pointer_function((void(_con_event_::*)())&_con_event_::ctor__con_event_)
            },
            _hook_record {
                (LPVOID)0x140304770L,
                (LPVOID *)&_con_event_dtor__con_event_4_user,
                (LPVOID *)&_con_event_dtor__con_event_4_next,
                (LPVOID)cast_pointer_function(_con_event_dtor__con_event_4_wrapper),
                (LPVOID)cast_pointer_function((void(_con_event_::*)())&_con_event_::dtor__con_event_)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
