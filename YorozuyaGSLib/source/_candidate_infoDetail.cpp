#include <_candidate_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_candidate_info_Init2_ptr _candidate_info_Init2_next(nullptr);
        Info::_candidate_info_Init2_clbk _candidate_info_Init2_user(nullptr);
        
        
        Info::_candidate_infoctor__candidate_info4_ptr _candidate_infoctor__candidate_info4_next(nullptr);
        Info::_candidate_infoctor__candidate_info4_clbk _candidate_infoctor__candidate_info4_user(nullptr);
        
        void _candidate_info_Init2_wrapper(struct _candidate_info* _this)
        {
           _candidate_info_Init2_user(_this, _candidate_info_Init2_next);
        };
        
        void _candidate_infoctor__candidate_info4_wrapper(struct _candidate_info* _this)
        {
           _candidate_infoctor__candidate_info4_user(_this, _candidate_infoctor__candidate_info4_next);
        };
        
        ::std::array<hook_record, 2> _candidate_info_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b62b0L,
                (LPVOID *)&_candidate_info_Init2_user,
                (LPVOID *)&_candidate_info_Init2_next,
                (LPVOID)cast_pointer_function(_candidate_info_Init2_wrapper),
                (LPVOID)cast_pointer_function((void(_candidate_info::*)())&_candidate_info::_Init)
            },
            _hook_record {
                (LPVOID)0x1402b6260L,
                (LPVOID *)&_candidate_infoctor__candidate_info4_user,
                (LPVOID *)&_candidate_infoctor__candidate_info4_next,
                (LPVOID)cast_pointer_function(_candidate_infoctor__candidate_info4_wrapper),
                (LPVOID)cast_pointer_function((void(_candidate_info::*)())&_candidate_info::ctor__candidate_info)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
