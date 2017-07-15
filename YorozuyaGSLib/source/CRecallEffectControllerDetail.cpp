#include <CRecallEffectControllerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CRecallEffectControllerctor_CRecallEffectController2_ptr CRecallEffectControllerctor_CRecallEffectController2_next(nullptr);
        Info::CRecallEffectControllerctor_CRecallEffectController2_clbk CRecallEffectControllerctor_CRecallEffectController2_user(nullptr);
        
        Info::CRecallEffectControllerCleanUp4_ptr CRecallEffectControllerCleanUp4_next(nullptr);
        Info::CRecallEffectControllerCleanUp4_clbk CRecallEffectControllerCleanUp4_user(nullptr);
        
        Info::CRecallEffectControllerClose6_ptr CRecallEffectControllerClose6_next(nullptr);
        Info::CRecallEffectControllerClose6_clbk CRecallEffectControllerClose6_user(nullptr);
        
        Info::CRecallEffectControllerDecideRecall8_ptr CRecallEffectControllerDecideRecall8_next(nullptr);
        Info::CRecallEffectControllerDecideRecall8_clbk CRecallEffectControllerDecideRecall8_user(nullptr);
        
        Info::CRecallEffectControllerDestroy10_ptr CRecallEffectControllerDestroy10_next(nullptr);
        Info::CRecallEffectControllerDestroy10_clbk CRecallEffectControllerDestroy10_user(nullptr);
        
        Info::CRecallEffectControllerGetEmpty12_ptr CRecallEffectControllerGetEmpty12_next(nullptr);
        Info::CRecallEffectControllerGetEmpty12_clbk CRecallEffectControllerGetEmpty12_user(nullptr);
        
        Info::CRecallEffectControllerGetResistedRecall14_ptr CRecallEffectControllerGetResistedRecall14_next(nullptr);
        Info::CRecallEffectControllerGetResistedRecall14_clbk CRecallEffectControllerGetResistedRecall14_user(nullptr);
        
        Info::CRecallEffectControllerInit16_ptr CRecallEffectControllerInit16_next(nullptr);
        Info::CRecallEffectControllerInit16_clbk CRecallEffectControllerInit16_user(nullptr);
        
        Info::CRecallEffectControllerInstance18_ptr CRecallEffectControllerInstance18_next(nullptr);
        Info::CRecallEffectControllerInstance18_clbk CRecallEffectControllerInstance18_user(nullptr);
        
        Info::CRecallEffectControllerOnLoop20_ptr CRecallEffectControllerOnLoop20_next(nullptr);
        Info::CRecallEffectControllerOnLoop20_clbk CRecallEffectControllerOnLoop20_user(nullptr);
        
        Info::CRecallEffectControllerProcessRequestRecall22_ptr CRecallEffectControllerProcessRequestRecall22_next(nullptr);
        Info::CRecallEffectControllerProcessRequestRecall22_clbk CRecallEffectControllerProcessRequestRecall22_user(nullptr);
        
        Info::CRecallEffectControllerRequestRecall24_ptr CRecallEffectControllerRequestRecall24_next(nullptr);
        Info::CRecallEffectControllerRequestRecall24_clbk CRecallEffectControllerRequestRecall24_user(nullptr);
        
        Info::CRecallEffectControllerSendDecideRecallErrorResultToDest26_ptr CRecallEffectControllerSendDecideRecallErrorResultToDest26_next(nullptr);
        Info::CRecallEffectControllerSendDecideRecallErrorResultToDest26_clbk CRecallEffectControllerSendDecideRecallErrorResultToDest26_user(nullptr);
        
        Info::CRecallEffectControllerSendRecallReqeustResult28_ptr CRecallEffectControllerSendRecallReqeustResult28_next(nullptr);
        Info::CRecallEffectControllerSendRecallReqeustResult28_clbk CRecallEffectControllerSendRecallReqeustResult28_user(nullptr);
        
        Info::CRecallEffectControllerSendRecallReqeustToDest30_ptr CRecallEffectControllerSendRecallReqeustToDest30_next(nullptr);
        Info::CRecallEffectControllerSendRecallReqeustToDest30_clbk CRecallEffectControllerSendRecallReqeustToDest30_user(nullptr);
        
        Info::CRecallEffectControllerUpdateClose32_ptr CRecallEffectControllerUpdateClose32_next(nullptr);
        Info::CRecallEffectControllerUpdateClose32_clbk CRecallEffectControllerUpdateClose32_user(nullptr);
        
        
        Info::CRecallEffectControllerdtor_CRecallEffectController36_ptr CRecallEffectControllerdtor_CRecallEffectController36_next(nullptr);
        Info::CRecallEffectControllerdtor_CRecallEffectController36_clbk CRecallEffectControllerdtor_CRecallEffectController36_user(nullptr);
        
        
        void CRecallEffectControllerctor_CRecallEffectController2_wrapper(struct CRecallEffectController* _this)
        {
           CRecallEffectControllerctor_CRecallEffectController2_user(_this, CRecallEffectControllerctor_CRecallEffectController2_next);
        };
        void CRecallEffectControllerCleanUp4_wrapper(struct CRecallEffectController* _this)
        {
           CRecallEffectControllerCleanUp4_user(_this, CRecallEffectControllerCleanUp4_next);
        };
        void CRecallEffectControllerClose6_wrapper(struct CRecallEffectController* _this, struct CRecallRequest* pkRequest, bool bDone)
        {
           CRecallEffectControllerClose6_user(_this, pkRequest, bDone, CRecallEffectControllerClose6_next);
        };
        void CRecallEffectControllerDecideRecall8_wrapper(struct CRecallEffectController* _this, uint16_t dwRequestID, char byAgree, struct CPlayer* pkObj)
        {
           CRecallEffectControllerDecideRecall8_user(_this, dwRequestID, byAgree, pkObj, CRecallEffectControllerDecideRecall8_next);
        };
        void CRecallEffectControllerDestroy10_wrapper()
        {
           CRecallEffectControllerDestroy10_user(CRecallEffectControllerDestroy10_next);
        };
        struct CRecallRequest* CRecallEffectControllerGetEmpty12_wrapper(struct CRecallEffectController* _this)
        {
           return CRecallEffectControllerGetEmpty12_user(_this, CRecallEffectControllerGetEmpty12_next);
        };
        char CRecallEffectControllerGetResistedRecall14_wrapper(struct CRecallEffectController* _this, uint16_t wID, struct CRecallRequest** pkRequest)
        {
           return CRecallEffectControllerGetResistedRecall14_user(_this, wID, pkRequest, CRecallEffectControllerGetResistedRecall14_next);
        };
        bool CRecallEffectControllerInit16_wrapper(struct CRecallEffectController* _this, unsigned int uiSize)
        {
           return CRecallEffectControllerInit16_user(_this, uiSize, CRecallEffectControllerInit16_next);
        };
        struct CRecallEffectController* CRecallEffectControllerInstance18_wrapper()
        {
           return CRecallEffectControllerInstance18_user(CRecallEffectControllerInstance18_next);
        };
        void CRecallEffectControllerOnLoop20_wrapper(struct CRecallEffectController* _this)
        {
           CRecallEffectControllerOnLoop20_user(_this, CRecallEffectControllerOnLoop20_next);
        };
        char CRecallEffectControllerProcessRequestRecall22_wrapper(struct CRecallEffectController* _this, struct CPlayer* pkPerformer, struct CCharacter* pkDest, struct CRecallRequest** pkRequest, bool bRecallParty, bool bStone, bool bBattleModeUse)
        {
           return CRecallEffectControllerProcessRequestRecall22_user(_this, pkPerformer, pkDest, pkRequest, bRecallParty, bStone, bBattleModeUse, CRecallEffectControllerProcessRequestRecall22_next);
        };
        bool CRecallEffectControllerRequestRecall24_wrapper(struct CRecallEffectController* _this, struct CPlayer* pkPerformer, struct CCharacter* pkDest, bool bRecallParty, bool bStone, bool bBattleModeUse)
        {
           return CRecallEffectControllerRequestRecall24_user(_this, pkPerformer, pkDest, bRecallParty, bStone, bBattleModeUse, CRecallEffectControllerRequestRecall24_next);
        };
        void CRecallEffectControllerSendDecideRecallErrorResultToDest26_wrapper(struct CRecallEffectController* _this, char byErr, struct CPlayer* pkDest, int nCallerMapCode)
        {
           CRecallEffectControllerSendDecideRecallErrorResultToDest26_user(_this, byErr, pkDest, nCallerMapCode, CRecallEffectControllerSendDecideRecallErrorResultToDest26_next);
        };
        void CRecallEffectControllerSendRecallReqeustResult28_wrapper(struct CRecallEffectController* _this, char byRet, struct CPlayer* pkObj)
        {
           CRecallEffectControllerSendRecallReqeustResult28_user(_this, byRet, pkObj, CRecallEffectControllerSendRecallReqeustResult28_next);
        };
        void CRecallEffectControllerSendRecallReqeustToDest30_wrapper(struct CRecallEffectController* _this, uint16_t wRequestID, struct CPlayer* pkPerformer, struct CPlayer* pkDest)
        {
           CRecallEffectControllerSendRecallReqeustToDest30_user(_this, wRequestID, pkPerformer, pkDest, CRecallEffectControllerSendRecallReqeustToDest30_next);
        };
        void CRecallEffectControllerUpdateClose32_wrapper(struct CRecallEffectController* _this)
        {
           CRecallEffectControllerUpdateClose32_user(_this, CRecallEffectControllerUpdateClose32_next);
        };
        
        void CRecallEffectControllerdtor_CRecallEffectController36_wrapper(struct CRecallEffectController* _this)
        {
           CRecallEffectControllerdtor_CRecallEffectController36_user(_this, CRecallEffectControllerdtor_CRecallEffectController36_next);
        };
        
        ::std::array<hook_record, 17> CRecallEffectController_functions = 
        {
            _hook_record {
                (LPVOID)0x14024dd80L,
                (LPVOID *)&CRecallEffectControllerctor_CRecallEffectController2_user,
                (LPVOID *)&CRecallEffectControllerctor_CRecallEffectController2_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerctor_CRecallEffectController2_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallEffectController::*)())&CRecallEffectController::ctor_CRecallEffectController)
            },
            _hook_record {
                (LPVOID)0x14024eb70L,
                (LPVOID *)&CRecallEffectControllerCleanUp4_user,
                (LPVOID *)&CRecallEffectControllerCleanUp4_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerCleanUp4_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallEffectController::*)())&CRecallEffectController::CleanUp)
            },
            _hook_record {
                (LPVOID)0x14024eea0L,
                (LPVOID *)&CRecallEffectControllerClose6_user,
                (LPVOID *)&CRecallEffectControllerClose6_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerClose6_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallEffectController::*)(struct CRecallRequest*, bool))&CRecallEffectController::Close)
            },
            _hook_record {
                (LPVOID)0x14024e430L,
                (LPVOID *)&CRecallEffectControllerDecideRecall8_user,
                (LPVOID *)&CRecallEffectControllerDecideRecall8_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerDecideRecall8_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallEffectController::*)(uint16_t, char, struct CPlayer*))&CRecallEffectController::DecideRecall)
            },
            _hook_record {
                (LPVOID)0x14024dec0L,
                (LPVOID *)&CRecallEffectControllerDestroy10_user,
                (LPVOID *)&CRecallEffectControllerDestroy10_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerDestroy10_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CRecallEffectController::Destroy)
            },
            _hook_record {
                (LPVOID)0x14024f040L,
                (LPVOID *)&CRecallEffectControllerGetEmpty12_user,
                (LPVOID *)&CRecallEffectControllerGetEmpty12_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerGetEmpty12_wrapper),
                (LPVOID)cast_pointer_function((struct CRecallRequest*(CRecallEffectController::*)())&CRecallEffectController::GetEmpty)
            },
            _hook_record {
                (LPVOID)0x14024f0f0L,
                (LPVOID *)&CRecallEffectControllerGetResistedRecall14_user,
                (LPVOID *)&CRecallEffectControllerGetResistedRecall14_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerGetResistedRecall14_wrapper),
                (LPVOID)cast_pointer_function((char(CRecallEffectController::*)(uint16_t, struct CRecallRequest**))&CRecallEffectController::GetResistedRecall)
            },
            _hook_record {
                (LPVOID)0x14024df40L,
                (LPVOID *)&CRecallEffectControllerInit16_user,
                (LPVOID *)&CRecallEffectControllerInit16_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerInit16_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecallEffectController::*)(unsigned int))&CRecallEffectController::Init)
            },
            _hook_record {
                (LPVOID)0x14024de00L,
                (LPVOID *)&CRecallEffectControllerInstance18_user,
                (LPVOID *)&CRecallEffectControllerInstance18_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerInstance18_wrapper),
                (LPVOID)cast_pointer_function((struct CRecallEffectController*(*)())&CRecallEffectController::Instance)
            },
            _hook_record {
                (LPVOID)0x14024eb10L,
                (LPVOID *)&CRecallEffectControllerOnLoop20_user,
                (LPVOID *)&CRecallEffectControllerOnLoop20_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerOnLoop20_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallEffectController::*)())&CRecallEffectController::OnLoop)
            },
            _hook_record {
                (LPVOID)0x14024ef50L,
                (LPVOID *)&CRecallEffectControllerProcessRequestRecall22_user,
                (LPVOID *)&CRecallEffectControllerProcessRequestRecall22_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerProcessRequestRecall22_wrapper),
                (LPVOID)cast_pointer_function((char(CRecallEffectController::*)(struct CPlayer*, struct CCharacter*, struct CRecallRequest**, bool, bool, bool))&CRecallEffectController::ProcessRequestRecall)
            },
            _hook_record {
                (LPVOID)0x14024e340L,
                (LPVOID *)&CRecallEffectControllerRequestRecall24_user,
                (LPVOID *)&CRecallEffectControllerRequestRecall24_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerRequestRecall24_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecallEffectController::*)(struct CPlayer*, struct CCharacter*, bool, bool, bool))&CRecallEffectController::RequestRecall)
            },
            _hook_record {
                (LPVOID)0x14024f3a0L,
                (LPVOID *)&CRecallEffectControllerSendDecideRecallErrorResultToDest26_user,
                (LPVOID *)&CRecallEffectControllerSendDecideRecallErrorResultToDest26_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerSendDecideRecallErrorResultToDest26_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallEffectController::*)(char, struct CPlayer*, int))&CRecallEffectController::SendDecideRecallErrorResultToDest)
            },
            _hook_record {
                (LPVOID)0x14024f1e0L,
                (LPVOID *)&CRecallEffectControllerSendRecallReqeustResult28_user,
                (LPVOID *)&CRecallEffectControllerSendRecallReqeustResult28_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerSendRecallReqeustResult28_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallEffectController::*)(char, struct CPlayer*))&CRecallEffectController::SendRecallReqeustResult)
            },
            _hook_record {
                (LPVOID)0x14024f2c0L,
                (LPVOID *)&CRecallEffectControllerSendRecallReqeustToDest30_user,
                (LPVOID *)&CRecallEffectControllerSendRecallReqeustToDest30_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerSendRecallReqeustToDest30_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallEffectController::*)(uint16_t, struct CPlayer*, struct CPlayer*))&CRecallEffectController::SendRecallReqeustToDest)
            },
            _hook_record {
                (LPVOID)0x14024edb0L,
                (LPVOID *)&CRecallEffectControllerUpdateClose32_user,
                (LPVOID *)&CRecallEffectControllerUpdateClose32_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerUpdateClose32_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallEffectController::*)())&CRecallEffectController::UpdateClose)
            },
            _hook_record {
                (LPVOID)0x14024ddc0L,
                (LPVOID *)&CRecallEffectControllerdtor_CRecallEffectController36_user,
                (LPVOID *)&CRecallEffectControllerdtor_CRecallEffectController36_next,
                (LPVOID)cast_pointer_function(CRecallEffectControllerdtor_CRecallEffectController36_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallEffectController::*)())&CRecallEffectController::dtor_CRecallEffectController)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
