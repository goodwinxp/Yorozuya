#include <__respawn_monsterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__respawn_monsterctor___respawn_monster2_ptr __respawn_monsterctor___respawn_monster2_next(nullptr);
        Info::__respawn_monsterctor___respawn_monster2_clbk __respawn_monsterctor___respawn_monster2_user(nullptr);
        
        
        void __respawn_monsterctor___respawn_monster2_wrapper(struct __respawn_monster* _this)
        {
           __respawn_monsterctor___respawn_monster2_user(_this, __respawn_monsterctor___respawn_monster2_next);
        };
        
        ::std::array<hook_record, 1> __respawn_monster_functions = 
        {
            _hook_record {
                (LPVOID)0x14027a450L,
                (LPVOID *)&__respawn_monsterctor___respawn_monster2_user,
                (LPVOID *)&__respawn_monsterctor___respawn_monster2_next,
                (LPVOID)cast_pointer_function(__respawn_monsterctor___respawn_monster2_wrapper),
                (LPVOID)cast_pointer_function((void(__respawn_monster::*)())&__respawn_monster::ctor___respawn_monster)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
