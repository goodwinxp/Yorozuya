#include <_radar_char_list_result_zocl.hpp>


START_ATF_NAMESPACE
    _radar_char_list_result_zocl::_radar_char_list_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _radar_char_list_result_zocl*);
        (org_ptr(0x1400f03e0L))(this);
    };
    void _radar_char_list_result_zocl::ctor__radar_char_list_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _radar_char_list_result_zocl*);
        (org_ptr(0x1400f03e0L))(this);
    };
    int _radar_char_list_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _radar_char_list_result_zocl*);
        return (org_ptr(0x1400f0410L))(this);
    };
    
END_ATF_NAMESPACE
