#include <_param_cashitem_dblogDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_param_cashitem_dblogctor__param_cashitem_dblog2_ptr _param_cashitem_dblogctor__param_cashitem_dblog2_next(nullptr);
        Info::_param_cashitem_dblogctor__param_cashitem_dblog2_clbk _param_cashitem_dblogctor__param_cashitem_dblog2_user(nullptr);
        
        Info::_param_cashitem_dblogsize4_ptr _param_cashitem_dblogsize4_next(nullptr);
        Info::_param_cashitem_dblogsize4_clbk _param_cashitem_dblogsize4_user(nullptr);
        
        
        Info::_param_cashitem_dblogdtor__param_cashitem_dblog6_ptr _param_cashitem_dblogdtor__param_cashitem_dblog6_next(nullptr);
        Info::_param_cashitem_dblogdtor__param_cashitem_dblog6_clbk _param_cashitem_dblogdtor__param_cashitem_dblog6_user(nullptr);
        
        
        void _param_cashitem_dblogctor__param_cashitem_dblog2_wrapper(struct _param_cashitem_dblog* _this, unsigned int dwAv)
        {
           _param_cashitem_dblogctor__param_cashitem_dblog2_user(_this, dwAv, _param_cashitem_dblogctor__param_cashitem_dblog2_next);
        };
        int _param_cashitem_dblogsize4_wrapper(struct _param_cashitem_dblog* _this)
        {
           return _param_cashitem_dblogsize4_user(_this, _param_cashitem_dblogsize4_next);
        };
        
        void _param_cashitem_dblogdtor__param_cashitem_dblog6_wrapper(struct _param_cashitem_dblog* _this)
        {
           _param_cashitem_dblogdtor__param_cashitem_dblog6_user(_this, _param_cashitem_dblogdtor__param_cashitem_dblog6_next);
        };
        
        ::std::array<hook_record, 3> _param_cashitem_dblog_functions = 
        {
            _hook_record {
                (LPVOID)0x140304cc0L,
                (LPVOID *)&_param_cashitem_dblogctor__param_cashitem_dblog2_user,
                (LPVOID *)&_param_cashitem_dblogctor__param_cashitem_dblog2_next,
                (LPVOID)cast_pointer_function(_param_cashitem_dblogctor__param_cashitem_dblog2_wrapper),
                (LPVOID)cast_pointer_function((void(_param_cashitem_dblog::*)(unsigned int))&_param_cashitem_dblog::ctor__param_cashitem_dblog)
            },
            _hook_record {
                (LPVOID)0x140304d90L,
                (LPVOID *)&_param_cashitem_dblogsize4_user,
                (LPVOID *)&_param_cashitem_dblogsize4_next,
                (LPVOID)cast_pointer_function(_param_cashitem_dblogsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_param_cashitem_dblog::*)())&_param_cashitem_dblog::size)
            },
            _hook_record {
                (LPVOID)0x140304d50L,
                (LPVOID *)&_param_cashitem_dblogdtor__param_cashitem_dblog6_user,
                (LPVOID *)&_param_cashitem_dblogdtor__param_cashitem_dblog6_next,
                (LPVOID)cast_pointer_function(_param_cashitem_dblogdtor__param_cashitem_dblog6_wrapper),
                (LPVOID)cast_pointer_function((void(_param_cashitem_dblog::*)())&_param_cashitem_dblog::dtor__param_cashitem_dblog)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
