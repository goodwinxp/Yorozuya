#include <_monster_sp_groupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_monster_sp_groupctor__monster_sp_group2_ptr _monster_sp_groupctor__monster_sp_group2_next(nullptr);
        Info::_monster_sp_groupctor__monster_sp_group2_clbk _monster_sp_groupctor__monster_sp_group2_user(nullptr);
        
        
        void _monster_sp_groupctor__monster_sp_group2_wrapper(struct _monster_sp_group* _this)
        {
           _monster_sp_groupctor__monster_sp_group2_user(_this, _monster_sp_groupctor__monster_sp_group2_next);
        };
        
        ::std::array<hook_record, 1> _monster_sp_group_functions = 
        {
            _hook_record {
                (LPVOID)0x1401618d0L,
                (LPVOID *)&_monster_sp_groupctor__monster_sp_group2_user,
                (LPVOID *)&_monster_sp_groupctor__monster_sp_group2_next,
                (LPVOID)cast_pointer_function(_monster_sp_groupctor__monster_sp_group2_wrapper),
                (LPVOID)cast_pointer_function((void(_monster_sp_group::*)())&_monster_sp_group::ctor__monster_sp_group)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
