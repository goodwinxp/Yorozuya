#include <GUILD_BATTLE__CNormalGuildBattleStateRoundListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundListctor_CNormalGuildBattleStateRoundList2_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundListctor_CNormalGuildBattleStateRoundList2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundListctor_CNormalGuildBattleStateRoundList2_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundListctor_CNormalGuildBattleStateRoundList2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundListIsInBattleRegenState4_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundListIsInBattleRegenState4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundListIsInBattleRegenState4_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundListIsInBattleRegenState4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundListSetNextState6_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundListSetNextState6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundListSetNextState6_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundListSetNextState6_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundListdtor_CNormalGuildBattleStateRoundList8_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundListdtor_CNormalGuildBattleStateRoundList8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateRoundListdtor_CNormalGuildBattleStateRoundList8_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundListdtor_CNormalGuildBattleStateRoundList8_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateRoundListctor_CNormalGuildBattleStateRoundList2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundList* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundListctor_CNormalGuildBattleStateRoundList2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundListctor_CNormalGuildBattleStateRoundList2_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleStateRoundListIsInBattleRegenState4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundList* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundListIsInBattleRegenState4_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundListIsInBattleRegenState4_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleStateRoundListSetNextState6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundList* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundListSetNextState6_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundListSetNextState6_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateRoundListdtor_CNormalGuildBattleStateRoundList8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundList* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundListdtor_CNormalGuildBattleStateRoundList8_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundListdtor_CNormalGuildBattleStateRoundList8_next);
            };
            
            ::std::array<hook_record, 4> CNormalGuildBattleStateRoundList_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f2150L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundListctor_CNormalGuildBattleStateRoundList2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundListctor_CNormalGuildBattleStateRoundList2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundListctor_CNormalGuildBattleStateRoundList2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundList::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundList::ctor_CNormalGuildBattleStateRoundList)
                },
                _hook_record {
                    (LPVOID)0x1403d95c0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundListIsInBattleRegenState4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundListIsInBattleRegenState4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundListIsInBattleRegenState4_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleStateRoundList::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundList::IsInBattleRegenState)
                },
                _hook_record {
                    (LPVOID)0x140080040L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundListSetNextState6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundListSetNextState6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundListSetNextState6_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundList::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundList::SetNextState)
                },
                _hook_record {
                    (LPVOID)0x14007fee0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundListdtor_CNormalGuildBattleStateRoundList8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundListdtor_CNormalGuildBattleStateRoundList8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundListdtor_CNormalGuildBattleStateRoundList8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundList::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundList::dtor_CNormalGuildBattleStateRoundList)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
