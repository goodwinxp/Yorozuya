#include <_unmannedtrader_re_regist_result_zocl.hpp>


START_ATF_NAMESPACE
    int _unmannedtrader_re_regist_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _unmannedtrader_re_regist_result_zocl*);
        return (org_ptr(0x14035f8b0L))(this);
    };
    
END_ATF_NAMESPACE
