#include <_be_damaged_playerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_be_damaged_playerctor__be_damaged_player2_ptr _be_damaged_playerctor__be_damaged_player2_next(nullptr);
        Info::_be_damaged_playerctor__be_damaged_player2_clbk _be_damaged_playerctor__be_damaged_player2_user(nullptr);
        
        
        void _be_damaged_playerctor__be_damaged_player2_wrapper(struct _be_damaged_player* _this)
        {
           _be_damaged_playerctor__be_damaged_player2_user(_this, _be_damaged_playerctor__be_damaged_player2_next);
        };
        
        ::std::array<hook_record, 1> _be_damaged_player_functions = 
        {
            _hook_record {
                (LPVOID)0x14013e450L,
                (LPVOID *)&_be_damaged_playerctor__be_damaged_player2_user,
                (LPVOID *)&_be_damaged_playerctor__be_damaged_player2_next,
                (LPVOID)cast_pointer_function(_be_damaged_playerctor__be_damaged_player2_wrapper),
                (LPVOID)cast_pointer_function((void(_be_damaged_player::*)())&_be_damaged_player::ctor__be_damaged_player)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
