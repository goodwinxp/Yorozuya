#include <_limit_item_db_dataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_limit_item_db_datactor__limit_item_db_data2_ptr _limit_item_db_datactor__limit_item_db_data2_next(nullptr);
        Info::_limit_item_db_datactor__limit_item_db_data2_clbk _limit_item_db_datactor__limit_item_db_data2_user(nullptr);
        
        
        void _limit_item_db_datactor__limit_item_db_data2_wrapper(struct _limit_item_db_data* _this)
        {
           _limit_item_db_datactor__limit_item_db_data2_user(_this, _limit_item_db_datactor__limit_item_db_data2_next);
        };
        
        ::std::array<hook_record, 1> _limit_item_db_data_functions = 
        {
            _hook_record {
                (LPVOID)0x14034bdd0L,
                (LPVOID *)&_limit_item_db_datactor__limit_item_db_data2_user,
                (LPVOID *)&_limit_item_db_datactor__limit_item_db_data2_next,
                (LPVOID)cast_pointer_function(_limit_item_db_datactor__limit_item_db_data2_wrapper),
                (LPVOID)cast_pointer_function((void(_limit_item_db_data::*)())&_limit_item_db_data::ctor__limit_item_db_data)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
