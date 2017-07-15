#include <CCouponMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCouponMgrctor_CCouponMgr2_ptr CCouponMgrctor_CCouponMgr2_next(nullptr);
        Info::CCouponMgrctor_CCouponMgr2_clbk CCouponMgrctor_CCouponMgr2_user(nullptr);
        
        Info::CCouponMgrGetCouponInfo4_ptr CCouponMgrGetCouponInfo4_next(nullptr);
        Info::CCouponMgrGetCouponInfo4_clbk CCouponMgrGetCouponInfo4_user(nullptr);
        
        Info::CCouponMgrInit6_ptr CCouponMgrInit6_next(nullptr);
        Info::CCouponMgrInit6_clbk CCouponMgrInit6_user(nullptr);
        
        Info::CCouponMgrInitCuponInfo8_ptr CCouponMgrInitCuponInfo8_next(nullptr);
        Info::CCouponMgrInitCuponInfo8_clbk CCouponMgrInitCuponInfo8_user(nullptr);
        
        Info::CCouponMgrIsEnableGetCoupon10_ptr CCouponMgrIsEnableGetCoupon10_next(nullptr);
        Info::CCouponMgrIsEnableGetCoupon10_clbk CCouponMgrIsEnableGetCoupon10_user(nullptr);
        
        Info::CCouponMgrLoadData12_ptr CCouponMgrLoadData12_next(nullptr);
        Info::CCouponMgrLoadData12_clbk CCouponMgrLoadData12_user(nullptr);
        
        Info::CCouponMgrLogOut14_ptr CCouponMgrLogOut14_next(nullptr);
        Info::CCouponMgrLogOut14_clbk CCouponMgrLogOut14_user(nullptr);
        
        Info::CCouponMgrLoop16_ptr CCouponMgrLoop16_next(nullptr);
        Info::CCouponMgrLoop16_clbk CCouponMgrLoop16_user(nullptr);
        
        Info::CCouponMgrReceivePrimiumCoupon18_ptr CCouponMgrReceivePrimiumCoupon18_next(nullptr);
        Info::CCouponMgrReceivePrimiumCoupon18_clbk CCouponMgrReceivePrimiumCoupon18_user(nullptr);
        
        Info::CCouponMgrSendMsg_CouponEnsure20_ptr CCouponMgrSendMsg_CouponEnsure20_next(nullptr);
        Info::CCouponMgrSendMsg_CouponEnsure20_clbk CCouponMgrSendMsg_CouponEnsure20_user(nullptr);
        
        Info::CCouponMgrSendMsg_CouponError22_ptr CCouponMgrSendMsg_CouponError22_next(nullptr);
        Info::CCouponMgrSendMsg_CouponError22_clbk CCouponMgrSendMsg_CouponError22_user(nullptr);
        
        Info::CCouponMgrSendMsg_CouponLendResult24_ptr CCouponMgrSendMsg_CouponLendResult24_next(nullptr);
        Info::CCouponMgrSendMsg_CouponLendResult24_clbk CCouponMgrSendMsg_CouponLendResult24_user(nullptr);
        
        Info::CCouponMgrSendMsg_InPcBangTime26_ptr CCouponMgrSendMsg_InPcBangTime26_next(nullptr);
        Info::CCouponMgrSendMsg_InPcBangTime26_clbk CCouponMgrSendMsg_InPcBangTime26_user(nullptr);
        
        Info::CCouponMgrSendMsg_RemainCouponInform28_ptr CCouponMgrSendMsg_RemainCouponInform28_next(nullptr);
        Info::CCouponMgrSendMsg_RemainCouponInform28_clbk CCouponMgrSendMsg_RemainCouponInform28_user(nullptr);
        
        Info::CCouponMgrSetCheetContTime30_ptr CCouponMgrSetCheetContTime30_next(nullptr);
        Info::CCouponMgrSetCheetContTime30_clbk CCouponMgrSetCheetContTime30_user(nullptr);
        
        
        Info::CCouponMgrdtor_CCouponMgr32_ptr CCouponMgrdtor_CCouponMgr32_next(nullptr);
        Info::CCouponMgrdtor_CCouponMgr32_clbk CCouponMgrdtor_CCouponMgr32_user(nullptr);
        
        
        void CCouponMgrctor_CCouponMgr2_wrapper(struct CCouponMgr* _this)
        {
           CCouponMgrctor_CCouponMgr2_user(_this, CCouponMgrctor_CCouponMgr2_next);
        };
        struct CouponInfo* CCouponMgrGetCouponInfo4_wrapper(struct CCouponMgr* _this, char byCouponTime)
        {
           return CCouponMgrGetCouponInfo4_user(_this, byCouponTime, CCouponMgrGetCouponInfo4_next);
        };
        void CCouponMgrInit6_wrapper(struct CCouponMgr* _this, uint16_t wIdx)
        {
           CCouponMgrInit6_user(_this, wIdx, CCouponMgrInit6_next);
        };
        void CCouponMgrInitCuponInfo8_wrapper(struct CCouponMgr* _this)
        {
           CCouponMgrInitCuponInfo8_user(_this, CCouponMgrInitCuponInfo8_next);
        };
        bool CCouponMgrIsEnableGetCoupon10_wrapper(struct CCouponMgr* _this)
        {
           return CCouponMgrIsEnableGetCoupon10_user(_this, CCouponMgrIsEnableGetCoupon10_next);
        };
        void CCouponMgrLoadData12_wrapper(struct CCouponMgr* _this, unsigned int dwAccSerial, struct _PCBANG_PLAY_TIME* pkInfo)
        {
           CCouponMgrLoadData12_user(_this, dwAccSerial, pkInfo, CCouponMgrLoadData12_next);
        };
        void CCouponMgrLogOut14_wrapper(struct CCouponMgr* _this, bool bForceClose)
        {
           CCouponMgrLogOut14_user(_this, bForceClose, CCouponMgrLogOut14_next);
        };
        void CCouponMgrLoop16_wrapper(struct CCouponMgr* _this, uint16_t wIdx)
        {
           CCouponMgrLoop16_user(_this, wIdx, CCouponMgrLoop16_next);
        };
        void CCouponMgrReceivePrimiumCoupon18_wrapper(struct CCouponMgr* _this, uint16_t wIdx)
        {
           CCouponMgrReceivePrimiumCoupon18_user(_this, wIdx, CCouponMgrReceivePrimiumCoupon18_next);
        };
        void CCouponMgrSendMsg_CouponEnsure20_wrapper(struct CCouponMgr* _this, uint16_t wIdx, char byCouponTime)
        {
           CCouponMgrSendMsg_CouponEnsure20_user(_this, wIdx, byCouponTime, CCouponMgrSendMsg_CouponEnsure20_next);
        };
        void CCouponMgrSendMsg_CouponError22_wrapper(struct CCouponMgr* _this, uint16_t wIdx, char byRet)
        {
           CCouponMgrSendMsg_CouponError22_user(_this, wIdx, byRet, CCouponMgrSendMsg_CouponError22_next);
        };
        void CCouponMgrSendMsg_CouponLendResult24_wrapper(struct CCouponMgr* _this, uint16_t wIndx, struct _STORAGE_LIST::_db_con* pCoupon)
        {
           CCouponMgrSendMsg_CouponLendResult24_user(_this, wIndx, pCoupon, CCouponMgrSendMsg_CouponLendResult24_next);
        };
        void CCouponMgrSendMsg_InPcBangTime26_wrapper(struct CCouponMgr* _this, uint16_t wIdx)
        {
           CCouponMgrSendMsg_InPcBangTime26_user(_this, wIdx, CCouponMgrSendMsg_InPcBangTime26_next);
        };
        void CCouponMgrSendMsg_RemainCouponInform28_wrapper(struct CCouponMgr* _this, uint16_t wIdx, char byRemainCoupon)
        {
           CCouponMgrSendMsg_RemainCouponInform28_user(_this, wIdx, byRemainCoupon, CCouponMgrSendMsg_RemainCouponInform28_next);
        };
        bool CCouponMgrSetCheetContTime30_wrapper(struct CCouponMgr* _this, uint16_t wIdx, int nMin)
        {
           return CCouponMgrSetCheetContTime30_user(_this, wIdx, nMin, CCouponMgrSetCheetContTime30_next);
        };
        
        void CCouponMgrdtor_CCouponMgr32_wrapper(struct CCouponMgr* _this)
        {
           CCouponMgrdtor_CCouponMgr32_user(_this, CCouponMgrdtor_CCouponMgr32_next);
        };
        
        ::std::array<hook_record, 16> CCouponMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x140074790L,
                (LPVOID *)&CCouponMgrctor_CCouponMgr2_user,
                (LPVOID *)&CCouponMgrctor_CCouponMgr2_next,
                (LPVOID)cast_pointer_function(CCouponMgrctor_CCouponMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)())&CCouponMgr::ctor_CCouponMgr)
            },
            _hook_record {
                (LPVOID)0x1403fdf70L,
                (LPVOID *)&CCouponMgrGetCouponInfo4_user,
                (LPVOID *)&CCouponMgrGetCouponInfo4_next,
                (LPVOID)cast_pointer_function(CCouponMgrGetCouponInfo4_wrapper),
                (LPVOID)cast_pointer_function((struct CouponInfo*(CCouponMgr::*)(char))&CCouponMgr::GetCouponInfo)
            },
            _hook_record {
                (LPVOID)0x1403fd6c0L,
                (LPVOID *)&CCouponMgrInit6_user,
                (LPVOID *)&CCouponMgrInit6_next,
                (LPVOID)cast_pointer_function(CCouponMgrInit6_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)(uint16_t))&CCouponMgr::Init)
            },
            _hook_record {
                (LPVOID)0x1403fd620L,
                (LPVOID *)&CCouponMgrInitCuponInfo8_user,
                (LPVOID *)&CCouponMgrInitCuponInfo8_next,
                (LPVOID)cast_pointer_function(CCouponMgrInitCuponInfo8_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)())&CCouponMgr::InitCuponInfo)
            },
            _hook_record {
                (LPVOID)0x1403fd7e0L,
                (LPVOID *)&CCouponMgrIsEnableGetCoupon10_user,
                (LPVOID *)&CCouponMgrIsEnableGetCoupon10_next,
                (LPVOID)cast_pointer_function(CCouponMgrIsEnableGetCoupon10_wrapper),
                (LPVOID)cast_pointer_function((bool(CCouponMgr::*)())&CCouponMgr::IsEnableGetCoupon)
            },
            _hook_record {
                (LPVOID)0x1403fd340L,
                (LPVOID *)&CCouponMgrLoadData12_user,
                (LPVOID *)&CCouponMgrLoadData12_next,
                (LPVOID)cast_pointer_function(CCouponMgrLoadData12_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)(unsigned int, struct _PCBANG_PLAY_TIME*))&CCouponMgr::LoadData)
            },
            _hook_record {
                (LPVOID)0x1403fd820L,
                (LPVOID *)&CCouponMgrLogOut14_user,
                (LPVOID *)&CCouponMgrLogOut14_next,
                (LPVOID)cast_pointer_function(CCouponMgrLogOut14_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)(bool))&CCouponMgr::LogOut)
            },
            _hook_record {
                (LPVOID)0x1403fd8e0L,
                (LPVOID *)&CCouponMgrLoop16_user,
                (LPVOID *)&CCouponMgrLoop16_next,
                (LPVOID)cast_pointer_function(CCouponMgrLoop16_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)(uint16_t))&CCouponMgr::Loop)
            },
            _hook_record {
                (LPVOID)0x1403fdbb0L,
                (LPVOID *)&CCouponMgrReceivePrimiumCoupon18_user,
                (LPVOID *)&CCouponMgrReceivePrimiumCoupon18_next,
                (LPVOID)cast_pointer_function(CCouponMgrReceivePrimiumCoupon18_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)(uint16_t))&CCouponMgr::ReceivePrimiumCoupon)
            },
            _hook_record {
                (LPVOID)0x1403fdfb0L,
                (LPVOID *)&CCouponMgrSendMsg_CouponEnsure20_user,
                (LPVOID *)&CCouponMgrSendMsg_CouponEnsure20_next,
                (LPVOID)cast_pointer_function(CCouponMgrSendMsg_CouponEnsure20_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)(uint16_t, char))&CCouponMgr::SendMsg_CouponEnsure)
            },
            _hook_record {
                (LPVOID)0x1403fe110L,
                (LPVOID *)&CCouponMgrSendMsg_CouponError22_user,
                (LPVOID *)&CCouponMgrSendMsg_CouponError22_next,
                (LPVOID)cast_pointer_function(CCouponMgrSendMsg_CouponError22_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)(uint16_t, char))&CCouponMgr::SendMsg_CouponError)
            },
            _hook_record {
                (LPVOID)0x1403fe230L,
                (LPVOID *)&CCouponMgrSendMsg_CouponLendResult24_user,
                (LPVOID *)&CCouponMgrSendMsg_CouponLendResult24_next,
                (LPVOID)cast_pointer_function(CCouponMgrSendMsg_CouponLendResult24_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)(uint16_t, struct _STORAGE_LIST::_db_con*))&CCouponMgr::SendMsg_CouponLendResult)
            },
            _hook_record {
                (LPVOID)0x1403fe040L,
                (LPVOID *)&CCouponMgrSendMsg_InPcBangTime26_user,
                (LPVOID *)&CCouponMgrSendMsg_InPcBangTime26_next,
                (LPVOID)cast_pointer_function(CCouponMgrSendMsg_InPcBangTime26_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)(uint16_t))&CCouponMgr::SendMsg_InPcBangTime)
            },
            _hook_record {
                (LPVOID)0x1403fe1a0L,
                (LPVOID *)&CCouponMgrSendMsg_RemainCouponInform28_user,
                (LPVOID *)&CCouponMgrSendMsg_RemainCouponInform28_next,
                (LPVOID)cast_pointer_function(CCouponMgrSendMsg_RemainCouponInform28_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)(uint16_t, char))&CCouponMgr::SendMsg_RemainCouponInform)
            },
            _hook_record {
                (LPVOID)0x1403fe330L,
                (LPVOID *)&CCouponMgrSetCheetContTime30_user,
                (LPVOID *)&CCouponMgrSetCheetContTime30_next,
                (LPVOID)cast_pointer_function(CCouponMgrSetCheetContTime30_wrapper),
                (LPVOID)cast_pointer_function((bool(CCouponMgr::*)(uint16_t, int))&CCouponMgr::SetCheetContTime)
            },
            _hook_record {
                (LPVOID)0x140074840L,
                (LPVOID *)&CCouponMgrdtor_CCouponMgr32_user,
                (LPVOID *)&CCouponMgrdtor_CCouponMgr32_next,
                (LPVOID)cast_pointer_function(CCouponMgrdtor_CCouponMgr32_wrapper),
                (LPVOID)cast_pointer_function((void(CCouponMgr::*)())&CCouponMgr::dtor_CCouponMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
