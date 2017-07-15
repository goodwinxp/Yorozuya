#include <__change_monsterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__change_monsterctor___change_monster2_ptr __change_monsterctor___change_monster2_next(nullptr);
        Info::__change_monsterctor___change_monster2_clbk __change_monsterctor___change_monster2_user(nullptr);
        
        
        Info::__change_monsterdtor___change_monster6_ptr __change_monsterdtor___change_monster6_next(nullptr);
        Info::__change_monsterdtor___change_monster6_clbk __change_monsterdtor___change_monster6_user(nullptr);
        
        
        void __change_monsterctor___change_monster2_wrapper(struct __change_monster* _this)
        {
           __change_monsterctor___change_monster2_user(_this, __change_monsterctor___change_monster2_next);
        };
        
        void __change_monsterdtor___change_monster6_wrapper(struct __change_monster* _this)
        {
           __change_monsterdtor___change_monster6_user(_this, __change_monsterdtor___change_monster6_next);
        };
        
        ::std::array<hook_record, 2> __change_monster_functions = 
        {
            _hook_record {
                (LPVOID)0x14027a4d0L,
                (LPVOID *)&__change_monsterctor___change_monster2_user,
                (LPVOID *)&__change_monsterctor___change_monster2_next,
                (LPVOID)cast_pointer_function(__change_monsterctor___change_monster2_wrapper),
                (LPVOID)cast_pointer_function((void(__change_monster::*)())&__change_monster::ctor___change_monster)
            },
            _hook_record {
                (LPVOID)0x140272e60L,
                (LPVOID *)&__change_monsterdtor___change_monster6_user,
                (LPVOID *)&__change_monsterdtor___change_monster6_next,
                (LPVOID)cast_pointer_function(__change_monsterdtor___change_monster6_wrapper),
                (LPVOID)cast_pointer_function((void(__change_monster::*)())&__change_monster::dtor___change_monster)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
