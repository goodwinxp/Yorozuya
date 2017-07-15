#include <_trunk_download_result_zocl.hpp>


START_ATF_NAMESPACE
    _trunk_download_result_zocl::_trunk_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _trunk_download_result_zocl*);
        (org_ptr(0x1400eff00L))(this);
    };
    void _trunk_download_result_zocl::ctor__trunk_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _trunk_download_result_zocl*);
        (org_ptr(0x1400eff00L))(this);
    };
    int _trunk_download_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _trunk_download_result_zocl*);
        return (org_ptr(0x1400eff30L))(this);
    };
    
END_ATF_NAMESPACE
