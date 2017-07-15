#include <_skill_lv_up_dataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_skill_lv_up_datainit2_ptr _skill_lv_up_datainit2_next(nullptr);
        Info::_skill_lv_up_datainit2_clbk _skill_lv_up_datainit2_user(nullptr);
        
        Info::_skill_lv_up_dataset4_ptr _skill_lv_up_dataset4_next(nullptr);
        Info::_skill_lv_up_dataset4_clbk _skill_lv_up_dataset4_user(nullptr);
        
        void _skill_lv_up_datainit2_wrapper(struct _skill_lv_up_data* _this)
        {
           _skill_lv_up_datainit2_user(_this, _skill_lv_up_datainit2_next);
        };
        void _skill_lv_up_dataset4_wrapper(struct _skill_lv_up_data* _this, uint16_t index, char lv)
        {
           _skill_lv_up_dataset4_user(_this, index, lv, _skill_lv_up_dataset4_next);
        };
        
        ::std::array<hook_record, 2> _skill_lv_up_data_functions = 
        {
            _hook_record {
                (LPVOID)0x140078950L,
                (LPVOID *)&_skill_lv_up_datainit2_user,
                (LPVOID *)&_skill_lv_up_datainit2_next,
                (LPVOID)cast_pointer_function(_skill_lv_up_datainit2_wrapper),
                (LPVOID)cast_pointer_function((void(_skill_lv_up_data::*)())&_skill_lv_up_data::init)
            },
            _hook_record {
                (LPVOID)0x14007b800L,
                (LPVOID *)&_skill_lv_up_dataset4_user,
                (LPVOID *)&_skill_lv_up_dataset4_next,
                (LPVOID)cast_pointer_function(_skill_lv_up_dataset4_wrapper),
                (LPVOID)cast_pointer_function((void(_skill_lv_up_data::*)(uint16_t, char))&_skill_lv_up_data::set)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
