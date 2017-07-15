#include <_SUPPLEMENT_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_SUPPLEMENT_DB_BASEInit2_ptr _SUPPLEMENT_DB_BASEInit2_next(nullptr);
        Info::_SUPPLEMENT_DB_BASEInit2_clbk _SUPPLEMENT_DB_BASEInit2_user(nullptr);
        
        
        Info::_SUPPLEMENT_DB_BASEctor__SUPPLEMENT_DB_BASE4_ptr _SUPPLEMENT_DB_BASEctor__SUPPLEMENT_DB_BASE4_next(nullptr);
        Info::_SUPPLEMENT_DB_BASEctor__SUPPLEMENT_DB_BASE4_clbk _SUPPLEMENT_DB_BASEctor__SUPPLEMENT_DB_BASE4_user(nullptr);
        
        void _SUPPLEMENT_DB_BASEInit2_wrapper(struct _SUPPLEMENT_DB_BASE* _this)
        {
           _SUPPLEMENT_DB_BASEInit2_user(_this, _SUPPLEMENT_DB_BASEInit2_next);
        };
        
        void _SUPPLEMENT_DB_BASEctor__SUPPLEMENT_DB_BASE4_wrapper(struct _SUPPLEMENT_DB_BASE* _this)
        {
           _SUPPLEMENT_DB_BASEctor__SUPPLEMENT_DB_BASE4_user(_this, _SUPPLEMENT_DB_BASEctor__SUPPLEMENT_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _SUPPLEMENT_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140077910L,
                (LPVOID *)&_SUPPLEMENT_DB_BASEInit2_user,
                (LPVOID *)&_SUPPLEMENT_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_SUPPLEMENT_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_SUPPLEMENT_DB_BASE::*)())&_SUPPLEMENT_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x1400778c0L,
                (LPVOID *)&_SUPPLEMENT_DB_BASEctor__SUPPLEMENT_DB_BASE4_user,
                (LPVOID *)&_SUPPLEMENT_DB_BASEctor__SUPPLEMENT_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_SUPPLEMENT_DB_BASEctor__SUPPLEMENT_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_SUPPLEMENT_DB_BASE::*)())&_SUPPLEMENT_DB_BASE::ctor__SUPPLEMENT_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
