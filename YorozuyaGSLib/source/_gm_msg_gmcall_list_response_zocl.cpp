#include <_gm_msg_gmcall_list_response_zocl.hpp>


START_ATF_NAMESPACE
    void _gm_msg_gmcall_list_response_zocl::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _gm_msg_gmcall_list_response_zocl*);
        (org_ptr(0x1402ab6a0L))(this);
    };
    void _gm_msg_gmcall_list_response_zocl::_call_node::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _gm_msg_gmcall_list_response_zocl::_call_node*);
        (org_ptr(0x1402ab760L))(this);
    };
END_ATF_NAMESPACE
