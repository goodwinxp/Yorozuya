#include <_MULTI_BLOCKDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_MULTI_BLOCKctor__MULTI_BLOCK2_ptr _MULTI_BLOCKctor__MULTI_BLOCK2_next(nullptr);
        Info::_MULTI_BLOCKctor__MULTI_BLOCK2_clbk _MULTI_BLOCKctor__MULTI_BLOCK2_user(nullptr);
        
        
        Info::_MULTI_BLOCKdtor__MULTI_BLOCK6_ptr _MULTI_BLOCKdtor__MULTI_BLOCK6_next(nullptr);
        Info::_MULTI_BLOCKdtor__MULTI_BLOCK6_clbk _MULTI_BLOCKdtor__MULTI_BLOCK6_user(nullptr);
        
        
        void _MULTI_BLOCKctor__MULTI_BLOCK2_wrapper(struct _MULTI_BLOCK* _this)
        {
           _MULTI_BLOCKctor__MULTI_BLOCK2_user(_this, _MULTI_BLOCKctor__MULTI_BLOCK2_next);
        };
        
        void _MULTI_BLOCKdtor__MULTI_BLOCK6_wrapper(struct _MULTI_BLOCK* _this)
        {
           _MULTI_BLOCKdtor__MULTI_BLOCK6_user(_this, _MULTI_BLOCKdtor__MULTI_BLOCK6_next);
        };
        
        ::std::array<hook_record, 2> _MULTI_BLOCK_functions = 
        {
            _hook_record {
                (LPVOID)0x1401887b0L,
                (LPVOID *)&_MULTI_BLOCKctor__MULTI_BLOCK2_user,
                (LPVOID *)&_MULTI_BLOCKctor__MULTI_BLOCK2_next,
                (LPVOID)cast_pointer_function(_MULTI_BLOCKctor__MULTI_BLOCK2_wrapper),
                (LPVOID)cast_pointer_function((void(_MULTI_BLOCK::*)())&_MULTI_BLOCK::ctor__MULTI_BLOCK)
            },
            _hook_record {
                (LPVOID)0x140188590L,
                (LPVOID *)&_MULTI_BLOCKdtor__MULTI_BLOCK6_user,
                (LPVOID *)&_MULTI_BLOCKdtor__MULTI_BLOCK6_next,
                (LPVOID)cast_pointer_function(_MULTI_BLOCKdtor__MULTI_BLOCK6_wrapper),
                (LPVOID)cast_pointer_function((void(_MULTI_BLOCK::*)())&_MULTI_BLOCK::dtor__MULTI_BLOCK)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
