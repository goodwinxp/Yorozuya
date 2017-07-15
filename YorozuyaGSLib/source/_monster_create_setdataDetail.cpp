#include <_monster_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_monster_create_setdatactor__monster_create_setdata2_ptr _monster_create_setdatactor__monster_create_setdata2_next(nullptr);
        Info::_monster_create_setdatactor__monster_create_setdata2_clbk _monster_create_setdatactor__monster_create_setdata2_user(nullptr);
        
        
        void _monster_create_setdatactor__monster_create_setdata2_wrapper(struct _monster_create_setdata* _this)
        {
           _monster_create_setdatactor__monster_create_setdata2_user(_this, _monster_create_setdatactor__monster_create_setdata2_next);
        };
        
        ::std::array<hook_record, 1> _monster_create_setdata_functions = 
        {
            _hook_record {
                (LPVOID)0x14014c340L,
                (LPVOID *)&_monster_create_setdatactor__monster_create_setdata2_user,
                (LPVOID *)&_monster_create_setdatactor__monster_create_setdata2_next,
                (LPVOID)cast_pointer_function(_monster_create_setdatactor__monster_create_setdata2_wrapper),
                (LPVOID)cast_pointer_function((void(_monster_create_setdata::*)())&_monster_create_setdata::ctor__monster_create_setdata)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
