#include <_PVPPOINT_LIMIT_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_PVPPOINT_LIMIT_DB_BASEInit2_ptr _PVPPOINT_LIMIT_DB_BASEInit2_next(nullptr);
        Info::_PVPPOINT_LIMIT_DB_BASEInit2_clbk _PVPPOINT_LIMIT_DB_BASEInit2_user(nullptr);
        
        
        Info::_PVPPOINT_LIMIT_DB_BASEctor__PVPPOINT_LIMIT_DB_BASE4_ptr _PVPPOINT_LIMIT_DB_BASEctor__PVPPOINT_LIMIT_DB_BASE4_next(nullptr);
        Info::_PVPPOINT_LIMIT_DB_BASEctor__PVPPOINT_LIMIT_DB_BASE4_clbk _PVPPOINT_LIMIT_DB_BASEctor__PVPPOINT_LIMIT_DB_BASE4_user(nullptr);
        
        
        Info::_PVPPOINT_LIMIT_DB_BASEdtor__PVPPOINT_LIMIT_DB_BASE6_ptr _PVPPOINT_LIMIT_DB_BASEdtor__PVPPOINT_LIMIT_DB_BASE6_next(nullptr);
        Info::_PVPPOINT_LIMIT_DB_BASEdtor__PVPPOINT_LIMIT_DB_BASE6_clbk _PVPPOINT_LIMIT_DB_BASEdtor__PVPPOINT_LIMIT_DB_BASE6_user(nullptr);
        
        void _PVPPOINT_LIMIT_DB_BASEInit2_wrapper(struct _PVPPOINT_LIMIT_DB_BASE* _this)
        {
           _PVPPOINT_LIMIT_DB_BASEInit2_user(_this, _PVPPOINT_LIMIT_DB_BASEInit2_next);
        };
        
        void _PVPPOINT_LIMIT_DB_BASEctor__PVPPOINT_LIMIT_DB_BASE4_wrapper(struct _PVPPOINT_LIMIT_DB_BASE* _this)
        {
           _PVPPOINT_LIMIT_DB_BASEctor__PVPPOINT_LIMIT_DB_BASE4_user(_this, _PVPPOINT_LIMIT_DB_BASEctor__PVPPOINT_LIMIT_DB_BASE4_next);
        };
        
        void _PVPPOINT_LIMIT_DB_BASEdtor__PVPPOINT_LIMIT_DB_BASE6_wrapper(struct _PVPPOINT_LIMIT_DB_BASE* _this)
        {
           _PVPPOINT_LIMIT_DB_BASEdtor__PVPPOINT_LIMIT_DB_BASE6_user(_this, _PVPPOINT_LIMIT_DB_BASEdtor__PVPPOINT_LIMIT_DB_BASE6_next);
        };
        
        ::std::array<hook_record, 3> _PVPPOINT_LIMIT_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140077ce0L,
                (LPVOID *)&_PVPPOINT_LIMIT_DB_BASEInit2_user,
                (LPVOID *)&_PVPPOINT_LIMIT_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_PVPPOINT_LIMIT_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_PVPPOINT_LIMIT_DB_BASE::*)())&_PVPPOINT_LIMIT_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x1400776f0L,
                (LPVOID *)&_PVPPOINT_LIMIT_DB_BASEctor__PVPPOINT_LIMIT_DB_BASE4_user,
                (LPVOID *)&_PVPPOINT_LIMIT_DB_BASEctor__PVPPOINT_LIMIT_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_PVPPOINT_LIMIT_DB_BASEctor__PVPPOINT_LIMIT_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_PVPPOINT_LIMIT_DB_BASE::*)())&_PVPPOINT_LIMIT_DB_BASE::ctor__PVPPOINT_LIMIT_DB_BASE)
            },
            _hook_record {
                (LPVOID)0x140077750L,
                (LPVOID *)&_PVPPOINT_LIMIT_DB_BASEdtor__PVPPOINT_LIMIT_DB_BASE6_user,
                (LPVOID *)&_PVPPOINT_LIMIT_DB_BASEdtor__PVPPOINT_LIMIT_DB_BASE6_next,
                (LPVOID)cast_pointer_function(_PVPPOINT_LIMIT_DB_BASEdtor__PVPPOINT_LIMIT_DB_BASE6_wrapper),
                (LPVOID)cast_pointer_function((void(_PVPPOINT_LIMIT_DB_BASE::*)())&_PVPPOINT_LIMIT_DB_BASE::dtor__PVPPOINT_LIMIT_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
