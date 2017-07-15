#include <_LTDDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_LTDset2_ptr _LTDset2_next(nullptr);
        Info::_LTDset2_clbk _LTDset2_user(nullptr);
        
        void _LTDset2_wrapper(struct _LTD* _this, char byMainLogType, char bySubLogType)
        {
           _LTDset2_user(_this, byMainLogType, bySubLogType, _LTDset2_next);
        };
        
        ::std::array<hook_record, 1> _LTD_functions = 
        {
            _hook_record {
                (LPVOID)0x14024bfc0L,
                (LPVOID *)&_LTDset2_user,
                (LPVOID *)&_LTDset2_next,
                (LPVOID)cast_pointer_function(_LTDset2_wrapper),
                (LPVOID)cast_pointer_function((void(_LTD::*)(char, char))&_LTD::set)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
