#include <_DELPOST_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_DELPOST_DB_BASEInit2_ptr _DELPOST_DB_BASEInit2_next(nullptr);
        Info::_DELPOST_DB_BASEInit2_clbk _DELPOST_DB_BASEInit2_user(nullptr);
        
        
        Info::_DELPOST_DB_BASEctor__DELPOST_DB_BASE4_ptr _DELPOST_DB_BASEctor__DELPOST_DB_BASE4_next(nullptr);
        Info::_DELPOST_DB_BASEctor__DELPOST_DB_BASE4_clbk _DELPOST_DB_BASEctor__DELPOST_DB_BASE4_user(nullptr);
        
        void _DELPOST_DB_BASEInit2_wrapper(struct _DELPOST_DB_BASE* _this)
        {
           _DELPOST_DB_BASEInit2_user(_this, _DELPOST_DB_BASEInit2_next);
        };
        
        void _DELPOST_DB_BASEctor__DELPOST_DB_BASE4_wrapper(struct _DELPOST_DB_BASE* _this)
        {
           _DELPOST_DB_BASEctor__DELPOST_DB_BASE4_user(_this, _DELPOST_DB_BASEctor__DELPOST_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _DELPOST_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140077620L,
                (LPVOID *)&_DELPOST_DB_BASEInit2_user,
                (LPVOID *)&_DELPOST_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_DELPOST_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_DELPOST_DB_BASE::*)())&_DELPOST_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x1400775d0L,
                (LPVOID *)&_DELPOST_DB_BASEctor__DELPOST_DB_BASE4_user,
                (LPVOID *)&_DELPOST_DB_BASEctor__DELPOST_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_DELPOST_DB_BASEctor__DELPOST_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_DELPOST_DB_BASE::*)())&_DELPOST_DB_BASE::ctor__DELPOST_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
