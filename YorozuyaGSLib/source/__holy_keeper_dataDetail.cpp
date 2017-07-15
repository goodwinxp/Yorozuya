#include <__holy_keeper_dataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__holy_keeper_datactor___holy_keeper_data2_ptr __holy_keeper_datactor___holy_keeper_data2_next(nullptr);
        Info::__holy_keeper_datactor___holy_keeper_data2_clbk __holy_keeper_datactor___holy_keeper_data2_user(nullptr);
        
        
        void __holy_keeper_datactor___holy_keeper_data2_wrapper(struct __holy_keeper_data* _this)
        {
           __holy_keeper_datactor___holy_keeper_data2_user(_this, __holy_keeper_datactor___holy_keeper_data2_next);
        };
        
        ::std::array<hook_record, 1> __holy_keeper_data_functions = 
        {
            _hook_record {
                (LPVOID)0x140284010L,
                (LPVOID *)&__holy_keeper_datactor___holy_keeper_data2_user,
                (LPVOID *)&__holy_keeper_datactor___holy_keeper_data2_next,
                (LPVOID)cast_pointer_function(__holy_keeper_datactor___holy_keeper_data2_wrapper),
                (LPVOID)cast_pointer_function((void(__holy_keeper_data::*)())&__holy_keeper_data::ctor___holy_keeper_data)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
