#include <_rege_char_dataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_rege_char_datactor__rege_char_data2_ptr _rege_char_datactor__rege_char_data2_next(nullptr);
        Info::_rege_char_datactor__rege_char_data2_clbk _rege_char_datactor__rege_char_data2_user(nullptr);
        
        
        void _rege_char_datactor__rege_char_data2_wrapper(struct _rege_char_data* _this)
        {
           _rege_char_datactor__rege_char_data2_user(_this, _rege_char_datactor__rege_char_data2_next);
        };
        
        ::std::array<hook_record, 1> _rege_char_data_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bf550L,
                (LPVOID *)&_rege_char_datactor__rege_char_data2_user,
                (LPVOID *)&_rege_char_datactor__rege_char_data2_next,
                (LPVOID)cast_pointer_function(_rege_char_datactor__rege_char_data2_wrapper),
                (LPVOID)cast_pointer_function((void(_rege_char_data::*)())&_rege_char_data::ctor__rege_char_data)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
