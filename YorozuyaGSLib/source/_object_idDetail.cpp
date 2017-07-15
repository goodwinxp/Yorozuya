#include <_object_idDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_object_idctor__object_id2_ptr _object_idctor__object_id2_next(nullptr);
        Info::_object_idctor__object_id2_clbk _object_idctor__object_id2_user(nullptr);
        
        
        Info::_object_idctor__object_id4_ptr _object_idctor__object_id4_next(nullptr);
        Info::_object_idctor__object_id4_clbk _object_idctor__object_id4_user(nullptr);
        
        
        void _object_idctor__object_id2_wrapper(struct _object_id* _this, char byKind, char byID, uint16_t wIndex)
        {
           _object_idctor__object_id2_user(_this, byKind, byID, wIndex, _object_idctor__object_id2_next);
        };
        
        void _object_idctor__object_id4_wrapper(struct _object_id* _this)
        {
           _object_idctor__object_id4_user(_this, _object_idctor__object_id4_next);
        };
        
        ::std::array<hook_record, 2> _object_id_functions = 
        {
            _hook_record {
                (LPVOID)0x14012e460L,
                (LPVOID *)&_object_idctor__object_id2_user,
                (LPVOID *)&_object_idctor__object_id2_next,
                (LPVOID)cast_pointer_function(_object_idctor__object_id2_wrapper),
                (LPVOID)cast_pointer_function((void(_object_id::*)(char, char, uint16_t))&_object_id::ctor__object_id)
            },
            _hook_record {
                (LPVOID)0x14002fa30L,
                (LPVOID *)&_object_idctor__object_id4_user,
                (LPVOID *)&_object_idctor__object_id4_next,
                (LPVOID)cast_pointer_function(_object_idctor__object_id4_wrapper),
                (LPVOID)cast_pointer_function((void(_object_id::*)())&_object_id::ctor__object_id)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
