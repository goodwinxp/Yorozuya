#include <_CRYMSG_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_CRYMSG_DB_BASEInit2_ptr _CRYMSG_DB_BASEInit2_next(nullptr);
        Info::_CRYMSG_DB_BASEInit2_clbk _CRYMSG_DB_BASEInit2_user(nullptr);
        
        
        Info::_CRYMSG_DB_BASEctor__CRYMSG_DB_BASE4_ptr _CRYMSG_DB_BASEctor__CRYMSG_DB_BASE4_next(nullptr);
        Info::_CRYMSG_DB_BASEctor__CRYMSG_DB_BASE4_clbk _CRYMSG_DB_BASEctor__CRYMSG_DB_BASE4_user(nullptr);
        
        void _CRYMSG_DB_BASEInit2_wrapper(struct _CRYMSG_DB_BASE* _this)
        {
           _CRYMSG_DB_BASEInit2_user(_this, _CRYMSG_DB_BASEInit2_next);
        };
        
        void _CRYMSG_DB_BASEctor__CRYMSG_DB_BASE4_wrapper(struct _CRYMSG_DB_BASE* _this)
        {
           _CRYMSG_DB_BASEctor__CRYMSG_DB_BASE4_user(_this, _CRYMSG_DB_BASEctor__CRYMSG_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _CRYMSG_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140077840L,
                (LPVOID *)&_CRYMSG_DB_BASEInit2_user,
                (LPVOID *)&_CRYMSG_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_CRYMSG_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_CRYMSG_DB_BASE::*)())&_CRYMSG_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140077760L,
                (LPVOID *)&_CRYMSG_DB_BASEctor__CRYMSG_DB_BASE4_user,
                (LPVOID *)&_CRYMSG_DB_BASEctor__CRYMSG_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_CRYMSG_DB_BASEctor__CRYMSG_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_CRYMSG_DB_BASE::*)())&_CRYMSG_DB_BASE::ctor__CRYMSG_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
