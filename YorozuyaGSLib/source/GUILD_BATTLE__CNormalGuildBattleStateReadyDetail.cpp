#include <GUILD_BATTLE__CNormalGuildBattleStateReadyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateReadyctor_CNormalGuildBattleStateReady2_ptr GUILD_BATTLE__CNormalGuildBattleStateReadyctor_CNormalGuildBattleStateReady2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateReadyctor_CNormalGuildBattleStateReady2_clbk GUILD_BATTLE__CNormalGuildBattleStateReadyctor_CNormalGuildBattleStateReady2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateReadyEnter4_ptr GUILD_BATTLE__CNormalGuildBattleStateReadyEnter4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateReadyEnter4_clbk GUILD_BATTLE__CNormalGuildBattleStateReadyEnter4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateReadyGetTerm6_ptr GUILD_BATTLE__CNormalGuildBattleStateReadyGetTerm6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateReadyGetTerm6_clbk GUILD_BATTLE__CNormalGuildBattleStateReadyGetTerm6_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateReadydtor_CNormalGuildBattleStateReady8_ptr GUILD_BATTLE__CNormalGuildBattleStateReadydtor_CNormalGuildBattleStateReady8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateReadydtor_CNormalGuildBattleStateReady8_clbk GUILD_BATTLE__CNormalGuildBattleStateReadydtor_CNormalGuildBattleStateReady8_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateReadyctor_CNormalGuildBattleStateReady2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateReady* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateReadyctor_CNormalGuildBattleStateReady2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateReadyctor_CNormalGuildBattleStateReady2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateReadyEnter4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateReady* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateReadyEnter4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateReadyEnter4_next);
            };
            ATL::CTimeSpan* GUILD_BATTLE__CNormalGuildBattleStateReadyGetTerm6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateReady* _this, ATL::CTimeSpan* result)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateReadyGetTerm6_user(_this, result, GUILD_BATTLE__CNormalGuildBattleStateReadyGetTerm6_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateReadydtor_CNormalGuildBattleStateReady8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateReady* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateReadydtor_CNormalGuildBattleStateReady8_user(_this, GUILD_BATTLE__CNormalGuildBattleStateReadydtor_CNormalGuildBattleStateReady8_next);
            };
            
            ::std::array<hook_record, 4> CNormalGuildBattleStateReady_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f0770L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReadyctor_CNormalGuildBattleStateReady2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReadyctor_CNormalGuildBattleStateReady2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateReadyctor_CNormalGuildBattleStateReady2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateReady::*)())&GUILD_BATTLE::CNormalGuildBattleStateReady::ctor_CNormalGuildBattleStateReady)
                },
                _hook_record {
                    (LPVOID)0x1403f07c0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReadyEnter4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReadyEnter4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateReadyEnter4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateReady::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateReady::Enter)
                },
                _hook_record {
                    (LPVOID)0x14007fcf0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReadyGetTerm6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReadyGetTerm6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateReadyGetTerm6_wrapper),
                    (LPVOID)cast_pointer_function((ATL::CTimeSpan*(GUILD_BATTLE::CNormalGuildBattleStateReady::*)(ATL::CTimeSpan*))&GUILD_BATTLE::CNormalGuildBattleStateReady::GetTerm)
                },
                _hook_record {
                    (LPVOID)0x14007fc90L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReadydtor_CNormalGuildBattleStateReady8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReadydtor_CNormalGuildBattleStateReady8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateReadydtor_CNormalGuildBattleStateReady8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateReady::*)())&GUILD_BATTLE::CNormalGuildBattleStateReady::dtor_CNormalGuildBattleStateReady)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
