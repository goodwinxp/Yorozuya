#include <GUILD_BATTLE__CNormalGuildBattleStateDivideDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateDividector_CNormalGuildBattleStateDivide2_ptr GUILD_BATTLE__CNormalGuildBattleStateDividector_CNormalGuildBattleStateDivide2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateDividector_CNormalGuildBattleStateDivide2_clbk GUILD_BATTLE__CNormalGuildBattleStateDividector_CNormalGuildBattleStateDivide2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateDivideFin4_ptr GUILD_BATTLE__CNormalGuildBattleStateDivideFin4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateDivideFin4_clbk GUILD_BATTLE__CNormalGuildBattleStateDivideFin4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateDivideGetTerm6_ptr GUILD_BATTLE__CNormalGuildBattleStateDivideGetTerm6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateDivideGetTerm6_clbk GUILD_BATTLE__CNormalGuildBattleStateDivideGetTerm6_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateDividedtor_CNormalGuildBattleStateDivide8_ptr GUILD_BATTLE__CNormalGuildBattleStateDividedtor_CNormalGuildBattleStateDivide8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateDividedtor_CNormalGuildBattleStateDivide8_clbk GUILD_BATTLE__CNormalGuildBattleStateDividedtor_CNormalGuildBattleStateDivide8_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateDividector_CNormalGuildBattleStateDivide2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateDivide* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateDividector_CNormalGuildBattleStateDivide2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateDividector_CNormalGuildBattleStateDivide2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateDivideFin4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateDivide* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateDivideFin4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateDivideFin4_next);
            };
            ATL::CTimeSpan* GUILD_BATTLE__CNormalGuildBattleStateDivideGetTerm6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateDivide* _this, ATL::CTimeSpan* result)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateDivideGetTerm6_user(_this, result, GUILD_BATTLE__CNormalGuildBattleStateDivideGetTerm6_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateDividedtor_CNormalGuildBattleStateDivide8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateDivide* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateDividedtor_CNormalGuildBattleStateDivide8_user(_this, GUILD_BATTLE__CNormalGuildBattleStateDividedtor_CNormalGuildBattleStateDivide8_next);
            };
            
            ::std::array<hook_record, 4> CNormalGuildBattleStateDivide_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f0d20L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateDividector_CNormalGuildBattleStateDivide2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateDividector_CNormalGuildBattleStateDivide2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateDividector_CNormalGuildBattleStateDivide2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateDivide::*)())&GUILD_BATTLE::CNormalGuildBattleStateDivide::ctor_CNormalGuildBattleStateDivide)
                },
                _hook_record {
                    (LPVOID)0x1403f0d70L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateDivideFin4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateDivideFin4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateDivideFin4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateDivide::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateDivide::Fin)
                },
                _hook_record {
                    (LPVOID)0x140080160L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateDivideGetTerm6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateDivideGetTerm6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateDivideGetTerm6_wrapper),
                    (LPVOID)cast_pointer_function((ATL::CTimeSpan*(GUILD_BATTLE::CNormalGuildBattleStateDivide::*)(ATL::CTimeSpan*))&GUILD_BATTLE::CNormalGuildBattleStateDivide::GetTerm)
                },
                _hook_record {
                    (LPVOID)0x140080100L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateDividedtor_CNormalGuildBattleStateDivide8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateDividedtor_CNormalGuildBattleStateDivide8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateDividedtor_CNormalGuildBattleStateDivide8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateDivide::*)())&GUILD_BATTLE::CNormalGuildBattleStateDivide::dtor_CNormalGuildBattleStateDivide)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
