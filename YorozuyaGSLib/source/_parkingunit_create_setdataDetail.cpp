#include <_parkingunit_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_parkingunit_create_setdatactor__parkingunit_create_setdata2_ptr _parkingunit_create_setdatactor__parkingunit_create_setdata2_next(nullptr);
        Info::_parkingunit_create_setdatactor__parkingunit_create_setdata2_clbk _parkingunit_create_setdatactor__parkingunit_create_setdata2_user(nullptr);
        
        
        void _parkingunit_create_setdatactor__parkingunit_create_setdata2_wrapper(struct _parkingunit_create_setdata* _this)
        {
           _parkingunit_create_setdatactor__parkingunit_create_setdata2_user(_this, _parkingunit_create_setdatactor__parkingunit_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _parkingunit_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x1401083e0L,
                (LPVOID *)&_parkingunit_create_setdatactor__parkingunit_create_setdata2_user,
                (LPVOID *)&_parkingunit_create_setdatactor__parkingunit_create_setdata2_next,
                (LPVOID)cast_pointer_function(_parkingunit_create_setdatactor__parkingunit_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_parkingunit_create_setdata::*)())&_parkingunit_create_setdata::ctor__parkingunit_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
