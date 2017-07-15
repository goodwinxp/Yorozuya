#include <_character_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_character_create_setdatactor__character_create_setdata2_ptr _character_create_setdatactor__character_create_setdata2_next(nullptr);
        Info::_character_create_setdatactor__character_create_setdata2_clbk _character_create_setdatactor__character_create_setdata2_user(nullptr);
        
        
        void _character_create_setdatactor__character_create_setdata2_wrapper(struct _character_create_setdata* _this)
        {
           _character_create_setdatactor__character_create_setdata2_user(_this, _character_create_setdatactor__character_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _character_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x140078e20L,
                (LPVOID *)&_character_create_setdatactor__character_create_setdata2_user,
                (LPVOID *)&_character_create_setdatactor__character_create_setdata2_next,
                (LPVOID)cast_pointer_function(_character_create_setdatactor__character_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_character_create_setdata::*)())&_character_create_setdata::ctor__character_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
