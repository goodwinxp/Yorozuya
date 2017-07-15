#include <_MONEY_SUPPLY_DATADetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_MONEY_SUPPLY_DATAinit2_ptr _MONEY_SUPPLY_DATAinit2_next(nullptr);
        Info::_MONEY_SUPPLY_DATAinit2_clbk _MONEY_SUPPLY_DATAinit2_user(nullptr);
        
        Info::_MONEY_SUPPLY_DATAsize4_ptr _MONEY_SUPPLY_DATAsize4_next(nullptr);
        Info::_MONEY_SUPPLY_DATAsize4_clbk _MONEY_SUPPLY_DATAsize4_user(nullptr);
        
        void _MONEY_SUPPLY_DATAinit2_wrapper(struct _MONEY_SUPPLY_DATA* _this)
        {
           _MONEY_SUPPLY_DATAinit2_user(_this, _MONEY_SUPPLY_DATAinit2_next);
        };
        int _MONEY_SUPPLY_DATAsize4_wrapper(struct _MONEY_SUPPLY_DATA* _this)
        {
           return _MONEY_SUPPLY_DATAsize4_user(_this, _MONEY_SUPPLY_DATAsize4_next);
        };
        
        ::std::array<hook_record, 2> _MONEY_SUPPLY_DATA_functions = 
        {
            _hook_record {
                (LPVOID)0x140430740L,
                (LPVOID *)&_MONEY_SUPPLY_DATAinit2_user,
                (LPVOID *)&_MONEY_SUPPLY_DATAinit2_next,
                (LPVOID)cast_pointer_function(_MONEY_SUPPLY_DATAinit2_wrapper),
                (LPVOID)cast_pointer_function((void(_MONEY_SUPPLY_DATA::*)())&_MONEY_SUPPLY_DATA::init)
            },
            _hook_record {
                (LPVOID)0x140430790L,
                (LPVOID *)&_MONEY_SUPPLY_DATAsize4_user,
                (LPVOID *)&_MONEY_SUPPLY_DATAsize4_next,
                (LPVOID)cast_pointer_function(_MONEY_SUPPLY_DATAsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_MONEY_SUPPLY_DATA::*)())&_MONEY_SUPPLY_DATA::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
