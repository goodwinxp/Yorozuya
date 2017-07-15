#include <_animus_download_result_zocl.hpp>


START_ATF_NAMESPACE
    _animus_download_result_zocl::_animus_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _animus_download_result_zocl*);
        (org_ptr(0x1400ef840L))(this);
    };
    void _animus_download_result_zocl::ctor__animus_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _animus_download_result_zocl*);
        (org_ptr(0x1400ef840L))(this);
    };
    int _animus_download_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _animus_download_result_zocl*);
        return (org_ptr(0x1400ef860L))(this);
    };
    
END_ATF_NAMESPACE
