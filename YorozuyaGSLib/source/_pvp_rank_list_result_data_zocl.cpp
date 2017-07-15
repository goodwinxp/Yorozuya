#include <_pvp_rank_list_result_data_zocl.hpp>


START_ATF_NAMESPACE
    _pvp_rank_list_result_data_zocl::_pvp_rank_list_result_data_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pvp_rank_list_result_data_zocl*);
        (org_ptr(0x14032f000L))(this);
    };
    void _pvp_rank_list_result_data_zocl::ctor__pvp_rank_list_result_data_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pvp_rank_list_result_data_zocl*);
        (org_ptr(0x14032f000L))(this);
    };
    int _pvp_rank_list_result_data_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pvp_rank_list_result_data_zocl*);
        return (org_ptr(0x14032f020L))(this);
    };
END_ATF_NAMESPACE
