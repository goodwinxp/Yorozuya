#include <__monster_groupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__monster_groupctor___monster_group2_ptr __monster_groupctor___monster_group2_next(nullptr);
        Info::__monster_groupctor___monster_group2_clbk __monster_groupctor___monster_group2_user(nullptr);
        
        
        void __monster_groupctor___monster_group2_wrapper(struct __monster_group* _this)
        {
           __monster_groupctor___monster_group2_user(_this, __monster_groupctor___monster_group2_next);
        };
        
        ::std::array<hook_record, 1> __monster_group_functions = 
        {
            _hook_record {
                (LPVOID)0x140279fb0L,
                (LPVOID *)&__monster_groupctor___monster_group2_user,
                (LPVOID *)&__monster_groupctor___monster_group2_next,
                (LPVOID)cast_pointer_function(__monster_groupctor___monster_group2_wrapper),
                (LPVOID)cast_pointer_function((void(__monster_group::*)())&__monster_group::ctor___monster_group)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
