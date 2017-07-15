#include <_money_supply_gatering_inform_zowbDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_money_supply_gatering_inform_zowbinit2_ptr _money_supply_gatering_inform_zowbinit2_next(nullptr);
        Info::_money_supply_gatering_inform_zowbinit2_clbk _money_supply_gatering_inform_zowbinit2_user(nullptr);
        
        void _money_supply_gatering_inform_zowbinit2_wrapper(struct _money_supply_gatering_inform_zowb* _this)
        {
           _money_supply_gatering_inform_zowbinit2_user(_this, _money_supply_gatering_inform_zowbinit2_next);
        };
        
        ::std::array<hook_record, 1> _money_supply_gatering_inform_zowb_functions = 
        {
            _hook_record {
                (LPVOID)0x1404307a0L,
                (LPVOID *)&_money_supply_gatering_inform_zowbinit2_user,
                (LPVOID *)&_money_supply_gatering_inform_zowbinit2_next,
                (LPVOID)cast_pointer_function(_money_supply_gatering_inform_zowbinit2_wrapper),
                (LPVOID)cast_pointer_function((void(_money_supply_gatering_inform_zowb::*)())&_money_supply_gatering_inform_zowb::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
