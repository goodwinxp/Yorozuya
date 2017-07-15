#include <GMCallMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::GMCallMgrctor_GMCallMgr2_ptr GMCallMgrctor_GMCallMgr2_next(nullptr);
        Info::GMCallMgrctor_GMCallMgr2_clbk GMCallMgrctor_GMCallMgr2_user(nullptr);
        
        Info::GMCallMgrGetGMRequestDataPtr4_ptr GMCallMgrGetGMRequestDataPtr4_next(nullptr);
        Info::GMCallMgrGetGMRequestDataPtr4_clbk GMCallMgrGetGMRequestDataPtr4_user(nullptr);
        
        Info::GMCallMgrInit6_ptr GMCallMgrInit6_next(nullptr);
        Info::GMCallMgrInit6_clbk GMCallMgrInit6_user(nullptr);
        
        Info::GMCallMgrInitReqBuff8_ptr GMCallMgrInitReqBuff8_next(nullptr);
        Info::GMCallMgrInitReqBuff8_clbk GMCallMgrInitReqBuff8_user(nullptr);
        
        Info::GMCallMgrPopReqEmptNode10_ptr GMCallMgrPopReqEmptNode10_next(nullptr);
        Info::GMCallMgrPopReqEmptNode10_clbk GMCallMgrPopReqEmptNode10_user(nullptr);
        
        Info::GMCallMgrPushReqNode12_ptr GMCallMgrPushReqNode12_next(nullptr);
        Info::GMCallMgrPushReqNode12_clbk GMCallMgrPushReqNode12_user(nullptr);
        
        Info::GMCallMgrRequestAcceptGMCall14_ptr GMCallMgrRequestAcceptGMCall14_next(nullptr);
        Info::GMCallMgrRequestAcceptGMCall14_clbk GMCallMgrRequestAcceptGMCall14_user(nullptr);
        
        Info::GMCallMgrRequestGMCall16_ptr GMCallMgrRequestGMCall16_next(nullptr);
        Info::GMCallMgrRequestGMCall16_clbk GMCallMgrRequestGMCall16_user(nullptr);
        
        Info::GMCallMgrRequestGMList18_ptr GMCallMgrRequestGMList18_next(nullptr);
        Info::GMCallMgrRequestGMList18_clbk GMCallMgrRequestGMList18_user(nullptr);
        
        Info::GMCallMgrSendResponseAcceptResult20_ptr GMCallMgrSendResponseAcceptResult20_next(nullptr);
        Info::GMCallMgrSendResponseAcceptResult20_clbk GMCallMgrSendResponseAcceptResult20_user(nullptr);
        
        Info::GMCallMgrSendResponseGMCall22_ptr GMCallMgrSendResponseGMCall22_next(nullptr);
        Info::GMCallMgrSendResponseGMCall22_clbk GMCallMgrSendResponseGMCall22_user(nullptr);
        
        Info::GMCallMgrSendResponseGMList24_ptr GMCallMgrSendResponseGMList24_next(nullptr);
        Info::GMCallMgrSendResponseGMList24_clbk GMCallMgrSendResponseGMList24_user(nullptr);
        
        
        Info::GMCallMgrdtor_GMCallMgr29_ptr GMCallMgrdtor_GMCallMgr29_next(nullptr);
        Info::GMCallMgrdtor_GMCallMgr29_clbk GMCallMgrdtor_GMCallMgr29_user(nullptr);
        
        
        void GMCallMgrctor_GMCallMgr2_wrapper(struct GMCallMgr* _this)
        {
           GMCallMgrctor_GMCallMgr2_user(_this, GMCallMgrctor_GMCallMgr2_next);
        };
        struct GMRequestData* GMCallMgrGetGMRequestDataPtr4_wrapper(struct GMCallMgr* _this, struct CPlayer* pOne)
        {
           return GMCallMgrGetGMRequestDataPtr4_user(_this, pOne, GMCallMgrGetGMRequestDataPtr4_next);
        };
        void GMCallMgrInit6_wrapper(struct GMCallMgr* _this)
        {
           GMCallMgrInit6_user(_this, GMCallMgrInit6_next);
        };
        void GMCallMgrInitReqBuff8_wrapper(struct GMCallMgr* _this)
        {
           GMCallMgrInitReqBuff8_user(_this, GMCallMgrInitReqBuff8_next);
        };
        struct GMRequestData* GMCallMgrPopReqEmptNode10_wrapper(struct GMCallMgr* _this)
        {
           return GMCallMgrPopReqEmptNode10_user(_this, GMCallMgrPopReqEmptNode10_next);
        };
        void GMCallMgrPushReqNode12_wrapper(struct GMCallMgr* _this, struct GMRequestData* pInst)
        {
           GMCallMgrPushReqNode12_user(_this, pInst, GMCallMgrPushReqNode12_next);
        };
        bool GMCallMgrRequestAcceptGMCall14_wrapper(struct GMCallMgr* _this, struct CPlayer* pOne, unsigned int dwUserSerial)
        {
           return GMCallMgrRequestAcceptGMCall14_user(_this, pOne, dwUserSerial, GMCallMgrRequestAcceptGMCall14_next);
        };
        bool GMCallMgrRequestGMCall16_wrapper(struct GMCallMgr* _this, struct CPlayer* pOne, int bCall)
        {
           return GMCallMgrRequestGMCall16_user(_this, pOne, bCall, GMCallMgrRequestGMCall16_next);
        };
        bool GMCallMgrRequestGMList18_wrapper(struct GMCallMgr* _this, struct CPlayer* pOne, int nCurrPageIndex)
        {
           return GMCallMgrRequestGMList18_user(_this, pOne, nCurrPageIndex, GMCallMgrRequestGMList18_next);
        };
        void GMCallMgrSendResponseAcceptResult20_wrapper(struct GMCallMgr* _this, struct CPlayer* pOneGM, struct CPlayer* pOneUser, int nErrorCode)
        {
           GMCallMgrSendResponseAcceptResult20_user(_this, pOneGM, pOneUser, nErrorCode, GMCallMgrSendResponseAcceptResult20_next);
        };
        bool GMCallMgrSendResponseGMCall22_wrapper(struct GMCallMgr* _this, struct CPlayer* pOne, int bCallState)
        {
           return GMCallMgrSendResponseGMCall22_user(_this, pOne, bCallState, GMCallMgrSendResponseGMCall22_next);
        };
        bool GMCallMgrSendResponseGMList24_wrapper(struct GMCallMgr* _this, struct CPlayer* pOne, int nCurrPageIndex)
        {
           return GMCallMgrSendResponseGMList24_user(_this, pOne, nCurrPageIndex, GMCallMgrSendResponseGMList24_next);
        };
        
        void GMCallMgrdtor_GMCallMgr29_wrapper(struct GMCallMgr* _this)
        {
           GMCallMgrdtor_GMCallMgr29_user(_this, GMCallMgrdtor_GMCallMgr29_next);
        };
        
        ::std::array<hook_record, 13> GMCallMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x1402aa0b0L,
                (LPVOID *)&GMCallMgrctor_GMCallMgr2_user,
                (LPVOID *)&GMCallMgrctor_GMCallMgr2_next,
                (LPVOID)cast_pointer_function(GMCallMgrctor_GMCallMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(GMCallMgr::*)())&GMCallMgr::ctor_GMCallMgr)
            },
            _hook_record {
                (LPVOID)0x1402aa5a0L,
                (LPVOID *)&GMCallMgrGetGMRequestDataPtr4_user,
                (LPVOID *)&GMCallMgrGetGMRequestDataPtr4_next,
                (LPVOID)cast_pointer_function(GMCallMgrGetGMRequestDataPtr4_wrapper),
                (LPVOID)cast_pointer_function((struct GMRequestData*(GMCallMgr::*)(struct CPlayer*))&GMCallMgr::GetGMRequestDataPtr)
            },
            _hook_record {
                (LPVOID)0x1402aa300L,
                (LPVOID *)&GMCallMgrInit6_user,
                (LPVOID *)&GMCallMgrInit6_next,
                (LPVOID)cast_pointer_function(GMCallMgrInit6_wrapper),
                (LPVOID)cast_pointer_function((void(GMCallMgr::*)())&GMCallMgr::Init)
            },
            _hook_record {
                (LPVOID)0x1402aa340L,
                (LPVOID *)&GMCallMgrInitReqBuff8_user,
                (LPVOID *)&GMCallMgrInitReqBuff8_next,
                (LPVOID)cast_pointer_function(GMCallMgrInitReqBuff8_wrapper),
                (LPVOID)cast_pointer_function((void(GMCallMgr::*)())&GMCallMgr::InitReqBuff)
            },
            _hook_record {
                (LPVOID)0x1402aa3e0L,
                (LPVOID *)&GMCallMgrPopReqEmptNode10_user,
                (LPVOID *)&GMCallMgrPopReqEmptNode10_next,
                (LPVOID)cast_pointer_function(GMCallMgrPopReqEmptNode10_wrapper),
                (LPVOID)cast_pointer_function((struct GMRequestData*(GMCallMgr::*)())&GMCallMgr::PopReqEmptNode)
            },
            _hook_record {
                (LPVOID)0x1402aa4f0L,
                (LPVOID *)&GMCallMgrPushReqNode12_user,
                (LPVOID *)&GMCallMgrPushReqNode12_next,
                (LPVOID)cast_pointer_function(GMCallMgrPushReqNode12_wrapper),
                (LPVOID)cast_pointer_function((void(GMCallMgr::*)(struct GMRequestData*))&GMCallMgr::PushReqNode)
            },
            _hook_record {
                (LPVOID)0x1402aa810L,
                (LPVOID *)&GMCallMgrRequestAcceptGMCall14_user,
                (LPVOID *)&GMCallMgrRequestAcceptGMCall14_next,
                (LPVOID)cast_pointer_function(GMCallMgrRequestAcceptGMCall14_wrapper),
                (LPVOID)cast_pointer_function((bool(GMCallMgr::*)(struct CPlayer*, unsigned int))&GMCallMgr::RequestAcceptGMCall)
            },
            _hook_record {
                (LPVOID)0x1402aa6a0L,
                (LPVOID *)&GMCallMgrRequestGMCall16_user,
                (LPVOID *)&GMCallMgrRequestGMCall16_next,
                (LPVOID)cast_pointer_function(GMCallMgrRequestGMCall16_wrapper),
                (LPVOID)cast_pointer_function((bool(GMCallMgr::*)(struct CPlayer*, int))&GMCallMgr::RequestGMCall)
            },
            _hook_record {
                (LPVOID)0x1402aa7a0L,
                (LPVOID *)&GMCallMgrRequestGMList18_user,
                (LPVOID *)&GMCallMgrRequestGMList18_next,
                (LPVOID)cast_pointer_function(GMCallMgrRequestGMList18_wrapper),
                (LPVOID)cast_pointer_function((bool(GMCallMgr::*)(struct CPlayer*, int))&GMCallMgr::RequestGMList)
            },
            _hook_record {
                (LPVOID)0x1402aae40L,
                (LPVOID *)&GMCallMgrSendResponseAcceptResult20_user,
                (LPVOID *)&GMCallMgrSendResponseAcceptResult20_next,
                (LPVOID)cast_pointer_function(GMCallMgrSendResponseAcceptResult20_wrapper),
                (LPVOID)cast_pointer_function((void(GMCallMgr::*)(struct CPlayer*, struct CPlayer*, int))&GMCallMgr::SendResponseAcceptResult)
            },
            _hook_record {
                (LPVOID)0x1402aaa60L,
                (LPVOID *)&GMCallMgrSendResponseGMCall22_user,
                (LPVOID *)&GMCallMgrSendResponseGMCall22_next,
                (LPVOID)cast_pointer_function(GMCallMgrSendResponseGMCall22_wrapper),
                (LPVOID)cast_pointer_function((bool(GMCallMgr::*)(struct CPlayer*, int))&GMCallMgr::SendResponseGMCall)
            },
            _hook_record {
                (LPVOID)0x1402aab10L,
                (LPVOID *)&GMCallMgrSendResponseGMList24_user,
                (LPVOID *)&GMCallMgrSendResponseGMList24_next,
                (LPVOID)cast_pointer_function(GMCallMgrSendResponseGMList24_wrapper),
                (LPVOID)cast_pointer_function((bool(GMCallMgr::*)(struct CPlayer*, int))&GMCallMgr::SendResponseGMList)
            },
            _hook_record {
                (LPVOID)0x1402aa200L,
                (LPVOID *)&GMCallMgrdtor_GMCallMgr29_user,
                (LPVOID *)&GMCallMgrdtor_GMCallMgr29_next,
                (LPVOID)cast_pointer_function(GMCallMgrdtor_GMCallMgr29_wrapper),
                (LPVOID)cast_pointer_function((void(GMCallMgr::*)())&GMCallMgr::dtor_GMCallMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
