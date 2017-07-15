#include <_QUEST_CASHDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_QUEST_CASHctor__QUEST_CASH2_ptr _QUEST_CASHctor__QUEST_CASH2_next(nullptr);
        Info::_QUEST_CASHctor__QUEST_CASH2_clbk _QUEST_CASHctor__QUEST_CASH2_user(nullptr);
        
        Info::_QUEST_CASHinit4_ptr _QUEST_CASHinit4_next(nullptr);
        Info::_QUEST_CASHinit4_clbk _QUEST_CASHinit4_user(nullptr);
        
        Info::_QUEST_CASHisload6_ptr _QUEST_CASHisload6_next(nullptr);
        Info::_QUEST_CASHisload6_clbk _QUEST_CASHisload6_user(nullptr);
        
        
        void _QUEST_CASHctor__QUEST_CASH2_wrapper(struct _QUEST_CASH* _this)
        {
           _QUEST_CASHctor__QUEST_CASH2_user(_this, _QUEST_CASHctor__QUEST_CASH2_next);
        };
        void _QUEST_CASHinit4_wrapper(struct _QUEST_CASH* _this)
        {
           _QUEST_CASHinit4_user(_this, _QUEST_CASHinit4_next);
        };
        bool _QUEST_CASHisload6_wrapper(struct _QUEST_CASH* _this)
        {
           return _QUEST_CASHisload6_user(_this, _QUEST_CASHisload6_next);
        };
        
        ::std::array<hook_record, 3> _QUEST_CASH_functions = 
        {
            _hook_record {
                (LPVOID)0x140284230L,
                (LPVOID *)&_QUEST_CASHctor__QUEST_CASH2_user,
                (LPVOID *)&_QUEST_CASHctor__QUEST_CASH2_next,
                (LPVOID)cast_pointer_function(_QUEST_CASHctor__QUEST_CASH2_wrapper),
                (LPVOID)cast_pointer_function((void(_QUEST_CASH::*)())&_QUEST_CASH::ctor__QUEST_CASH)
            },
            _hook_record {
                (LPVOID)0x140079710L,
                (LPVOID *)&_QUEST_CASHinit4_user,
                (LPVOID *)&_QUEST_CASHinit4_next,
                (LPVOID)cast_pointer_function(_QUEST_CASHinit4_wrapper),
                (LPVOID)cast_pointer_function((void(_QUEST_CASH::*)())&_QUEST_CASH::init)
            },
            _hook_record {
                (LPVOID)0x140284cd0L,
                (LPVOID *)&_QUEST_CASHisload6_user,
                (LPVOID *)&_QUEST_CASHisload6_next,
                (LPVOID)cast_pointer_function(_QUEST_CASHisload6_wrapper),
                (LPVOID)cast_pointer_function((bool(_QUEST_CASH::*)())&_QUEST_CASH::isload)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
