#include <GUILD_BATTLE__CNormalGuildBattleStateFinDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateFinctor_CNormalGuildBattleStateFin2_ptr GUILD_BATTLE__CNormalGuildBattleStateFinctor_CNormalGuildBattleStateFin2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateFinctor_CNormalGuildBattleStateFin2_clbk GUILD_BATTLE__CNormalGuildBattleStateFinctor_CNormalGuildBattleStateFin2_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateFinctor_Fin4_ptr GUILD_BATTLE__CNormalGuildBattleStateFinctor_Fin4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateFinctor_Fin4_clbk GUILD_BATTLE__CNormalGuildBattleStateFinctor_Fin4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateFinGetTerm6_ptr GUILD_BATTLE__CNormalGuildBattleStateFinGetTerm6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateFinGetTerm6_clbk GUILD_BATTLE__CNormalGuildBattleStateFinGetTerm6_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateFindtor_CNormalGuildBattleStateFin8_ptr GUILD_BATTLE__CNormalGuildBattleStateFindtor_CNormalGuildBattleStateFin8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateFindtor_CNormalGuildBattleStateFin8_clbk GUILD_BATTLE__CNormalGuildBattleStateFindtor_CNormalGuildBattleStateFin8_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateFinctor_CNormalGuildBattleStateFin2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateFin* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateFinctor_CNormalGuildBattleStateFin2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateFinctor_CNormalGuildBattleStateFin2_next);
            };
            
            int GUILD_BATTLE__CNormalGuildBattleStateFinctor_Fin4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateFin* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateFinctor_Fin4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateFinctor_Fin4_next);
            };
            ATL::CTimeSpan* GUILD_BATTLE__CNormalGuildBattleStateFinGetTerm6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateFin* _this, ATL::CTimeSpan* result)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateFinGetTerm6_user(_this, result, GUILD_BATTLE__CNormalGuildBattleStateFinGetTerm6_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateFindtor_CNormalGuildBattleStateFin8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateFin* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateFindtor_CNormalGuildBattleStateFin8_user(_this, GUILD_BATTLE__CNormalGuildBattleStateFindtor_CNormalGuildBattleStateFin8_next);
            };
            
            ::std::array<hook_record, 4> CNormalGuildBattleStateFin_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f0f20L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFinctor_CNormalGuildBattleStateFin2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFinctor_CNormalGuildBattleStateFin2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateFinctor_CNormalGuildBattleStateFin2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateFin::*)())&GUILD_BATTLE::CNormalGuildBattleStateFin::ctor_CNormalGuildBattleStateFin)
                },
                _hook_record {
                    (LPVOID)0x1403f0f70L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFinctor_Fin4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFinctor_Fin4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateFinctor_Fin4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateFin::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateFin::ctor_Fin)
                },
                _hook_record {
                    (LPVOID)0x1400802e0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFinGetTerm6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFinGetTerm6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateFinGetTerm6_wrapper),
                    (LPVOID)cast_pointer_function((ATL::CTimeSpan*(GUILD_BATTLE::CNormalGuildBattleStateFin::*)(ATL::CTimeSpan*))&GUILD_BATTLE::CNormalGuildBattleStateFin::GetTerm)
                },
                _hook_record {
                    (LPVOID)0x140080280L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFindtor_CNormalGuildBattleStateFin8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFindtor_CNormalGuildBattleStateFin8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateFindtor_CNormalGuildBattleStateFin8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateFin::*)())&GUILD_BATTLE::CNormalGuildBattleStateFin::dtor_CNormalGuildBattleStateFin)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
