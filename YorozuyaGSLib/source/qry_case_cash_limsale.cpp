#include <qry_case_cash_limsale.hpp>


START_ATF_NAMESPACE
    qry_case_cash_limsale::qry_case_cash_limsale()
    {
        using org_ptr = void (WINAPIV*)(struct qry_case_cash_limsale*);
        (org_ptr(0x140304c30L))(this);
    };
    void qry_case_cash_limsale::ctor_qry_case_cash_limsale()
    {
        using org_ptr = void (WINAPIV*)(struct qry_case_cash_limsale*);
        (org_ptr(0x140304c30L))(this);
    };
    int qry_case_cash_limsale::size()
    {
        using org_ptr = int (WINAPIV*)(struct qry_case_cash_limsale*);
        return (org_ptr(0x140304c20L))(this);
    };
END_ATF_NAMESPACE
