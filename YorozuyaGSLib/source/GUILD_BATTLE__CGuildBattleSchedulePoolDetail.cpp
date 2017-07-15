#include <GUILD_BATTLE__CGuildBattleSchedulePoolDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolctor_CGuildBattleSchedulePool2_ptr GUILD_BATTLE__CGuildBattleSchedulePoolctor_CGuildBattleSchedulePool2_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolctor_CGuildBattleSchedulePool2_clbk GUILD_BATTLE__CGuildBattleSchedulePoolctor_CGuildBattleSchedulePool2_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolClearAll4_ptr GUILD_BATTLE__CGuildBattleSchedulePoolClearAll4_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolClearAll4_clbk GUILD_BATTLE__CGuildBattleSchedulePoolClearAll4_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolClearByDayID6_ptr GUILD_BATTLE__CGuildBattleSchedulePoolClearByDayID6_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolClearByDayID6_clbk GUILD_BATTLE__CGuildBattleSchedulePoolClearByDayID6_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolDestroy8_ptr GUILD_BATTLE__CGuildBattleSchedulePoolDestroy8_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolDestroy8_clbk GUILD_BATTLE__CGuildBattleSchedulePoolDestroy8_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolGet10_ptr GUILD_BATTLE__CGuildBattleSchedulePoolGet10_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolGet10_clbk GUILD_BATTLE__CGuildBattleSchedulePoolGet10_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolGet12_ptr GUILD_BATTLE__CGuildBattleSchedulePoolGet12_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolGet12_clbk GUILD_BATTLE__CGuildBattleSchedulePoolGet12_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolGetRef14_ptr GUILD_BATTLE__CGuildBattleSchedulePoolGetRef14_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolGetRef14_clbk GUILD_BATTLE__CGuildBattleSchedulePoolGetRef14_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolGetSID16_ptr GUILD_BATTLE__CGuildBattleSchedulePoolGetSID16_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolGetSID16_clbk GUILD_BATTLE__CGuildBattleSchedulePoolGetSID16_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolInit18_ptr GUILD_BATTLE__CGuildBattleSchedulePoolInit18_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolInit18_clbk GUILD_BATTLE__CGuildBattleSchedulePoolInit18_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolInstance20_ptr GUILD_BATTLE__CGuildBattleSchedulePoolInstance20_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulePoolInstance20_clbk GUILD_BATTLE__CGuildBattleSchedulePoolInstance20_user(nullptr);
            
            
            Info::GUILD_BATTLE__CGuildBattleSchedulePooldtor_CGuildBattleSchedulePool24_ptr GUILD_BATTLE__CGuildBattleSchedulePooldtor_CGuildBattleSchedulePool24_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleSchedulePooldtor_CGuildBattleSchedulePool24_clbk GUILD_BATTLE__CGuildBattleSchedulePooldtor_CGuildBattleSchedulePool24_user(nullptr);
            
            
            void GUILD_BATTLE__CGuildBattleSchedulePoolctor_CGuildBattleSchedulePool2_wrapper(struct GUILD_BATTLE::CGuildBattleSchedulePool* _this)
            {
               GUILD_BATTLE__CGuildBattleSchedulePoolctor_CGuildBattleSchedulePool2_user(_this, GUILD_BATTLE__CGuildBattleSchedulePoolctor_CGuildBattleSchedulePool2_next);
            };
            void GUILD_BATTLE__CGuildBattleSchedulePoolClearAll4_wrapper(struct GUILD_BATTLE::CGuildBattleSchedulePool* _this)
            {
               GUILD_BATTLE__CGuildBattleSchedulePoolClearAll4_user(_this, GUILD_BATTLE__CGuildBattleSchedulePoolClearAll4_next);
            };
            void GUILD_BATTLE__CGuildBattleSchedulePoolClearByDayID6_wrapper(struct GUILD_BATTLE::CGuildBattleSchedulePool* _this, unsigned int uiDayID)
            {
               GUILD_BATTLE__CGuildBattleSchedulePoolClearByDayID6_user(_this, uiDayID, GUILD_BATTLE__CGuildBattleSchedulePoolClearByDayID6_next);
            };
            void GUILD_BATTLE__CGuildBattleSchedulePoolDestroy8_wrapper()
            {
               GUILD_BATTLE__CGuildBattleSchedulePoolDestroy8_user(GUILD_BATTLE__CGuildBattleSchedulePoolDestroy8_next);
            };
            struct GUILD_BATTLE::CGuildBattleSchedule* GUILD_BATTLE__CGuildBattleSchedulePoolGet10_wrapper(struct GUILD_BATTLE::CGuildBattleSchedulePool* _this, unsigned int uiSLID, unsigned int dwStartInx)
            {
               return GUILD_BATTLE__CGuildBattleSchedulePoolGet10_user(_this, uiSLID, dwStartInx, GUILD_BATTLE__CGuildBattleSchedulePoolGet10_next);
            };
            struct GUILD_BATTLE::CGuildBattleSchedule* GUILD_BATTLE__CGuildBattleSchedulePoolGet12_wrapper(struct GUILD_BATTLE::CGuildBattleSchedulePool* _this, unsigned int dwSID)
            {
               return GUILD_BATTLE__CGuildBattleSchedulePoolGet12_user(_this, dwSID, GUILD_BATTLE__CGuildBattleSchedulePoolGet12_next);
            };
            struct GUILD_BATTLE::CGuildBattleSchedule* GUILD_BATTLE__CGuildBattleSchedulePoolGetRef14_wrapper(struct GUILD_BATTLE::CGuildBattleSchedulePool* _this, unsigned int dwSID)
            {
               return GUILD_BATTLE__CGuildBattleSchedulePoolGetRef14_user(_this, dwSID, GUILD_BATTLE__CGuildBattleSchedulePoolGetRef14_next);
            };
            unsigned int GUILD_BATTLE__CGuildBattleSchedulePoolGetSID16_wrapper(struct GUILD_BATTLE::CGuildBattleSchedulePool* _this, unsigned int uiSLID, unsigned int dwStartInx)
            {
               return GUILD_BATTLE__CGuildBattleSchedulePoolGetSID16_user(_this, uiSLID, dwStartInx, GUILD_BATTLE__CGuildBattleSchedulePoolGetSID16_next);
            };
            bool GUILD_BATTLE__CGuildBattleSchedulePoolInit18_wrapper(struct GUILD_BATTLE::CGuildBattleSchedulePool* _this, unsigned int uiMapCnt)
            {
               return GUILD_BATTLE__CGuildBattleSchedulePoolInit18_user(_this, uiMapCnt, GUILD_BATTLE__CGuildBattleSchedulePoolInit18_next);
            };
            struct GUILD_BATTLE::CGuildBattleSchedulePool* GUILD_BATTLE__CGuildBattleSchedulePoolInstance20_wrapper()
            {
               return GUILD_BATTLE__CGuildBattleSchedulePoolInstance20_user(GUILD_BATTLE__CGuildBattleSchedulePoolInstance20_next);
            };
            
            void GUILD_BATTLE__CGuildBattleSchedulePooldtor_CGuildBattleSchedulePool24_wrapper(struct GUILD_BATTLE::CGuildBattleSchedulePool* _this)
            {
               GUILD_BATTLE__CGuildBattleSchedulePooldtor_CGuildBattleSchedulePool24_user(_this, GUILD_BATTLE__CGuildBattleSchedulePooldtor_CGuildBattleSchedulePool24_next);
            };
            
            ::std::array<hook_record, 11> CGuildBattleSchedulePool_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403da430L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolctor_CGuildBattleSchedulePool2_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolctor_CGuildBattleSchedulePool2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulePoolctor_CGuildBattleSchedulePool2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleSchedulePool::*)())&GUILD_BATTLE::CGuildBattleSchedulePool::ctor_CGuildBattleSchedulePool)
                },
                _hook_record {
                    (LPVOID)0x1403da890L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolClearAll4_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolClearAll4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulePoolClearAll4_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleSchedulePool::*)())&GUILD_BATTLE::CGuildBattleSchedulePool::ClearAll)
                },
                _hook_record {
                    (LPVOID)0x1403da930L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolClearByDayID6_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolClearByDayID6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulePoolClearByDayID6_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleSchedulePool::*)(unsigned int))&GUILD_BATTLE::CGuildBattleSchedulePool::ClearByDayID)
                },
                _hook_record {
                    (LPVOID)0x1403da640L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolDestroy8_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolDestroy8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulePoolDestroy8_wrapper),
                    (LPVOID)cast_pointer_function((void(*)())&GUILD_BATTLE::CGuildBattleSchedulePool::Destroy)
                },
                _hook_record {
                    (LPVOID)0x1403dea50L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolGet10_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolGet10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulePoolGet10_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CGuildBattleSchedule*(GUILD_BATTLE::CGuildBattleSchedulePool::*)(unsigned int, unsigned int))&GUILD_BATTLE::CGuildBattleSchedulePool::Get)
                },
                _hook_record {
                    (LPVOID)0x1403daa30L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolGet12_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolGet12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulePoolGet12_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CGuildBattleSchedule*(GUILD_BATTLE::CGuildBattleSchedulePool::*)(unsigned int))&GUILD_BATTLE::CGuildBattleSchedulePool::Get)
                },
                _hook_record {
                    (LPVOID)0x1403dab00L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolGetRef14_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolGetRef14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulePoolGetRef14_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CGuildBattleSchedule*(GUILD_BATTLE::CGuildBattleSchedulePool::*)(unsigned int))&GUILD_BATTLE::CGuildBattleSchedulePool::GetRef)
                },
                _hook_record {
                    (LPVOID)0x1403dec80L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolGetSID16_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolGetSID16_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulePoolGetSID16_wrapper),
                    (LPVOID)cast_pointer_function((unsigned int(GUILD_BATTLE::CGuildBattleSchedulePool::*)(unsigned int, unsigned int))&GUILD_BATTLE::CGuildBattleSchedulePool::GetSID)
                },
                _hook_record {
                    (LPVOID)0x1403da6c0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolInit18_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolInit18_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulePoolInit18_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CGuildBattleSchedulePool::*)(unsigned int))&GUILD_BATTLE::CGuildBattleSchedulePool::Init)
                },
                _hook_record {
                    (LPVOID)0x1403da580L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolInstance20_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePoolInstance20_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulePoolInstance20_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CGuildBattleSchedulePool*(*)())&GUILD_BATTLE::CGuildBattleSchedulePool::Instance)
                },
                _hook_record {
                    (LPVOID)0x1403da470L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePooldtor_CGuildBattleSchedulePool24_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleSchedulePooldtor_CGuildBattleSchedulePool24_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleSchedulePooldtor_CGuildBattleSchedulePool24_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleSchedulePool::*)())&GUILD_BATTLE::CGuildBattleSchedulePool::dtor_CGuildBattleSchedulePool)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
