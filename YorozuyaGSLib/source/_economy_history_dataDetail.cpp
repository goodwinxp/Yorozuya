#include <_economy_history_dataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_economy_history_dataInit2_ptr _economy_history_dataInit2_next(nullptr);
        Info::_economy_history_dataInit2_clbk _economy_history_dataInit2_user(nullptr);
        
        
        Info::_economy_history_datactor__economy_history_data4_ptr _economy_history_datactor__economy_history_data4_next(nullptr);
        Info::_economy_history_datactor__economy_history_data4_clbk _economy_history_datactor__economy_history_data4_user(nullptr);
        
        void _economy_history_dataInit2_wrapper(struct _economy_history_data* _this)
        {
           _economy_history_dataInit2_user(_this, _economy_history_dataInit2_next);
        };
        
        void _economy_history_datactor__economy_history_data4_wrapper(struct _economy_history_data* _this)
        {
           _economy_history_datactor__economy_history_data4_user(_this, _economy_history_datactor__economy_history_data4_next);
        };
        
        ::std::array<hook_record, 2> _economy_history_data_functions = 
        {
            _hook_record {
                (LPVOID)0x1402058c0L,
                (LPVOID *)&_economy_history_dataInit2_user,
                (LPVOID *)&_economy_history_dataInit2_next,
                (LPVOID)cast_pointer_function(_economy_history_dataInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_economy_history_data::*)())&_economy_history_data::Init)
            },
            _hook_record {
                (LPVOID)0x140205870L,
                (LPVOID *)&_economy_history_datactor__economy_history_data4_user,
                (LPVOID *)&_economy_history_datactor__economy_history_data4_next,
                (LPVOID)cast_pointer_function(_economy_history_datactor__economy_history_data4_wrapper),
                (LPVOID)cast_pointer_function((void(_economy_history_data::*)())&_economy_history_data::ctor__economy_history_data)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
