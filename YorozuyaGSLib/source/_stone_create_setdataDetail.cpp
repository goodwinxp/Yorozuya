#include <_stone_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_stone_create_setdatactor__stone_create_setdata2_ptr _stone_create_setdatactor__stone_create_setdata2_next(nullptr);
        Info::_stone_create_setdatactor__stone_create_setdata2_clbk _stone_create_setdatactor__stone_create_setdata2_user(nullptr);
        
        
        void _stone_create_setdatactor__stone_create_setdata2_wrapper(struct _stone_create_setdata* _this)
        {
           _stone_create_setdatactor__stone_create_setdata2_user(_this, _stone_create_setdatactor__stone_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _stone_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x140284530L,
                (LPVOID *)&_stone_create_setdatactor__stone_create_setdata2_user,
                (LPVOID *)&_stone_create_setdatactor__stone_create_setdata2_next,
                (LPVOID)cast_pointer_function(_stone_create_setdatactor__stone_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_stone_create_setdata::*)())&_stone_create_setdata::ctor__stone_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
