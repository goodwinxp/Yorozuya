#include <_qry_case_contsave.hpp>


START_ATF_NAMESPACE
    _qry_case_contsave::_qry_case_contsave()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_contsave*);
        (org_ptr(0x14011fd90L))(this);
    };
    void _qry_case_contsave::ctor__qry_case_contsave()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_contsave*);
        (org_ptr(0x14011fd90L))(this);
    };
    int _qry_case_contsave::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_contsave*);
        return (org_ptr(0x14011fd80L))(this);
    };
    _qry_case_contsave::~_qry_case_contsave()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_contsave*);
        (org_ptr(0x14011fe40L))(this);
    };
    void _qry_case_contsave::dtor__qry_case_contsave()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_contsave*);
        (org_ptr(0x14011fe40L))(this);
    };
END_ATF_NAMESPACE
