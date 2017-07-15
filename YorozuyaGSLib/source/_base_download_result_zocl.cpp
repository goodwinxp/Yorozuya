#include <_base_download_result_zocl.hpp>


START_ATF_NAMESPACE
    int _base_download_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _base_download_result_zocl*);
        return (org_ptr(0x1400ef280L))(this);
    };
    
    
END_ATF_NAMESPACE
