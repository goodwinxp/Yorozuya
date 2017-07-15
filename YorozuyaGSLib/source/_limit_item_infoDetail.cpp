#include <_limit_item_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_limit_item_infoctor__limit_item_info2_ptr _limit_item_infoctor__limit_item_info2_next(nullptr);
        Info::_limit_item_infoctor__limit_item_info2_clbk _limit_item_infoctor__limit_item_info2_user(nullptr);
        
        Info::_limit_item_infoinit4_ptr _limit_item_infoinit4_next(nullptr);
        Info::_limit_item_infoinit4_clbk _limit_item_infoinit4_user(nullptr);
        
        
        void _limit_item_infoctor__limit_item_info2_wrapper(struct _limit_item_info* _this)
        {
           _limit_item_infoctor__limit_item_info2_user(_this, _limit_item_infoctor__limit_item_info2_next);
        };
        void _limit_item_infoinit4_wrapper(struct _limit_item_info* _this)
        {
           _limit_item_infoinit4_user(_this, _limit_item_infoinit4_next);
        };
        
        ::std::array<hook_record, 2> _limit_item_info_functions = 
        {
            _hook_record {
                (LPVOID)0x140263760L,
                (LPVOID *)&_limit_item_infoctor__limit_item_info2_user,
                (LPVOID *)&_limit_item_infoctor__limit_item_info2_next,
                (LPVOID)cast_pointer_function(_limit_item_infoctor__limit_item_info2_wrapper),
                (LPVOID)cast_pointer_function((void(_limit_item_info::*)())&_limit_item_info::ctor__limit_item_info)
            },
            _hook_record {
                (LPVOID)0x1402637c0L,
                (LPVOID *)&_limit_item_infoinit4_user,
                (LPVOID *)&_limit_item_infoinit4_next,
                (LPVOID)cast_pointer_function(_limit_item_infoinit4_wrapper),
                (LPVOID)cast_pointer_function((void(_limit_item_info::*)())&_limit_item_info::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
