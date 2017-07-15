#include <_TRADE_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_TRADE_DB_BASEClear2_ptr _TRADE_DB_BASEClear2_next(nullptr);
        Info::_TRADE_DB_BASEClear2_clbk _TRADE_DB_BASEClear2_user(nullptr);
        
        Info::_TRADE_DB_BASEInit4_ptr _TRADE_DB_BASEInit4_next(nullptr);
        Info::_TRADE_DB_BASEInit4_clbk _TRADE_DB_BASEInit4_user(nullptr);
        
        
        Info::_TRADE_DB_BASEctor__TRADE_DB_BASE6_ptr _TRADE_DB_BASEctor__TRADE_DB_BASE6_next(nullptr);
        Info::_TRADE_DB_BASEctor__TRADE_DB_BASE6_clbk _TRADE_DB_BASEctor__TRADE_DB_BASE6_user(nullptr);
        
        void _TRADE_DB_BASEClear2_wrapper(struct _TRADE_DB_BASE* _this)
        {
           _TRADE_DB_BASEClear2_user(_this, _TRADE_DB_BASEClear2_next);
        };
        void _TRADE_DB_BASEInit4_wrapper(struct _TRADE_DB_BASE* _this)
        {
           _TRADE_DB_BASEInit4_user(_this, _TRADE_DB_BASEInit4_next);
        };
        
        void _TRADE_DB_BASEctor__TRADE_DB_BASE6_wrapper(struct _TRADE_DB_BASE* _this)
        {
           _TRADE_DB_BASEctor__TRADE_DB_BASE6_user(_this, _TRADE_DB_BASEctor__TRADE_DB_BASE6_next);
        };
        
        ::std::array<hook_record, 3> _TRADE_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140076e70L,
                (LPVOID *)&_TRADE_DB_BASEClear2_user,
                (LPVOID *)&_TRADE_DB_BASEClear2_next,
                (LPVOID)cast_pointer_function(_TRADE_DB_BASEClear2_wrapper),
                (LPVOID)cast_pointer_function((void(_TRADE_DB_BASE::*)())&_TRADE_DB_BASE::Clear)
            },
            _hook_record {
                (LPVOID)0x140077ca0L,
                (LPVOID *)&_TRADE_DB_BASEInit4_user,
                (LPVOID *)&_TRADE_DB_BASEInit4_next,
                (LPVOID)cast_pointer_function(_TRADE_DB_BASEInit4_wrapper),
                (LPVOID)cast_pointer_function((void(_TRADE_DB_BASE::*)())&_TRADE_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140076d40L,
                (LPVOID *)&_TRADE_DB_BASEctor__TRADE_DB_BASE6_user,
                (LPVOID *)&_TRADE_DB_BASEctor__TRADE_DB_BASE6_next,
                (LPVOID)cast_pointer_function(_TRADE_DB_BASEctor__TRADE_DB_BASE6_wrapper),
                (LPVOID)cast_pointer_function((void(_TRADE_DB_BASE::*)())&_TRADE_DB_BASE::ctor__TRADE_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
