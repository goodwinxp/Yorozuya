#include <_mastery_up_dataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_mastery_up_datactor__mastery_up_data2_ptr _mastery_up_datactor__mastery_up_data2_next(nullptr);
        Info::_mastery_up_datactor__mastery_up_data2_clbk _mastery_up_datactor__mastery_up_data2_user(nullptr);
        
        Info::_mastery_up_datainit4_ptr _mastery_up_datainit4_next(nullptr);
        Info::_mastery_up_datainit4_clbk _mastery_up_datainit4_user(nullptr);
        
        Info::_mastery_up_dataset6_ptr _mastery_up_dataset6_next(nullptr);
        Info::_mastery_up_dataset6_clbk _mastery_up_dataset6_user(nullptr);
        
        
        void _mastery_up_datactor__mastery_up_data2_wrapper(struct _mastery_up_data* _this)
        {
           _mastery_up_datactor__mastery_up_data2_user(_this, _mastery_up_datactor__mastery_up_data2_next);
        };
        void _mastery_up_datainit4_wrapper(struct _mastery_up_data* _this)
        {
           _mastery_up_datainit4_user(_this, _mastery_up_datainit4_next);
        };
        void _mastery_up_dataset6_wrapper(struct _mastery_up_data* _this, char code, char index, char mastery)
        {
           _mastery_up_dataset6_user(_this, code, index, mastery, _mastery_up_dataset6_next);
        };
        
        ::std::array<hook_record, 3> _mastery_up_data_functions = 
        {
            _hook_record {
                (LPVOID)0x140074690L,
                (LPVOID *)&_mastery_up_datactor__mastery_up_data2_user,
                (LPVOID *)&_mastery_up_datactor__mastery_up_data2_next,
                (LPVOID)cast_pointer_function(_mastery_up_datactor__mastery_up_data2_wrapper),
                (LPVOID)cast_pointer_function((void(_mastery_up_data::*)())&_mastery_up_data::ctor__mastery_up_data)
            },
            _hook_record {
                (LPVOID)0x1400746e0L,
                (LPVOID *)&_mastery_up_datainit4_user,
                (LPVOID *)&_mastery_up_datainit4_next,
                (LPVOID)cast_pointer_function(_mastery_up_datainit4_wrapper),
                (LPVOID)cast_pointer_function((void(_mastery_up_data::*)())&_mastery_up_data::init)
            },
            _hook_record {
                (LPVOID)0x14007b7a0L,
                (LPVOID *)&_mastery_up_dataset6_user,
                (LPVOID *)&_mastery_up_dataset6_next,
                (LPVOID)cast_pointer_function(_mastery_up_dataset6_wrapper),
                (LPVOID)cast_pointer_function((void(_mastery_up_data::*)(char, char, char))&_mastery_up_data::set)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
