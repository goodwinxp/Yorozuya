#include <__add_timeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__add_timector___add_time2_ptr __add_timector___add_time2_next(nullptr);
        Info::__add_timector___add_time2_clbk __add_timector___add_time2_user(nullptr);
        
        
        void __add_timector___add_time2_wrapper(struct __add_time* _this)
        {
           __add_timector___add_time2_user(_this, __add_timector___add_time2_next);
        };
        
        ::std::array<hook_record, 1> __add_time_functions = 
        {
            _hook_record {
                (LPVOID)0x14027a620L,
                (LPVOID *)&__add_timector___add_time2_user,
                (LPVOID *)&__add_timector___add_time2_next,
                (LPVOID)cast_pointer_function(__add_timector___add_time2_wrapper),
                (LPVOID)cast_pointer_function((void(__add_time::*)())&__add_time::ctor___add_time)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
