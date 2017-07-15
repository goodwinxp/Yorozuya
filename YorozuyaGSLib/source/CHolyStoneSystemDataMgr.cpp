#include <CHolyStoneSystemDataMgr.hpp>


START_ATF_NAMESPACE
    bool CHolyStoneSystemDataMgr::LoadIni(struct CHolyStoneSystem* clsHolyStoneSystem)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x140284e90L))(clsHolyStoneSystem);
    };
    bool CHolyStoneSystemDataMgr::LoadSceduleData(struct CHolyScheduleData* clsDummy)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyScheduleData*);
        return (org_ptr(0x140285f50L))(clsDummy);
    };
    bool CHolyStoneSystemDataMgr::LoadStateData(struct CHolyStoneSaveData* clsSaveDummy)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSaveData*);
        return (org_ptr(0x1402861a0L))(clsSaveDummy);
    };
    bool CHolyStoneSystemDataMgr::SaveStateData(struct CHolyStoneSaveData* clsSaveDummy)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSaveData*);
        return (org_ptr(0x140286760L))(clsSaveDummy);
    };
END_ATF_NAMESPACE
