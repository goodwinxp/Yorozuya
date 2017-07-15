#include <_param_cash_updateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_param_cash_updatector__param_cash_update2_ptr _param_cash_updatector__param_cash_update2_next(nullptr);
        Info::_param_cash_updatector__param_cash_update2_clbk _param_cash_updatector__param_cash_update2_user(nullptr);
        
        Info::_param_cash_updatesize4_ptr _param_cash_updatesize4_next(nullptr);
        Info::_param_cash_updatesize4_clbk _param_cash_updatesize4_user(nullptr);
        
        
        Info::_param_cash_updatedtor__param_cash_update6_ptr _param_cash_updatedtor__param_cash_update6_next(nullptr);
        Info::_param_cash_updatedtor__param_cash_update6_clbk _param_cash_updatedtor__param_cash_update6_user(nullptr);
        
        
        void _param_cash_updatector__param_cash_update2_wrapper(struct _param_cash_update* _this, unsigned int dwAc, unsigned int dwAv, uint16_t wSock)
        {
           _param_cash_updatector__param_cash_update2_user(_this, dwAc, dwAv, wSock, _param_cash_updatector__param_cash_update2_next);
        };
        int _param_cash_updatesize4_wrapper(struct _param_cash_update* _this)
        {
           return _param_cash_updatesize4_user(_this, _param_cash_updatesize4_next);
        };
        
        void _param_cash_updatedtor__param_cash_update6_wrapper(struct _param_cash_update* _this)
        {
           _param_cash_updatedtor__param_cash_update6_user(_this, _param_cash_updatedtor__param_cash_update6_next);
        };
        
        ::std::array<hook_record, 3> _param_cash_update_functions = 
        {
            _hook_record {
                (LPVOID)0x1402f2790L,
                (LPVOID *)&_param_cash_updatector__param_cash_update2_user,
                (LPVOID *)&_param_cash_updatector__param_cash_update2_next,
                (LPVOID)cast_pointer_function(_param_cash_updatector__param_cash_update2_wrapper),
                (LPVOID)cast_pointer_function((void(_param_cash_update::*)(unsigned int, unsigned int, uint16_t))&_param_cash_update::ctor__param_cash_update)
            },
            _hook_record {
                (LPVOID)0x140304c80L,
                (LPVOID *)&_param_cash_updatesize4_user,
                (LPVOID *)&_param_cash_updatesize4_next,
                (LPVOID)cast_pointer_function(_param_cash_updatesize4_wrapper),
                (LPVOID)cast_pointer_function((int(_param_cash_update::*)())&_param_cash_update::size)
            },
            _hook_record {
                (LPVOID)0x1402f2970L,
                (LPVOID *)&_param_cash_updatedtor__param_cash_update6_user,
                (LPVOID *)&_param_cash_updatedtor__param_cash_update6_next,
                (LPVOID)cast_pointer_function(_param_cash_updatedtor__param_cash_update6_wrapper),
                (LPVOID)cast_pointer_function((void(_param_cash_update::*)())&_param_cash_update::dtor__param_cash_update)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
