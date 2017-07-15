#include <_job_sub_setupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_job_sub_setupctor__job_sub_setup2_ptr _job_sub_setupctor__job_sub_setup2_next(nullptr);
        Info::_job_sub_setupctor__job_sub_setup2_clbk _job_sub_setupctor__job_sub_setup2_user(nullptr);
        
        
        void _job_sub_setupctor__job_sub_setup2_wrapper(struct _job_sub_setup* _this)
        {
           _job_sub_setupctor__job_sub_setup2_user(_this, _job_sub_setupctor__job_sub_setup2_next);
        };
        
        ::std::array<hook_record, 1> _job_sub_setup_functions = 
        {
            _hook_record {
                (LPVOID)0x140272af0L,
                (LPVOID *)&_job_sub_setupctor__job_sub_setup2_user,
                (LPVOID *)&_job_sub_setupctor__job_sub_setup2_next,
                (LPVOID)cast_pointer_function(_job_sub_setupctor__job_sub_setup2_wrapper),
                (LPVOID)cast_pointer_function((void(_job_sub_setup::*)())&_job_sub_setup::ctor__job_sub_setup)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
