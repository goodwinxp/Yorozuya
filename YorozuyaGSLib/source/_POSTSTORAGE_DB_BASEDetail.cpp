#include <_POSTSTORAGE_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_POSTSTORAGE_DB_BASEInit2_ptr _POSTSTORAGE_DB_BASEInit2_next(nullptr);
        Info::_POSTSTORAGE_DB_BASEInit2_clbk _POSTSTORAGE_DB_BASEInit2_user(nullptr);
        
        Info::_POSTSTORAGE_DB_BASEUpdateInit4_ptr _POSTSTORAGE_DB_BASEUpdateInit4_next(nullptr);
        Info::_POSTSTORAGE_DB_BASEUpdateInit4_clbk _POSTSTORAGE_DB_BASEUpdateInit4_user(nullptr);
        
        
        Info::_POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_ptr _POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_next(nullptr);
        Info::_POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_clbk _POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_user(nullptr);
        
        void _POSTSTORAGE_DB_BASEInit2_wrapper(struct _POSTSTORAGE_DB_BASE* _this)
        {
           _POSTSTORAGE_DB_BASEInit2_user(_this, _POSTSTORAGE_DB_BASEInit2_next);
        };
        void _POSTSTORAGE_DB_BASEUpdateInit4_wrapper(struct _POSTSTORAGE_DB_BASE* _this)
        {
           _POSTSTORAGE_DB_BASEUpdateInit4_user(_this, _POSTSTORAGE_DB_BASEUpdateInit4_next);
        };
        
        void _POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_wrapper(struct _POSTSTORAGE_DB_BASE* _this)
        {
           _POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_user(_this, _POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_next);
        };
        
        ::std::array<hook_record, 3> _POSTSTORAGE_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140077470L,
                (LPVOID *)&_POSTSTORAGE_DB_BASEInit2_user,
                (LPVOID *)&_POSTSTORAGE_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_POSTSTORAGE_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_POSTSTORAGE_DB_BASE::*)())&_POSTSTORAGE_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x14011fcc0L,
                (LPVOID *)&_POSTSTORAGE_DB_BASEUpdateInit4_user,
                (LPVOID *)&_POSTSTORAGE_DB_BASEUpdateInit4_next,
                (LPVOID)cast_pointer_function(_POSTSTORAGE_DB_BASEUpdateInit4_wrapper),
                (LPVOID)cast_pointer_function((void(_POSTSTORAGE_DB_BASE::*)())&_POSTSTORAGE_DB_BASE::UpdateInit)
            },
            _hook_record {
                (LPVOID)0x140077420L,
                (LPVOID *)&_POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_user,
                (LPVOID *)&_POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_next,
                (LPVOID)cast_pointer_function(_POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_wrapper),
                (LPVOID)cast_pointer_function((void(_POSTSTORAGE_DB_BASE::*)())&_POSTSTORAGE_DB_BASE::ctor__POSTSTORAGE_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
