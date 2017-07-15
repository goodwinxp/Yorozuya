#include <_POTION_NEXT_USE_TIME_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_POTION_NEXT_USE_TIME_DB_BASEInit2_ptr _POTION_NEXT_USE_TIME_DB_BASEInit2_next(nullptr);
        Info::_POTION_NEXT_USE_TIME_DB_BASEInit2_clbk _POTION_NEXT_USE_TIME_DB_BASEInit2_user(nullptr);
        
        
        Info::_POTION_NEXT_USE_TIME_DB_BASEctor__POTION_NEXT_USE_TIME_DB_BASE4_ptr _POTION_NEXT_USE_TIME_DB_BASEctor__POTION_NEXT_USE_TIME_DB_BASE4_next(nullptr);
        Info::_POTION_NEXT_USE_TIME_DB_BASEctor__POTION_NEXT_USE_TIME_DB_BASE4_clbk _POTION_NEXT_USE_TIME_DB_BASEctor__POTION_NEXT_USE_TIME_DB_BASE4_user(nullptr);
        
        void _POTION_NEXT_USE_TIME_DB_BASEInit2_wrapper(struct _POTION_NEXT_USE_TIME_DB_BASE* _this)
        {
           _POTION_NEXT_USE_TIME_DB_BASEInit2_user(_this, _POTION_NEXT_USE_TIME_DB_BASEInit2_next);
        };
        
        void _POTION_NEXT_USE_TIME_DB_BASEctor__POTION_NEXT_USE_TIME_DB_BASE4_wrapper(struct _POTION_NEXT_USE_TIME_DB_BASE* _this)
        {
           _POTION_NEXT_USE_TIME_DB_BASEctor__POTION_NEXT_USE_TIME_DB_BASE4_user(_this, _POTION_NEXT_USE_TIME_DB_BASEctor__POTION_NEXT_USE_TIME_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _POTION_NEXT_USE_TIME_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x1400779b0L,
                (LPVOID *)&_POTION_NEXT_USE_TIME_DB_BASEInit2_user,
                (LPVOID *)&_POTION_NEXT_USE_TIME_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_POTION_NEXT_USE_TIME_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_POTION_NEXT_USE_TIME_DB_BASE::*)())&_POTION_NEXT_USE_TIME_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140077960L,
                (LPVOID *)&_POTION_NEXT_USE_TIME_DB_BASEctor__POTION_NEXT_USE_TIME_DB_BASE4_user,
                (LPVOID *)&_POTION_NEXT_USE_TIME_DB_BASEctor__POTION_NEXT_USE_TIME_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_POTION_NEXT_USE_TIME_DB_BASEctor__POTION_NEXT_USE_TIME_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_POTION_NEXT_USE_TIME_DB_BASE::*)())&_POTION_NEXT_USE_TIME_DB_BASE::ctor__POTION_NEXT_USE_TIME_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
