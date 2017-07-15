#include <_pt_query_appoint_zocl.hpp>


START_ATF_NAMESPACE
    _pt_query_appoint_zocl::_pt_query_appoint_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_query_appoint_zocl*);
        (org_ptr(0x1402b9c60L))(this);
    };
    void _pt_query_appoint_zocl::ctor__pt_query_appoint_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_query_appoint_zocl*);
        (org_ptr(0x1402b9c60L))(this);
    };
    int _pt_query_appoint_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_query_appoint_zocl*);
        return (org_ptr(0x1402b9cb0L))(this);
    };
END_ATF_NAMESPACE
