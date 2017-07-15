#include <_personal_automine_download_zocl.hpp>


START_ATF_NAMESPACE
    int _personal_automine_download_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _personal_automine_download_zocl*);
        return (org_ptr(0x1400ef3c0L))(this);
    };
    
END_ATF_NAMESPACE
