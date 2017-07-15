#include <_quest_history_download_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_quest_history_download_result_zoclctor__quest_history_download_result_zocl2_ptr _quest_history_download_result_zoclctor__quest_history_download_result_zocl2_next(nullptr);
        Info::_quest_history_download_result_zoclctor__quest_history_download_result_zocl2_clbk _quest_history_download_result_zoclctor__quest_history_download_result_zocl2_user(nullptr);
        
        Info::_quest_history_download_result_zoclsize4_ptr _quest_history_download_result_zoclsize4_next(nullptr);
        Info::_quest_history_download_result_zoclsize4_clbk _quest_history_download_result_zoclsize4_user(nullptr);
        
        
        void _quest_history_download_result_zoclctor__quest_history_download_result_zocl2_wrapper(struct _quest_history_download_result_zocl* _this)
        {
           _quest_history_download_result_zoclctor__quest_history_download_result_zocl2_user(_this, _quest_history_download_result_zoclctor__quest_history_download_result_zocl2_next);
        };
        int _quest_history_download_result_zoclsize4_wrapper(struct _quest_history_download_result_zocl* _this)
        {
           return _quest_history_download_result_zoclsize4_user(_this, _quest_history_download_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _quest_history_download_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef6c0L,
                (LPVOID *)&_quest_history_download_result_zoclctor__quest_history_download_result_zocl2_user,
                (LPVOID *)&_quest_history_download_result_zoclctor__quest_history_download_result_zocl2_next,
                (LPVOID)cast_pointer_function(_quest_history_download_result_zoclctor__quest_history_download_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_quest_history_download_result_zocl::*)())&_quest_history_download_result_zocl::ctor__quest_history_download_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1400ef6e0L,
                (LPVOID *)&_quest_history_download_result_zoclsize4_user,
                (LPVOID *)&_quest_history_download_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_quest_history_download_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_quest_history_download_result_zocl::*)())&_quest_history_download_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
