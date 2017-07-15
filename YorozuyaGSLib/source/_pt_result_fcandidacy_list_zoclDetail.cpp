#include <_pt_result_fcandidacy_list_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_pt_result_fcandidacy_list_zoclctor__pt_result_fcandidacy_list_zocl2_ptr _pt_result_fcandidacy_list_zoclctor__pt_result_fcandidacy_list_zocl2_next(nullptr);
        Info::_pt_result_fcandidacy_list_zoclctor__pt_result_fcandidacy_list_zocl2_clbk _pt_result_fcandidacy_list_zoclctor__pt_result_fcandidacy_list_zocl2_user(nullptr);
        
        Info::_pt_result_fcandidacy_list_zoclsize4_ptr _pt_result_fcandidacy_list_zoclsize4_next(nullptr);
        Info::_pt_result_fcandidacy_list_zoclsize4_clbk _pt_result_fcandidacy_list_zoclsize4_user(nullptr);
        
        
        void _pt_result_fcandidacy_list_zoclctor__pt_result_fcandidacy_list_zocl2_wrapper(struct _pt_result_fcandidacy_list_zocl* _this)
        {
           _pt_result_fcandidacy_list_zoclctor__pt_result_fcandidacy_list_zocl2_user(_this, _pt_result_fcandidacy_list_zoclctor__pt_result_fcandidacy_list_zocl2_next);
        };
        int _pt_result_fcandidacy_list_zoclsize4_wrapper(struct _pt_result_fcandidacy_list_zocl* _this)
        {
           return _pt_result_fcandidacy_list_zoclsize4_user(_this, _pt_result_fcandidacy_list_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _pt_result_fcandidacy_list_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b7d30L,
                (LPVOID *)&_pt_result_fcandidacy_list_zoclctor__pt_result_fcandidacy_list_zocl2_user,
                (LPVOID *)&_pt_result_fcandidacy_list_zoclctor__pt_result_fcandidacy_list_zocl2_next,
                (LPVOID)cast_pointer_function(_pt_result_fcandidacy_list_zoclctor__pt_result_fcandidacy_list_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_pt_result_fcandidacy_list_zocl::*)())&_pt_result_fcandidacy_list_zocl::ctor__pt_result_fcandidacy_list_zocl)
            },
            _hook_record {
                (LPVOID)0x1402b7e30L,
                (LPVOID *)&_pt_result_fcandidacy_list_zoclsize4_user,
                (LPVOID *)&_pt_result_fcandidacy_list_zoclsize4_next,
                (LPVOID)cast_pointer_function(_pt_result_fcandidacy_list_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_pt_result_fcandidacy_list_zocl::*)())&_pt_result_fcandidacy_list_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
