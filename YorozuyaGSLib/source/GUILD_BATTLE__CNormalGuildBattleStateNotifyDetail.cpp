#include <GUILD_BATTLE__CNormalGuildBattleStateNotifyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateNotifyctor_CNormalGuildBattleStateNotify2_ptr GUILD_BATTLE__CNormalGuildBattleStateNotifyctor_CNormalGuildBattleStateNotify2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateNotifyctor_CNormalGuildBattleStateNotify2_clbk GUILD_BATTLE__CNormalGuildBattleStateNotifyctor_CNormalGuildBattleStateNotify2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateNotifyEnter4_ptr GUILD_BATTLE__CNormalGuildBattleStateNotifyEnter4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateNotifyEnter4_clbk GUILD_BATTLE__CNormalGuildBattleStateNotifyEnter4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateNotifyGetTerm6_ptr GUILD_BATTLE__CNormalGuildBattleStateNotifyGetTerm6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateNotifyGetTerm6_clbk GUILD_BATTLE__CNormalGuildBattleStateNotifyGetTerm6_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateNotifydtor_CNormalGuildBattleStateNotify8_ptr GUILD_BATTLE__CNormalGuildBattleStateNotifydtor_CNormalGuildBattleStateNotify8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateNotifydtor_CNormalGuildBattleStateNotify8_clbk GUILD_BATTLE__CNormalGuildBattleStateNotifydtor_CNormalGuildBattleStateNotify8_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateNotifyctor_CNormalGuildBattleStateNotify2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateNotify* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateNotifyctor_CNormalGuildBattleStateNotify2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateNotifyctor_CNormalGuildBattleStateNotify2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateNotifyEnter4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateNotify* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateNotifyEnter4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateNotifyEnter4_next);
            };
            ATL::CTimeSpan* GUILD_BATTLE__CNormalGuildBattleStateNotifyGetTerm6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateNotify* _this, ATL::CTimeSpan* result)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateNotifyGetTerm6_user(_this, result, GUILD_BATTLE__CNormalGuildBattleStateNotifyGetTerm6_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateNotifydtor_CNormalGuildBattleStateNotify8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateNotify* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateNotifydtor_CNormalGuildBattleStateNotify8_user(_this, GUILD_BATTLE__CNormalGuildBattleStateNotifydtor_CNormalGuildBattleStateNotify8_next);
            };
            
            ::std::array<hook_record, 4> CNormalGuildBattleStateNotify_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f06b0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateNotifyctor_CNormalGuildBattleStateNotify2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateNotifyctor_CNormalGuildBattleStateNotify2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateNotifyctor_CNormalGuildBattleStateNotify2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateNotify::*)())&GUILD_BATTLE::CNormalGuildBattleStateNotify::ctor_CNormalGuildBattleStateNotify)
                },
                _hook_record {
                    (LPVOID)0x1403f0700L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateNotifyEnter4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateNotifyEnter4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateNotifyEnter4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateNotify::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateNotify::Enter)
                },
                _hook_record {
                    (LPVOID)0x14007fc20L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateNotifyGetTerm6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateNotifyGetTerm6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateNotifyGetTerm6_wrapper),
                    (LPVOID)cast_pointer_function((ATL::CTimeSpan*(GUILD_BATTLE::CNormalGuildBattleStateNotify::*)(ATL::CTimeSpan*))&GUILD_BATTLE::CNormalGuildBattleStateNotify::GetTerm)
                },
                _hook_record {
                    (LPVOID)0x14007faf0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateNotifydtor_CNormalGuildBattleStateNotify8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateNotifydtor_CNormalGuildBattleStateNotify8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateNotifydtor_CNormalGuildBattleStateNotify8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateNotify::*)())&GUILD_BATTLE::CNormalGuildBattleStateNotify::dtor_CNormalGuildBattleStateNotify)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
