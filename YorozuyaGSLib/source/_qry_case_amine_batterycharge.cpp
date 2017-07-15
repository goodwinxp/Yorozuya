#include <_qry_case_amine_batterycharge.hpp>


START_ATF_NAMESPACE
    _qry_case_amine_batterycharge::_qry_case_amine_batterycharge()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_amine_batterycharge*);
        (org_ptr(0x1402d4200L))(this);
    };
    void _qry_case_amine_batterycharge::ctor__qry_case_amine_batterycharge()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_amine_batterycharge*);
        (org_ptr(0x1402d4200L))(this);
    };
    int _qry_case_amine_batterycharge::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_amine_batterycharge*);
        return (org_ptr(0x1402d42e0L))(this);
    };
END_ATF_NAMESPACE
