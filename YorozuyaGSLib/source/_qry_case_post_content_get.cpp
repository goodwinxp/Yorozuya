#include <_qry_case_post_content_get.hpp>


START_ATF_NAMESPACE
    _qry_case_post_content_get::_qry_case_post_content_get()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_post_content_get*);
        (org_ptr(0x1400ca730L))(this);
    };
    void _qry_case_post_content_get::ctor__qry_case_post_content_get()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_post_content_get*);
        (org_ptr(0x1400ca730L))(this);
    };
    int _qry_case_post_content_get::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_post_content_get*);
        return (org_ptr(0x1400ca780L))(this);
    };
END_ATF_NAMESPACE
