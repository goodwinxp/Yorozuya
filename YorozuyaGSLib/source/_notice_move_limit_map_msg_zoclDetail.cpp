#include <_notice_move_limit_map_msg_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_ptr _notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_next(nullptr);
        Info::_notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_clbk _notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_user(nullptr);
        
        
        void _notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_wrapper(struct _notice_move_limit_map_msg_zocl* _this)
        {
           _notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_user(_this, _notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _notice_move_limit_map_msg_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1403a7100L,
                (LPVOID *)&_notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_user,
                (LPVOID *)&_notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_next,
                (LPVOID)cast_pointer_function(_notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_notice_move_limit_map_msg_zocl::*)())&_notice_move_limit_map_msg_zocl::ctor__notice_move_limit_map_msg_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
