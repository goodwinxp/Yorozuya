#include <_gm_msg_gmcall_list_response_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_gm_msg_gmcall_list_response_zoclInit2_ptr _gm_msg_gmcall_list_response_zoclInit2_next(nullptr);
        Info::_gm_msg_gmcall_list_response_zoclInit2_clbk _gm_msg_gmcall_list_response_zoclInit2_user(nullptr);
        
        void _gm_msg_gmcall_list_response_zoclInit2_wrapper(struct _gm_msg_gmcall_list_response_zocl* _this)
        {
           _gm_msg_gmcall_list_response_zoclInit2_user(_this, _gm_msg_gmcall_list_response_zoclInit2_next);
        };
        
        ::std::array<hook_record, 1> _gm_msg_gmcall_list_response_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402ab6a0L,
                (LPVOID *)&_gm_msg_gmcall_list_response_zoclInit2_user,
                (LPVOID *)&_gm_msg_gmcall_list_response_zoclInit2_next,
                (LPVOID)cast_pointer_function(_gm_msg_gmcall_list_response_zoclInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_gm_msg_gmcall_list_response_zocl::*)())&_gm_msg_gmcall_list_response_zocl::Init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
