#include <_pt_inform_appoint_zocl.hpp>


START_ATF_NAMESPACE
    _pt_inform_appoint_zocl::_pt_inform_appoint_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_inform_appoint_zocl*);
        (org_ptr(0x1402bd6c0L))(this);
    };
    void _pt_inform_appoint_zocl::ctor__pt_inform_appoint_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_inform_appoint_zocl*);
        (org_ptr(0x1402bd6c0L))(this);
    };
    int _pt_inform_appoint_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_inform_appoint_zocl*);
        return (org_ptr(0x1402bd710L))(this);
    };
END_ATF_NAMESPACE
