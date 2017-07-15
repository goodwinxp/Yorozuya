#include <_pt_appoint_inform_request_zocl.hpp>


START_ATF_NAMESPACE
    _pt_appoint_inform_request_zocl::_pt_appoint_inform_request_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_appoint_inform_request_zocl*);
        (org_ptr(0x1402b9880L))(this);
    };
    void _pt_appoint_inform_request_zocl::ctor__pt_appoint_inform_request_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_appoint_inform_request_zocl*);
        (org_ptr(0x1402b9880L))(this);
    };
    int _pt_appoint_inform_request_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_appoint_inform_request_zocl*);
        return (org_ptr(0x1402b9c50L))(this);
    };
    _pt_appoint_inform_request_zocl::__body::__body()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_appoint_inform_request_zocl::__body*);
        (org_ptr(0x1402b98e0L))(this);
    };
    void _pt_appoint_inform_request_zocl::__body::ctor___body()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_appoint_inform_request_zocl::__body*);
        (org_ptr(0x1402b98e0L))(this);
    };
END_ATF_NAMESPACE
