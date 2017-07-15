#include <CReturnGateControllerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CReturnGateControllerctor_CReturnGateController2_ptr CReturnGateControllerctor_CReturnGateController2_next(nullptr);
        Info::CReturnGateControllerctor_CReturnGateController2_clbk CReturnGateControllerctor_CReturnGateController2_user(nullptr);
        
        Info::CReturnGateControllerCleanUp4_ptr CReturnGateControllerCleanUp4_next(nullptr);
        Info::CReturnGateControllerCleanUp4_clbk CReturnGateControllerCleanUp4_user(nullptr);
        
        Info::CReturnGateControllerClose6_ptr CReturnGateControllerClose6_next(nullptr);
        Info::CReturnGateControllerClose6_clbk CReturnGateControllerClose6_user(nullptr);
        
        Info::CReturnGateControllerDestroy8_ptr CReturnGateControllerDestroy8_next(nullptr);
        Info::CReturnGateControllerDestroy8_clbk CReturnGateControllerDestroy8_user(nullptr);
        
        Info::CReturnGateControllerEnter10_ptr CReturnGateControllerEnter10_next(nullptr);
        Info::CReturnGateControllerEnter10_clbk CReturnGateControllerEnter10_user(nullptr);
        
        Info::CReturnGateControllerGetEmpty12_ptr CReturnGateControllerGetEmpty12_next(nullptr);
        Info::CReturnGateControllerGetEmpty12_clbk CReturnGateControllerGetEmpty12_user(nullptr);
        
        Info::CReturnGateControllerGetGate14_ptr CReturnGateControllerGetGate14_next(nullptr);
        Info::CReturnGateControllerGetGate14_clbk CReturnGateControllerGetGate14_user(nullptr);
        
        Info::CReturnGateControllerInit16_ptr CReturnGateControllerInit16_next(nullptr);
        Info::CReturnGateControllerInit16_clbk CReturnGateControllerInit16_user(nullptr);
        
        Info::CReturnGateControllerInstance18_ptr CReturnGateControllerInstance18_next(nullptr);
        Info::CReturnGateControllerInstance18_clbk CReturnGateControllerInstance18_user(nullptr);
        
        Info::CReturnGateControllerIsExistOwner20_ptr CReturnGateControllerIsExistOwner20_next(nullptr);
        Info::CReturnGateControllerIsExistOwner20_clbk CReturnGateControllerIsExistOwner20_user(nullptr);
        
        Info::CReturnGateControllerOnLoop22_ptr CReturnGateControllerOnLoop22_next(nullptr);
        Info::CReturnGateControllerOnLoop22_clbk CReturnGateControllerOnLoop22_user(nullptr);
        
        Info::CReturnGateControllerOpen24_ptr CReturnGateControllerOpen24_next(nullptr);
        Info::CReturnGateControllerOpen24_clbk CReturnGateControllerOpen24_user(nullptr);
        
        Info::CReturnGateControllerProcessEnter26_ptr CReturnGateControllerProcessEnter26_next(nullptr);
        Info::CReturnGateControllerProcessEnter26_clbk CReturnGateControllerProcessEnter26_user(nullptr);
        
        Info::CReturnGateControllerSendEnterResult28_ptr CReturnGateControllerSendEnterResult28_next(nullptr);
        Info::CReturnGateControllerSendEnterResult28_clbk CReturnGateControllerSendEnterResult28_user(nullptr);
        
        Info::CReturnGateControllerUpdateClose30_ptr CReturnGateControllerUpdateClose30_next(nullptr);
        Info::CReturnGateControllerUpdateClose30_clbk CReturnGateControllerUpdateClose30_user(nullptr);
        
        
        Info::CReturnGateControllerdtor_CReturnGateController34_ptr CReturnGateControllerdtor_CReturnGateController34_next(nullptr);
        Info::CReturnGateControllerdtor_CReturnGateController34_clbk CReturnGateControllerdtor_CReturnGateController34_user(nullptr);
        
        
        void CReturnGateControllerctor_CReturnGateController2_wrapper(struct CReturnGateController* _this)
        {
           CReturnGateControllerctor_CReturnGateController2_user(_this, CReturnGateControllerctor_CReturnGateController2_next);
        };
        void CReturnGateControllerCleanUp4_wrapper(struct CReturnGateController* _this)
        {
           CReturnGateControllerCleanUp4_user(_this, CReturnGateControllerCleanUp4_next);
        };
        void CReturnGateControllerClose6_wrapper(struct CReturnGateController* _this, struct CReturnGate* pkGate)
        {
           CReturnGateControllerClose6_user(_this, pkGate, CReturnGateControllerClose6_next);
        };
        void CReturnGateControllerDestroy8_wrapper()
        {
           CReturnGateControllerDestroy8_user(CReturnGateControllerDestroy8_next);
        };
        bool CReturnGateControllerEnter10_wrapper(struct CReturnGateController* _this, unsigned int uiGateInx, struct CPlayer* pkObj)
        {
           return CReturnGateControllerEnter10_user(_this, uiGateInx, pkObj, CReturnGateControllerEnter10_next);
        };
        struct CReturnGate* CReturnGateControllerGetEmpty12_wrapper(struct CReturnGateController* _this)
        {
           return CReturnGateControllerGetEmpty12_user(_this, CReturnGateControllerGetEmpty12_next);
        };
        struct CReturnGate* CReturnGateControllerGetGate14_wrapper(struct CReturnGateController* _this, unsigned int uiInx)
        {
           return CReturnGateControllerGetGate14_user(_this, uiInx, CReturnGateControllerGetGate14_next);
        };
        bool CReturnGateControllerInit16_wrapper(struct CReturnGateController* _this, unsigned int uiSize)
        {
           return CReturnGateControllerInit16_user(_this, uiSize, CReturnGateControllerInit16_next);
        };
        struct CReturnGateController* CReturnGateControllerInstance18_wrapper()
        {
           return CReturnGateControllerInstance18_user(CReturnGateControllerInstance18_next);
        };
        bool CReturnGateControllerIsExistOwner20_wrapper(struct CReturnGateController* _this, struct CPlayer* pkObj)
        {
           return CReturnGateControllerIsExistOwner20_user(_this, pkObj, CReturnGateControllerIsExistOwner20_next);
        };
        void CReturnGateControllerOnLoop22_wrapper(struct CReturnGateController* _this)
        {
           CReturnGateControllerOnLoop22_user(_this, CReturnGateControllerOnLoop22_next);
        };
        bool CReturnGateControllerOpen24_wrapper(struct CReturnGateController* _this, struct CPlayer* pkOwner)
        {
           return CReturnGateControllerOpen24_user(_this, pkOwner, CReturnGateControllerOpen24_next);
        };
        int CReturnGateControllerProcessEnter26_wrapper(struct CReturnGateController* _this, unsigned int uiGateInx, struct CPlayer* pkObj)
        {
           return CReturnGateControllerProcessEnter26_user(_this, uiGateInx, pkObj, CReturnGateControllerProcessEnter26_next);
        };
        void CReturnGateControllerSendEnterResult28_wrapper(struct CReturnGateController* _this, int iResult, struct CPlayer* pkObj)
        {
           CReturnGateControllerSendEnterResult28_user(_this, iResult, pkObj, CReturnGateControllerSendEnterResult28_next);
        };
        void CReturnGateControllerUpdateClose30_wrapper(struct CReturnGateController* _this)
        {
           CReturnGateControllerUpdateClose30_user(_this, CReturnGateControllerUpdateClose30_next);
        };
        
        void CReturnGateControllerdtor_CReturnGateController34_wrapper(struct CReturnGateController* _this)
        {
           CReturnGateControllerdtor_CReturnGateController34_user(_this, CReturnGateControllerdtor_CReturnGateController34_next);
        };
        
        ::std::array<hook_record, 16> CReturnGateController_functions = 
        {
            _hook_record {
                (LPVOID)0x140250040L,
                (LPVOID *)&CReturnGateControllerctor_CReturnGateController2_user,
                (LPVOID *)&CReturnGateControllerctor_CReturnGateController2_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerctor_CReturnGateController2_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGateController::*)())&CReturnGateController::ctor_CReturnGateController)
            },
            _hook_record {
                (LPVOID)0x1402509d0L,
                (LPVOID *)&CReturnGateControllerCleanUp4_user,
                (LPVOID *)&CReturnGateControllerCleanUp4_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerCleanUp4_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGateController::*)())&CReturnGateController::CleanUp)
            },
            _hook_record {
                (LPVOID)0x140250f70L,
                (LPVOID *)&CReturnGateControllerClose6_user,
                (LPVOID *)&CReturnGateControllerClose6_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerClose6_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGateController::*)(struct CReturnGate*))&CReturnGateController::Close)
            },
            _hook_record {
                (LPVOID)0x1402501a0L,
                (LPVOID *)&CReturnGateControllerDestroy8_user,
                (LPVOID *)&CReturnGateControllerDestroy8_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerDestroy8_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CReturnGateController::Destroy)
            },
            _hook_record {
                (LPVOID)0x1402508b0L,
                (LPVOID *)&CReturnGateControllerEnter10_user,
                (LPVOID *)&CReturnGateControllerEnter10_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerEnter10_wrapper),
                (LPVOID)cast_pointer_function((bool(CReturnGateController::*)(unsigned int, struct CPlayer*))&CReturnGateController::Enter)
            },
            _hook_record {
                (LPVOID)0x140250c30L,
                (LPVOID *)&CReturnGateControllerGetEmpty12_user,
                (LPVOID *)&CReturnGateControllerGetEmpty12_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerGetEmpty12_wrapper),
                (LPVOID)cast_pointer_function((struct CReturnGate*(CReturnGateController::*)())&CReturnGateController::GetEmpty)
            },
            _hook_record {
                (LPVOID)0x140250980L,
                (LPVOID *)&CReturnGateControllerGetGate14_user,
                (LPVOID *)&CReturnGateControllerGetGate14_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerGetGate14_wrapper),
                (LPVOID)cast_pointer_function((struct CReturnGate*(CReturnGateController::*)(unsigned int))&CReturnGateController::GetGate)
            },
            _hook_record {
                (LPVOID)0x140250220L,
                (LPVOID *)&CReturnGateControllerInit16_user,
                (LPVOID *)&CReturnGateControllerInit16_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerInit16_wrapper),
                (LPVOID)cast_pointer_function((bool(CReturnGateController::*)(unsigned int))&CReturnGateController::Init)
            },
            _hook_record {
                (LPVOID)0x1402500e0L,
                (LPVOID *)&CReturnGateControllerInstance18_user,
                (LPVOID *)&CReturnGateControllerInstance18_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerInstance18_wrapper),
                (LPVOID)cast_pointer_function((struct CReturnGateController*(*)())&CReturnGateController::Instance)
            },
            _hook_record {
                (LPVOID)0x140250ce0L,
                (LPVOID *)&CReturnGateControllerIsExistOwner20_user,
                (LPVOID *)&CReturnGateControllerIsExistOwner20_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerIsExistOwner20_wrapper),
                (LPVOID)cast_pointer_function((bool(CReturnGateController::*)(struct CPlayer*))&CReturnGateController::IsExistOwner)
            },
            _hook_record {
                (LPVOID)0x140250920L,
                (LPVOID *)&CReturnGateControllerOnLoop22_user,
                (LPVOID *)&CReturnGateControllerOnLoop22_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerOnLoop22_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGateController::*)())&CReturnGateController::OnLoop)
            },
            _hook_record {
                (LPVOID)0x1402506a0L,
                (LPVOID *)&CReturnGateControllerOpen24_user,
                (LPVOID *)&CReturnGateControllerOpen24_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerOpen24_wrapper),
                (LPVOID)cast_pointer_function((bool(CReturnGateController::*)(struct CPlayer*))&CReturnGateController::Open)
            },
            _hook_record {
                (LPVOID)0x140250dd0L,
                (LPVOID *)&CReturnGateControllerProcessEnter26_user,
                (LPVOID *)&CReturnGateControllerProcessEnter26_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerProcessEnter26_wrapper),
                (LPVOID)cast_pointer_function((int(CReturnGateController::*)(unsigned int, struct CPlayer*))&CReturnGateController::ProcessEnter)
            },
            _hook_record {
                (LPVOID)0x140251000L,
                (LPVOID *)&CReturnGateControllerSendEnterResult28_user,
                (LPVOID *)&CReturnGateControllerSendEnterResult28_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerSendEnterResult28_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGateController::*)(int, struct CPlayer*))&CReturnGateController::SendEnterResult)
            },
            _hook_record {
                (LPVOID)0x140250e90L,
                (LPVOID *)&CReturnGateControllerUpdateClose30_user,
                (LPVOID *)&CReturnGateControllerUpdateClose30_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerUpdateClose30_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGateController::*)())&CReturnGateController::UpdateClose)
            },
            _hook_record {
                (LPVOID)0x1402500a0L,
                (LPVOID *)&CReturnGateControllerdtor_CReturnGateController34_user,
                (LPVOID *)&CReturnGateControllerdtor_CReturnGateController34_next,
                (LPVOID)cast_pointer_function(CReturnGateControllerdtor_CReturnGateController34_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGateController::*)())&CReturnGateController::dtor_CReturnGateController)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
