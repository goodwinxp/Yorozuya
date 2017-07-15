#include <_total_countDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_total_countctor__total_count2_ptr _total_countctor__total_count2_next(nullptr);
        Info::_total_countctor__total_count2_clbk _total_countctor__total_count2_user(nullptr);
        
        
        void _total_countctor__total_count2_wrapper(struct _total_count* _this)
        {
           _total_countctor__total_count2_user(_this, _total_countctor__total_count2_next);
        };
        
        ::std::array<hook_record, 1> _total_count_functions = 
        {
            _hook_record {
                (LPVOID)0x14047f7f0L,
                (LPVOID *)&_total_countctor__total_count2_user,
                (LPVOID *)&_total_countctor__total_count2_next,
                (LPVOID)cast_pointer_function(_total_countctor__total_count2_wrapper),
                (LPVOID)cast_pointer_function((void(_total_count::*)())&_total_count::ctor__total_count)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
