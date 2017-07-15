#include <CEnglandBillingMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CEnglandBillingMgrctor_CEnglandBillingMgr2_ptr CEnglandBillingMgrctor_CEnglandBillingMgr2_next(nullptr);
        Info::CEnglandBillingMgrctor_CEnglandBillingMgr2_clbk CEnglandBillingMgrctor_CEnglandBillingMgr2_user(nullptr);
        
        Info::CEnglandBillingMgrCallFunc_Item_Buy4_ptr CEnglandBillingMgrCallFunc_Item_Buy4_next(nullptr);
        Info::CEnglandBillingMgrCallFunc_Item_Buy4_clbk CEnglandBillingMgrCallFunc_Item_Buy4_user(nullptr);
        
        Info::CEnglandBillingMgrCallFunc_RFOnline_Auth6_ptr CEnglandBillingMgrCallFunc_RFOnline_Auth6_next(nullptr);
        Info::CEnglandBillingMgrCallFunc_RFOnline_Auth6_clbk CEnglandBillingMgrCallFunc_RFOnline_Auth6_user(nullptr);
        
        Info::CEnglandBillingMgrFree8_ptr CEnglandBillingMgrFree8_next(nullptr);
        Info::CEnglandBillingMgrFree8_clbk CEnglandBillingMgrFree8_user(nullptr);
        
        Info::CEnglandBillingMgrMakeConnectionThread10_ptr CEnglandBillingMgrMakeConnectionThread10_next(nullptr);
        Info::CEnglandBillingMgrMakeConnectionThread10_clbk CEnglandBillingMgrMakeConnectionThread10_user(nullptr);
        
        Info::CEnglandBillingMgrSetPoolPointer12_ptr CEnglandBillingMgrSetPoolPointer12_next(nullptr);
        Info::CEnglandBillingMgrSetPoolPointer12_clbk CEnglandBillingMgrSetPoolPointer12_user(nullptr);
        
        
        Info::CEnglandBillingMgrdtor_CEnglandBillingMgr14_ptr CEnglandBillingMgrdtor_CEnglandBillingMgr14_next(nullptr);
        Info::CEnglandBillingMgrdtor_CEnglandBillingMgr14_clbk CEnglandBillingMgrdtor_CEnglandBillingMgr14_user(nullptr);
        
        
        void CEnglandBillingMgrctor_CEnglandBillingMgr2_wrapper(struct CEnglandBillingMgr* _this)
        {
           CEnglandBillingMgrctor_CEnglandBillingMgr2_user(_this, CEnglandBillingMgrctor_CEnglandBillingMgr2_next);
        };
        int CEnglandBillingMgrCallFunc_Item_Buy4_wrapper(struct CEnglandBillingMgr* _this, struct _param_cash_update* rParam, int n, int nIdx)
        {
           return CEnglandBillingMgrCallFunc_Item_Buy4_user(_this, rParam, n, nIdx, CEnglandBillingMgrCallFunc_Item_Buy4_next);
        };
        int CEnglandBillingMgrCallFunc_RFOnline_Auth6_wrapper(struct CEnglandBillingMgr* _this, struct _param_cash_select* rParam, int nIdx)
        {
           return CEnglandBillingMgrCallFunc_RFOnline_Auth6_user(_this, rParam, nIdx, CEnglandBillingMgrCallFunc_RFOnline_Auth6_next);
        };
        bool CEnglandBillingMgrFree8_wrapper(struct CEnglandBillingMgr* _this)
        {
           return CEnglandBillingMgrFree8_user(_this, CEnglandBillingMgrFree8_next);
        };
        bool CEnglandBillingMgrMakeConnectionThread10_wrapper(struct CEnglandBillingMgr* _this)
        {
           return CEnglandBillingMgrMakeConnectionThread10_user(_this, CEnglandBillingMgrMakeConnectionThread10_next);
        };
        void CEnglandBillingMgrSetPoolPointer12_wrapper(struct CEnglandBillingMgr* _this, struct TaskPool* lpPointer)
        {
           CEnglandBillingMgrSetPoolPointer12_user(_this, lpPointer, CEnglandBillingMgrSetPoolPointer12_next);
        };
        
        void CEnglandBillingMgrdtor_CEnglandBillingMgr14_wrapper(struct CEnglandBillingMgr* _this)
        {
           CEnglandBillingMgrdtor_CEnglandBillingMgr14_user(_this, CEnglandBillingMgrdtor_CEnglandBillingMgr14_next);
        };
        
        ::std::array<hook_record, 7> CEnglandBillingMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x1403196b0L,
                (LPVOID *)&CEnglandBillingMgrctor_CEnglandBillingMgr2_user,
                (LPVOID *)&CEnglandBillingMgrctor_CEnglandBillingMgr2_next,
                (LPVOID)cast_pointer_function(CEnglandBillingMgrctor_CEnglandBillingMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(CEnglandBillingMgr::*)())&CEnglandBillingMgr::ctor_CEnglandBillingMgr)
            },
            _hook_record {
                (LPVOID)0x140319c80L,
                (LPVOID *)&CEnglandBillingMgrCallFunc_Item_Buy4_user,
                (LPVOID *)&CEnglandBillingMgrCallFunc_Item_Buy4_next,
                (LPVOID)cast_pointer_function(CEnglandBillingMgrCallFunc_Item_Buy4_wrapper),
                (LPVOID)cast_pointer_function((int(CEnglandBillingMgr::*)(struct _param_cash_update*, int, int))&CEnglandBillingMgr::CallFunc_Item_Buy)
            },
            _hook_record {
                (LPVOID)0x1403198f0L,
                (LPVOID *)&CEnglandBillingMgrCallFunc_RFOnline_Auth6_user,
                (LPVOID *)&CEnglandBillingMgrCallFunc_RFOnline_Auth6_next,
                (LPVOID)cast_pointer_function(CEnglandBillingMgrCallFunc_RFOnline_Auth6_wrapper),
                (LPVOID)cast_pointer_function((int(CEnglandBillingMgr::*)(struct _param_cash_select*, int))&CEnglandBillingMgr::CallFunc_RFOnline_Auth)
            },
            _hook_record {
                (LPVOID)0x140319730L,
                (LPVOID *)&CEnglandBillingMgrFree8_user,
                (LPVOID *)&CEnglandBillingMgrFree8_next,
                (LPVOID)cast_pointer_function(CEnglandBillingMgrFree8_wrapper),
                (LPVOID)cast_pointer_function((bool(CEnglandBillingMgr::*)())&CEnglandBillingMgr::Free)
            },
            _hook_record {
                (LPVOID)0x1403197b0L,
                (LPVOID *)&CEnglandBillingMgrMakeConnectionThread10_user,
                (LPVOID *)&CEnglandBillingMgrMakeConnectionThread10_next,
                (LPVOID)cast_pointer_function(CEnglandBillingMgrMakeConnectionThread10_wrapper),
                (LPVOID)cast_pointer_function((bool(CEnglandBillingMgr::*)())&CEnglandBillingMgr::MakeConnectionThread)
            },
            _hook_record {
                (LPVOID)0x140319790L,
                (LPVOID *)&CEnglandBillingMgrSetPoolPointer12_user,
                (LPVOID *)&CEnglandBillingMgrSetPoolPointer12_next,
                (LPVOID)cast_pointer_function(CEnglandBillingMgrSetPoolPointer12_wrapper),
                (LPVOID)cast_pointer_function((void(CEnglandBillingMgr::*)(struct TaskPool*))&CEnglandBillingMgr::SetPoolPointer)
            },
            _hook_record {
                (LPVOID)0x1403196f0L,
                (LPVOID *)&CEnglandBillingMgrdtor_CEnglandBillingMgr14_user,
                (LPVOID *)&CEnglandBillingMgrdtor_CEnglandBillingMgr14_next,
                (LPVOID)cast_pointer_function(CEnglandBillingMgrdtor_CEnglandBillingMgr14_wrapper),
                (LPVOID)cast_pointer_function((void(CEnglandBillingMgr::*)())&CEnglandBillingMgr::dtor_CEnglandBillingMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
