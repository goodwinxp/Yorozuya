#include <GUILD_BATTLE__CNormalGuildBattleStateReturnDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateReturnctor_CNormalGuildBattleStateReturn2_ptr GUILD_BATTLE__CNormalGuildBattleStateReturnctor_CNormalGuildBattleStateReturn2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateReturnctor_CNormalGuildBattleStateReturn2_clbk GUILD_BATTLE__CNormalGuildBattleStateReturnctor_CNormalGuildBattleStateReturn2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateReturnFin4_ptr GUILD_BATTLE__CNormalGuildBattleStateReturnFin4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateReturnFin4_clbk GUILD_BATTLE__CNormalGuildBattleStateReturnFin4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateReturnGetTerm6_ptr GUILD_BATTLE__CNormalGuildBattleStateReturnGetTerm6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateReturnGetTerm6_clbk GUILD_BATTLE__CNormalGuildBattleStateReturnGetTerm6_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateReturndtor_CNormalGuildBattleStateReturn8_ptr GUILD_BATTLE__CNormalGuildBattleStateReturndtor_CNormalGuildBattleStateReturn8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateReturndtor_CNormalGuildBattleStateReturn8_clbk GUILD_BATTLE__CNormalGuildBattleStateReturndtor_CNormalGuildBattleStateReturn8_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateReturnctor_CNormalGuildBattleStateReturn2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateReturn* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateReturnctor_CNormalGuildBattleStateReturn2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateReturnctor_CNormalGuildBattleStateReturn2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateReturnFin4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateReturn* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateReturnFin4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateReturnFin4_next);
            };
            ATL::CTimeSpan* GUILD_BATTLE__CNormalGuildBattleStateReturnGetTerm6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateReturn* _this, ATL::CTimeSpan* result)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateReturnGetTerm6_user(_this, result, GUILD_BATTLE__CNormalGuildBattleStateReturnGetTerm6_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateReturndtor_CNormalGuildBattleStateReturn8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateReturn* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateReturndtor_CNormalGuildBattleStateReturn8_user(_this, GUILD_BATTLE__CNormalGuildBattleStateReturndtor_CNormalGuildBattleStateReturn8_next);
            };
            
            ::std::array<hook_record, 4> CNormalGuildBattleStateReturn_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f0e10L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReturnctor_CNormalGuildBattleStateReturn2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReturnctor_CNormalGuildBattleStateReturn2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateReturnctor_CNormalGuildBattleStateReturn2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateReturn::*)())&GUILD_BATTLE::CNormalGuildBattleStateReturn::ctor_CNormalGuildBattleStateReturn)
                },
                _hook_record {
                    (LPVOID)0x1403f0e60L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReturnFin4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReturnFin4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateReturnFin4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateReturn::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateReturn::Fin)
                },
                _hook_record {
                    (LPVOID)0x140080220L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReturnGetTerm6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReturnGetTerm6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateReturnGetTerm6_wrapper),
                    (LPVOID)cast_pointer_function((ATL::CTimeSpan*(GUILD_BATTLE::CNormalGuildBattleStateReturn::*)(ATL::CTimeSpan*))&GUILD_BATTLE::CNormalGuildBattleStateReturn::GetTerm)
                },
                _hook_record {
                    (LPVOID)0x1400801c0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReturndtor_CNormalGuildBattleStateReturn8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateReturndtor_CNormalGuildBattleStateReturn8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateReturndtor_CNormalGuildBattleStateReturn8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateReturn::*)())&GUILD_BATTLE::CNormalGuildBattleStateReturn::dtor_CNormalGuildBattleStateReturn)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
