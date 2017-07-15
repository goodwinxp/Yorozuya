#include <_pvp_rank_list_result_data_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_pvp_rank_list_result_data_zoclctor__pvp_rank_list_result_data_zocl2_ptr _pvp_rank_list_result_data_zoclctor__pvp_rank_list_result_data_zocl2_next(nullptr);
        Info::_pvp_rank_list_result_data_zoclctor__pvp_rank_list_result_data_zocl2_clbk _pvp_rank_list_result_data_zoclctor__pvp_rank_list_result_data_zocl2_user(nullptr);
        
        Info::_pvp_rank_list_result_data_zoclsize4_ptr _pvp_rank_list_result_data_zoclsize4_next(nullptr);
        Info::_pvp_rank_list_result_data_zoclsize4_clbk _pvp_rank_list_result_data_zoclsize4_user(nullptr);
        
        
        void _pvp_rank_list_result_data_zoclctor__pvp_rank_list_result_data_zocl2_wrapper(struct _pvp_rank_list_result_data_zocl* _this)
        {
           _pvp_rank_list_result_data_zoclctor__pvp_rank_list_result_data_zocl2_user(_this, _pvp_rank_list_result_data_zoclctor__pvp_rank_list_result_data_zocl2_next);
        };
        int _pvp_rank_list_result_data_zoclsize4_wrapper(struct _pvp_rank_list_result_data_zocl* _this)
        {
           return _pvp_rank_list_result_data_zoclsize4_user(_this, _pvp_rank_list_result_data_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _pvp_rank_list_result_data_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14032f000L,
                (LPVOID *)&_pvp_rank_list_result_data_zoclctor__pvp_rank_list_result_data_zocl2_user,
                (LPVOID *)&_pvp_rank_list_result_data_zoclctor__pvp_rank_list_result_data_zocl2_next,
                (LPVOID)cast_pointer_function(_pvp_rank_list_result_data_zoclctor__pvp_rank_list_result_data_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_pvp_rank_list_result_data_zocl::*)())&_pvp_rank_list_result_data_zocl::ctor__pvp_rank_list_result_data_zocl)
            },
            _hook_record {
                (LPVOID)0x14032f020L,
                (LPVOID *)&_pvp_rank_list_result_data_zoclsize4_user,
                (LPVOID *)&_pvp_rank_list_result_data_zoclsize4_next,
                (LPVOID)cast_pointer_function(_pvp_rank_list_result_data_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_pvp_rank_list_result_data_zocl::*)())&_pvp_rank_list_result_data_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
