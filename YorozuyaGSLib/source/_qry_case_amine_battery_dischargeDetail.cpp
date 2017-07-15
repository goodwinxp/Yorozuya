#include <_qry_case_amine_battery_dischargeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_ptr _qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_next(nullptr);
        Info::_qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_clbk _qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_user(nullptr);
        
        Info::_qry_case_amine_battery_dischargesize4_ptr _qry_case_amine_battery_dischargesize4_next(nullptr);
        Info::_qry_case_amine_battery_dischargesize4_clbk _qry_case_amine_battery_dischargesize4_user(nullptr);
        
        
        void _qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_wrapper(struct _qry_case_amine_battery_discharge* _this)
        {
           _qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_user(_this, _qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_next);
        };
        int _qry_case_amine_battery_dischargesize4_wrapper(struct _qry_case_amine_battery_discharge* _this)
        {
           return _qry_case_amine_battery_dischargesize4_user(_this, _qry_case_amine_battery_dischargesize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_amine_battery_discharge_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d42f0L,
                (LPVOID *)&_qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_user,
                (LPVOID *)&_qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_amine_battery_discharge::*)())&_qry_case_amine_battery_discharge::ctor__qry_case_amine_battery_discharge)
            },
            _hook_record {
                (LPVOID)0x1402d4310L,
                (LPVOID *)&_qry_case_amine_battery_dischargesize4_user,
                (LPVOID *)&_qry_case_amine_battery_dischargesize4_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_battery_dischargesize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_amine_battery_discharge::*)())&_qry_case_amine_battery_discharge::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
