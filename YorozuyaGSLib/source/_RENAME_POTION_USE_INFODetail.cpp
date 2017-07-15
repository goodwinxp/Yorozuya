#include <_RENAME_POTION_USE_INFODetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_RENAME_POTION_USE_INFOInit2_ptr _RENAME_POTION_USE_INFOInit2_next(nullptr);
        Info::_RENAME_POTION_USE_INFOInit2_clbk _RENAME_POTION_USE_INFOInit2_user(nullptr);
        
        
        Info::_RENAME_POTION_USE_INFOctor__RENAME_POTION_USE_INFO4_ptr _RENAME_POTION_USE_INFOctor__RENAME_POTION_USE_INFO4_next(nullptr);
        Info::_RENAME_POTION_USE_INFOctor__RENAME_POTION_USE_INFO4_clbk _RENAME_POTION_USE_INFOctor__RENAME_POTION_USE_INFO4_user(nullptr);
        
        void _RENAME_POTION_USE_INFOInit2_wrapper(struct _RENAME_POTION_USE_INFO* _this)
        {
           _RENAME_POTION_USE_INFOInit2_user(_this, _RENAME_POTION_USE_INFOInit2_next);
        };
        
        void _RENAME_POTION_USE_INFOctor__RENAME_POTION_USE_INFO4_wrapper(struct _RENAME_POTION_USE_INFO* _this)
        {
           _RENAME_POTION_USE_INFOctor__RENAME_POTION_USE_INFO4_user(_this, _RENAME_POTION_USE_INFOctor__RENAME_POTION_USE_INFO4_next);
        };
        
        ::std::array<hook_record, 2> _RENAME_POTION_USE_INFO_functions = 
        {
            _hook_record {
                (LPVOID)0x140073dd0L,
                (LPVOID *)&_RENAME_POTION_USE_INFOInit2_user,
                (LPVOID *)&_RENAME_POTION_USE_INFOInit2_next,
                (LPVOID)cast_pointer_function(_RENAME_POTION_USE_INFOInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_RENAME_POTION_USE_INFO::*)())&_RENAME_POTION_USE_INFO::Init)
            },
            _hook_record {
                (LPVOID)0x140073d80L,
                (LPVOID *)&_RENAME_POTION_USE_INFOctor__RENAME_POTION_USE_INFO4_user,
                (LPVOID *)&_RENAME_POTION_USE_INFOctor__RENAME_POTION_USE_INFO4_next,
                (LPVOID)cast_pointer_function(_RENAME_POTION_USE_INFOctor__RENAME_POTION_USE_INFO4_wrapper),
                (LPVOID)cast_pointer_function((void(_RENAME_POTION_USE_INFO::*)())&_RENAME_POTION_USE_INFO::ctor__RENAME_POTION_USE_INFO)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
