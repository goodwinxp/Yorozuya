#include <_tower_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_tower_create_setdatactor__tower_create_setdata2_ptr _tower_create_setdatactor__tower_create_setdata2_next(nullptr);
        Info::_tower_create_setdatactor__tower_create_setdata2_clbk _tower_create_setdatactor__tower_create_setdata2_user(nullptr);
        
        
        void _tower_create_setdatactor__tower_create_setdata2_wrapper(struct _tower_create_setdata* _this)
        {
           _tower_create_setdatactor__tower_create_setdata2_user(_this, _tower_create_setdatactor__tower_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _tower_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x140132a70L,
                (LPVOID *)&_tower_create_setdatactor__tower_create_setdata2_user,
                (LPVOID *)&_tower_create_setdatactor__tower_create_setdata2_next,
                (LPVOID)cast_pointer_function(_tower_create_setdatactor__tower_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_tower_create_setdata::*)())&_tower_create_setdata::ctor__tower_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
