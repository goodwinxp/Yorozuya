#include <_nuclear_result_code_zocl.hpp>


START_ATF_NAMESPACE
    _nuclear_result_code_zocl::_nuclear_result_code_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _nuclear_result_code_zocl*);
        (org_ptr(0x14013e340L))(this);
    };
    void _nuclear_result_code_zocl::ctor__nuclear_result_code_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _nuclear_result_code_zocl*);
        (org_ptr(0x14013e340L))(this);
    };
    int _nuclear_result_code_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _nuclear_result_code_zocl*);
        return (org_ptr(0x14013e390L))(this);
    };
END_ATF_NAMESPACE
