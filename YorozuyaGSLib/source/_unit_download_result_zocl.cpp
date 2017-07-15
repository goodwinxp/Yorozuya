#include <_unit_download_result_zocl.hpp>


START_ATF_NAMESPACE
    _unit_download_result_zocl::_unit_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _unit_download_result_zocl*);
        (org_ptr(0x1400ef730L))(this);
    };
    void _unit_download_result_zocl::ctor__unit_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _unit_download_result_zocl*);
        (org_ptr(0x1400ef730L))(this);
    };
    int _unit_download_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _unit_download_result_zocl*);
        return (org_ptr(0x1400ef7a0L))(this);
    };
    _unit_download_result_zocl::_list::_list()
    {
        using org_ptr = void (WINAPIV*)(struct _unit_download_result_zocl::_list*);
        (org_ptr(0x1400ef7f0L))(this);
    };
    void _unit_download_result_zocl::_list::ctor__list()
    {
        using org_ptr = void (WINAPIV*)(struct _unit_download_result_zocl::_list*);
        (org_ptr(0x1400ef7f0L))(this);
    };
END_ATF_NAMESPACE
