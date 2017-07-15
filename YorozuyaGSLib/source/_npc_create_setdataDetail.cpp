#include <_npc_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_npc_create_setdatactor__npc_create_setdata2_ptr _npc_create_setdatactor__npc_create_setdata2_next(nullptr);
        Info::_npc_create_setdatactor__npc_create_setdata2_clbk _npc_create_setdatactor__npc_create_setdata2_user(nullptr);
        
        
        void _npc_create_setdatactor__npc_create_setdata2_wrapper(struct _npc_create_setdata* _this)
        {
           _npc_create_setdatactor__npc_create_setdata2_user(_this, _npc_create_setdatactor__npc_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _npc_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x140199140L,
                (LPVOID *)&_npc_create_setdatactor__npc_create_setdata2_user,
                (LPVOID *)&_npc_create_setdatactor__npc_create_setdata2_next,
                (LPVOID)cast_pointer_function(_npc_create_setdatactor__npc_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_npc_create_setdata::*)())&_npc_create_setdata::ctor__npc_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
