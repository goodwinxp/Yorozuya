#include <qry_case_golden_box_item.hpp>


START_ATF_NAMESPACE
    qry_case_golden_box_item::qry_case_golden_box_item()
    {
        using org_ptr = void (WINAPIV*)(struct qry_case_golden_box_item*);
        (org_ptr(0x140416bc0L))(this);
    };
    void qry_case_golden_box_item::ctor_qry_case_golden_box_item()
    {
        using org_ptr = void (WINAPIV*)(struct qry_case_golden_box_item*);
        (org_ptr(0x140416bc0L))(this);
    };
    int qry_case_golden_box_item::size()
    {
        using org_ptr = int (WINAPIV*)(struct qry_case_golden_box_item*);
        return (org_ptr(0x140416bb0L))(this);
    };
END_ATF_NAMESPACE
