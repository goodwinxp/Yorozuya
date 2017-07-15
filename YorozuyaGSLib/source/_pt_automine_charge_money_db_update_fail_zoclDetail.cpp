#include <_pt_automine_charge_money_db_update_fail_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_pt_automine_charge_money_db_update_fail_zoclsize2_ptr _pt_automine_charge_money_db_update_fail_zoclsize2_next(nullptr);
        Info::_pt_automine_charge_money_db_update_fail_zoclsize2_clbk _pt_automine_charge_money_db_update_fail_zoclsize2_user(nullptr);
        
        int _pt_automine_charge_money_db_update_fail_zoclsize2_wrapper(struct _pt_automine_charge_money_db_update_fail_zocl* _this)
        {
           return _pt_automine_charge_money_db_update_fail_zoclsize2_user(_this, _pt_automine_charge_money_db_update_fail_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _pt_automine_charge_money_db_update_fail_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d4020L,
                (LPVOID *)&_pt_automine_charge_money_db_update_fail_zoclsize2_user,
                (LPVOID *)&_pt_automine_charge_money_db_update_fail_zoclsize2_next,
                (LPVOID)cast_pointer_function(_pt_automine_charge_money_db_update_fail_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_pt_automine_charge_money_db_update_fail_zocl::*)())&_pt_automine_charge_money_db_update_fail_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
