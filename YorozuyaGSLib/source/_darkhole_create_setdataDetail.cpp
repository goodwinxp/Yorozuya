#include <_darkhole_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_darkhole_create_setdatactor__darkhole_create_setdata2_ptr _darkhole_create_setdatactor__darkhole_create_setdata2_next(nullptr);
        Info::_darkhole_create_setdatactor__darkhole_create_setdata2_clbk _darkhole_create_setdatactor__darkhole_create_setdata2_user(nullptr);
        
        
        void _darkhole_create_setdatactor__darkhole_create_setdata2_wrapper(struct _darkhole_create_setdata* _this)
        {
           _darkhole_create_setdatactor__darkhole_create_setdata2_user(_this, _darkhole_create_setdatactor__darkhole_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _darkhole_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x140099470L,
                (LPVOID *)&_darkhole_create_setdatactor__darkhole_create_setdata2_user,
                (LPVOID *)&_darkhole_create_setdatactor__darkhole_create_setdata2_next,
                (LPVOID)cast_pointer_function(_darkhole_create_setdatactor__darkhole_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_darkhole_create_setdata::*)())&_darkhole_create_setdata::ctor__darkhole_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
