#include <GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosctor_CNormalGuildBattleStateRoundReturnStartPos2_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosctor_CNormalGuildBattleStateRoundReturnStartPos2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosctor_CNormalGuildBattleStateRoundReturnStartPos2_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosctor_CNormalGuildBattleStateRoundReturnStartPos2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosEnter4_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosEnter4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosEnter4_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosEnter4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosLoop6_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosLoop6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosLoop6_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosLoop6_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosdtor_CNormalGuildBattleStateRoundReturnStartPos8_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosdtor_CNormalGuildBattleStateRoundReturnStartPos8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosdtor_CNormalGuildBattleStateRoundReturnStartPos8_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosdtor_CNormalGuildBattleStateRoundReturnStartPos8_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosctor_CNormalGuildBattleStateRoundReturnStartPos2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosctor_CNormalGuildBattleStateRoundReturnStartPos2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosctor_CNormalGuildBattleStateRoundReturnStartPos2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosEnter4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosEnter4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosEnter4_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosLoop6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosLoop6_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosLoop6_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosdtor_CNormalGuildBattleStateRoundReturnStartPos8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosdtor_CNormalGuildBattleStateRoundReturnStartPos8_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosdtor_CNormalGuildBattleStateRoundReturnStartPos8_next);
            };
            
            ::std::array<hook_record, 4> CNormalGuildBattleStateRoundReturnStartPos_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f1b10L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosctor_CNormalGuildBattleStateRoundReturnStartPos2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosctor_CNormalGuildBattleStateRoundReturnStartPos2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosctor_CNormalGuildBattleStateRoundReturnStartPos2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::ctor_CNormalGuildBattleStateRoundReturnStartPos)
                },
                _hook_record {
                    (LPVOID)0x1403f1d10L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosEnter4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosEnter4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosEnter4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::Enter)
                },
                _hook_record {
                    (LPVOID)0x1403f1da0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosLoop6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosLoop6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosLoop6_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::Loop)
                },
                _hook_record {
                    (LPVOID)0x1403f1c30L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosdtor_CNormalGuildBattleStateRoundReturnStartPos8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosdtor_CNormalGuildBattleStateRoundReturnStartPos8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPosdtor_CNormalGuildBattleStateRoundReturnStartPos8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::dtor_CNormalGuildBattleStateRoundReturnStartPos)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
