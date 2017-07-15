#include <_limit_amount_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_limit_amount_infoctor__limit_amount_info2_ptr _limit_amount_infoctor__limit_amount_info2_next(nullptr);
        Info::_limit_amount_infoctor__limit_amount_info2_clbk _limit_amount_infoctor__limit_amount_info2_user(nullptr);
        
        
        void _limit_amount_infoctor__limit_amount_info2_wrapper(struct _limit_amount_info* _this)
        {
           _limit_amount_infoctor__limit_amount_info2_user(_this, _limit_amount_infoctor__limit_amount_info2_next);
        };
        
        ::std::array<hook_record, 1> _limit_amount_info_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f7780L,
                (LPVOID *)&_limit_amount_infoctor__limit_amount_info2_user,
                (LPVOID *)&_limit_amount_infoctor__limit_amount_info2_next,
                (LPVOID)cast_pointer_function(_limit_amount_infoctor__limit_amount_info2_wrapper),
                (LPVOID)cast_pointer_function((void(_limit_amount_info::*)())&_limit_amount_info::ctor__limit_amount_info)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
