#include <_cum_download_result_zocl.hpp>


START_ATF_NAMESPACE
    _cum_download_result_zocl::_cum_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _cum_download_result_zocl*);
        (org_ptr(0x1400ef420L))(this);
    };
    void _cum_download_result_zocl::ctor__cum_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _cum_download_result_zocl*);
        (org_ptr(0x1400ef420L))(this);
    };
    int _cum_download_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _cum_download_result_zocl*);
        return (org_ptr(0x1400ef480L))(this);
    };
END_ATF_NAMESPACE
