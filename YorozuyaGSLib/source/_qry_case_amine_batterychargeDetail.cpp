#include <_qry_case_amine_batterychargeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_amine_batterychargector__qry_case_amine_batterycharge2_ptr _qry_case_amine_batterychargector__qry_case_amine_batterycharge2_next(nullptr);
        Info::_qry_case_amine_batterychargector__qry_case_amine_batterycharge2_clbk _qry_case_amine_batterychargector__qry_case_amine_batterycharge2_user(nullptr);
        
        Info::_qry_case_amine_batterychargesize4_ptr _qry_case_amine_batterychargesize4_next(nullptr);
        Info::_qry_case_amine_batterychargesize4_clbk _qry_case_amine_batterychargesize4_user(nullptr);
        
        
        void _qry_case_amine_batterychargector__qry_case_amine_batterycharge2_wrapper(struct _qry_case_amine_batterycharge* _this)
        {
           _qry_case_amine_batterychargector__qry_case_amine_batterycharge2_user(_this, _qry_case_amine_batterychargector__qry_case_amine_batterycharge2_next);
        };
        int _qry_case_amine_batterychargesize4_wrapper(struct _qry_case_amine_batterycharge* _this)
        {
           return _qry_case_amine_batterychargesize4_user(_this, _qry_case_amine_batterychargesize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_amine_batterycharge_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d4200L,
                (LPVOID *)&_qry_case_amine_batterychargector__qry_case_amine_batterycharge2_user,
                (LPVOID *)&_qry_case_amine_batterychargector__qry_case_amine_batterycharge2_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_batterychargector__qry_case_amine_batterycharge2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_amine_batterycharge::*)())&_qry_case_amine_batterycharge::ctor__qry_case_amine_batterycharge)
            },
            _hook_record {
                (LPVOID)0x1402d42e0L,
                (LPVOID *)&_qry_case_amine_batterychargesize4_user,
                (LPVOID *)&_qry_case_amine_batterychargesize4_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_batterychargesize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_amine_batterycharge::*)())&_qry_case_amine_batterycharge::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
