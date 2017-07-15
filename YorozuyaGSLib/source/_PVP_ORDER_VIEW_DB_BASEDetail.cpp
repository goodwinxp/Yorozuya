#include <_PVP_ORDER_VIEW_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_PVP_ORDER_VIEW_DB_BASEInit2_ptr _PVP_ORDER_VIEW_DB_BASEInit2_next(nullptr);
        Info::_PVP_ORDER_VIEW_DB_BASEInit2_clbk _PVP_ORDER_VIEW_DB_BASEInit2_user(nullptr);
        
        void _PVP_ORDER_VIEW_DB_BASEInit2_wrapper(struct _PVP_ORDER_VIEW_DB_BASE* _this)
        {
           _PVP_ORDER_VIEW_DB_BASEInit2_user(_this, _PVP_ORDER_VIEW_DB_BASEInit2_next);
        };
        
        ::std::array<hook_record, 1> _PVP_ORDER_VIEW_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140077d50L,
                (LPVOID *)&_PVP_ORDER_VIEW_DB_BASEInit2_user,
                (LPVOID *)&_PVP_ORDER_VIEW_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_PVP_ORDER_VIEW_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_PVP_ORDER_VIEW_DB_BASE::*)())&_PVP_ORDER_VIEW_DB_BASE::Init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
