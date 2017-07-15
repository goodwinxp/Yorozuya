#include <_buddy_download_result_zocl.hpp>


START_ATF_NAMESPACE
    _buddy_download_result_zocl::_buddy_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _buddy_download_result_zocl*);
        (org_ptr(0x1400909e0L))(this);
    };
    void _buddy_download_result_zocl::ctor__buddy_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _buddy_download_result_zocl*);
        (org_ptr(0x1400909e0L))(this);
    };
    int _buddy_download_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _buddy_download_result_zocl*);
        return (org_ptr(0x140090a00L))(this);
    };
END_ATF_NAMESPACE
