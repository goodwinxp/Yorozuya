#include <_react_sub_setupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_react_sub_setupctor__react_sub_setup2_ptr _react_sub_setupctor__react_sub_setup2_next(nullptr);
        Info::_react_sub_setupctor__react_sub_setup2_clbk _react_sub_setupctor__react_sub_setup2_user(nullptr);
        
        
        void _react_sub_setupctor__react_sub_setup2_wrapper(struct _react_sub_setup* _this)
        {
           _react_sub_setupctor__react_sub_setup2_user(_this, _react_sub_setupctor__react_sub_setup2_next);
        };
        
        ::std::array<hook_record, 1> _react_sub_setup_functions = 
        {
            _hook_record {
                (LPVOID)0x14027a680L,
                (LPVOID *)&_react_sub_setupctor__react_sub_setup2_user,
                (LPVOID *)&_react_sub_setupctor__react_sub_setup2_next,
                (LPVOID)cast_pointer_function(_react_sub_setupctor__react_sub_setup2_wrapper),
                (LPVOID)cast_pointer_function((void(_react_sub_setup::*)())&_react_sub_setup::ctor__react_sub_setup)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
