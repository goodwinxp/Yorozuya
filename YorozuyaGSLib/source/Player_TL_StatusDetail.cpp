#include <Player_TL_StatusDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::Player_TL_StatusGetTLStatus2_ptr Player_TL_StatusGetTLStatus2_next(nullptr);
        Info::Player_TL_StatusGetTLStatus2_clbk Player_TL_StatusGetTLStatus2_user(nullptr);
        
        char Player_TL_StatusGetTLStatus2_wrapper(struct Player_TL_Status* _this)
        {
           return Player_TL_StatusGetTLStatus2_user(_this, Player_TL_StatusGetTLStatus2_next);
        };
        
        ::std::array<hook_record, 1> Player_TL_Status_functions = 
        {
            _hook_record {
                (LPVOID)0x1403947c0L,
                (LPVOID *)&Player_TL_StatusGetTLStatus2_user,
                (LPVOID *)&Player_TL_StatusGetTLStatus2_next,
                (LPVOID)cast_pointer_function(Player_TL_StatusGetTLStatus2_wrapper),
                (LPVOID)cast_pointer_function((char(Player_TL_Status::*)())&Player_TL_Status::GetTLStatus)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
