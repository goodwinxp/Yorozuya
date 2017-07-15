#include <_force_download_result_zocl.hpp>


START_ATF_NAMESPACE
    _force_download_result_zocl::_force_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _force_download_result_zocl*);
        (org_ptr(0x1400ef500L))(this);
    };
    void _force_download_result_zocl::ctor__force_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _force_download_result_zocl*);
        (org_ptr(0x1400ef500L))(this);
    };
    int _force_download_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _force_download_result_zocl*);
        return (org_ptr(0x1400ef520L))(this);
    };
    
END_ATF_NAMESPACE
