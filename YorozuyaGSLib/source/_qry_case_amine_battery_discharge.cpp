#include <_qry_case_amine_battery_discharge.hpp>


START_ATF_NAMESPACE
    _qry_case_amine_battery_discharge::_qry_case_amine_battery_discharge()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_amine_battery_discharge*);
        (org_ptr(0x1402d42f0L))(this);
    };
    void _qry_case_amine_battery_discharge::ctor__qry_case_amine_battery_discharge()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_amine_battery_discharge*);
        (org_ptr(0x1402d42f0L))(this);
    };
    int _qry_case_amine_battery_discharge::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_amine_battery_discharge*);
        return (org_ptr(0x1402d4310L))(this);
    };
END_ATF_NAMESPACE
