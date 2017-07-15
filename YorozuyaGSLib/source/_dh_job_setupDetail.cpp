#include <_dh_job_setupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_dh_job_setupctor__dh_job_setup2_ptr _dh_job_setupctor__dh_job_setup2_next(nullptr);
        Info::_dh_job_setupctor__dh_job_setup2_clbk _dh_job_setupctor__dh_job_setup2_user(nullptr);
        
        
        Info::_dh_job_setupdtor__dh_job_setup7_ptr _dh_job_setupdtor__dh_job_setup7_next(nullptr);
        Info::_dh_job_setupdtor__dh_job_setup7_clbk _dh_job_setupdtor__dh_job_setup7_user(nullptr);
        
        
        void _dh_job_setupctor__dh_job_setup2_wrapper(struct _dh_job_setup* _this)
        {
           _dh_job_setupctor__dh_job_setup2_user(_this, _dh_job_setupctor__dh_job_setup2_next);
        };
        
        void _dh_job_setupdtor__dh_job_setup7_wrapper(struct _dh_job_setup* _this)
        {
           _dh_job_setupdtor__dh_job_setup7_user(_this, _dh_job_setupdtor__dh_job_setup7_next);
        };
        
        ::std::array<hook_record, 2> _dh_job_setup_functions = 
        {
            _hook_record {
                (LPVOID)0x1402729f0L,
                (LPVOID *)&_dh_job_setupctor__dh_job_setup2_user,
                (LPVOID *)&_dh_job_setupctor__dh_job_setup2_next,
                (LPVOID)cast_pointer_function(_dh_job_setupctor__dh_job_setup2_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_job_setup::*)())&_dh_job_setup::ctor__dh_job_setup)
            },
            _hook_record {
                (LPVOID)0x140272ba0L,
                (LPVOID *)&_dh_job_setupdtor__dh_job_setup7_user,
                (LPVOID *)&_dh_job_setupdtor__dh_job_setup7_next,
                (LPVOID)cast_pointer_function(_dh_job_setupdtor__dh_job_setup7_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_job_setup::*)())&_dh_job_setup::dtor__dh_job_setup)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
