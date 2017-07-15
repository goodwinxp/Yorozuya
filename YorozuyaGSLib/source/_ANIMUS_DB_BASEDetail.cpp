#include <_ANIMUS_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_ANIMUS_DB_BASEInit2_ptr _ANIMUS_DB_BASEInit2_next(nullptr);
        Info::_ANIMUS_DB_BASEInit2_clbk _ANIMUS_DB_BASEInit2_user(nullptr);
        
        
        Info::_ANIMUS_DB_BASEctor__ANIMUS_DB_BASE4_ptr _ANIMUS_DB_BASEctor__ANIMUS_DB_BASE4_next(nullptr);
        Info::_ANIMUS_DB_BASEctor__ANIMUS_DB_BASE4_clbk _ANIMUS_DB_BASEctor__ANIMUS_DB_BASE4_user(nullptr);
        
        void _ANIMUS_DB_BASEInit2_wrapper(struct _ANIMUS_DB_BASE* _this)
        {
           _ANIMUS_DB_BASEInit2_user(_this, _ANIMUS_DB_BASEInit2_next);
        };
        
        void _ANIMUS_DB_BASEctor__ANIMUS_DB_BASE4_wrapper(struct _ANIMUS_DB_BASE* _this)
        {
           _ANIMUS_DB_BASEctor__ANIMUS_DB_BASE4_user(_this, _ANIMUS_DB_BASEctor__ANIMUS_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _ANIMUS_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140076370L,
                (LPVOID *)&_ANIMUS_DB_BASEInit2_user,
                (LPVOID *)&_ANIMUS_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_ANIMUS_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_ANIMUS_DB_BASE::*)())&_ANIMUS_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x1400761e0L,
                (LPVOID *)&_ANIMUS_DB_BASEctor__ANIMUS_DB_BASE4_user,
                (LPVOID *)&_ANIMUS_DB_BASEctor__ANIMUS_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_ANIMUS_DB_BASEctor__ANIMUS_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_ANIMUS_DB_BASE::*)())&_ANIMUS_DB_BASE::ctor__ANIMUS_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
