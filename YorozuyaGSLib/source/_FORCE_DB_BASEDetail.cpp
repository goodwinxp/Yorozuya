#include <_FORCE_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_FORCE_DB_BASEInit2_ptr _FORCE_DB_BASEInit2_next(nullptr);
        Info::_FORCE_DB_BASEInit2_clbk _FORCE_DB_BASEInit2_user(nullptr);
        
        
        Info::_FORCE_DB_BASEctor__FORCE_DB_BASE4_ptr _FORCE_DB_BASEctor__FORCE_DB_BASE4_next(nullptr);
        Info::_FORCE_DB_BASEctor__FORCE_DB_BASE4_clbk _FORCE_DB_BASEctor__FORCE_DB_BASE4_user(nullptr);
        
        void _FORCE_DB_BASEInit2_wrapper(struct _FORCE_DB_BASE* _this)
        {
           _FORCE_DB_BASEInit2_user(_this, _FORCE_DB_BASEInit2_next);
        };
        
        void _FORCE_DB_BASEctor__FORCE_DB_BASE4_wrapper(struct _FORCE_DB_BASE* _this)
        {
           _FORCE_DB_BASEctor__FORCE_DB_BASE4_user(_this, _FORCE_DB_BASEctor__FORCE_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _FORCE_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140076160L,
                (LPVOID *)&_FORCE_DB_BASEInit2_user,
                (LPVOID *)&_FORCE_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_FORCE_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_FORCE_DB_BASE::*)())&_FORCE_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140075ff0L,
                (LPVOID *)&_FORCE_DB_BASEctor__FORCE_DB_BASE4_user,
                (LPVOID *)&_FORCE_DB_BASEctor__FORCE_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_FORCE_DB_BASEctor__FORCE_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_FORCE_DB_BASE::*)())&_FORCE_DB_BASE::ctor__FORCE_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
