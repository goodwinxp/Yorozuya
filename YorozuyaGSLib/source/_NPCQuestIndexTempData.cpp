#include <_NPCQuestIndexTempData.hpp>


START_ATF_NAMESPACE
    void _NPCQuestIndexTempData::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _NPCQuestIndexTempData*);
        (org_ptr(0x140073ef0L))(this);
    };
    _NPCQuestIndexTempData::_NPCQuestIndexTempData()
    {
        using org_ptr = void (WINAPIV*)(struct _NPCQuestIndexTempData*);
        (org_ptr(0x140073ea0L))(this);
    };
    void _NPCQuestIndexTempData::ctor__NPCQuestIndexTempData()
    {
        using org_ptr = void (WINAPIV*)(struct _NPCQuestIndexTempData*);
        (org_ptr(0x140073ea0L))(this);
    };
    
END_ATF_NAMESPACE
