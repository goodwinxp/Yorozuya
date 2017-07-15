#include <GUILD_BATTLE__CGuildBattleSchedulerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CGuildBattleSchedulerctor_CGuildBattleScheduler2_ptr GUILD_BATTLE__CGuildBattleSchedulerctor_CGuildBattleScheduler2_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulerctor_CGuildBattleScheduler2_clbk GUILD_BATTLE__CGuildBattleSchedulerctor_CGuildBattleScheduler2_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulerDestroy4_ptr GUILD_BATTLE__CGuildBattleSchedulerDestroy4_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulerDestroy4_clbk GUILD_BATTLE__CGuildBattleSchedulerDestroy4_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulerInit6_ptr GUILD_BATTLE__CGuildBattleSchedulerInit6_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulerInit6_clbk GUILD_BATTLE__CGuildBattleSchedulerInit6_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulerInstance8_ptr GUILD_BATTLE__CGuildBattleSchedulerInstance8_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulerInstance8_clbk GUILD_BATTLE__CGuildBattleSchedulerInstance8_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulerUpdateClearGuildBattleScheduleDayInfo10_ptr GUILD_BATTLE__CGuildBattleSchedulerUpdateClearGuildBattleScheduleDayInfo10_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulerUpdateClearGuildBattleScheduleDayInfo10_clbk GUILD_BATTLE__CGuildBattleSchedulerUpdateClearGuildBattleScheduleDayInfo10_user(nullptr);
            
            
            Info::GUILD_BATTLE__CGuildBattleSchedulerdtor_CGuildBattleScheduler14_ptr GUILD_BATTLE__CGuildBattleSchedulerdtor_CGuildBattleScheduler14_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulerdtor_CGuildBattleScheduler14_clbk GUILD_BATTLE__CGuildBattleSchedulerdtor_CGuildBattleScheduler14_user(nullptr);
            
            
            void GUILD_BATTLE__CGuildBattleSchedulerctor_CGuildBattleScheduler2_wrapper(struct GUILD_BATTLE::CGuildBattleScheduler* _this)
            {
               GUILD_BATTLE__CGuildBattleSchedulerctor_CGuildBattleScheduler2_user(_this, GUILD_BATTLE__CGuildBattleSchedulerctor_CGuildBattleScheduler2_next);
            };
            void GUILD_BATTLE__CGuildBattleSchedulerDestroy4_wrapper()
            {
               GUILD_BATTLE__CGuildBattleSchedulerDestroy4_user(GUILD_BATTLE__CGuildBattleSchedulerDestroy4_next);
            };
            bool GUILD_BATTLE__CGuildBattleSchedulerInit6_wrapper(struct GUILD_BATTLE::CGuildBattleScheduler* _this)
            {
               return GUILD_BATTLE__CGuildBattleSchedulerInit6_user(_this, GUILD_BATTLE__CGuildBattleSchedulerInit6_next);
            };
            struct GUILD_BATTLE::CGuildBattleScheduler* GUILD_BATTLE__CGuildBattleSchedulerInstance8_wrapper()
            {
               return GUILD_BATTLE__CGuildBattleSchedulerInstance8_user(GUILD_BATTLE__CGuildBattleSchedulerInstance8_next);
            };
            bool GUILD_BATTLE__CGuildBattleSchedulerUpdateClearGuildBattleScheduleDayInfo10_wrapper(struct GUILD_BATTLE::CGuildBattleScheduler* _this, unsigned int dwStartSLID, unsigned int dwEndSLID)
            {
               return GUILD_BATTLE__CGuildBattleSchedulerUpdateClearGuildBattleScheduleDayInfo10_user(_this, dwStartSLID, dwEndSLID, GUILD_BATTLE__CGuildBattleSchedulerUpdateClearGuildBattleScheduleDayInfo10_next);
            };
            
            void GUILD_BATTLE__CGuildBattleSchedulerdtor_CGuildBattleScheduler14_wrapper(struct GUILD_BATTLE::CGuildBattleScheduler* _this)
            {
               GUILD_BATTLE__CGuildBattleSchedulerdtor_CGuildBattleScheduler14_user(_this, GUILD_BATTLE__CGuildBattleSchedulerdtor_CGuildBattleScheduler14_next);
            };
            
            ::std::array<hook_record, 6> CGuildBattleScheduler_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403deda0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerctor_CGuildBattleScheduler2_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerctor_CGuildBattleScheduler2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulerctor_CGuildBattleScheduler2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleScheduler::*)())&GUILD_BATTLE::CGuildBattleScheduler::ctor_CGuildBattleScheduler)
                },
                _hook_record {
                    (LPVOID)0x1403dd7c0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerDestroy4_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerDestroy4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulerDestroy4_wrapper),
                    (LPVOID)cast_pointer_function((void(*)())&GUILD_BATTLE::CGuildBattleScheduler::Destroy)
                },
                _hook_record {
                    (LPVOID)0x1403dd840L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerInit6_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerInit6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulerInit6_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CGuildBattleScheduler::*)())&GUILD_BATTLE::CGuildBattleScheduler::Init)
                },
                _hook_record {
                    (LPVOID)0x1403dd700L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerInstance8_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerInstance8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulerInstance8_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CGuildBattleScheduler*(*)())&GUILD_BATTLE::CGuildBattleScheduler::Instance)
                },
                _hook_record {
                    (LPVOID)0x1403dd8b0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerUpdateClearGuildBattleScheduleDayInfo10_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerUpdateClearGuildBattleScheduleDayInfo10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulerUpdateClearGuildBattleScheduleDayInfo10_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CGuildBattleScheduler::*)(unsigned int, unsigned int))&GUILD_BATTLE::CGuildBattleScheduler::UpdateClearGuildBattleScheduleDayInfo)
                },
                _hook_record {
                    (LPVOID)0x1403dee20L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerdtor_CGuildBattleScheduler14_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulerdtor_CGuildBattleScheduler14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulerdtor_CGuildBattleScheduler14_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleScheduler::*)())&GUILD_BATTLE::CGuildBattleScheduler::dtor_CGuildBattleScheduler)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
