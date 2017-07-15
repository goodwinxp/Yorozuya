#include <_RETURNPOST_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_RETURNPOST_DB_BASEInit2_ptr _RETURNPOST_DB_BASEInit2_next(nullptr);
        Info::_RETURNPOST_DB_BASEInit2_clbk _RETURNPOST_DB_BASEInit2_user(nullptr);
        
        
        Info::_RETURNPOST_DB_BASEctor__RETURNPOST_DB_BASE4_ptr _RETURNPOST_DB_BASEctor__RETURNPOST_DB_BASE4_next(nullptr);
        Info::_RETURNPOST_DB_BASEctor__RETURNPOST_DB_BASE4_clbk _RETURNPOST_DB_BASEctor__RETURNPOST_DB_BASE4_user(nullptr);
        
        void _RETURNPOST_DB_BASEInit2_wrapper(struct _RETURNPOST_DB_BASE* _this)
        {
           _RETURNPOST_DB_BASEInit2_user(_this, _RETURNPOST_DB_BASEInit2_next);
        };
        
        void _RETURNPOST_DB_BASEctor__RETURNPOST_DB_BASE4_wrapper(struct _RETURNPOST_DB_BASE* _this)
        {
           _RETURNPOST_DB_BASEctor__RETURNPOST_DB_BASE4_user(_this, _RETURNPOST_DB_BASEctor__RETURNPOST_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _RETURNPOST_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140077570L,
                (LPVOID *)&_RETURNPOST_DB_BASEInit2_user,
                (LPVOID *)&_RETURNPOST_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_RETURNPOST_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_RETURNPOST_DB_BASE::*)())&_RETURNPOST_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140077520L,
                (LPVOID *)&_RETURNPOST_DB_BASEctor__RETURNPOST_DB_BASE4_user,
                (LPVOID *)&_RETURNPOST_DB_BASEctor__RETURNPOST_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_RETURNPOST_DB_BASEctor__RETURNPOST_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_RETURNPOST_DB_BASE::*)())&_RETURNPOST_DB_BASE::ctor__RETURNPOST_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
