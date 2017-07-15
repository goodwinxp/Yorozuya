#include <_qry_case_discharge_patriarch.hpp>


START_ATF_NAMESPACE
    _qry_case_discharge_patriarch::_qry_case_discharge_patriarch(char byR, unsigned int dwS, unsigned int dwE)
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_discharge_patriarch*, char, unsigned int, unsigned int);
        (org_ptr(0x1402b6630L))(this, byR, dwS, dwE);
    };
    void _qry_case_discharge_patriarch::ctor__qry_case_discharge_patriarch(char byR, unsigned int dwS, unsigned int dwE)
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_discharge_patriarch*, char, unsigned int, unsigned int);
        (org_ptr(0x1402b6630L))(this, byR, dwS, dwE);
    };
    int _qry_case_discharge_patriarch::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_discharge_patriarch*);
        return (org_ptr(0x1402b6680L))(this);
    };
END_ATF_NAMESPACE
