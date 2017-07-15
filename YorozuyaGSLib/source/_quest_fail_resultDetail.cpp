#include <_quest_fail_resultDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_quest_fail_resultinit2_ptr _quest_fail_resultinit2_next(nullptr);
        Info::_quest_fail_resultinit2_clbk _quest_fail_resultinit2_user(nullptr);
        
        void _quest_fail_resultinit2_wrapper(struct _quest_fail_result* _this)
        {
           _quest_fail_resultinit2_user(_this, _quest_fail_resultinit2_next);
        };
        
        ::std::array<hook_record, 1> _quest_fail_result_functions = 
        {
            _hook_record {
                (LPVOID)0x14028ca30L,
                (LPVOID *)&_quest_fail_resultinit2_user,
                (LPVOID *)&_quest_fail_resultinit2_next,
                (LPVOID)cast_pointer_function(_quest_fail_resultinit2_wrapper),
                (LPVOID)cast_pointer_function((void(_quest_fail_result::*)())&_quest_fail_result::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
