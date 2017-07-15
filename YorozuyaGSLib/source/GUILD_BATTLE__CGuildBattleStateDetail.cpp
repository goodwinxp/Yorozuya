#include <GUILD_BATTLE__CGuildBattleStateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_ptr GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_clbk GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateEnter4_ptr GUILD_BATTLE__CGuildBattleStateEnter4_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateEnter4_clbk GUILD_BATTLE__CGuildBattleStateEnter4_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateFin6_ptr GUILD_BATTLE__CGuildBattleStateFin6_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateFin6_clbk GUILD_BATTLE__CGuildBattleStateFin6_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateGetTerm8_ptr GUILD_BATTLE__CGuildBattleStateGetTerm8_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateGetTerm8_clbk GUILD_BATTLE__CGuildBattleStateGetTerm8_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateLog10_ptr GUILD_BATTLE__CGuildBattleStateLog10_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateLog10_clbk GUILD_BATTLE__CGuildBattleStateLog10_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateLoop12_ptr GUILD_BATTLE__CGuildBattleStateLoop12_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateLoop12_clbk GUILD_BATTLE__CGuildBattleStateLoop12_user(nullptr);
            
            
            Info::GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_ptr GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_clbk GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_user(nullptr);
            
            
            void GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this)
            {
               GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_user(_this, GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_next);
            };
            int GUILD_BATTLE__CGuildBattleStateEnter4_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CGuildBattleStateEnter4_user(_this, pkBattle, GUILD_BATTLE__CGuildBattleStateEnter4_next);
            };
            int GUILD_BATTLE__CGuildBattleStateFin6_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CGuildBattleStateFin6_user(_this, pkBattle, GUILD_BATTLE__CGuildBattleStateFin6_next);
            };
            ATL::CTimeSpan* GUILD_BATTLE__CGuildBattleStateGetTerm8_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this, ATL::CTimeSpan* result)
            {
               return GUILD_BATTLE__CGuildBattleStateGetTerm8_user(_this, result, GUILD_BATTLE__CGuildBattleStateGetTerm8_next);
            };
            void GUILD_BATTLE__CGuildBattleStateLog10_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this, char* szMsg)
            {
               GUILD_BATTLE__CGuildBattleStateLog10_user(_this, szMsg, GUILD_BATTLE__CGuildBattleStateLog10_next);
            };
            int GUILD_BATTLE__CGuildBattleStateLoop12_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CGuildBattleStateLoop12_user(_this, pkBattle, GUILD_BATTLE__CGuildBattleStateLoop12_next);
            };
            
            void GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this)
            {
               GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_user(_this, GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_next);
            };
            
            ::std::array<hook_record, 7> CGuildBattleState_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403dee30L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleState::*)())&GUILD_BATTLE::CGuildBattleState::ctor_CGuildBattleState)
                },
                _hook_record {
                    (LPVOID)0x14007f760L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateEnter4_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateEnter4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateEnter4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CGuildBattleState::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CGuildBattleState::Enter)
                },
                _hook_record {
                    (LPVOID)0x14007f7a0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateFin6_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateFin6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateFin6_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CGuildBattleState::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CGuildBattleState::Fin)
                },
                _hook_record {
                    (LPVOID)0x14007f7c0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateGetTerm8_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateGetTerm8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateGetTerm8_wrapper),
                    (LPVOID)cast_pointer_function((ATL::CTimeSpan*(GUILD_BATTLE::CGuildBattleState::*)(ATL::CTimeSpan*))&GUILD_BATTLE::CGuildBattleState::GetTerm)
                },
                _hook_record {
                    (LPVOID)0x1403dee60L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateLog10_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateLog10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateLog10_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleState::*)(char*))&GUILD_BATTLE::CGuildBattleState::Log)
                },
                _hook_record {
                    (LPVOID)0x14007f780L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateLoop12_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateLoop12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateLoop12_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CGuildBattleState::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CGuildBattleState::Loop)
                },
                _hook_record {
                    (LPVOID)0x14007f740L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleState::*)())&GUILD_BATTLE::CGuildBattleState::dtor_CGuildBattleState)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
