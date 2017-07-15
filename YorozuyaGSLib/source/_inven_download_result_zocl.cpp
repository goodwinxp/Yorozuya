#include <_inven_download_result_zocl.hpp>


START_ATF_NAMESPACE
    _inven_download_result_zocl::_inven_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _inven_download_result_zocl*);
        (org_ptr(0x1400ef330L))(this);
    };
    void _inven_download_result_zocl::ctor__inven_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _inven_download_result_zocl*);
        (org_ptr(0x1400ef330L))(this);
    };
    int _inven_download_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _inven_download_result_zocl*);
        return (org_ptr(0x1400ef350L))(this);
    };
    
END_ATF_NAMESPACE
