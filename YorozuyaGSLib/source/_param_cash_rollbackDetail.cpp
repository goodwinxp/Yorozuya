#include <_param_cash_rollbackDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_param_cash_rollbackctor__param_cash_rollback2_ptr _param_cash_rollbackctor__param_cash_rollback2_next(nullptr);
        Info::_param_cash_rollbackctor__param_cash_rollback2_clbk _param_cash_rollbackctor__param_cash_rollback2_user(nullptr);
        
        Info::_param_cash_rollbacksize4_ptr _param_cash_rollbacksize4_next(nullptr);
        Info::_param_cash_rollbacksize4_clbk _param_cash_rollbacksize4_user(nullptr);
        
        
        Info::_param_cash_rollbackdtor__param_cash_rollback6_ptr _param_cash_rollbackdtor__param_cash_rollback6_next(nullptr);
        Info::_param_cash_rollbackdtor__param_cash_rollback6_clbk _param_cash_rollbackdtor__param_cash_rollback6_user(nullptr);
        
        
        void _param_cash_rollbackctor__param_cash_rollback2_wrapper(struct _param_cash_rollback* _this, unsigned int dwAc, unsigned int dwAv, uint16_t wSock)
        {
           _param_cash_rollbackctor__param_cash_rollback2_user(_this, dwAc, dwAv, wSock, _param_cash_rollbackctor__param_cash_rollback2_next);
        };
        int _param_cash_rollbacksize4_wrapper(struct _param_cash_rollback* _this)
        {
           return _param_cash_rollbacksize4_user(_this, _param_cash_rollbacksize4_next);
        };
        
        void _param_cash_rollbackdtor__param_cash_rollback6_wrapper(struct _param_cash_rollback* _this)
        {
           _param_cash_rollbackdtor__param_cash_rollback6_user(_this, _param_cash_rollbackdtor__param_cash_rollback6_next);
        };
        
        ::std::array<hook_record, 3> _param_cash_rollback_functions = 
        {
            _hook_record {
                (LPVOID)0x1402f29b0L,
                (LPVOID *)&_param_cash_rollbackctor__param_cash_rollback2_user,
                (LPVOID *)&_param_cash_rollbackctor__param_cash_rollback2_next,
                (LPVOID)cast_pointer_function(_param_cash_rollbackctor__param_cash_rollback2_wrapper),
                (LPVOID)cast_pointer_function((void(_param_cash_rollback::*)(unsigned int, unsigned int, uint16_t))&_param_cash_rollback::ctor__param_cash_rollback)
            },
            _hook_record {
                (LPVOID)0x1402f2a70L,
                (LPVOID *)&_param_cash_rollbacksize4_user,
                (LPVOID *)&_param_cash_rollbacksize4_next,
                (LPVOID)cast_pointer_function(_param_cash_rollbacksize4_wrapper),
                (LPVOID)cast_pointer_function((int(_param_cash_rollback::*)())&_param_cash_rollback::size)
            },
            _hook_record {
                (LPVOID)0x1402f2a30L,
                (LPVOID *)&_param_cash_rollbackdtor__param_cash_rollback6_user,
                (LPVOID *)&_param_cash_rollbackdtor__param_cash_rollback6_next,
                (LPVOID)cast_pointer_function(_param_cash_rollbackdtor__param_cash_rollback6_wrapper),
                (LPVOID)cast_pointer_function((void(_param_cash_rollback::*)())&_param_cash_rollback::dtor__param_cash_rollback)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
