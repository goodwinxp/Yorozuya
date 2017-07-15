#include <_pt_result_code_zocl.hpp>


START_ATF_NAMESPACE
    _pt_result_code_zocl::_pt_result_code_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_result_code_zocl*);
        (org_ptr(0x1402bd480L))(this);
    };
    void _pt_result_code_zocl::ctor__pt_result_code_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_result_code_zocl*);
        (org_ptr(0x1402bd480L))(this);
    };
    int _pt_result_code_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_result_code_zocl*);
        return (org_ptr(0x1402bd4d0L))(this);
    };
END_ATF_NAMESPACE
