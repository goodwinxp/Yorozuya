#include <GUILD_BATTLE__CNormalGuildBattleStateCountDownDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateCountDownctor_CNormalGuildBattleStateCountDown2_ptr GUILD_BATTLE__CNormalGuildBattleStateCountDownctor_CNormalGuildBattleStateCountDown2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateCountDownctor_CNormalGuildBattleStateCountDown2_clbk GUILD_BATTLE__CNormalGuildBattleStateCountDownctor_CNormalGuildBattleStateCountDown2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateCountDownEnter4_ptr GUILD_BATTLE__CNormalGuildBattleStateCountDownEnter4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateCountDownEnter4_clbk GUILD_BATTLE__CNormalGuildBattleStateCountDownEnter4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateCountDownGetTerm6_ptr GUILD_BATTLE__CNormalGuildBattleStateCountDownGetTerm6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateCountDownGetTerm6_clbk GUILD_BATTLE__CNormalGuildBattleStateCountDownGetTerm6_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateCountDowndtor_CNormalGuildBattleStateCountDown8_ptr GUILD_BATTLE__CNormalGuildBattleStateCountDowndtor_CNormalGuildBattleStateCountDown8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateCountDowndtor_CNormalGuildBattleStateCountDown8_clbk GUILD_BATTLE__CNormalGuildBattleStateCountDowndtor_CNormalGuildBattleStateCountDown8_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateCountDownctor_CNormalGuildBattleStateCountDown2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateCountDown* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateCountDownctor_CNormalGuildBattleStateCountDown2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateCountDownctor_CNormalGuildBattleStateCountDown2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateCountDownEnter4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateCountDown* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateCountDownEnter4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateCountDownEnter4_next);
            };
            ATL::CTimeSpan* GUILD_BATTLE__CNormalGuildBattleStateCountDownGetTerm6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateCountDown* _this, ATL::CTimeSpan* result)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateCountDownGetTerm6_user(_this, result, GUILD_BATTLE__CNormalGuildBattleStateCountDownGetTerm6_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateCountDowndtor_CNormalGuildBattleStateCountDown8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateCountDown* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateCountDowndtor_CNormalGuildBattleStateCountDown8_user(_this, GUILD_BATTLE__CNormalGuildBattleStateCountDowndtor_CNormalGuildBattleStateCountDown8_next);
            };
            
            ::std::array<hook_record, 4> CNormalGuildBattleStateCountDown_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f0820L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateCountDownctor_CNormalGuildBattleStateCountDown2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateCountDownctor_CNormalGuildBattleStateCountDown2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateCountDownctor_CNormalGuildBattleStateCountDown2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateCountDown::*)())&GUILD_BATTLE::CNormalGuildBattleStateCountDown::ctor_CNormalGuildBattleStateCountDown)
                },
                _hook_record {
                    (LPVOID)0x1403f0870L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateCountDownEnter4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateCountDownEnter4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateCountDownEnter4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateCountDown::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateCountDown::Enter)
                },
                _hook_record {
                    (LPVOID)0x14007fdc0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateCountDownGetTerm6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateCountDownGetTerm6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateCountDownGetTerm6_wrapper),
                    (LPVOID)cast_pointer_function((ATL::CTimeSpan*(GUILD_BATTLE::CNormalGuildBattleStateCountDown::*)(ATL::CTimeSpan*))&GUILD_BATTLE::CNormalGuildBattleStateCountDown::GetTerm)
                },
                _hook_record {
                    (LPVOID)0x14007fd60L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateCountDowndtor_CNormalGuildBattleStateCountDown8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateCountDowndtor_CNormalGuildBattleStateCountDown8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateCountDowndtor_CNormalGuildBattleStateCountDown8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateCountDown::*)())&GUILD_BATTLE::CNormalGuildBattleStateCountDown::dtor_CNormalGuildBattleStateCountDown)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
