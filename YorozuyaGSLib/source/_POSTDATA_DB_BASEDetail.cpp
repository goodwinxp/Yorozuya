#include <_POSTDATA_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_POSTDATA_DB_BASEInit2_ptr _POSTDATA_DB_BASEInit2_next(nullptr);
        Info::_POSTDATA_DB_BASEInit2_clbk _POSTDATA_DB_BASEInit2_user(nullptr);
        
        Info::_POSTDATA_DB_BASEUpdateInit4_ptr _POSTDATA_DB_BASEUpdateInit4_next(nullptr);
        Info::_POSTDATA_DB_BASEUpdateInit4_clbk _POSTDATA_DB_BASEUpdateInit4_user(nullptr);
        
        
        Info::_POSTDATA_DB_BASEctor__POSTDATA_DB_BASE6_ptr _POSTDATA_DB_BASEctor__POSTDATA_DB_BASE6_next(nullptr);
        Info::_POSTDATA_DB_BASEctor__POSTDATA_DB_BASE6_clbk _POSTDATA_DB_BASEctor__POSTDATA_DB_BASE6_user(nullptr);
        
        void _POSTDATA_DB_BASEInit2_wrapper(struct _POSTDATA_DB_BASE* _this)
        {
           _POSTDATA_DB_BASEInit2_user(_this, _POSTDATA_DB_BASEInit2_next);
        };
        void _POSTDATA_DB_BASEUpdateInit4_wrapper(struct _POSTDATA_DB_BASE* _this)
        {
           _POSTDATA_DB_BASEUpdateInit4_user(_this, _POSTDATA_DB_BASEUpdateInit4_next);
        };
        
        void _POSTDATA_DB_BASEctor__POSTDATA_DB_BASE6_wrapper(struct _POSTDATA_DB_BASE* _this)
        {
           _POSTDATA_DB_BASEctor__POSTDATA_DB_BASE6_user(_this, _POSTDATA_DB_BASEctor__POSTDATA_DB_BASE6_next);
        };
        
        ::std::array<hook_record, 3> _POSTDATA_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140077680L,
                (LPVOID *)&_POSTDATA_DB_BASEInit2_user,
                (LPVOID *)&_POSTDATA_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_POSTDATA_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_POSTDATA_DB_BASE::*)())&_POSTDATA_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x14011fc50L,
                (LPVOID *)&_POSTDATA_DB_BASEUpdateInit4_user,
                (LPVOID *)&_POSTDATA_DB_BASEUpdateInit4_next,
                (LPVOID)cast_pointer_function(_POSTDATA_DB_BASEUpdateInit4_wrapper),
                (LPVOID)cast_pointer_function((void(_POSTDATA_DB_BASE::*)())&_POSTDATA_DB_BASE::UpdateInit)
            },
            _hook_record {
                (LPVOID)0x140077390L,
                (LPVOID *)&_POSTDATA_DB_BASEctor__POSTDATA_DB_BASE6_user,
                (LPVOID *)&_POSTDATA_DB_BASEctor__POSTDATA_DB_BASE6_next,
                (LPVOID)cast_pointer_function(_POSTDATA_DB_BASEctor__POSTDATA_DB_BASE6_wrapper),
                (LPVOID)cast_pointer_function((void(_POSTDATA_DB_BASE::*)())&_POSTDATA_DB_BASE::ctor__POSTDATA_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
