#include <CHolyStoneSaveData.hpp>


START_ATF_NAMESPACE
    void CHolyStoneSaveData::DefaultInit(struct CHolyScheduleData::__HolyScheduleNode* ScheduleNode)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSaveData*, struct CHolyScheduleData::__HolyScheduleNode*);
        (org_ptr(0x140284350L))(this, ScheduleNode);
    };
END_ATF_NAMESPACE
