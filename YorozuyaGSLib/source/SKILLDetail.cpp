#include <SKILLDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::SKILLGetDmg2_ptr SKILLGetDmg2_next(nullptr);
        Info::SKILLGetDmg2_clbk SKILLGetDmg2_user(nullptr);
        
        Info::SKILLInit4_ptr SKILLInit4_next(nullptr);
        Info::SKILLInit4_clbk SKILLInit4_user(nullptr);
        
        
        Info::SKILLctor_SKILL6_ptr SKILLctor_SKILL6_next(nullptr);
        Info::SKILLctor_SKILL6_clbk SKILLctor_SKILL6_user(nullptr);
        
        int SKILLGetDmg2_wrapper(struct SKILL* _this, float fDamRate)
        {
           return SKILLGetDmg2_user(_this, fDamRate, SKILLGetDmg2_next);
        };
        void SKILLInit4_wrapper(struct SKILL* _this, int type, int dmg, int minprob, int maxprob, int len, int castdelay, int delay, int el)
        {
           SKILLInit4_user(_this, type, dmg, minprob, maxprob, len, castdelay, delay, el, SKILLInit4_next);
        };
        
        void SKILLctor_SKILL6_wrapper(struct SKILL* _this)
        {
           SKILLctor_SKILL6_user(_this, SKILLctor_SKILL6_next);
        };
        
        ::std::array<hook_record, 3> SKILL_functions = 
        {
            _hook_record {
                (LPVOID)0x14012d250L,
                (LPVOID *)&SKILLGetDmg2_user,
                (LPVOID *)&SKILLGetDmg2_next,
                (LPVOID)cast_pointer_function(SKILLGetDmg2_wrapper),
                (LPVOID)cast_pointer_function((int(SKILL::*)(float))&SKILL::GetDmg)
            },
            _hook_record {
                (LPVOID)0x14012cf80L,
                (LPVOID *)&SKILLInit4_user,
                (LPVOID *)&SKILLInit4_next,
                (LPVOID)cast_pointer_function(SKILLInit4_wrapper),
                (LPVOID)cast_pointer_function((void(SKILL::*)(int, int, int, int, int, int, int, int))&SKILL::Init)
            },
            _hook_record {
                (LPVOID)0x14012cc10L,
                (LPVOID *)&SKILLctor_SKILL6_user,
                (LPVOID *)&SKILLctor_SKILL6_next,
                (LPVOID)cast_pointer_function(SKILLctor_SKILL6_wrapper),
                (LPVOID)cast_pointer_function((void(SKILL::*)())&SKILL::ctor_SKILL)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
