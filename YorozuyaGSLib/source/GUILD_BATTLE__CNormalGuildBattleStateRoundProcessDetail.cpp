#include <GUILD_BATTLE__CNormalGuildBattleStateRoundProcessDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_next);
            };
            
            ::std::array<hook_record, 4> CNormalGuildBattleStateRoundProcess_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f1770L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::ctor_CNormalGuildBattleStateRoundProcess)
                },
                _hook_record {
                    (LPVOID)0x1403f1970L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::Enter)
                },
                _hook_record {
                    (LPVOID)0x1403f1a00L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::Loop)
                },
                _hook_record {
                    (LPVOID)0x1403f1890L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::dtor_CNormalGuildBattleStateRoundProcess)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
