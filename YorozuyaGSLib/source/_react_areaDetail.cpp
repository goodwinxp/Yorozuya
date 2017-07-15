#include <_react_areaDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_react_areactor__react_area2_ptr _react_areactor__react_area2_next(nullptr);
        Info::_react_areactor__react_area2_clbk _react_areactor__react_area2_user(nullptr);
        
        Info::_react_areacopy4_ptr _react_areacopy4_next(nullptr);
        Info::_react_areacopy4_clbk _react_areacopy4_user(nullptr);
        
        
        void _react_areactor__react_area2_wrapper(struct _react_area* _this)
        {
           _react_areactor__react_area2_user(_this, _react_areactor__react_area2_next);
        };
        void _react_areacopy4_wrapper(struct _react_area* _this, struct _react_area* pObj)
        {
           _react_areacopy4_user(_this, pObj, _react_areacopy4_next);
        };
        
        ::std::array<hook_record, 2> _react_area_functions = 
        {
            _hook_record {
                (LPVOID)0x14027a340L,
                (LPVOID *)&_react_areactor__react_area2_user,
                (LPVOID *)&_react_areactor__react_area2_next,
                (LPVOID)cast_pointer_function(_react_areactor__react_area2_wrapper),
                (LPVOID)cast_pointer_function((void(_react_area::*)())&_react_area::ctor__react_area)
            },
            _hook_record {
                (LPVOID)0x14027a390L,
                (LPVOID *)&_react_areacopy4_user,
                (LPVOID *)&_react_areacopy4_next,
                (LPVOID)cast_pointer_function(_react_areacopy4_wrapper),
                (LPVOID)cast_pointer_function((void(_react_area::*)(struct _react_area*))&_react_area::copy)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
