#include <_react_objDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_react_objctor__react_obj2_ptr _react_objctor__react_obj2_next(nullptr);
        Info::_react_objctor__react_obj2_clbk _react_objctor__react_obj2_user(nullptr);
        
        Info::_react_objcopy4_ptr _react_objcopy4_next(nullptr);
        Info::_react_objcopy4_clbk _react_objcopy4_user(nullptr);
        
        
        void _react_objctor__react_obj2_wrapper(struct _react_obj* _this)
        {
           _react_objctor__react_obj2_user(_this, _react_objctor__react_obj2_next);
        };
        void _react_objcopy4_wrapper(struct _react_obj* _this, struct _react_obj* pObj)
        {
           _react_objcopy4_user(_this, pObj, _react_objcopy4_next);
        };
        
        ::std::array<hook_record, 2> _react_obj_functions = 
        {
            _hook_record {
                (LPVOID)0x14027a230L,
                (LPVOID *)&_react_objctor__react_obj2_user,
                (LPVOID *)&_react_objctor__react_obj2_next,
                (LPVOID)cast_pointer_function(_react_objctor__react_obj2_wrapper),
                (LPVOID)cast_pointer_function((void(_react_obj::*)())&_react_obj::ctor__react_obj)
            },
            _hook_record {
                (LPVOID)0x14027a280L,
                (LPVOID *)&_react_objcopy4_user,
                (LPVOID *)&_react_objcopy4_next,
                (LPVOID)cast_pointer_function(_react_objcopy4_wrapper),
                (LPVOID)cast_pointer_function((void(_react_obj::*)(struct _react_obj*))&_react_obj::copy)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
