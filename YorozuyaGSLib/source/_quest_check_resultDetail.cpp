#include <_quest_check_resultDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_quest_check_resultinit2_ptr _quest_check_resultinit2_next(nullptr);
        Info::_quest_check_resultinit2_clbk _quest_check_resultinit2_user(nullptr);
        
        void _quest_check_resultinit2_wrapper(struct _quest_check_result* _this)
        {
           _quest_check_resultinit2_user(_this, _quest_check_resultinit2_next);
        };
        
        ::std::array<hook_record, 1> _quest_check_result_functions = 
        {
            _hook_record {
                (LPVOID)0x14028ca10L,
                (LPVOID *)&_quest_check_resultinit2_user,
                (LPVOID *)&_quest_check_resultinit2_next,
                (LPVOID)cast_pointer_function(_quest_check_resultinit2_wrapper),
                (LPVOID)cast_pointer_function((void(_quest_check_result::*)())&_quest_check_result::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
