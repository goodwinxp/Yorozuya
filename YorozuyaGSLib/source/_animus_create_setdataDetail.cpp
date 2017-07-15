#include <_animus_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_animus_create_setdatactor__animus_create_setdata2_ptr _animus_create_setdatactor__animus_create_setdata2_next(nullptr);
        Info::_animus_create_setdatactor__animus_create_setdata2_clbk _animus_create_setdatactor__animus_create_setdata2_user(nullptr);
        
        
        void _animus_create_setdatactor__animus_create_setdata2_wrapper(struct _animus_create_setdata* _this)
        {
           _animus_create_setdatactor__animus_create_setdata2_user(_this, _animus_create_setdatactor__animus_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _animus_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x1400d16c0L,
                (LPVOID *)&_animus_create_setdatactor__animus_create_setdata2_user,
                (LPVOID *)&_animus_create_setdatactor__animus_create_setdata2_next,
                (LPVOID)cast_pointer_function(_animus_create_setdatactor__animus_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_animus_create_setdata::*)())&_animus_create_setdata::ctor__animus_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
