#include <GUILD_BATTLE__CNormalGuildBattleStateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStatector_CNormalGuildBattleState2_ptr GUILD_BATTLE__CNormalGuildBattleStatector_CNormalGuildBattleState2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStatector_CNormalGuildBattleState2_clbk GUILD_BATTLE__CNormalGuildBattleStatector_CNormalGuildBattleState2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateEnter4_ptr GUILD_BATTLE__CNormalGuildBattleStateEnter4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateEnter4_clbk GUILD_BATTLE__CNormalGuildBattleStateEnter4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateEnter6_ptr GUILD_BATTLE__CNormalGuildBattleStateEnter6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateEnter6_clbk GUILD_BATTLE__CNormalGuildBattleStateEnter6_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateFin8_ptr GUILD_BATTLE__CNormalGuildBattleStateFin8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateFin8_clbk GUILD_BATTLE__CNormalGuildBattleStateFin8_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateFin10_ptr GUILD_BATTLE__CNormalGuildBattleStateFin10_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateFin10_clbk GUILD_BATTLE__CNormalGuildBattleStateFin10_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateGoal12_ptr GUILD_BATTLE__CNormalGuildBattleStateGoal12_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateGoal12_clbk GUILD_BATTLE__CNormalGuildBattleStateGoal12_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateLog14_ptr GUILD_BATTLE__CNormalGuildBattleStateLog14_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateLog14_clbk GUILD_BATTLE__CNormalGuildBattleStateLog14_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateLoop16_ptr GUILD_BATTLE__CNormalGuildBattleStateLoop16_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateLoop16_clbk GUILD_BATTLE__CNormalGuildBattleStateLoop16_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateLoop18_ptr GUILD_BATTLE__CNormalGuildBattleStateLoop18_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateLoop18_clbk GUILD_BATTLE__CNormalGuildBattleStateLoop18_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStatedtor_CNormalGuildBattleState20_ptr GUILD_BATTLE__CNormalGuildBattleStatedtor_CNormalGuildBattleState20_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStatedtor_CNormalGuildBattleState20_clbk GUILD_BATTLE__CNormalGuildBattleStatedtor_CNormalGuildBattleState20_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStatector_CNormalGuildBattleState2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleState* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStatector_CNormalGuildBattleState2_user(_this, GUILD_BATTLE__CNormalGuildBattleStatector_CNormalGuildBattleState2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateEnter4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleState* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateEnter4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateEnter4_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateEnter6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleState* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateEnter6_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateEnter6_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateFin8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleState* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateFin8_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateFin8_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateFin10_wrapper(struct GUILD_BATTLE::CNormalGuildBattleState* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateFin10_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateFin10_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleStateGoal12_wrapper(struct GUILD_BATTLE::CNormalGuildBattleState* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateGoal12_user(_this, GUILD_BATTLE__CNormalGuildBattleStateGoal12_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleStateLog14_wrapper(struct GUILD_BATTLE::CNormalGuildBattleState* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle, char* szFormat)
            {
               GUILD_BATTLE__CNormalGuildBattleStateLog14_user(_this, pkBattle, szFormat, GUILD_BATTLE__CNormalGuildBattleStateLog14_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateLoop16_wrapper(struct GUILD_BATTLE::CNormalGuildBattleState* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateLoop16_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateLoop16_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateLoop18_wrapper(struct GUILD_BATTLE::CNormalGuildBattleState* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateLoop18_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateLoop18_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStatedtor_CNormalGuildBattleState20_wrapper(struct GUILD_BATTLE::CNormalGuildBattleState* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStatedtor_CNormalGuildBattleState20_user(_this, GUILD_BATTLE__CNormalGuildBattleStatedtor_CNormalGuildBattleState20_next);
            };
            
            ::std::array<hook_record, 10> CNormalGuildBattleState_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f3120L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStatector_CNormalGuildBattleState2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStatector_CNormalGuildBattleState2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStatector_CNormalGuildBattleState2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleState::*)())&GUILD_BATTLE::CNormalGuildBattleState::ctor_CNormalGuildBattleState)
                },
                _hook_record {
                    (LPVOID)0x1403f0380L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateEnter4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateEnter4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateEnter4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleState::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleState::Enter)
                },
                _hook_record {
                    (LPVOID)0x14007fbc0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateEnter6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateEnter6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateEnter6_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleState::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleState::Enter)
                },
                _hook_record {
                    (LPVOID)0x1403f0460L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFin8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFin8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateFin8_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleState::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleState::Fin)
                },
                _hook_record {
                    (LPVOID)0x14007fc00L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFin10_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateFin10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateFin10_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleState::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleState::Fin)
                },
                _hook_record {
                    (LPVOID)0x14007fbb0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateGoal12_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateGoal12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateGoal12_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleState::*)())&GUILD_BATTLE::CNormalGuildBattleState::Goal)
                },
                _hook_record {
                    (LPVOID)0x1403f04d0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateLog14_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateLog14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateLog14_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleState::*)(struct GUILD_BATTLE::CNormalGuildBattle*, char*))&GUILD_BATTLE::CNormalGuildBattleState::Log)
                },
                _hook_record {
                    (LPVOID)0x1403f03f0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateLoop16_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateLoop16_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateLoop16_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleState::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleState::Loop)
                },
                _hook_record {
                    (LPVOID)0x14007fbe0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateLoop18_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateLoop18_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateLoop18_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleState::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleState::Loop)
                },
                _hook_record {
                    (LPVOID)0x14007fb50L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStatedtor_CNormalGuildBattleState20_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStatedtor_CNormalGuildBattleState20_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStatedtor_CNormalGuildBattleState20_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleState::*)())&GUILD_BATTLE::CNormalGuildBattleState::dtor_CNormalGuildBattleState)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
