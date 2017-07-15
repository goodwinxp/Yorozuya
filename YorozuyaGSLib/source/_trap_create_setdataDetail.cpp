#include <_trap_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_trap_create_setdatactor__trap_create_setdata2_ptr _trap_create_setdatactor__trap_create_setdata2_next(nullptr);
        Info::_trap_create_setdatactor__trap_create_setdata2_clbk _trap_create_setdatactor__trap_create_setdata2_user(nullptr);
        
        
        void _trap_create_setdatactor__trap_create_setdata2_wrapper(struct _trap_create_setdata* _this)
        {
           _trap_create_setdatactor__trap_create_setdata2_user(_this, _trap_create_setdatactor__trap_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _trap_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x140141480L,
                (LPVOID *)&_trap_create_setdatactor__trap_create_setdata2_user,
                (LPVOID *)&_trap_create_setdatactor__trap_create_setdata2_next,
                (LPVOID)cast_pointer_function(_trap_create_setdatactor__trap_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_trap_create_setdata::*)())&_trap_create_setdata::ctor__trap_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
