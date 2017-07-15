#include <_object_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_object_create_setdatactor__object_create_setdata2_ptr _object_create_setdatactor__object_create_setdata2_next(nullptr);
        Info::_object_create_setdatactor__object_create_setdata2_clbk _object_create_setdatactor__object_create_setdata2_user(nullptr);
        
        
        void _object_create_setdatactor__object_create_setdata2_wrapper(struct _object_create_setdata* _this)
        {
           _object_create_setdatactor__object_create_setdata2_user(_this, _object_create_setdatactor__object_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _object_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x140078e70L,
                (LPVOID *)&_object_create_setdatactor__object_create_setdata2_user,
                (LPVOID *)&_object_create_setdatactor__object_create_setdata2_next,
                (LPVOID)cast_pointer_function(_object_create_setdatactor__object_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_object_create_setdata::*)())&_object_create_setdata::ctor__object_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
