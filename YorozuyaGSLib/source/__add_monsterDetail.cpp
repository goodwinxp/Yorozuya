#include <__add_monsterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__add_monsterctor___add_monster2_ptr __add_monsterctor___add_monster2_next(nullptr);
        Info::__add_monsterctor___add_monster2_clbk __add_monsterctor___add_monster2_user(nullptr);
        
        
        void __add_monsterctor___add_monster2_wrapper(struct __add_monster* _this)
        {
           __add_monsterctor___add_monster2_user(_this, __add_monsterctor___add_monster2_next);
        };
        
        ::std::array<hook_record, 1> __add_monster_functions = 
        {
            _hook_record {
                (LPVOID)0x14027a3f0L,
                (LPVOID *)&__add_monsterctor___add_monster2_user,
                (LPVOID *)&__add_monsterctor___add_monster2_next,
                (LPVOID)cast_pointer_function(__add_monsterctor___add_monster2_wrapper),
                (LPVOID)cast_pointer_function((void(__add_monster::*)())&__add_monster::ctor___add_monster)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
