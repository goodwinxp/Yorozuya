#include <_itembox_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_itembox_create_setdatactor__itembox_create_setdata2_ptr _itembox_create_setdatactor__itembox_create_setdata2_next(nullptr);
        Info::_itembox_create_setdatactor__itembox_create_setdata2_clbk _itembox_create_setdatactor__itembox_create_setdata2_user(nullptr);
        
        
        void _itembox_create_setdatactor__itembox_create_setdata2_wrapper(struct _itembox_create_setdata* _this)
        {
           _itembox_create_setdatactor__itembox_create_setdata2_user(_this, _itembox_create_setdatactor__itembox_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _itembox_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x140167830L,
                (LPVOID *)&_itembox_create_setdatactor__itembox_create_setdata2_user,
                (LPVOID *)&_itembox_create_setdatactor__itembox_create_setdata2_next,
                (LPVOID)cast_pointer_function(_itembox_create_setdatactor__itembox_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_itembox_create_setdata::*)())&_itembox_create_setdata::ctor__itembox_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
