#include <_store_list_result_zocl.hpp>


START_ATF_NAMESPACE
    _store_list_result_zocl::_store_list_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _store_list_result_zocl*);
        (org_ptr(0x1400ef8b0L))(this);
    };
    void _store_list_result_zocl::ctor__store_list_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _store_list_result_zocl*);
        (org_ptr(0x1400ef8b0L))(this);
    };
    int _store_list_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _store_list_result_zocl*);
        return (org_ptr(0x1400ef8d0L))(this);
    };
    
END_ATF_NAMESPACE
