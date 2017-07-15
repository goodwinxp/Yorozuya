#include <CBossMonsterScheduleSystemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CBossMonsterScheduleSystemAnalysisMsg2_ptr CBossMonsterScheduleSystemAnalysisMsg2_next(nullptr);
        Info::CBossMonsterScheduleSystemAnalysisMsg2_clbk CBossMonsterScheduleSystemAnalysisMsg2_user(nullptr);
        
        
        Info::CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_ptr CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_next(nullptr);
        Info::CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_clbk CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_user(nullptr);
        
        Info::CBossMonsterScheduleSystemCreateTaskPool6_ptr CBossMonsterScheduleSystemCreateTaskPool6_next(nullptr);
        Info::CBossMonsterScheduleSystemCreateTaskPool6_clbk CBossMonsterScheduleSystemCreateTaskPool6_user(nullptr);
        
        Info::CBossMonsterScheduleSystemCreateWorkerThread8_ptr CBossMonsterScheduleSystemCreateWorkerThread8_next(nullptr);
        Info::CBossMonsterScheduleSystemCreateWorkerThread8_clbk CBossMonsterScheduleSystemCreateWorkerThread8_user(nullptr);
        
        Info::CBossMonsterScheduleSystemInit10_ptr CBossMonsterScheduleSystemInit10_next(nullptr);
        Info::CBossMonsterScheduleSystemInit10_clbk CBossMonsterScheduleSystemInit10_user(nullptr);
        
        Info::CBossMonsterScheduleSystemInstance12_ptr CBossMonsterScheduleSystemInstance12_next(nullptr);
        Info::CBossMonsterScheduleSystemInstance12_clbk CBossMonsterScheduleSystemInstance12_user(nullptr);
        
        Info::CBossMonsterScheduleSystemLoadSchedule14_ptr CBossMonsterScheduleSystemLoadSchedule14_next(nullptr);
        Info::CBossMonsterScheduleSystemLoadSchedule14_clbk CBossMonsterScheduleSystemLoadSchedule14_user(nullptr);
        
        Info::CBossMonsterScheduleSystemMakeMap16_ptr CBossMonsterScheduleSystemMakeMap16_next(nullptr);
        Info::CBossMonsterScheduleSystemMakeMap16_clbk CBossMonsterScheduleSystemMakeMap16_user(nullptr);
        
        Info::CBossMonsterScheduleSystemMakeSchedule18_ptr CBossMonsterScheduleSystemMakeSchedule18_next(nullptr);
        Info::CBossMonsterScheduleSystemMakeSchedule18_clbk CBossMonsterScheduleSystemMakeSchedule18_user(nullptr);
        
        Info::CBossMonsterScheduleSystemMakeTBL20_ptr CBossMonsterScheduleSystemMakeTBL20_next(nullptr);
        Info::CBossMonsterScheduleSystemMakeTBL20_clbk CBossMonsterScheduleSystemMakeTBL20_user(nullptr);
        
        Info::CBossMonsterScheduleSystemRespawnMonster22_ptr CBossMonsterScheduleSystemRespawnMonster22_next(nullptr);
        Info::CBossMonsterScheduleSystemRespawnMonster22_clbk CBossMonsterScheduleSystemRespawnMonster22_user(nullptr);
        
        Info::CBossMonsterScheduleSystemSavechedule24_ptr CBossMonsterScheduleSystemSavechedule24_next(nullptr);
        Info::CBossMonsterScheduleSystemSavechedule24_clbk CBossMonsterScheduleSystemSavechedule24_user(nullptr);
        
        Info::CBossMonsterScheduleSystemWorkProc26_ptr CBossMonsterScheduleSystemWorkProc26_next(nullptr);
        Info::CBossMonsterScheduleSystemWorkProc26_clbk CBossMonsterScheduleSystemWorkProc26_user(nullptr);
        
        
        Info::CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_ptr CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_next(nullptr);
        Info::CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_clbk CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_user(nullptr);
        
        void CBossMonsterScheduleSystemAnalysisMsg2_wrapper(struct CBossMonsterScheduleSystem* _this, struct ScheduleMSG* pMSG)
        {
           CBossMonsterScheduleSystemAnalysisMsg2_user(_this, pMSG, CBossMonsterScheduleSystemAnalysisMsg2_next);
        };
        
        void CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_user(_this, CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_next);
        };
        bool CBossMonsterScheduleSystemCreateTaskPool6_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           return CBossMonsterScheduleSystemCreateTaskPool6_user(_this, CBossMonsterScheduleSystemCreateTaskPool6_next);
        };
        bool CBossMonsterScheduleSystemCreateWorkerThread8_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           return CBossMonsterScheduleSystemCreateWorkerThread8_user(_this, CBossMonsterScheduleSystemCreateWorkerThread8_next);
        };
        bool CBossMonsterScheduleSystemInit10_wrapper(struct CBossMonsterScheduleSystem* _this, struct CMapOperation* pMapOper)
        {
           return CBossMonsterScheduleSystemInit10_user(_this, pMapOper, CBossMonsterScheduleSystemInit10_next);
        };
        struct CBossMonsterScheduleSystem* CBossMonsterScheduleSystemInstance12_wrapper()
        {
           return CBossMonsterScheduleSystemInstance12_user(CBossMonsterScheduleSystemInstance12_next);
        };
        struct BossSchedule* CBossMonsterScheduleSystemLoadSchedule14_wrapper(struct CBossMonsterScheduleSystem* _this, struct BossSchedule_Map* pMapSchedule, struct INI_Section* pSection)
        {
           return CBossMonsterScheduleSystemLoadSchedule14_user(_this, pMapSchedule, pSection, CBossMonsterScheduleSystemLoadSchedule14_next);
        };
        struct BossSchedule_Map* CBossMonsterScheduleSystemMakeMap16_wrapper(struct CBossMonsterScheduleSystem* _this, int nIndex, struct CMapData* pMap)
        {
           return CBossMonsterScheduleSystemMakeMap16_user(_this, nIndex, pMap, CBossMonsterScheduleSystemMakeMap16_next);
        };
        struct BossSchedule* CBossMonsterScheduleSystemMakeSchedule18_wrapper(struct CBossMonsterScheduleSystem* _this, struct BossSchedule_Map* pMapSchedule, struct _mon_active* pMonAct, struct _mon_block* pBlock, int nActIndex, int nBlockIndex)
        {
           return CBossMonsterScheduleSystemMakeSchedule18_user(_this, pMapSchedule, pMonAct, pBlock, nActIndex, nBlockIndex, CBossMonsterScheduleSystemMakeSchedule18_next);
        };
        struct BossSchedule_TBL* CBossMonsterScheduleSystemMakeTBL20_wrapper(struct CBossMonsterScheduleSystem* _this, struct CMapOperation* pMapOper)
        {
           return CBossMonsterScheduleSystemMakeTBL20_user(_this, pMapOper, CBossMonsterScheduleSystemMakeTBL20_next);
        };
        void CBossMonsterScheduleSystemRespawnMonster22_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           CBossMonsterScheduleSystemRespawnMonster22_user(_this, CBossMonsterScheduleSystemRespawnMonster22_next);
        };
        void CBossMonsterScheduleSystemSavechedule24_wrapper(struct CBossMonsterScheduleSystem* _this, struct BossSchedule_Map* pMapSchedule, struct BossSchedule* pSchedule)
        {
           CBossMonsterScheduleSystemSavechedule24_user(_this, pMapSchedule, pSchedule, CBossMonsterScheduleSystemSavechedule24_next);
        };
        int CBossMonsterScheduleSystemWorkProc26_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           return CBossMonsterScheduleSystemWorkProc26_user(_this, CBossMonsterScheduleSystemWorkProc26_next);
        };
        
        void CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_user(_this, CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_next);
        };
        
        ::std::array<hook_record, 14> CBossMonsterScheduleSystem_functions = 
        {
            _hook_record {
                (LPVOID)0x140419cb0L,
                (LPVOID *)&CBossMonsterScheduleSystemAnalysisMsg2_user,
                (LPVOID *)&CBossMonsterScheduleSystemAnalysisMsg2_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemAnalysisMsg2_wrapper),
                (LPVOID)cast_pointer_function((void(CBossMonsterScheduleSystem::*)(struct ScheduleMSG*))&CBossMonsterScheduleSystem::AnalysisMsg)
            },
            _hook_record {
                (LPVOID)0x140418610L,
                (LPVOID *)&CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_user,
                (LPVOID *)&CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_wrapper),
                (LPVOID)cast_pointer_function((void(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::ctor_CBossMonsterScheduleSystem)
            },
            _hook_record {
                (LPVOID)0x140419a80L,
                (LPVOID *)&CBossMonsterScheduleSystemCreateTaskPool6_user,
                (LPVOID *)&CBossMonsterScheduleSystemCreateTaskPool6_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemCreateTaskPool6_wrapper),
                (LPVOID)cast_pointer_function((bool(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::CreateTaskPool)
            },
            _hook_record {
                (LPVOID)0x140419ae0L,
                (LPVOID *)&CBossMonsterScheduleSystemCreateWorkerThread8_user,
                (LPVOID *)&CBossMonsterScheduleSystemCreateWorkerThread8_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemCreateWorkerThread8_wrapper),
                (LPVOID)cast_pointer_function((bool(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::CreateWorkerThread)
            },
            _hook_record {
                (LPVOID)0x140419b60L,
                (LPVOID *)&CBossMonsterScheduleSystemInit10_user,
                (LPVOID *)&CBossMonsterScheduleSystemInit10_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemInit10_wrapper),
                (LPVOID)cast_pointer_function((bool(CBossMonsterScheduleSystem::*)(struct CMapOperation*))&CBossMonsterScheduleSystem::Init)
            },
            _hook_record {
                (LPVOID)0x1401991b0L,
                (LPVOID *)&CBossMonsterScheduleSystemInstance12_user,
                (LPVOID *)&CBossMonsterScheduleSystemInstance12_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemInstance12_wrapper),
                (LPVOID)cast_pointer_function((struct CBossMonsterScheduleSystem*(*)())&CBossMonsterScheduleSystem::Instance)
            },
            _hook_record {
                (LPVOID)0x140418ac0L,
                (LPVOID *)&CBossMonsterScheduleSystemLoadSchedule14_user,
                (LPVOID *)&CBossMonsterScheduleSystemLoadSchedule14_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemLoadSchedule14_wrapper),
                (LPVOID)cast_pointer_function((struct BossSchedule*(CBossMonsterScheduleSystem::*)(struct BossSchedule_Map*, struct INI_Section*))&CBossMonsterScheduleSystem::LoadSchedule)
            },
            _hook_record {
                (LPVOID)0x140419160L,
                (LPVOID *)&CBossMonsterScheduleSystemMakeMap16_user,
                (LPVOID *)&CBossMonsterScheduleSystemMakeMap16_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemMakeMap16_wrapper),
                (LPVOID)cast_pointer_function((struct BossSchedule_Map*(CBossMonsterScheduleSystem::*)(int, struct CMapData*))&CBossMonsterScheduleSystem::MakeMap)
            },
            _hook_record {
                (LPVOID)0x1404187f0L,
                (LPVOID *)&CBossMonsterScheduleSystemMakeSchedule18_user,
                (LPVOID *)&CBossMonsterScheduleSystemMakeSchedule18_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemMakeSchedule18_wrapper),
                (LPVOID)cast_pointer_function((struct BossSchedule*(CBossMonsterScheduleSystem::*)(struct BossSchedule_Map*, struct _mon_active*, struct _mon_block*, int, int))&CBossMonsterScheduleSystem::MakeSchedule)
            },
            _hook_record {
                (LPVOID)0x1404198c0L,
                (LPVOID *)&CBossMonsterScheduleSystemMakeTBL20_user,
                (LPVOID *)&CBossMonsterScheduleSystemMakeTBL20_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemMakeTBL20_wrapper),
                (LPVOID)cast_pointer_function((struct BossSchedule_TBL*(CBossMonsterScheduleSystem::*)(struct CMapOperation*))&CBossMonsterScheduleSystem::MakeTBL)
            },
            _hook_record {
                (LPVOID)0x140419d90L,
                (LPVOID *)&CBossMonsterScheduleSystemRespawnMonster22_user,
                (LPVOID *)&CBossMonsterScheduleSystemRespawnMonster22_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemRespawnMonster22_wrapper),
                (LPVOID)cast_pointer_function((void(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::RespawnMonster)
            },
            _hook_record {
                (LPVOID)0x140419020L,
                (LPVOID *)&CBossMonsterScheduleSystemSavechedule24_user,
                (LPVOID *)&CBossMonsterScheduleSystemSavechedule24_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemSavechedule24_wrapper),
                (LPVOID)cast_pointer_function((void(CBossMonsterScheduleSystem::*)(struct BossSchedule_Map*, struct BossSchedule*))&CBossMonsterScheduleSystem::Savechedule)
            },
            _hook_record {
                (LPVOID)0x140419c10L,
                (LPVOID *)&CBossMonsterScheduleSystemWorkProc26_user,
                (LPVOID *)&CBossMonsterScheduleSystemWorkProc26_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemWorkProc26_wrapper),
                (LPVOID)cast_pointer_function((int(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::WorkProc)
            },
            _hook_record {
                (LPVOID)0x1404186d0L,
                (LPVOID *)&CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_user,
                (LPVOID *)&CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_next,
                (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_wrapper),
                (LPVOID)cast_pointer_function((void(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::dtor_CBossMonsterScheduleSystem)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
