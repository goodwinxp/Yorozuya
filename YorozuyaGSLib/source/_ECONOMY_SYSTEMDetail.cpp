#include <_ECONOMY_SYSTEMDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_ECONOMY_SYSTEMCurTradeMoneyInit2_ptr _ECONOMY_SYSTEMCurTradeMoneyInit2_next(nullptr);
        Info::_ECONOMY_SYSTEMCurTradeMoneyInit2_clbk _ECONOMY_SYSTEMCurTradeMoneyInit2_user(nullptr);
        
        Info::_ECONOMY_SYSTEMInit4_ptr _ECONOMY_SYSTEMInit4_next(nullptr);
        Info::_ECONOMY_SYSTEMInit4_clbk _ECONOMY_SYSTEMInit4_user(nullptr);
        
        
        Info::_ECONOMY_SYSTEMctor__ECONOMY_SYSTEM6_ptr _ECONOMY_SYSTEMctor__ECONOMY_SYSTEM6_next(nullptr);
        Info::_ECONOMY_SYSTEMctor__ECONOMY_SYSTEM6_clbk _ECONOMY_SYSTEMctor__ECONOMY_SYSTEM6_user(nullptr);
        
        void _ECONOMY_SYSTEMCurTradeMoneyInit2_wrapper(struct _ECONOMY_SYSTEM* _this)
        {
           _ECONOMY_SYSTEMCurTradeMoneyInit2_user(_this, _ECONOMY_SYSTEMCurTradeMoneyInit2_next);
        };
        void _ECONOMY_SYSTEMInit4_wrapper(struct _ECONOMY_SYSTEM* _this)
        {
           _ECONOMY_SYSTEMInit4_user(_this, _ECONOMY_SYSTEMInit4_next);
        };
        
        void _ECONOMY_SYSTEMctor__ECONOMY_SYSTEM6_wrapper(struct _ECONOMY_SYSTEM* _this)
        {
           _ECONOMY_SYSTEMctor__ECONOMY_SYSTEM6_user(_this, _ECONOMY_SYSTEMctor__ECONOMY_SYSTEM6_next);
        };
        
        ::std::array<hook_record, 3> _ECONOMY_SYSTEM_functions = 
        {
            _hook_record {
                (LPVOID)0x1402a5bc0L,
                (LPVOID *)&_ECONOMY_SYSTEMCurTradeMoneyInit2_user,
                (LPVOID *)&_ECONOMY_SYSTEMCurTradeMoneyInit2_next,
                (LPVOID)cast_pointer_function(_ECONOMY_SYSTEMCurTradeMoneyInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_ECONOMY_SYSTEM::*)())&_ECONOMY_SYSTEM::CurTradeMoneyInit)
            },
            _hook_record {
                (LPVOID)0x1402a5b40L,
                (LPVOID *)&_ECONOMY_SYSTEMInit4_user,
                (LPVOID *)&_ECONOMY_SYSTEMInit4_next,
                (LPVOID)cast_pointer_function(_ECONOMY_SYSTEMInit4_wrapper),
                (LPVOID)cast_pointer_function((void(_ECONOMY_SYSTEM::*)())&_ECONOMY_SYSTEM::Init)
            },
            _hook_record {
                (LPVOID)0x1402a5cf0L,
                (LPVOID *)&_ECONOMY_SYSTEMctor__ECONOMY_SYSTEM6_user,
                (LPVOID *)&_ECONOMY_SYSTEMctor__ECONOMY_SYSTEM6_next,
                (LPVOID)cast_pointer_function(_ECONOMY_SYSTEMctor__ECONOMY_SYSTEM6_wrapper),
                (LPVOID)cast_pointer_function((void(_ECONOMY_SYSTEM::*)())&_ECONOMY_SYSTEM::ctor__ECONOMY_SYSTEM)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
