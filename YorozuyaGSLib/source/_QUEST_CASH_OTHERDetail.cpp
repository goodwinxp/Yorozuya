#include <_QUEST_CASH_OTHERDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_QUEST_CASH_OTHERctor__QUEST_CASH_OTHER2_ptr _QUEST_CASH_OTHERctor__QUEST_CASH_OTHER2_next(nullptr);
        Info::_QUEST_CASH_OTHERctor__QUEST_CASH_OTHER2_clbk _QUEST_CASH_OTHERctor__QUEST_CASH_OTHER2_user(nullptr);
        
        Info::_QUEST_CASH_OTHERinit4_ptr _QUEST_CASH_OTHERinit4_next(nullptr);
        Info::_QUEST_CASH_OTHERinit4_clbk _QUEST_CASH_OTHERinit4_user(nullptr);
        
        Info::_QUEST_CASH_OTHERisLoaded6_ptr _QUEST_CASH_OTHERisLoaded6_next(nullptr);
        Info::_QUEST_CASH_OTHERisLoaded6_clbk _QUEST_CASH_OTHERisLoaded6_user(nullptr);
        
        
        void _QUEST_CASH_OTHERctor__QUEST_CASH_OTHER2_wrapper(struct _QUEST_CASH_OTHER* _this)
        {
           _QUEST_CASH_OTHERctor__QUEST_CASH_OTHER2_user(_this, _QUEST_CASH_OTHERctor__QUEST_CASH_OTHER2_next);
        };
        void _QUEST_CASH_OTHERinit4_wrapper(struct _QUEST_CASH_OTHER* _this)
        {
           _QUEST_CASH_OTHERinit4_user(_this, _QUEST_CASH_OTHERinit4_next);
        };
        bool _QUEST_CASH_OTHERisLoaded6_wrapper(struct _QUEST_CASH_OTHER* _this)
        {
           return _QUEST_CASH_OTHERisLoaded6_user(_this, _QUEST_CASH_OTHERisLoaded6_next);
        };
        
        ::std::array<hook_record, 3> _QUEST_CASH_OTHER_functions = 
        {
            _hook_record {
                (LPVOID)0x140284280L,
                (LPVOID *)&_QUEST_CASH_OTHERctor__QUEST_CASH_OTHER2_user,
                (LPVOID *)&_QUEST_CASH_OTHERctor__QUEST_CASH_OTHER2_next,
                (LPVOID)cast_pointer_function(_QUEST_CASH_OTHERctor__QUEST_CASH_OTHER2_wrapper),
                (LPVOID)cast_pointer_function((void(_QUEST_CASH_OTHER::*)())&_QUEST_CASH_OTHER::ctor__QUEST_CASH_OTHER)
            },
            _hook_record {
                (LPVOID)0x1402842d0L,
                (LPVOID *)&_QUEST_CASH_OTHERinit4_user,
                (LPVOID *)&_QUEST_CASH_OTHERinit4_next,
                (LPVOID)cast_pointer_function(_QUEST_CASH_OTHERinit4_wrapper),
                (LPVOID)cast_pointer_function((void(_QUEST_CASH_OTHER::*)())&_QUEST_CASH_OTHER::init)
            },
            _hook_record {
                (LPVOID)0x140284da0L,
                (LPVOID *)&_QUEST_CASH_OTHERisLoaded6_user,
                (LPVOID *)&_QUEST_CASH_OTHERisLoaded6_next,
                (LPVOID)cast_pointer_function(_QUEST_CASH_OTHERisLoaded6_wrapper),
                (LPVOID)cast_pointer_function((bool(_QUEST_CASH_OTHER::*)())&_QUEST_CASH_OTHER::isLoaded)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
