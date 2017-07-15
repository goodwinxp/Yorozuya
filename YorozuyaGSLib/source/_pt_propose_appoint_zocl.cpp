#include <_pt_propose_appoint_zocl.hpp>


START_ATF_NAMESPACE
    _pt_propose_appoint_zocl::_pt_propose_appoint_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_propose_appoint_zocl*);
        (org_ptr(0x1402b9960L))(this);
    };
    void _pt_propose_appoint_zocl::ctor__pt_propose_appoint_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_propose_appoint_zocl*);
        (org_ptr(0x1402b9960L))(this);
    };
    int _pt_propose_appoint_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_propose_appoint_zocl*);
        return (org_ptr(0x1402b99b0L))(this);
    };
END_ATF_NAMESPACE
