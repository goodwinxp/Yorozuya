#include <CHolyStoneSystemDataMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CHolyStoneSystemDataMgrLoadIni2_ptr CHolyStoneSystemDataMgrLoadIni2_next(nullptr);
        Info::CHolyStoneSystemDataMgrLoadIni2_clbk CHolyStoneSystemDataMgrLoadIni2_user(nullptr);
        
        Info::CHolyStoneSystemDataMgrLoadSceduleData4_ptr CHolyStoneSystemDataMgrLoadSceduleData4_next(nullptr);
        Info::CHolyStoneSystemDataMgrLoadSceduleData4_clbk CHolyStoneSystemDataMgrLoadSceduleData4_user(nullptr);
        
        Info::CHolyStoneSystemDataMgrLoadStateData6_ptr CHolyStoneSystemDataMgrLoadStateData6_next(nullptr);
        Info::CHolyStoneSystemDataMgrLoadStateData6_clbk CHolyStoneSystemDataMgrLoadStateData6_user(nullptr);
        
        Info::CHolyStoneSystemDataMgrSaveStateData8_ptr CHolyStoneSystemDataMgrSaveStateData8_next(nullptr);
        Info::CHolyStoneSystemDataMgrSaveStateData8_clbk CHolyStoneSystemDataMgrSaveStateData8_user(nullptr);
        
        bool CHolyStoneSystemDataMgrLoadIni2_wrapper(struct CHolyStoneSystem* clsHolyStoneSystem)
        {
           return CHolyStoneSystemDataMgrLoadIni2_user(clsHolyStoneSystem, CHolyStoneSystemDataMgrLoadIni2_next);
        };
        bool CHolyStoneSystemDataMgrLoadSceduleData4_wrapper(struct CHolyScheduleData* clsDummy)
        {
           return CHolyStoneSystemDataMgrLoadSceduleData4_user(clsDummy, CHolyStoneSystemDataMgrLoadSceduleData4_next);
        };
        bool CHolyStoneSystemDataMgrLoadStateData6_wrapper(struct CHolyStoneSaveData* clsSaveDummy)
        {
           return CHolyStoneSystemDataMgrLoadStateData6_user(clsSaveDummy, CHolyStoneSystemDataMgrLoadStateData6_next);
        };
        bool CHolyStoneSystemDataMgrSaveStateData8_wrapper(struct CHolyStoneSaveData* clsSaveDummy)
        {
           return CHolyStoneSystemDataMgrSaveStateData8_user(clsSaveDummy, CHolyStoneSystemDataMgrSaveStateData8_next);
        };
        
        ::std::array<hook_record, 4> CHolyStoneSystemDataMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x140284e90L,
                (LPVOID *)&CHolyStoneSystemDataMgrLoadIni2_user,
                (LPVOID *)&CHolyStoneSystemDataMgrLoadIni2_next,
                (LPVOID)cast_pointer_function(CHolyStoneSystemDataMgrLoadIni2_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(struct CHolyStoneSystem*))&CHolyStoneSystemDataMgr::LoadIni)
            },
            _hook_record {
                (LPVOID)0x140285f50L,
                (LPVOID *)&CHolyStoneSystemDataMgrLoadSceduleData4_user,
                (LPVOID *)&CHolyStoneSystemDataMgrLoadSceduleData4_next,
                (LPVOID)cast_pointer_function(CHolyStoneSystemDataMgrLoadSceduleData4_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(struct CHolyScheduleData*))&CHolyStoneSystemDataMgr::LoadSceduleData)
            },
            _hook_record {
                (LPVOID)0x1402861a0L,
                (LPVOID *)&CHolyStoneSystemDataMgrLoadStateData6_user,
                (LPVOID *)&CHolyStoneSystemDataMgrLoadStateData6_next,
                (LPVOID)cast_pointer_function(CHolyStoneSystemDataMgrLoadStateData6_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(struct CHolyStoneSaveData*))&CHolyStoneSystemDataMgr::LoadStateData)
            },
            _hook_record {
                (LPVOID)0x140286760L,
                (LPVOID *)&CHolyStoneSystemDataMgrSaveStateData8_user,
                (LPVOID *)&CHolyStoneSystemDataMgrSaveStateData8_next,
                (LPVOID)cast_pointer_function(CHolyStoneSystemDataMgrSaveStateData8_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(struct CHolyStoneSaveData*))&CHolyStoneSystemDataMgr::SaveStateData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
