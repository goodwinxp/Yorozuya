#include <_ITEMCOMBINE_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_ITEMCOMBINE_DB_BASEInit2_ptr _ITEMCOMBINE_DB_BASEInit2_next(nullptr);
        Info::_ITEMCOMBINE_DB_BASEInit2_clbk _ITEMCOMBINE_DB_BASEInit2_user(nullptr);
        
        Info::_ITEMCOMBINE_DB_BASEIsCombineData4_ptr _ITEMCOMBINE_DB_BASEIsCombineData4_next(nullptr);
        Info::_ITEMCOMBINE_DB_BASEIsCombineData4_clbk _ITEMCOMBINE_DB_BASEIsCombineData4_user(nullptr);
        
        
        Info::_ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_ptr _ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_next(nullptr);
        Info::_ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_clbk _ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_user(nullptr);
        
        void _ITEMCOMBINE_DB_BASEInit2_wrapper(struct _ITEMCOMBINE_DB_BASE* _this)
        {
           _ITEMCOMBINE_DB_BASEInit2_user(_this, _ITEMCOMBINE_DB_BASEInit2_next);
        };
        bool _ITEMCOMBINE_DB_BASEIsCombineData4_wrapper(struct _ITEMCOMBINE_DB_BASE* _this)
        {
           return _ITEMCOMBINE_DB_BASEIsCombineData4_user(_this, _ITEMCOMBINE_DB_BASEIsCombineData4_next);
        };
        
        void _ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_wrapper(struct _ITEMCOMBINE_DB_BASE* _this)
        {
           _ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_user(_this, _ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_next);
        };
        
        ::std::array<hook_record, 3> _ITEMCOMBINE_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x1400772d0L,
                (LPVOID *)&_ITEMCOMBINE_DB_BASEInit2_user,
                (LPVOID *)&_ITEMCOMBINE_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_ITEMCOMBINE_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_ITEMCOMBINE_DB_BASE::*)())&_ITEMCOMBINE_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x1402af610L,
                (LPVOID *)&_ITEMCOMBINE_DB_BASEIsCombineData4_user,
                (LPVOID *)&_ITEMCOMBINE_DB_BASEIsCombineData4_next,
                (LPVOID)cast_pointer_function(_ITEMCOMBINE_DB_BASEIsCombineData4_wrapper),
                (LPVOID)cast_pointer_function((bool(_ITEMCOMBINE_DB_BASE::*)())&_ITEMCOMBINE_DB_BASE::IsCombineData)
            },
            _hook_record {
                (LPVOID)0x140077180L,
                (LPVOID *)&_ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_user,
                (LPVOID *)&_ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_next,
                (LPVOID)cast_pointer_function(_ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_wrapper),
                (LPVOID)cast_pointer_function((void(_ITEMCOMBINE_DB_BASE::*)())&_ITEMCOMBINE_DB_BASE::ctor__ITEMCOMBINE_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
