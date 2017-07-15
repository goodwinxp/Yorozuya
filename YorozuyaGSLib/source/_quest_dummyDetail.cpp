#include <_quest_dummyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_quest_dummySetDummy2_ptr _quest_dummySetDummy2_next(nullptr);
        Info::_quest_dummySetDummy2_clbk _quest_dummySetDummy2_user(nullptr);
        
        
        Info::_quest_dummyctor__quest_dummy4_ptr _quest_dummyctor__quest_dummy4_next(nullptr);
        Info::_quest_dummyctor__quest_dummy4_clbk _quest_dummyctor__quest_dummy4_user(nullptr);
        
        bool _quest_dummySetDummy2_wrapper(struct _quest_dummy* _this, struct _dummy_position* pDumPos)
        {
           return _quest_dummySetDummy2_user(_this, pDumPos, _quest_dummySetDummy2_next);
        };
        
        void _quest_dummyctor__quest_dummy4_wrapper(struct _quest_dummy* _this)
        {
           _quest_dummyctor__quest_dummy4_user(_this, _quest_dummyctor__quest_dummy4_next);
        };
        
        ::std::array<hook_record, 2> _quest_dummy_functions = 
        {
            _hook_record {
                (LPVOID)0x140189b90L,
                (LPVOID *)&_quest_dummySetDummy2_user,
                (LPVOID *)&_quest_dummySetDummy2_next,
                (LPVOID)cast_pointer_function(_quest_dummySetDummy2_wrapper),
                (LPVOID)cast_pointer_function((bool(_quest_dummy::*)(struct _dummy_position*))&_quest_dummy::SetDummy)
            },
            _hook_record {
                (LPVOID)0x140189b70L,
                (LPVOID *)&_quest_dummyctor__quest_dummy4_user,
                (LPVOID *)&_quest_dummyctor__quest_dummy4_next,
                (LPVOID)cast_pointer_function(_quest_dummyctor__quest_dummy4_wrapper),
                (LPVOID)cast_pointer_function((void(_quest_dummy::*)())&_quest_dummy::ctor__quest_dummy)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
