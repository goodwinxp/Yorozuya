// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CActionPointSystemMgr.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CActionPointSystemMgrctor_CActionPointSystemMgr2_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*);
        using CActionPointSystemMgrctor_CActionPointSystemMgr2_clbk = void (WINAPIV*)(struct CActionPointSystemMgr*, CActionPointSystemMgrctor_CActionPointSystemMgr2_ptr);
        using CActionPointSystemMgrCheck_Event_Status4_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*);
        using CActionPointSystemMgrCheck_Event_Status4_clbk = void (WINAPIV*)(struct CActionPointSystemMgr*, CActionPointSystemMgrCheck_Event_Status4_ptr);
        using CActionPointSystemMgrCheck_Load_Event_Status6_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*, char, struct _action_point_system_ini*);
        using CActionPointSystemMgrCheck_Load_Event_Status6_clbk = void (WINAPIV*)(struct CActionPointSystemMgr*, char, struct _action_point_system_ini*, CActionPointSystemMgrCheck_Load_Event_Status6_ptr);
        using CActionPointSystemMgrCheck_Loop8_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*);
        using CActionPointSystemMgrCheck_Loop8_clbk = void (WINAPIV*)(struct CActionPointSystemMgr*, CActionPointSystemMgrCheck_Loop8_ptr);
        using CActionPointSystemMgrGetEventStatus10_ptr = char (WINAPIV*)(struct CActionPointSystemMgr*, char);
        using CActionPointSystemMgrGetEventStatus10_clbk = char (WINAPIV*)(struct CActionPointSystemMgr*, char, CActionPointSystemMgrGetEventStatus10_ptr);
        using CActionPointSystemMgrInitialize12_ptr = bool (WINAPIV*)(struct CActionPointSystemMgr*);
        using CActionPointSystemMgrInitialize12_clbk = bool (WINAPIV*)(struct CActionPointSystemMgr*, CActionPointSystemMgrInitialize12_ptr);
        using CActionPointSystemMgrInstance14_ptr = struct CActionPointSystemMgr* (WINAPIV*)();
        using CActionPointSystemMgrInstance14_clbk = struct CActionPointSystemMgr* (WINAPIV*)(CActionPointSystemMgrInstance14_ptr);
        using CActionPointSystemMgrIsPointReset16_ptr = bool (WINAPIV*)(struct CActionPointSystemMgr*, char);
        using CActionPointSystemMgrIsPointReset16_clbk = bool (WINAPIV*)(struct CActionPointSystemMgr*, char, CActionPointSystemMgrIsPointReset16_ptr);
        using CActionPointSystemMgrIsSystemEnable18_ptr = bool (WINAPIV*)(struct CActionPointSystemMgr*, char);
        using CActionPointSystemMgrIsSystemEnable18_clbk = bool (WINAPIV*)(struct CActionPointSystemMgr*, char, CActionPointSystemMgrIsSystemEnable18_ptr);
        using CActionPointSystemMgrLoad_Event_INI20_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*, struct _action_point_system_ini*, uint16_t);
        using CActionPointSystemMgrLoad_Event_INI20_clbk = void (WINAPIV*)(struct CActionPointSystemMgr*, struct _action_point_system_ini*, uint16_t, CActionPointSystemMgrLoad_Event_INI20_ptr);
        using CActionPointSystemMgrSetEventStatus22_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*, char, char);
        using CActionPointSystemMgrSetEventStatus22_clbk = void (WINAPIV*)(struct CActionPointSystemMgr*, char, char, CActionPointSystemMgrSetEventStatus22_ptr);
        using CActionPointSystemMgrdtor_CActionPointSystemMgr24_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*);
        using CActionPointSystemMgrdtor_CActionPointSystemMgr24_clbk = void (WINAPIV*)(struct CActionPointSystemMgr*, CActionPointSystemMgrdtor_CActionPointSystemMgr24_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE