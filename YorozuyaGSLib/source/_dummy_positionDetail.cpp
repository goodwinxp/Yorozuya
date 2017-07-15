#include <_dummy_positionDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_dummy_positionSetActiveMonNum2_ptr _dummy_positionSetActiveMonNum2_next(nullptr);
        Info::_dummy_positionSetActiveMonNum2_clbk _dummy_positionSetActiveMonNum2_user(nullptr);
        
        
        Info::_dummy_positionctor__dummy_position4_ptr _dummy_positionctor__dummy_position4_next(nullptr);
        Info::_dummy_positionctor__dummy_position4_clbk _dummy_positionctor__dummy_position4_user(nullptr);
        
        void _dummy_positionSetActiveMonNum2_wrapper(struct _dummy_position* _this, int nAlter)
        {
           _dummy_positionSetActiveMonNum2_user(_this, nAlter, _dummy_positionSetActiveMonNum2_next);
        };
        
        void _dummy_positionctor__dummy_position4_wrapper(struct _dummy_position* _this)
        {
           _dummy_positionctor__dummy_position4_user(_this, _dummy_positionctor__dummy_position4_next);
        };
        
        ::std::array<hook_record, 2> _dummy_position_functions = 
        {
            _hook_record {
                (LPVOID)0x14014bd20L,
                (LPVOID *)&_dummy_positionSetActiveMonNum2_user,
                (LPVOID *)&_dummy_positionSetActiveMonNum2_next,
                (LPVOID)cast_pointer_function(_dummy_positionSetActiveMonNum2_wrapper),
                (LPVOID)cast_pointer_function((void(_dummy_position::*)(int))&_dummy_position::SetActiveMonNum)
            },
            _hook_record {
                (LPVOID)0x14012e430L,
                (LPVOID *)&_dummy_positionctor__dummy_position4_user,
                (LPVOID *)&_dummy_positionctor__dummy_position4_next,
                (LPVOID)cast_pointer_function(_dummy_positionctor__dummy_position4_wrapper),
                (LPVOID)cast_pointer_function((void(_dummy_position::*)())&_dummy_position::ctor__dummy_position)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
