#include <CGravityStoneRegenerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CGravityStoneRegenerctor_CGravityStoneRegener2_ptr CGravityStoneRegenerctor_CGravityStoneRegener2_next(nullptr);
        Info::CGravityStoneRegenerctor_CGravityStoneRegener2_clbk CGravityStoneRegenerctor_CGravityStoneRegener2_user(nullptr);
        
        Info::CGravityStoneRegenerCheatClearRegenState4_ptr CGravityStoneRegenerCheatClearRegenState4_next(nullptr);
        Info::CGravityStoneRegenerCheatClearRegenState4_clbk CGravityStoneRegenerCheatClearRegenState4_user(nullptr);
        
        Info::CGravityStoneRegenerClearRegen6_ptr CGravityStoneRegenerClearRegen6_next(nullptr);
        Info::CGravityStoneRegenerClearRegen6_clbk CGravityStoneRegenerClearRegen6_user(nullptr);
        
        Info::CGravityStoneRegenerCreate8_ptr CGravityStoneRegenerCreate8_next(nullptr);
        Info::CGravityStoneRegenerCreate8_clbk CGravityStoneRegenerCreate8_user(nullptr);
        
        Info::CGravityStoneRegenerDestroy10_ptr CGravityStoneRegenerDestroy10_next(nullptr);
        Info::CGravityStoneRegenerDestroy10_clbk CGravityStoneRegenerDestroy10_user(nullptr);
        
        Info::CGravityStoneRegenerGetPortalInx12_ptr CGravityStoneRegenerGetPortalInx12_next(nullptr);
        Info::CGravityStoneRegenerGetPortalInx12_clbk CGravityStoneRegenerGetPortalInx12_user(nullptr);
        
        Info::CGravityStoneRegenerGetStateString14_ptr CGravityStoneRegenerGetStateString14_next(nullptr);
        Info::CGravityStoneRegenerGetStateString14_clbk CGravityStoneRegenerGetStateString14_user(nullptr);
        
        Info::CGravityStoneRegenerInit16_ptr CGravityStoneRegenerInit16_next(nullptr);
        Info::CGravityStoneRegenerInit16_clbk CGravityStoneRegenerInit16_user(nullptr);
        
        Info::CGravityStoneRegenerIsNearPosition18_ptr CGravityStoneRegenerIsNearPosition18_next(nullptr);
        Info::CGravityStoneRegenerIsNearPosition18_clbk CGravityStoneRegenerIsNearPosition18_user(nullptr);
        
        Info::CGravityStoneRegenerRegen20_ptr CGravityStoneRegenerRegen20_next(nullptr);
        Info::CGravityStoneRegenerRegen20_clbk CGravityStoneRegenerRegen20_user(nullptr);
        
        Info::CGravityStoneRegenerSendMsgAlterState22_ptr CGravityStoneRegenerSendMsgAlterState22_next(nullptr);
        Info::CGravityStoneRegenerSendMsgAlterState22_clbk CGravityStoneRegenerSendMsgAlterState22_user(nullptr);
        
        Info::CGravityStoneRegenerSendMsg_FixPosition24_ptr CGravityStoneRegenerSendMsg_FixPosition24_next(nullptr);
        Info::CGravityStoneRegenerSendMsg_FixPosition24_clbk CGravityStoneRegenerSendMsg_FixPosition24_user(nullptr);
        
        Info::CGravityStoneRegenerTake26_ptr CGravityStoneRegenerTake26_next(nullptr);
        Info::CGravityStoneRegenerTake26_clbk CGravityStoneRegenerTake26_user(nullptr);
        
        
        Info::CGravityStoneRegenerdtor_CGravityStoneRegener32_ptr CGravityStoneRegenerdtor_CGravityStoneRegener32_next(nullptr);
        Info::CGravityStoneRegenerdtor_CGravityStoneRegener32_clbk CGravityStoneRegenerdtor_CGravityStoneRegener32_user(nullptr);
        
        
        void CGravityStoneRegenerctor_CGravityStoneRegener2_wrapper(struct CGravityStoneRegener* _this)
        {
           CGravityStoneRegenerctor_CGravityStoneRegener2_user(_this, CGravityStoneRegenerctor_CGravityStoneRegener2_next);
        };
        void CGravityStoneRegenerCheatClearRegenState4_wrapper(struct CGravityStoneRegener* _this)
        {
           CGravityStoneRegenerCheatClearRegenState4_user(_this, CGravityStoneRegenerCheatClearRegenState4_next);
        };
        bool CGravityStoneRegenerClearRegen6_wrapper(struct CGravityStoneRegener* _this)
        {
           return CGravityStoneRegenerClearRegen6_user(_this, CGravityStoneRegenerClearRegen6_next);
        };
        bool CGravityStoneRegenerCreate8_wrapper(struct CGravityStoneRegener* _this, struct CMapData* pkMap)
        {
           return CGravityStoneRegenerCreate8_user(_this, pkMap, CGravityStoneRegenerCreate8_next);
        };
        void CGravityStoneRegenerDestroy10_wrapper(struct CGravityStoneRegener* _this)
        {
           CGravityStoneRegenerDestroy10_user(_this, CGravityStoneRegenerDestroy10_next);
        };
        int CGravityStoneRegenerGetPortalInx12_wrapper(struct CGravityStoneRegener* _this)
        {
           return CGravityStoneRegenerGetPortalInx12_user(_this, CGravityStoneRegenerGetPortalInx12_next);
        };
        char* CGravityStoneRegenerGetStateString14_wrapper(struct CGravityStoneRegener* _this, struct ATL::CStringT<char>* strState)
        {
           return CGravityStoneRegenerGetStateString14_user(_this, strState, CGravityStoneRegenerGetStateString14_next);
        };
        bool CGravityStoneRegenerInit16_wrapper(struct CGravityStoneRegener* _this, unsigned int uiMapInx, uint16_t wInx, struct CMapData* pkMap)
        {
           return CGravityStoneRegenerInit16_user(_this, uiMapInx, wInx, pkMap, CGravityStoneRegenerInit16_next);
        };
        bool CGravityStoneRegenerIsNearPosition18_wrapper(struct CGravityStoneRegener* _this, float* pfCurPos)
        {
           return CGravityStoneRegenerIsNearPosition18_user(_this, pfCurPos, CGravityStoneRegenerIsNearPosition18_next);
        };
        int CGravityStoneRegenerRegen20_wrapper(struct CGravityStoneRegener* _this)
        {
           return CGravityStoneRegenerRegen20_user(_this, CGravityStoneRegenerRegen20_next);
        };
        void CGravityStoneRegenerSendMsgAlterState22_wrapper(struct CGravityStoneRegener* _this)
        {
           CGravityStoneRegenerSendMsgAlterState22_user(_this, CGravityStoneRegenerSendMsgAlterState22_next);
        };
        void CGravityStoneRegenerSendMsg_FixPosition24_wrapper(struct CGravityStoneRegener* _this, int n)
        {
           CGravityStoneRegenerSendMsg_FixPosition24_user(_this, n, CGravityStoneRegenerSendMsg_FixPosition24_next);
        };
        char CGravityStoneRegenerTake26_wrapper(struct CGravityStoneRegener* _this, struct CMapData* pkMap, float* pfCurPos)
        {
           return CGravityStoneRegenerTake26_user(_this, pkMap, pfCurPos, CGravityStoneRegenerTake26_next);
        };
        
        void CGravityStoneRegenerdtor_CGravityStoneRegener32_wrapper(struct CGravityStoneRegener* _this)
        {
           CGravityStoneRegenerdtor_CGravityStoneRegener32_user(_this, CGravityStoneRegenerdtor_CGravityStoneRegener32_next);
        };
        
        ::std::array<hook_record, 14> CGravityStoneRegener_functions = 
        {
            _hook_record {
                (LPVOID)0x14012e4c0L,
                (LPVOID *)&CGravityStoneRegenerctor_CGravityStoneRegener2_user,
                (LPVOID *)&CGravityStoneRegenerctor_CGravityStoneRegener2_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerctor_CGravityStoneRegener2_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStoneRegener::*)())&CGravityStoneRegener::ctor_CGravityStoneRegener)
            },
            _hook_record {
                (LPVOID)0x14012edb0L,
                (LPVOID *)&CGravityStoneRegenerCheatClearRegenState4_user,
                (LPVOID *)&CGravityStoneRegenerCheatClearRegenState4_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerCheatClearRegenState4_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStoneRegener::*)())&CGravityStoneRegener::CheatClearRegenState)
            },
            _hook_record {
                (LPVOID)0x14012ebb0L,
                (LPVOID *)&CGravityStoneRegenerClearRegen6_user,
                (LPVOID *)&CGravityStoneRegenerClearRegen6_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerClearRegen6_wrapper),
                (LPVOID)cast_pointer_function((bool(CGravityStoneRegener::*)())&CGravityStoneRegener::ClearRegen)
            },
            _hook_record {
                (LPVOID)0x14012e950L,
                (LPVOID *)&CGravityStoneRegenerCreate8_user,
                (LPVOID *)&CGravityStoneRegenerCreate8_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerCreate8_wrapper),
                (LPVOID)cast_pointer_function((bool(CGravityStoneRegener::*)(struct CMapData*))&CGravityStoneRegener::Create)
            },
            _hook_record {
                (LPVOID)0x14012ea50L,
                (LPVOID *)&CGravityStoneRegenerDestroy10_user,
                (LPVOID *)&CGravityStoneRegenerDestroy10_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerDestroy10_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStoneRegener::*)())&CGravityStoneRegener::Destroy)
            },
            _hook_record {
                (LPVOID)0x140034ae0L,
                (LPVOID *)&CGravityStoneRegenerGetPortalInx12_user,
                (LPVOID *)&CGravityStoneRegenerGetPortalInx12_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerGetPortalInx12_wrapper),
                (LPVOID)cast_pointer_function((int(CGravityStoneRegener::*)())&CGravityStoneRegener::GetPortalInx)
            },
            _hook_record {
                (LPVOID)0x14012ecf0L,
                (LPVOID *)&CGravityStoneRegenerGetStateString14_user,
                (LPVOID *)&CGravityStoneRegenerGetStateString14_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerGetStateString14_wrapper),
                (LPVOID)cast_pointer_function((char*(CGravityStoneRegener::*)(struct ATL::CStringT<char>*))&CGravityStoneRegener::GetStateString)
            },
            _hook_record {
                (LPVOID)0x14012e590L,
                (LPVOID *)&CGravityStoneRegenerInit16_user,
                (LPVOID *)&CGravityStoneRegenerInit16_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerInit16_wrapper),
                (LPVOID)cast_pointer_function((bool(CGravityStoneRegener::*)(unsigned int, uint16_t, struct CMapData*))&CGravityStoneRegener::Init)
            },
            _hook_record {
                (LPVOID)0x14012ee30L,
                (LPVOID *)&CGravityStoneRegenerIsNearPosition18_user,
                (LPVOID *)&CGravityStoneRegenerIsNearPosition18_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerIsNearPosition18_wrapper),
                (LPVOID)cast_pointer_function((bool(CGravityStoneRegener::*)(float*))&CGravityStoneRegener::IsNearPosition)
            },
            _hook_record {
                (LPVOID)0x14012eaa0L,
                (LPVOID *)&CGravityStoneRegenerRegen20_user,
                (LPVOID *)&CGravityStoneRegenerRegen20_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerRegen20_wrapper),
                (LPVOID)cast_pointer_function((int(CGravityStoneRegener::*)())&CGravityStoneRegener::Regen)
            },
            _hook_record {
                (LPVOID)0x14012ef50L,
                (LPVOID *)&CGravityStoneRegenerSendMsgAlterState22_user,
                (LPVOID *)&CGravityStoneRegenerSendMsgAlterState22_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerSendMsgAlterState22_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStoneRegener::*)())&CGravityStoneRegener::SendMsgAlterState)
            },
            _hook_record {
                (LPVOID)0x14012ee90L,
                (LPVOID *)&CGravityStoneRegenerSendMsg_FixPosition24_user,
                (LPVOID *)&CGravityStoneRegenerSendMsg_FixPosition24_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerSendMsg_FixPosition24_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStoneRegener::*)(int))&CGravityStoneRegener::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x14012eb20L,
                (LPVOID *)&CGravityStoneRegenerTake26_user,
                (LPVOID *)&CGravityStoneRegenerTake26_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerTake26_wrapper),
                (LPVOID)cast_pointer_function((char(CGravityStoneRegener::*)(struct CMapData*, float*))&CGravityStoneRegener::Take)
            },
            _hook_record {
                (LPVOID)0x14012e540L,
                (LPVOID *)&CGravityStoneRegenerdtor_CGravityStoneRegener32_user,
                (LPVOID *)&CGravityStoneRegenerdtor_CGravityStoneRegener32_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegenerdtor_CGravityStoneRegener32_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStoneRegener::*)())&CGravityStoneRegener::dtor_CGravityStoneRegener)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
