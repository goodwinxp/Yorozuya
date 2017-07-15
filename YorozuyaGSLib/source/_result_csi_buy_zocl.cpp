#include <_result_csi_buy_zocl.hpp>


START_ATF_NAMESPACE
    _result_csi_buy_zocl::_result_csi_buy_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _result_csi_buy_zocl*);
        (org_ptr(0x1402f2fb0L))(this);
    };
    void _result_csi_buy_zocl::ctor__result_csi_buy_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _result_csi_buy_zocl*);
        (org_ptr(0x1402f2fb0L))(this);
    };
    int _result_csi_buy_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _result_csi_buy_zocl*);
        return (org_ptr(0x1402f2fe0L))(this);
    };
    
END_ATF_NAMESPACE
