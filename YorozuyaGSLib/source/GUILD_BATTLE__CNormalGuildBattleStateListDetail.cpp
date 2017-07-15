#include <GUILD_BATTLE__CNormalGuildBattleStateListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            Info::GUILD_BATTLE__CNormalGuildBattleStateListAdvanceRegenState2_ptr GUILD_BATTLE__CNormalGuildBattleStateListAdvanceRegenState2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListAdvanceRegenState2_clbk GUILD_BATTLE__CNormalGuildBattleStateListAdvanceRegenState2_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListctor_CNormalGuildBattleStateList4_ptr GUILD_BATTLE__CNormalGuildBattleStateListctor_CNormalGuildBattleStateList4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListctor_CNormalGuildBattleStateList4_clbk GUILD_BATTLE__CNormalGuildBattleStateListctor_CNormalGuildBattleStateList4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListIsInBattle6_ptr GUILD_BATTLE__CNormalGuildBattleStateListIsInBattle6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListIsInBattle6_clbk GUILD_BATTLE__CNormalGuildBattleStateListIsInBattle6_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListIsInBattleRegenState8_ptr GUILD_BATTLE__CNormalGuildBattleStateListIsInBattleRegenState8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListIsInBattleRegenState8_clbk GUILD_BATTLE__CNormalGuildBattleStateListIsInBattleRegenState8_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListIsReadyOrCountState10_ptr GUILD_BATTLE__CNormalGuildBattleStateListIsReadyOrCountState10_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListIsReadyOrCountState10_clbk GUILD_BATTLE__CNormalGuildBattleStateListIsReadyOrCountState10_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListSetBattleTime12_ptr GUILD_BATTLE__CNormalGuildBattleStateListSetBattleTime12_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListSetBattleTime12_clbk GUILD_BATTLE__CNormalGuildBattleStateListSetBattleTime12_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListSetGotoRegenState14_ptr GUILD_BATTLE__CNormalGuildBattleStateListSetGotoRegenState14_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListSetGotoRegenState14_clbk GUILD_BATTLE__CNormalGuildBattleStateListSetGotoRegenState14_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListSetNextState16_ptr GUILD_BATTLE__CNormalGuildBattleStateListSetNextState16_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListSetNextState16_clbk GUILD_BATTLE__CNormalGuildBattleStateListSetNextState16_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListdtor_CNormalGuildBattleStateList20_ptr GUILD_BATTLE__CNormalGuildBattleStateListdtor_CNormalGuildBattleStateList20_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListdtor_CNormalGuildBattleStateList20_clbk GUILD_BATTLE__CNormalGuildBattleStateListdtor_CNormalGuildBattleStateList20_user(nullptr);
            
            bool GUILD_BATTLE__CNormalGuildBattleStateListAdvanceRegenState2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateList* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateListAdvanceRegenState2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListAdvanceRegenState2_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateListctor_CNormalGuildBattleStateList4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateList* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateListctor_CNormalGuildBattleStateList4_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListctor_CNormalGuildBattleStateList4_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleStateListIsInBattle6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateList* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateListIsInBattle6_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListIsInBattle6_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleStateListIsInBattleRegenState8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateList* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateListIsInBattleRegenState8_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListIsInBattleRegenState8_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleStateListIsReadyOrCountState10_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateList* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateListIsReadyOrCountState10_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListIsReadyOrCountState10_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleStateListSetBattleTime12_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateList* _this, struct ATL::CTimeSpan kTime)
            {
               GUILD_BATTLE__CNormalGuildBattleStateListSetBattleTime12_user(_this, kTime, GUILD_BATTLE__CNormalGuildBattleStateListSetBattleTime12_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleStateListSetGotoRegenState14_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateList* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateListSetGotoRegenState14_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListSetGotoRegenState14_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleStateListSetNextState16_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateList* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateListSetNextState16_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListSetNextState16_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateListdtor_CNormalGuildBattleStateList20_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateList* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateListdtor_CNormalGuildBattleStateList20_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListdtor_CNormalGuildBattleStateList20_next);
            };
            
            ::std::array<hook_record, 9> CNormalGuildBattleStateList_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403eb220L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListAdvanceRegenState2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListAdvanceRegenState2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListAdvanceRegenState2_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleStateList::*)())&GUILD_BATTLE::CNormalGuildBattleStateList::AdvanceRegenState)
                },
                _hook_record {
                    (LPVOID)0x1403f1e80L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListctor_CNormalGuildBattleStateList4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListctor_CNormalGuildBattleStateList4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListctor_CNormalGuildBattleStateList4_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateList::*)())&GUILD_BATTLE::CNormalGuildBattleStateList::ctor_CNormalGuildBattleStateList)
                },
                _hook_record {
                    (LPVOID)0x14007c0f0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListIsInBattle6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListIsInBattle6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListIsInBattle6_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleStateList::*)())&GUILD_BATTLE::CNormalGuildBattleStateList::IsInBattle)
                },
                _hook_record {
                    (LPVOID)0x1403d9500L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListIsInBattleRegenState8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListIsInBattleRegenState8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListIsInBattleRegenState8_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleStateList::*)())&GUILD_BATTLE::CNormalGuildBattleStateList::IsInBattleRegenState)
                },
                _hook_record {
                    (LPVOID)0x14007c020L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListIsReadyOrCountState10_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListIsReadyOrCountState10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListIsReadyOrCountState10_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleStateList::*)())&GUILD_BATTLE::CNormalGuildBattleStateList::IsReadyOrCountState)
                },
                _hook_record {
                    (LPVOID)0x1403d9070L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListSetBattleTime12_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListSetBattleTime12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListSetBattleTime12_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateList::*)(struct ATL::CTimeSpan))&GUILD_BATTLE::CNormalGuildBattleStateList::SetBattleTime)
                },
                _hook_record {
                    (LPVOID)0x1403f3290L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListSetGotoRegenState14_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListSetGotoRegenState14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListSetGotoRegenState14_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleStateList::*)())&GUILD_BATTLE::CNormalGuildBattleStateList::SetGotoRegenState)
                },
                _hook_record {
                    (LPVOID)0x140080340L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListSetNextState16_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListSetNextState16_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListSetNextState16_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateList::*)())&GUILD_BATTLE::CNormalGuildBattleStateList::SetNextState)
                },
                _hook_record {
                    (LPVOID)0x14007f850L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListdtor_CNormalGuildBattleStateList20_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListdtor_CNormalGuildBattleStateList20_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListdtor_CNormalGuildBattleStateList20_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateList::*)())&GUILD_BATTLE::CNormalGuildBattleStateList::dtor_CNormalGuildBattleStateList)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
