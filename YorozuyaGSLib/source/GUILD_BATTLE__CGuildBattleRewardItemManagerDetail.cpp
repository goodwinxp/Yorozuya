#include <GUILD_BATTLE__CGuildBattleRewardItemManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemManagerctor_CGuildBattleRewardItemManager2_ptr GUILD_BATTLE__CGuildBattleRewardItemManagerctor_CGuildBattleRewardItemManager2_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemManagerctor_CGuildBattleRewardItemManager2_clbk GUILD_BATTLE__CGuildBattleRewardItemManagerctor_CGuildBattleRewardItemManager2_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemManagerGive4_ptr GUILD_BATTLE__CGuildBattleRewardItemManagerGive4_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemManagerGive4_clbk GUILD_BATTLE__CGuildBattleRewardItemManagerGive4_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemManagerInit6_ptr GUILD_BATTLE__CGuildBattleRewardItemManagerInit6_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemManagerInit6_clbk GUILD_BATTLE__CGuildBattleRewardItemManagerInit6_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemManagerInstance8_ptr GUILD_BATTLE__CGuildBattleRewardItemManagerInstance8_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemManagerInstance8_clbk GUILD_BATTLE__CGuildBattleRewardItemManagerInstance8_user(nullptr);
            
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemManagerdtor_CGuildBattleRewardItemManager10_ptr GUILD_BATTLE__CGuildBattleRewardItemManagerdtor_CGuildBattleRewardItemManager10_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemManagerdtor_CGuildBattleRewardItemManager10_clbk GUILD_BATTLE__CGuildBattleRewardItemManagerdtor_CGuildBattleRewardItemManager10_user(nullptr);
            
            
            void GUILD_BATTLE__CGuildBattleRewardItemManagerctor_CGuildBattleRewardItemManager2_wrapper(struct GUILD_BATTLE::CGuildBattleRewardItemManager* _this)
            {
               GUILD_BATTLE__CGuildBattleRewardItemManagerctor_CGuildBattleRewardItemManager2_user(_this, GUILD_BATTLE__CGuildBattleRewardItemManagerctor_CGuildBattleRewardItemManager2_next);
            };
            struct GUILD_BATTLE::CGuildBattleRewardItem* GUILD_BATTLE__CGuildBattleRewardItemManagerGive4_wrapper(struct GUILD_BATTLE::CGuildBattleRewardItemManager* _this, struct CPlayer* pkPlayer)
            {
               return GUILD_BATTLE__CGuildBattleRewardItemManagerGive4_user(_this, pkPlayer, GUILD_BATTLE__CGuildBattleRewardItemManagerGive4_next);
            };
            bool GUILD_BATTLE__CGuildBattleRewardItemManagerInit6_wrapper(struct GUILD_BATTLE::CGuildBattleRewardItemManager* _this)
            {
               return GUILD_BATTLE__CGuildBattleRewardItemManagerInit6_user(_this, GUILD_BATTLE__CGuildBattleRewardItemManagerInit6_next);
            };
            struct GUILD_BATTLE::CGuildBattleRewardItemManager* GUILD_BATTLE__CGuildBattleRewardItemManagerInstance8_wrapper()
            {
               return GUILD_BATTLE__CGuildBattleRewardItemManagerInstance8_user(GUILD_BATTLE__CGuildBattleRewardItemManagerInstance8_next);
            };
            
            void GUILD_BATTLE__CGuildBattleRewardItemManagerdtor_CGuildBattleRewardItemManager10_wrapper(struct GUILD_BATTLE::CGuildBattleRewardItemManager* _this)
            {
               GUILD_BATTLE__CGuildBattleRewardItemManagerdtor_CGuildBattleRewardItemManager10_user(_this, GUILD_BATTLE__CGuildBattleRewardItemManagerdtor_CGuildBattleRewardItemManager10_next);
            };
            
            ::std::array<hook_record, 5> CGuildBattleRewardItemManager_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403c93a0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemManagerctor_CGuildBattleRewardItemManager2_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemManagerctor_CGuildBattleRewardItemManager2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemManagerctor_CGuildBattleRewardItemManager2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleRewardItemManager::*)())&GUILD_BATTLE::CGuildBattleRewardItemManager::ctor_CGuildBattleRewardItemManager)
                },
                _hook_record {
                    (LPVOID)0x1403eaf00L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemManagerGive4_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemManagerGive4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemManagerGive4_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CGuildBattleRewardItem*(GUILD_BATTLE::CGuildBattleRewardItemManager::*)(struct CPlayer*))&GUILD_BATTLE::CGuildBattleRewardItemManager::Give)
                },
                _hook_record {
                    (LPVOID)0x1403c9420L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemManagerInit6_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemManagerInit6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemManagerInit6_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CGuildBattleRewardItemManager::*)())&GUILD_BATTLE::CGuildBattleRewardItemManager::Init)
                },
                _hook_record {
                    (LPVOID)0x1403d9790L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemManagerInstance8_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemManagerInstance8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemManagerInstance8_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CGuildBattleRewardItemManager*(*)())&GUILD_BATTLE::CGuildBattleRewardItemManager::Instance)
                },
                _hook_record {
                    (LPVOID)0x1403c93e0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemManagerdtor_CGuildBattleRewardItemManager10_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemManagerdtor_CGuildBattleRewardItemManager10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemManagerdtor_CGuildBattleRewardItemManager10_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleRewardItemManager::*)())&GUILD_BATTLE::CGuildBattleRewardItemManager::dtor_CGuildBattleRewardItemManager)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
