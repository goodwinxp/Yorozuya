#include <_qry_case_update_data_for_post_send.hpp>


START_ATF_NAMESPACE
    _qry_case_update_data_for_post_send::_qry_case_update_data_for_post_send()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_update_data_for_post_send*);
        (org_ptr(0x1400ca7e0L))(this);
    };
    void _qry_case_update_data_for_post_send::ctor__qry_case_update_data_for_post_send()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_update_data_for_post_send*);
        (org_ptr(0x1400ca7e0L))(this);
    };
    int _qry_case_update_data_for_post_send::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_update_data_for_post_send*);
        return (org_ptr(0x1400ca7d0L))(this);
    };
END_ATF_NAMESPACE
