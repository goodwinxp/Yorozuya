#include <CReturnGateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CReturnGatector_CReturnGate2_ptr CReturnGatector_CReturnGate2_next(nullptr);
        Info::CReturnGatector_CReturnGate2_clbk CReturnGatector_CReturnGate2_user(nullptr);
        
        Info::CReturnGateClear4_ptr CReturnGateClear4_next(nullptr);
        Info::CReturnGateClear4_clbk CReturnGateClear4_user(nullptr);
        
        Info::CReturnGateClose6_ptr CReturnGateClose6_next(nullptr);
        Info::CReturnGateClose6_clbk CReturnGateClose6_user(nullptr);
        
        Info::CReturnGateEnter8_ptr CReturnGateEnter8_next(nullptr);
        Info::CReturnGateEnter8_clbk CReturnGateEnter8_user(nullptr);
        
        Info::CReturnGateGetIndex10_ptr CReturnGateGetIndex10_next(nullptr);
        Info::CReturnGateGetIndex10_clbk CReturnGateGetIndex10_user(nullptr);
        
        Info::CReturnGateGetInfo12_ptr CReturnGateGetInfo12_next(nullptr);
        Info::CReturnGateGetInfo12_clbk CReturnGateGetInfo12_user(nullptr);
        
        Info::CReturnGateGetOwner14_ptr CReturnGateGetOwner14_next(nullptr);
        Info::CReturnGateGetOwner14_clbk CReturnGateGetOwner14_user(nullptr);
        
        Info::CReturnGateIsClose16_ptr CReturnGateIsClose16_next(nullptr);
        Info::CReturnGateIsClose16_clbk CReturnGateIsClose16_user(nullptr);
        
        Info::CReturnGateIsOpen18_ptr CReturnGateIsOpen18_next(nullptr);
        Info::CReturnGateIsOpen18_clbk CReturnGateIsOpen18_user(nullptr);
        
        Info::CReturnGateIsValidOwner20_ptr CReturnGateIsValidOwner20_next(nullptr);
        Info::CReturnGateIsValidOwner20_clbk CReturnGateIsValidOwner20_user(nullptr);
        
        Info::CReturnGateIsValidPosition22_ptr CReturnGateIsValidPosition22_next(nullptr);
        Info::CReturnGateIsValidPosition22_clbk CReturnGateIsValidPosition22_user(nullptr);
        
        Info::CReturnGateOpen24_ptr CReturnGateOpen24_next(nullptr);
        Info::CReturnGateOpen24_clbk CReturnGateOpen24_user(nullptr);
        
        Info::CReturnGateSendMsg_Create26_ptr CReturnGateSendMsg_Create26_next(nullptr);
        Info::CReturnGateSendMsg_Create26_clbk CReturnGateSendMsg_Create26_user(nullptr);
        
        Info::CReturnGateSendMsg_Destroy28_ptr CReturnGateSendMsg_Destroy28_next(nullptr);
        Info::CReturnGateSendMsg_Destroy28_clbk CReturnGateSendMsg_Destroy28_user(nullptr);
        
        Info::CReturnGateSendMsg_FixPosition30_ptr CReturnGateSendMsg_FixPosition30_next(nullptr);
        Info::CReturnGateSendMsg_FixPosition30_clbk CReturnGateSendMsg_FixPosition30_user(nullptr);
        
        Info::CReturnGateSendMsg_MovePortal32_ptr CReturnGateSendMsg_MovePortal32_next(nullptr);
        Info::CReturnGateSendMsg_MovePortal32_clbk CReturnGateSendMsg_MovePortal32_user(nullptr);
        
        
        Info::CReturnGatedtor_CReturnGate37_ptr CReturnGatedtor_CReturnGate37_next(nullptr);
        Info::CReturnGatedtor_CReturnGate37_clbk CReturnGatedtor_CReturnGate37_user(nullptr);
        
        
        void CReturnGatector_CReturnGate2_wrapper(struct CReturnGate* _this, struct _object_id* pID)
        {
           CReturnGatector_CReturnGate2_user(_this, pID, CReturnGatector_CReturnGate2_next);
        };
        void CReturnGateClear4_wrapper(struct CReturnGate* _this)
        {
           CReturnGateClear4_user(_this, CReturnGateClear4_next);
        };
        void CReturnGateClose6_wrapper(struct CReturnGate* _this)
        {
           CReturnGateClose6_user(_this, CReturnGateClose6_next);
        };
        int CReturnGateEnter8_wrapper(struct CReturnGate* _this, struct CPlayer* pkObj)
        {
           return CReturnGateEnter8_user(_this, pkObj, CReturnGateEnter8_next);
        };
        uint16_t CReturnGateGetIndex10_wrapper(struct CReturnGate* _this)
        {
           return CReturnGateGetIndex10_user(_this, CReturnGateGetIndex10_next);
        };
        void CReturnGateGetInfo12_wrapper(struct CReturnGate* _this, struct _open_return_gate_inform_zocl* Info)
        {
           CReturnGateGetInfo12_user(_this, Info, CReturnGateGetInfo12_next);
        };
        struct CPlayer* CReturnGateGetOwner14_wrapper(struct CReturnGate* _this)
        {
           return CReturnGateGetOwner14_user(_this, CReturnGateGetOwner14_next);
        };
        bool CReturnGateIsClose16_wrapper(struct CReturnGate* _this)
        {
           return CReturnGateIsClose16_user(_this, CReturnGateIsClose16_next);
        };
        bool CReturnGateIsOpen18_wrapper(struct CReturnGate* _this)
        {
           return CReturnGateIsOpen18_user(_this, CReturnGateIsOpen18_next);
        };
        bool CReturnGateIsValidOwner20_wrapper(struct CReturnGate* _this)
        {
           return CReturnGateIsValidOwner20_user(_this, CReturnGateIsValidOwner20_next);
        };
        bool CReturnGateIsValidPosition22_wrapper(struct CReturnGate* _this, float* pfCurPos)
        {
           return CReturnGateIsValidPosition22_user(_this, pfCurPos, CReturnGateIsValidPosition22_next);
        };
        bool CReturnGateOpen24_wrapper(struct CReturnGate* _this, struct CReturnGateCreateParam* pParam)
        {
           return CReturnGateOpen24_user(_this, pParam, CReturnGateOpen24_next);
        };
        void CReturnGateSendMsg_Create26_wrapper(struct CReturnGate* _this)
        {
           CReturnGateSendMsg_Create26_user(_this, CReturnGateSendMsg_Create26_next);
        };
        void CReturnGateSendMsg_Destroy28_wrapper(struct CReturnGate* _this)
        {
           CReturnGateSendMsg_Destroy28_user(_this, CReturnGateSendMsg_Destroy28_next);
        };
        void CReturnGateSendMsg_FixPosition30_wrapper(struct CReturnGate* _this, int n)
        {
           CReturnGateSendMsg_FixPosition30_user(_this, n, CReturnGateSendMsg_FixPosition30_next);
        };
        void CReturnGateSendMsg_MovePortal32_wrapper(struct CReturnGate* _this, struct CPlayer* pkObj)
        {
           CReturnGateSendMsg_MovePortal32_user(_this, pkObj, CReturnGateSendMsg_MovePortal32_next);
        };
        
        void CReturnGatedtor_CReturnGate37_wrapper(struct CReturnGate* _this)
        {
           CReturnGatedtor_CReturnGate37_user(_this, CReturnGatedtor_CReturnGate37_next);
        };
        
        ::std::array<hook_record, 17> CReturnGate_functions = 
        {
            _hook_record {
                (LPVOID)0x1401685c0L,
                (LPVOID *)&CReturnGatector_CReturnGate2_user,
                (LPVOID *)&CReturnGatector_CReturnGate2_next,
                (LPVOID)cast_pointer_function(CReturnGatector_CReturnGate2_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGate::*)(struct _object_id*))&CReturnGate::ctor_CReturnGate)
            },
            _hook_record {
                (LPVOID)0x140168720L,
                (LPVOID *)&CReturnGateClear4_user,
                (LPVOID *)&CReturnGateClear4_next,
                (LPVOID)cast_pointer_function(CReturnGateClear4_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGate::*)())&CReturnGate::Clear)
            },
            _hook_record {
                (LPVOID)0x1401688c0L,
                (LPVOID *)&CReturnGateClose6_user,
                (LPVOID *)&CReturnGateClose6_next,
                (LPVOID)cast_pointer_function(CReturnGateClose6_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGate::*)())&CReturnGate::Close)
            },
            _hook_record {
                (LPVOID)0x140168930L,
                (LPVOID *)&CReturnGateEnter8_user,
                (LPVOID *)&CReturnGateEnter8_next,
                (LPVOID)cast_pointer_function(CReturnGateEnter8_wrapper),
                (LPVOID)cast_pointer_function((int(CReturnGate::*)(struct CPlayer*))&CReturnGate::Enter)
            },
            _hook_record {
                (LPVOID)0x140251520L,
                (LPVOID *)&CReturnGateGetIndex10_user,
                (LPVOID *)&CReturnGateGetIndex10_next,
                (LPVOID)cast_pointer_function(CReturnGateGetIndex10_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CReturnGate::*)())&CReturnGate::GetIndex)
            },
            _hook_record {
                (LPVOID)0x140168b20L,
                (LPVOID *)&CReturnGateGetInfo12_user,
                (LPVOID *)&CReturnGateGetInfo12_next,
                (LPVOID)cast_pointer_function(CReturnGateGetInfo12_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGate::*)(struct _open_return_gate_inform_zocl*))&CReturnGate::GetInfo)
            },
            _hook_record {
                (LPVOID)0x140034aa0L,
                (LPVOID *)&CReturnGateGetOwner14_user,
                (LPVOID *)&CReturnGateGetOwner14_next,
                (LPVOID)cast_pointer_function(CReturnGateGetOwner14_wrapper),
                (LPVOID)cast_pointer_function((struct CPlayer*(CReturnGate::*)())&CReturnGate::GetOwner)
            },
            _hook_record {
                (LPVOID)0x140168aa0L,
                (LPVOID *)&CReturnGateIsClose16_user,
                (LPVOID *)&CReturnGateIsClose16_next,
                (LPVOID)cast_pointer_function(CReturnGateIsClose16_wrapper),
                (LPVOID)cast_pointer_function((bool(CReturnGate::*)())&CReturnGate::IsClose)
            },
            _hook_record {
                (LPVOID)0x140251540L,
                (LPVOID *)&CReturnGateIsOpen18_user,
                (LPVOID *)&CReturnGateIsOpen18_next,
                (LPVOID)cast_pointer_function(CReturnGateIsOpen18_wrapper),
                (LPVOID)cast_pointer_function((bool(CReturnGate::*)())&CReturnGate::IsOpen)
            },
            _hook_record {
                (LPVOID)0x140168a20L,
                (LPVOID *)&CReturnGateIsValidOwner20_user,
                (LPVOID *)&CReturnGateIsValidOwner20_next,
                (LPVOID)cast_pointer_function(CReturnGateIsValidOwner20_wrapper),
                (LPVOID)cast_pointer_function((bool(CReturnGate::*)())&CReturnGate::IsValidOwner)
            },
            _hook_record {
                (LPVOID)0x140168cf0L,
                (LPVOID *)&CReturnGateIsValidPosition22_user,
                (LPVOID *)&CReturnGateIsValidPosition22_next,
                (LPVOID)cast_pointer_function(CReturnGateIsValidPosition22_wrapper),
                (LPVOID)cast_pointer_function((bool(CReturnGate::*)(float*))&CReturnGate::IsValidPosition)
            },
            _hook_record {
                (LPVOID)0x140168760L,
                (LPVOID *)&CReturnGateOpen24_user,
                (LPVOID *)&CReturnGateOpen24_next,
                (LPVOID)cast_pointer_function(CReturnGateOpen24_wrapper),
                (LPVOID)cast_pointer_function((bool(CReturnGate::*)(struct CReturnGateCreateParam*))&CReturnGate::Open)
            },
            _hook_record {
                (LPVOID)0x140168d50L,
                (LPVOID *)&CReturnGateSendMsg_Create26_user,
                (LPVOID *)&CReturnGateSendMsg_Create26_next,
                (LPVOID)cast_pointer_function(CReturnGateSendMsg_Create26_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGate::*)())&CReturnGate::SendMsg_Create)
            },
            _hook_record {
                (LPVOID)0x140168e60L,
                (LPVOID *)&CReturnGateSendMsg_Destroy28_user,
                (LPVOID *)&CReturnGateSendMsg_Destroy28_next,
                (LPVOID)cast_pointer_function(CReturnGateSendMsg_Destroy28_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGate::*)())&CReturnGate::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x140168bd0L,
                (LPVOID *)&CReturnGateSendMsg_FixPosition30_user,
                (LPVOID *)&CReturnGateSendMsg_FixPosition30_next,
                (LPVOID)cast_pointer_function(CReturnGateSendMsg_FixPosition30_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGate::*)(int))&CReturnGate::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x140168ee0L,
                (LPVOID *)&CReturnGateSendMsg_MovePortal32_user,
                (LPVOID *)&CReturnGateSendMsg_MovePortal32_next,
                (LPVOID)cast_pointer_function(CReturnGateSendMsg_MovePortal32_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGate::*)(struct CPlayer*))&CReturnGate::SendMsg_MovePortal)
            },
            _hook_record {
                (LPVOID)0x1401686d0L,
                (LPVOID *)&CReturnGatedtor_CReturnGate37_user,
                (LPVOID *)&CReturnGatedtor_CReturnGate37_next,
                (LPVOID)cast_pointer_function(CReturnGatedtor_CReturnGate37_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGate::*)())&CReturnGate::dtor_CReturnGate)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
