#include <GUILD_BATTLE__CNormalGuildBattleStateRoundStartDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_next);
            };
            
            ::std::array<hook_record, 5> CNormalGuildBattleStateRoundStart_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f1350L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundStart::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundStart::ctor_CNormalGuildBattleStateRoundStart)
                },
                _hook_record {
                    (LPVOID)0x1403f1550L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundStart::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundStart::Enter)
                },
                _hook_record {
                    (LPVOID)0x1403f1660L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundStart::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundStart::Fin)
                },
                _hook_record {
                    (LPVOID)0x1403f15e0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundStart::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundStart::Loop)
                },
                _hook_record {
                    (LPVOID)0x1403f1470L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundStart::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundStart::dtor_CNormalGuildBattleStateRoundStart)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
