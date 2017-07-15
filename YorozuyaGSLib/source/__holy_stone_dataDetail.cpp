#include <__holy_stone_dataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__holy_stone_datactor___holy_stone_data2_ptr __holy_stone_datactor___holy_stone_data2_next(nullptr);
        Info::__holy_stone_datactor___holy_stone_data2_clbk __holy_stone_datactor___holy_stone_data2_user(nullptr);
        
        
        void __holy_stone_datactor___holy_stone_data2_wrapper(struct __holy_stone_data* _this)
        {
           __holy_stone_datactor___holy_stone_data2_user(_this, __holy_stone_datactor___holy_stone_data2_next);
        };
        
        ::std::array<hook_record, 1> __holy_stone_data_functions = 
        {
            _hook_record {
                (LPVOID)0x1402840a0L,
                (LPVOID *)&__holy_stone_datactor___holy_stone_data2_user,
                (LPVOID *)&__holy_stone_datactor___holy_stone_data2_next,
                (LPVOID)cast_pointer_function(__holy_stone_datactor___holy_stone_data2_wrapper),
                (LPVOID)cast_pointer_function((void(__holy_stone_data::*)())&__holy_stone_data::ctor___holy_stone_data)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
