#include <_SFCONT_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_SFCONT_DB_BASEInit2_ptr _SFCONT_DB_BASEInit2_next(nullptr);
        Info::_SFCONT_DB_BASEInit2_clbk _SFCONT_DB_BASEInit2_user(nullptr);
        
        
        Info::_SFCONT_DB_BASEctor__SFCONT_DB_BASE4_ptr _SFCONT_DB_BASEctor__SFCONT_DB_BASE4_next(nullptr);
        Info::_SFCONT_DB_BASEctor__SFCONT_DB_BASE4_clbk _SFCONT_DB_BASEctor__SFCONT_DB_BASE4_user(nullptr);
        
        void _SFCONT_DB_BASEInit2_wrapper(struct _SFCONT_DB_BASE* _this)
        {
           _SFCONT_DB_BASEInit2_user(_this, _SFCONT_DB_BASEInit2_next);
        };
        
        void _SFCONT_DB_BASEctor__SFCONT_DB_BASE4_wrapper(struct _SFCONT_DB_BASE* _this)
        {
           _SFCONT_DB_BASEctor__SFCONT_DB_BASE4_user(_this, _SFCONT_DB_BASEctor__SFCONT_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _SFCONT_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140076b00L,
                (LPVOID *)&_SFCONT_DB_BASEInit2_user,
                (LPVOID *)&_SFCONT_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_SFCONT_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_SFCONT_DB_BASE::*)())&_SFCONT_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140076ab0L,
                (LPVOID *)&_SFCONT_DB_BASEctor__SFCONT_DB_BASE4_user,
                (LPVOID *)&_SFCONT_DB_BASEctor__SFCONT_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_SFCONT_DB_BASEctor__SFCONT_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_SFCONT_DB_BASE::*)())&_SFCONT_DB_BASE::ctor__SFCONT_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
