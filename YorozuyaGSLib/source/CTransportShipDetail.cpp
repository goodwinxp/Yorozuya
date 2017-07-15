#include <CTransportShipDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CTransportShipAlterState2_ptr CTransportShipAlterState2_next(nullptr);
        Info::CTransportShipAlterState2_clbk CTransportShipAlterState2_user(nullptr);
        
        Info::CTransportShipApplyTicketReserver4_ptr CTransportShipApplyTicketReserver4_next(nullptr);
        Info::CTransportShipApplyTicketReserver4_clbk CTransportShipApplyTicketReserver4_user(nullptr);
        
        
        Info::CTransportShipctor_CTransportShip6_ptr CTransportShipctor_CTransportShip6_next(nullptr);
        Info::CTransportShipctor_CTransportShip6_clbk CTransportShipctor_CTransportShip6_user(nullptr);
        
        Info::CTransportShipCheckHurry8_ptr CTransportShipCheckHurry8_next(nullptr);
        Info::CTransportShipCheckHurry8_clbk CTransportShipCheckHurry8_user(nullptr);
        
        Info::CTransportShipCheckTicket10_ptr CTransportShipCheckTicket10_next(nullptr);
        Info::CTransportShipCheckTicket10_clbk CTransportShipCheckTicket10_user(nullptr);
        
        Info::CTransportShipCheckTicket_Kick12_ptr CTransportShipCheckTicket_Kick12_next(nullptr);
        Info::CTransportShipCheckTicket_Kick12_clbk CTransportShipCheckTicket_Kick12_user(nullptr);
        
        Info::CTransportShipCheckTicket_Pass14_ptr CTransportShipCheckTicket_Pass14_next(nullptr);
        Info::CTransportShipCheckTicket_Pass14_clbk CTransportShipCheckTicket_Pass14_user(nullptr);
        
        Info::CTransportShipEnterMember16_ptr CTransportShipEnterMember16_next(nullptr);
        Info::CTransportShipEnterMember16_clbk CTransportShipEnterMember16_user(nullptr);
        
        Info::CTransportShipExitMember18_ptr CTransportShipExitMember18_next(nullptr);
        Info::CTransportShipExitMember18_clbk CTransportShipExitMember18_user(nullptr);
        
        Info::CTransportShipGetCurRideShipThisTicket20_ptr CTransportShipGetCurRideShipThisTicket20_next(nullptr);
        Info::CTransportShipGetCurRideShipThisTicket20_clbk CTransportShipGetCurRideShipThisTicket20_user(nullptr);
        
        Info::CTransportShipGetEmptyNewMember22_ptr CTransportShipGetEmptyNewMember22_next(nullptr);
        Info::CTransportShipGetEmptyNewMember22_clbk CTransportShipGetEmptyNewMember22_user(nullptr);
        
        Info::CTransportShipGetLeftTicketIncludeReserNum24_ptr CTransportShipGetLeftTicketIncludeReserNum24_next(nullptr);
        Info::CTransportShipGetLeftTicketIncludeReserNum24_clbk CTransportShipGetLeftTicketIncludeReserNum24_user(nullptr);
        
        Info::CTransportShipGetMapCurDirect26_ptr CTransportShipGetMapCurDirect26_next(nullptr);
        Info::CTransportShipGetMapCurDirect26_clbk CTransportShipGetMapCurDirect26_user(nullptr);
        
        Info::CTransportShipGetOutPortalIndex28_ptr CTransportShipGetOutPortalIndex28_next(nullptr);
        Info::CTransportShipGetOutPortalIndex28_clbk CTransportShipGetOutPortalIndex28_user(nullptr);
        
        Info::CTransportShipGetRideLimLevel30_ptr CTransportShipGetRideLimLevel30_next(nullptr);
        Info::CTransportShipGetRideLimLevel30_clbk CTransportShipGetRideLimLevel30_user(nullptr);
        
        Info::CTransportShipGetRideUpLimLevel32_ptr CTransportShipGetRideUpLimLevel32_next(nullptr);
        Info::CTransportShipGetRideUpLimLevel32_clbk CTransportShipGetRideUpLimLevel32_user(nullptr);
        
        Info::CTransportShipGetStartPosInShip34_ptr CTransportShipGetStartPosInShip34_next(nullptr);
        Info::CTransportShipGetStartPosInShip34_clbk CTransportShipGetStartPosInShip34_user(nullptr);
        
        Info::CTransportShipInitShip36_ptr CTransportShipInitShip36_next(nullptr);
        Info::CTransportShipInitShip36_clbk CTransportShipInitShip36_user(nullptr);
        
        Info::CTransportShipInitTicketReserver38_ptr CTransportShipInitTicketReserver38_next(nullptr);
        Info::CTransportShipInitTicketReserver38_clbk CTransportShipInitTicketReserver38_user(nullptr);
        
        Info::CTransportShipIsMemberBeforeLogoff40_ptr CTransportShipIsMemberBeforeLogoff40_next(nullptr);
        Info::CTransportShipIsMemberBeforeLogoff40_clbk CTransportShipIsMemberBeforeLogoff40_user(nullptr);
        
        Info::CTransportShipIsOldMember42_ptr CTransportShipIsOldMember42_next(nullptr);
        Info::CTransportShipIsOldMember42_clbk CTransportShipIsOldMember42_user(nullptr);
        
        Info::CTransportShipKickFreeMember44_ptr CTransportShipKickFreeMember44_next(nullptr);
        Info::CTransportShipKickFreeMember44_clbk CTransportShipKickFreeMember44_user(nullptr);
        
        Info::CTransportShipKickOldMember46_ptr CTransportShipKickOldMember46_next(nullptr);
        Info::CTransportShipKickOldMember46_clbk CTransportShipKickOldMember46_user(nullptr);
        
        Info::CTransportShipLoop48_ptr CTransportShipLoop48_next(nullptr);
        Info::CTransportShipLoop48_clbk CTransportShipLoop48_user(nullptr);
        
        Info::CTransportShipReEnterMember50_ptr CTransportShipReEnterMember50_next(nullptr);
        Info::CTransportShipReEnterMember50_clbk CTransportShipReEnterMember50_user(nullptr);
        
        Info::CTransportShipRenewOldMember52_ptr CTransportShipRenewOldMember52_next(nullptr);
        Info::CTransportShipRenewOldMember52_clbk CTransportShipRenewOldMember52_user(nullptr);
        
        Info::CTransportShipSendMsg_KickForSail54_ptr CTransportShipSendMsg_KickForSail54_next(nullptr);
        Info::CTransportShipSendMsg_KickForSail54_clbk CTransportShipSendMsg_KickForSail54_user(nullptr);
        
        Info::CTransportShipSendMsg_TicketCheck56_ptr CTransportShipSendMsg_TicketCheck56_next(nullptr);
        Info::CTransportShipSendMsg_TicketCheck56_clbk CTransportShipSendMsg_TicketCheck56_user(nullptr);
        
        Info::CTransportShipSendMsg_TransportShipState58_ptr CTransportShipSendMsg_TransportShipState58_next(nullptr);
        Info::CTransportShipSendMsg_TransportShipState58_clbk CTransportShipSendMsg_TransportShipState58_user(nullptr);
        
        Info::CTransportShipTicketting60_ptr CTransportShipTicketting60_next(nullptr);
        Info::CTransportShipTicketting60_clbk CTransportShipTicketting60_user(nullptr);
        
        
        Info::CTransportShipdtor_CTransportShip62_ptr CTransportShipdtor_CTransportShip62_next(nullptr);
        Info::CTransportShipdtor_CTransportShip62_clbk CTransportShipdtor_CTransportShip62_user(nullptr);
        
        void CTransportShipAlterState2_wrapper(struct CTransportShip* _this, bool bAnchor, char byDirect, int nPassMin, int nNextSubEventTerm)
        {
           CTransportShipAlterState2_user(_this, bAnchor, byDirect, nPassMin, nNextSubEventTerm, CTransportShipAlterState2_next);
        };
        void CTransportShipApplyTicketReserver4_wrapper(struct CTransportShip* _this)
        {
           CTransportShipApplyTicketReserver4_user(_this, CTransportShipApplyTicketReserver4_next);
        };
        
        void CTransportShipctor_CTransportShip6_wrapper(struct CTransportShip* _this)
        {
           CTransportShipctor_CTransportShip6_user(_this, CTransportShipctor_CTransportShip6_next);
        };
        void CTransportShipCheckHurry8_wrapper(struct CTransportShip* _this)
        {
           CTransportShipCheckHurry8_user(_this, CTransportShipCheckHurry8_next);
        };
        void CTransportShipCheckTicket10_wrapper(struct CTransportShip* _this)
        {
           CTransportShipCheckTicket10_user(_this, CTransportShipCheckTicket10_next);
        };
        void CTransportShipCheckTicket_Kick12_wrapper(struct CTransportShip* _this, struct CPlayer* pPtr, int nPortalIndex)
        {
           CTransportShipCheckTicket_Kick12_user(_this, pPtr, nPortalIndex, CTransportShipCheckTicket_Kick12_next);
        };
        void CTransportShipCheckTicket_Pass14_wrapper(struct CTransportShip* _this, struct CPlayer* pPtr, int nPortalIndex)
        {
           CTransportShipCheckTicket_Pass14_user(_this, pPtr, nPortalIndex, CTransportShipCheckTicket_Pass14_next);
        };
        void CTransportShipEnterMember16_wrapper(struct CTransportShip* _this, struct CPlayer* pEnter)
        {
           CTransportShipEnterMember16_user(_this, pEnter, CTransportShipEnterMember16_next);
        };
        void CTransportShipExitMember18_wrapper(struct CTransportShip* _this, struct CPlayer* pExiter, bool bLogoff)
        {
           CTransportShipExitMember18_user(_this, pExiter, bLogoff, CTransportShipExitMember18_next);
        };
        bool CTransportShipGetCurRideShipThisTicket20_wrapper(struct CTransportShip* _this, struct _TicketItem_fld* pTicketFld)
        {
           return CTransportShipGetCurRideShipThisTicket20_user(_this, pTicketFld, CTransportShipGetCurRideShipThisTicket20_next);
        };
        struct CTransportShip::__mgr_member* CTransportShipGetEmptyNewMember22_wrapper(struct CTransportShip* _this)
        {
           return CTransportShipGetEmptyNewMember22_user(_this, CTransportShipGetEmptyNewMember22_next);
        };
        int CTransportShipGetLeftTicketIncludeReserNum24_wrapper(struct CTransportShip* _this, char* pszTarMapCode, int nAdd)
        {
           return CTransportShipGetLeftTicketIncludeReserNum24_user(_this, pszTarMapCode, nAdd, CTransportShipGetLeftTicketIncludeReserNum24_next);
        };
        struct CMapData* CTransportShipGetMapCurDirect26_wrapper(struct CTransportShip* _this)
        {
           return CTransportShipGetMapCurDirect26_user(_this, CTransportShipGetMapCurDirect26_next);
        };
        int CTransportShipGetOutPortalIndex28_wrapper(struct CTransportShip* _this, int nRaceCode, char byExitDirect)
        {
           return CTransportShipGetOutPortalIndex28_user(_this, nRaceCode, byExitDirect, CTransportShipGetOutPortalIndex28_next);
        };
        int CTransportShipGetRideLimLevel30_wrapper(struct CTransportShip* _this)
        {
           return CTransportShipGetRideLimLevel30_user(_this, CTransportShipGetRideLimLevel30_next);
        };
        int CTransportShipGetRideUpLimLevel32_wrapper(struct CTransportShip* _this)
        {
           return CTransportShipGetRideUpLimLevel32_user(_this, CTransportShipGetRideUpLimLevel32_next);
        };
        void CTransportShipGetStartPosInShip34_wrapper(struct CTransportShip* _this, float* pfPos)
        {
           CTransportShipGetStartPosInShip34_user(_this, pfPos, CTransportShipGetStartPosInShip34_next);
        };
        bool CTransportShipInitShip36_wrapper(struct CTransportShip* _this, struct CMapData* pLinkShipMap, struct CMapData* pLinkMainbaseMap, struct CMapData* pLinkPlatformMap, char byRaceCode_Layer)
        {
           return CTransportShipInitShip36_user(_this, pLinkShipMap, pLinkMainbaseMap, pLinkPlatformMap, byRaceCode_Layer, CTransportShipInitShip36_next);
        };
        void CTransportShipInitTicketReserver38_wrapper(struct CTransportShip* _this)
        {
           CTransportShipInitTicketReserver38_user(_this, CTransportShipInitTicketReserver38_next);
        };
        bool CTransportShipIsMemberBeforeLogoff40_wrapper(struct CTransportShip* _this, unsigned int dwPlayerSerial)
        {
           return CTransportShipIsMemberBeforeLogoff40_user(_this, dwPlayerSerial, CTransportShipIsMemberBeforeLogoff40_next);
        };
        bool CTransportShipIsOldMember42_wrapper(struct CTransportShip* _this, struct CPlayer* pMember)
        {
           return CTransportShipIsOldMember42_user(_this, pMember, CTransportShipIsOldMember42_next);
        };
        void CTransportShipKickFreeMember44_wrapper(struct CTransportShip* _this)
        {
           CTransportShipKickFreeMember44_user(_this, CTransportShipKickFreeMember44_next);
        };
        void CTransportShipKickOldMember46_wrapper(struct CTransportShip* _this, char byKickDirectCode)
        {
           CTransportShipKickOldMember46_user(_this, byKickDirectCode, CTransportShipKickOldMember46_next);
        };
        void CTransportShipLoop48_wrapper(struct CTransportShip* _this)
        {
           CTransportShipLoop48_user(_this, CTransportShipLoop48_next);
        };
        void CTransportShipReEnterMember50_wrapper(struct CTransportShip* _this, struct CPlayer* pExiter)
        {
           CTransportShipReEnterMember50_user(_this, pExiter, CTransportShipReEnterMember50_next);
        };
        bool CTransportShipRenewOldMember52_wrapper(struct CTransportShip* _this, struct CPlayer* pMember)
        {
           return CTransportShipRenewOldMember52_user(_this, pMember, CTransportShipRenewOldMember52_next);
        };
        void CTransportShipSendMsg_KickForSail54_wrapper(struct CTransportShip* _this, int n)
        {
           CTransportShipSendMsg_KickForSail54_user(_this, n, CTransportShipSendMsg_KickForSail54_next);
        };
        void CTransportShipSendMsg_TicketCheck56_wrapper(struct CTransportShip* _this, int n, bool bPass, uint16_t wTicketSerial)
        {
           CTransportShipSendMsg_TicketCheck56_user(_this, n, bPass, wTicketSerial, CTransportShipSendMsg_TicketCheck56_next);
        };
        void CTransportShipSendMsg_TransportShipState58_wrapper(struct CTransportShip* _this, int n)
        {
           CTransportShipSendMsg_TransportShipState58_user(_this, n, CTransportShipSendMsg_TransportShipState58_next);
        };
        bool CTransportShipTicketting60_wrapper(struct CTransportShip* _this, struct CPlayer* pExiter)
        {
           return CTransportShipTicketting60_user(_this, pExiter, CTransportShipTicketting60_next);
        };
        
        void CTransportShipdtor_CTransportShip62_wrapper(struct CTransportShip* _this)
        {
           CTransportShipdtor_CTransportShip62_user(_this, CTransportShipdtor_CTransportShip62_next);
        };
        
        ::std::array<hook_record, 31> CTransportShip_functions = 
        {
            _hook_record {
                (LPVOID)0x140263c00L,
                (LPVOID *)&CTransportShipAlterState2_user,
                (LPVOID *)&CTransportShipAlterState2_next,
                (LPVOID)cast_pointer_function(CTransportShipAlterState2_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)(bool, char, int, int))&CTransportShip::AlterState)
            },
            _hook_record {
                (LPVOID)0x140264f80L,
                (LPVOID *)&CTransportShipApplyTicketReserver4_user,
                (LPVOID *)&CTransportShipApplyTicketReserver4_next,
                (LPVOID)cast_pointer_function(CTransportShipApplyTicketReserver4_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::ApplyTicketReserver)
            },
            _hook_record {
                (LPVOID)0x140263820L,
                (LPVOID *)&CTransportShipctor_CTransportShip6_user,
                (LPVOID *)&CTransportShipctor_CTransportShip6_next,
                (LPVOID)cast_pointer_function(CTransportShipctor_CTransportShip6_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::ctor_CTransportShip)
            },
            _hook_record {
                (LPVOID)0x140263e80L,
                (LPVOID *)&CTransportShipCheckHurry8_user,
                (LPVOID *)&CTransportShipCheckHurry8_next,
                (LPVOID)cast_pointer_function(CTransportShipCheckHurry8_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::CheckHurry)
            },
            _hook_record {
                (LPVOID)0x140263dd0L,
                (LPVOID *)&CTransportShipCheckTicket10_user,
                (LPVOID *)&CTransportShipCheckTicket10_next,
                (LPVOID)cast_pointer_function(CTransportShipCheckTicket10_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::CheckTicket)
            },
            _hook_record {
                (LPVOID)0x1402642d0L,
                (LPVOID *)&CTransportShipCheckTicket_Kick12_user,
                (LPVOID *)&CTransportShipCheckTicket_Kick12_next,
                (LPVOID)cast_pointer_function(CTransportShipCheckTicket_Kick12_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)(struct CPlayer*, int))&CTransportShip::CheckTicket_Kick)
            },
            _hook_record {
                (LPVOID)0x140264170L,
                (LPVOID *)&CTransportShipCheckTicket_Pass14_user,
                (LPVOID *)&CTransportShipCheckTicket_Pass14_next,
                (LPVOID)cast_pointer_function(CTransportShipCheckTicket_Pass14_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)(struct CPlayer*, int))&CTransportShip::CheckTicket_Pass)
            },
            _hook_record {
                (LPVOID)0x140264830L,
                (LPVOID *)&CTransportShipEnterMember16_user,
                (LPVOID *)&CTransportShipEnterMember16_next,
                (LPVOID)cast_pointer_function(CTransportShipEnterMember16_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)(struct CPlayer*))&CTransportShip::EnterMember)
            },
            _hook_record {
                (LPVOID)0x1402649c0L,
                (LPVOID *)&CTransportShipExitMember18_user,
                (LPVOID *)&CTransportShipExitMember18_next,
                (LPVOID)cast_pointer_function(CTransportShipExitMember18_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)(struct CPlayer*, bool))&CTransportShip::ExitMember)
            },
            _hook_record {
                (LPVOID)0x140265040L,
                (LPVOID *)&CTransportShipGetCurRideShipThisTicket20_user,
                (LPVOID *)&CTransportShipGetCurRideShipThisTicket20_next,
                (LPVOID)cast_pointer_function(CTransportShipGetCurRideShipThisTicket20_wrapper),
                (LPVOID)cast_pointer_function((bool(CTransportShip::*)(struct _TicketItem_fld*))&CTransportShip::GetCurRideShipThisTicket)
            },
            _hook_record {
                (LPVOID)0x1402652a0L,
                (LPVOID *)&CTransportShipGetEmptyNewMember22_user,
                (LPVOID *)&CTransportShipGetEmptyNewMember22_next,
                (LPVOID)cast_pointer_function(CTransportShipGetEmptyNewMember22_wrapper),
                (LPVOID)cast_pointer_function((struct CTransportShip::__mgr_member*(CTransportShip::*)())&CTransportShip::GetEmptyNewMember)
            },
            _hook_record {
                (LPVOID)0x140264e00L,
                (LPVOID *)&CTransportShipGetLeftTicketIncludeReserNum24_user,
                (LPVOID *)&CTransportShipGetLeftTicketIncludeReserNum24_next,
                (LPVOID)cast_pointer_function(CTransportShipGetLeftTicketIncludeReserNum24_wrapper),
                (LPVOID)cast_pointer_function((int(CTransportShip::*)(char*, int))&CTransportShip::GetLeftTicketIncludeReserNum)
            },
            _hook_record {
                (LPVOID)0x140264dd0L,
                (LPVOID *)&CTransportShipGetMapCurDirect26_user,
                (LPVOID *)&CTransportShipGetMapCurDirect26_next,
                (LPVOID)cast_pointer_function(CTransportShipGetMapCurDirect26_wrapper),
                (LPVOID)cast_pointer_function((struct CMapData*(CTransportShip::*)())&CTransportShip::GetMapCurDirect)
            },
            _hook_record {
                (LPVOID)0x140265110L,
                (LPVOID *)&CTransportShipGetOutPortalIndex28_user,
                (LPVOID *)&CTransportShipGetOutPortalIndex28_next,
                (LPVOID)cast_pointer_function(CTransportShipGetOutPortalIndex28_wrapper),
                (LPVOID)cast_pointer_function((int(CTransportShip::*)(int, char))&CTransportShip::GetOutPortalIndex)
            },
            _hook_record {
                (LPVOID)0x140265140L,
                (LPVOID *)&CTransportShipGetRideLimLevel30_user,
                (LPVOID *)&CTransportShipGetRideLimLevel30_next,
                (LPVOID)cast_pointer_function(CTransportShipGetRideLimLevel30_wrapper),
                (LPVOID)cast_pointer_function((int(CTransportShip::*)())&CTransportShip::GetRideLimLevel)
            },
            _hook_record {
                (LPVOID)0x1402651f0L,
                (LPVOID *)&CTransportShipGetRideUpLimLevel32_user,
                (LPVOID *)&CTransportShipGetRideUpLimLevel32_next,
                (LPVOID)cast_pointer_function(CTransportShipGetRideUpLimLevel32_wrapper),
                (LPVOID)cast_pointer_function((int(CTransportShip::*)())&CTransportShip::GetRideUpLimLevel)
            },
            _hook_record {
                (LPVOID)0x140264d70L,
                (LPVOID *)&CTransportShipGetStartPosInShip34_user,
                (LPVOID *)&CTransportShipGetStartPosInShip34_next,
                (LPVOID)cast_pointer_function(CTransportShipGetStartPosInShip34_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)(float*))&CTransportShip::GetStartPosInShip)
            },
            _hook_record {
                (LPVOID)0x1402639c0L,
                (LPVOID *)&CTransportShipInitShip36_user,
                (LPVOID *)&CTransportShipInitShip36_next,
                (LPVOID)cast_pointer_function(CTransportShipInitShip36_wrapper),
                (LPVOID)cast_pointer_function((bool(CTransportShip::*)(struct CMapData*, struct CMapData*, struct CMapData*, char))&CTransportShip::InitShip)
            },
            _hook_record {
                (LPVOID)0x140264f10L,
                (LPVOID *)&CTransportShipInitTicketReserver38_user,
                (LPVOID *)&CTransportShipInitTicketReserver38_next,
                (LPVOID)cast_pointer_function(CTransportShipInitTicketReserver38_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::InitTicketReserver)
            },
            _hook_record {
                (LPVOID)0x140078ae0L,
                (LPVOID *)&CTransportShipIsMemberBeforeLogoff40_user,
                (LPVOID *)&CTransportShipIsMemberBeforeLogoff40_next,
                (LPVOID)cast_pointer_function(CTransportShipIsMemberBeforeLogoff40_wrapper),
                (LPVOID)cast_pointer_function((bool(CTransportShip::*)(unsigned int))&CTransportShip::IsMemberBeforeLogoff)
            },
            _hook_record {
                (LPVOID)0x140264cc0L,
                (LPVOID *)&CTransportShipIsOldMember42_user,
                (LPVOID *)&CTransportShipIsOldMember42_next,
                (LPVOID)cast_pointer_function(CTransportShipIsOldMember42_wrapper),
                (LPVOID)cast_pointer_function((bool(CTransportShip::*)(struct CPlayer*))&CTransportShip::IsOldMember)
            },
            _hook_record {
                (LPVOID)0x140263f10L,
                (LPVOID *)&CTransportShipKickFreeMember44_user,
                (LPVOID *)&CTransportShipKickFreeMember44_next,
                (LPVOID)cast_pointer_function(CTransportShipKickFreeMember44_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::KickFreeMember)
            },
            _hook_record {
                (LPVOID)0x140264030L,
                (LPVOID *)&CTransportShipKickOldMember46_user,
                (LPVOID *)&CTransportShipKickOldMember46_next,
                (LPVOID)cast_pointer_function(CTransportShipKickOldMember46_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)(char))&CTransportShip::KickOldMember)
            },
            _hook_record {
                (LPVOID)0x140263d70L,
                (LPVOID *)&CTransportShipLoop48_user,
                (LPVOID *)&CTransportShipLoop48_next,
                (LPVOID)cast_pointer_function(CTransportShipLoop48_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::Loop)
            },
            _hook_record {
                (LPVOID)0x140264b30L,
                (LPVOID *)&CTransportShipReEnterMember50_user,
                (LPVOID *)&CTransportShipReEnterMember50_next,
                (LPVOID)cast_pointer_function(CTransportShipReEnterMember50_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)(struct CPlayer*))&CTransportShip::ReEnterMember)
            },
            _hook_record {
                (LPVOID)0x140264bc0L,
                (LPVOID *)&CTransportShipRenewOldMember52_user,
                (LPVOID *)&CTransportShipRenewOldMember52_next,
                (LPVOID)cast_pointer_function(CTransportShipRenewOldMember52_wrapper),
                (LPVOID)cast_pointer_function((bool(CTransportShip::*)(struct CPlayer*))&CTransportShip::RenewOldMember)
            },
            _hook_record {
                (LPVOID)0x1402653d0L,
                (LPVOID *)&CTransportShipSendMsg_KickForSail54_user,
                (LPVOID *)&CTransportShipSendMsg_KickForSail54_next,
                (LPVOID)cast_pointer_function(CTransportShipSendMsg_KickForSail54_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)(int))&CTransportShip::SendMsg_KickForSail)
            },
            _hook_record {
                (LPVOID)0x140265330L,
                (LPVOID *)&CTransportShipSendMsg_TicketCheck56_user,
                (LPVOID *)&CTransportShipSendMsg_TicketCheck56_next,
                (LPVOID)cast_pointer_function(CTransportShipSendMsg_TicketCheck56_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)(int, bool, uint16_t))&CTransportShip::SendMsg_TicketCheck)
            },
            _hook_record {
                (LPVOID)0x140265450L,
                (LPVOID *)&CTransportShipSendMsg_TransportShipState58_user,
                (LPVOID *)&CTransportShipSendMsg_TransportShipState58_next,
                (LPVOID)cast_pointer_function(CTransportShipSendMsg_TransportShipState58_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)(int))&CTransportShip::SendMsg_TransportShipState)
            },
            _hook_record {
                (LPVOID)0x140264450L,
                (LPVOID *)&CTransportShipTicketting60_user,
                (LPVOID *)&CTransportShipTicketting60_next,
                (LPVOID)cast_pointer_function(CTransportShipTicketting60_wrapper),
                (LPVOID)cast_pointer_function((bool(CTransportShip::*)(struct CPlayer*))&CTransportShip::Ticketting)
            },
            _hook_record {
                (LPVOID)0x140265e00L,
                (LPVOID *)&CTransportShipdtor_CTransportShip62_user,
                (LPVOID *)&CTransportShipdtor_CTransportShip62_next,
                (LPVOID)cast_pointer_function(CTransportShipdtor_CTransportShip62_wrapper),
                (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::dtor_CTransportShip)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
