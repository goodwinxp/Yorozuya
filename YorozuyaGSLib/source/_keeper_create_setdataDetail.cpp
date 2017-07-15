#include <_keeper_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_keeper_create_setdatactor__keeper_create_setdata2_ptr _keeper_create_setdatactor__keeper_create_setdata2_next(nullptr);
        Info::_keeper_create_setdatactor__keeper_create_setdata2_clbk _keeper_create_setdatactor__keeper_create_setdata2_user(nullptr);
        
        
        void _keeper_create_setdatactor__keeper_create_setdata2_wrapper(struct _keeper_create_setdata* _this)
        {
           _keeper_create_setdatactor__keeper_create_setdata2_user(_this, _keeper_create_setdatactor__keeper_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _keeper_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x140284a90L,
                (LPVOID *)&_keeper_create_setdatactor__keeper_create_setdata2_user,
                (LPVOID *)&_keeper_create_setdatactor__keeper_create_setdata2_next,
                (LPVOID)cast_pointer_function(_keeper_create_setdatactor__keeper_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_keeper_create_setdata::*)())&_keeper_create_setdata::ctor__keeper_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
