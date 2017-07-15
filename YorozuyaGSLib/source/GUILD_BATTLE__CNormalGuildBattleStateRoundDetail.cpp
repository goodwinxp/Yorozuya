#include <GUILD_BATTLE__CNormalGuildBattleStateRoundDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundctor_CNormalGuildBattleStateRound2_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundctor_CNormalGuildBattleStateRound2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundctor_CNormalGuildBattleStateRound2_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundctor_CNormalGuildBattleStateRound2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundEnter4_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundEnter4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundEnter4_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundEnter4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundEnter6_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundEnter6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundEnter6_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundEnter6_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundFin8_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundFin8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundFin8_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundFin8_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundFin10_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundFin10_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundFin10_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundFin10_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundLog12_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundLog12_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundLog12_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundLog12_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundLoop14_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundLoop14_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundLoop14_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundLoop14_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundLoop16_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundLoop16_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundLoop16_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundLoop16_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRounddtor_CNormalGuildBattleStateRound18_ptr GUILD_BATTLE__CNormalGuildBattleStateRounddtor_CNormalGuildBattleStateRound18_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRounddtor_CNormalGuildBattleStateRound18_clbk GUILD_BATTLE__CNormalGuildBattleStateRounddtor_CNormalGuildBattleStateRound18_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateRoundctor_CNormalGuildBattleStateRound2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRound* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundctor_CNormalGuildBattleStateRound2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundctor_CNormalGuildBattleStateRound2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundEnter4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRound* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundEnter4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundEnter4_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundEnter6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRound* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundEnter6_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundEnter6_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundFin8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRound* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundFin8_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundFin8_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundFin10_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRound* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundFin10_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundFin10_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleStateRoundLog12_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRound* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle, char* szFormat)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundLog12_user(_this, pkBattle, szFormat, GUILD_BATTLE__CNormalGuildBattleStateRoundLog12_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundLoop14_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRound* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundLoop14_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundLoop14_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundLoop16_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRound* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundLoop16_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundLoop16_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateRounddtor_CNormalGuildBattleStateRound18_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRound* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRounddtor_CNormalGuildBattleStateRound18_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRounddtor_CNormalGuildBattleStateRound18_next);
            };
            
            ::std::array<hook_record, 9> CNormalGuildBattleStateRound_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f0fd0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundctor_CNormalGuildBattleStateRound2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundctor_CNormalGuildBattleStateRound2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundctor_CNormalGuildBattleStateRound2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRound::*)())&GUILD_BATTLE::CNormalGuildBattleStateRound::ctor_CNormalGuildBattleStateRound)
                },
                _hook_record {
                    (LPVOID)0x1403f1020L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundEnter4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundEnter4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundEnter4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRound::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRound::Enter)
                },
                _hook_record {
                    (LPVOID)0x1403f3180L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundEnter6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundEnter6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundEnter6_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRound::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRound::Enter)
                },
                _hook_record {
                    (LPVOID)0x1403f1100L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundFin8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundFin8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundFin8_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRound::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRound::Fin)
                },
                _hook_record {
                    (LPVOID)0x1403f31c0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundFin10_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundFin10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundFin10_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRound::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRound::Fin)
                },
                _hook_record {
                    (LPVOID)0x1403f1170L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundLog12_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundLog12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundLog12_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRound::*)(struct GUILD_BATTLE::CNormalGuildBattle*, char*))&GUILD_BATTLE::CNormalGuildBattleStateRound::Log)
                },
                _hook_record {
                    (LPVOID)0x1403f1090L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundLoop14_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundLoop14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundLoop14_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRound::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRound::Loop)
                },
                _hook_record {
                    (LPVOID)0x1403f31a0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundLoop16_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundLoop16_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundLoop16_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRound::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRound::Loop)
                },
                _hook_record {
                    (LPVOID)0x1403f31e0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRounddtor_CNormalGuildBattleStateRound18_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRounddtor_CNormalGuildBattleStateRound18_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRounddtor_CNormalGuildBattleStateRound18_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRound::*)())&GUILD_BATTLE::CNormalGuildBattleStateRound::dtor_CNormalGuildBattleStateRound)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
