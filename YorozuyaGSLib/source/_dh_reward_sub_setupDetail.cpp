#include <_dh_reward_sub_setupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_dh_reward_sub_setupctor__dh_reward_sub_setup2_ptr _dh_reward_sub_setupctor__dh_reward_sub_setup2_next(nullptr);
        Info::_dh_reward_sub_setupctor__dh_reward_sub_setup2_clbk _dh_reward_sub_setupctor__dh_reward_sub_setup2_user(nullptr);
        
        
        Info::_dh_reward_sub_setupdtor__dh_reward_sub_setup7_ptr _dh_reward_sub_setupdtor__dh_reward_sub_setup7_next(nullptr);
        Info::_dh_reward_sub_setupdtor__dh_reward_sub_setup7_clbk _dh_reward_sub_setupdtor__dh_reward_sub_setup7_user(nullptr);
        
        
        void _dh_reward_sub_setupctor__dh_reward_sub_setup2_wrapper(struct _dh_reward_sub_setup* _this)
        {
           _dh_reward_sub_setupctor__dh_reward_sub_setup2_user(_this, _dh_reward_sub_setupctor__dh_reward_sub_setup2_next);
        };
        
        void _dh_reward_sub_setupdtor__dh_reward_sub_setup7_wrapper(struct _dh_reward_sub_setup* _this)
        {
           _dh_reward_sub_setupdtor__dh_reward_sub_setup7_user(_this, _dh_reward_sub_setupdtor__dh_reward_sub_setup7_next);
        };
        
        ::std::array<hook_record, 2> _dh_reward_sub_setup_functions = 
        {
            _hook_record {
                (LPVOID)0x1402725a0L,
                (LPVOID *)&_dh_reward_sub_setupctor__dh_reward_sub_setup2_user,
                (LPVOID *)&_dh_reward_sub_setupctor__dh_reward_sub_setup2_next,
                (LPVOID)cast_pointer_function(_dh_reward_sub_setupctor__dh_reward_sub_setup2_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_reward_sub_setup::*)())&_dh_reward_sub_setup::ctor__dh_reward_sub_setup)
            },
            _hook_record {
                (LPVOID)0x140272690L,
                (LPVOID *)&_dh_reward_sub_setupdtor__dh_reward_sub_setup7_user,
                (LPVOID *)&_dh_reward_sub_setupdtor__dh_reward_sub_setup7_next,
                (LPVOID)cast_pointer_function(_dh_reward_sub_setupdtor__dh_reward_sub_setup7_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_reward_sub_setup::*)())&_dh_reward_sub_setup::dtor__dh_reward_sub_setup)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
