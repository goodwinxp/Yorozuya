#include <_nuclear_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_nuclear_create_setdatactor__nuclear_create_setdata2_ptr _nuclear_create_setdatactor__nuclear_create_setdata2_next(nullptr);
        Info::_nuclear_create_setdatactor__nuclear_create_setdata2_clbk _nuclear_create_setdatactor__nuclear_create_setdata2_user(nullptr);
        
        
        void _nuclear_create_setdatactor__nuclear_create_setdata2_wrapper(struct _nuclear_create_setdata* _this)
        {
           _nuclear_create_setdatactor__nuclear_create_setdata2_user(_this, _nuclear_create_setdatactor__nuclear_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _nuclear_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x14013e2c0L,
                (LPVOID *)&_nuclear_create_setdatactor__nuclear_create_setdata2_user,
                (LPVOID *)&_nuclear_create_setdatactor__nuclear_create_setdata2_next,
                (LPVOID)cast_pointer_function(_nuclear_create_setdatactor__nuclear_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_nuclear_create_setdata::*)())&_nuclear_create_setdata::ctor__nuclear_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
