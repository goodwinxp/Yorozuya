#include <CItemBoxDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CItemBoxctor_CItemBox2_ptr CItemBoxctor_CItemBox2_next(nullptr);
        Info::CItemBoxctor_CItemBox2_clbk CItemBoxctor_CItemBox2_user(nullptr);
        
        Info::CItemBoxCreate4_ptr CItemBoxCreate4_next(nullptr);
        Info::CItemBoxCreate4_clbk CItemBoxCreate4_user(nullptr);
        
        Info::CItemBoxDestroy6_ptr CItemBoxDestroy6_next(nullptr);
        Info::CItemBoxDestroy6_clbk CItemBoxDestroy6_user(nullptr);
        
        Info::CItemBoxInit8_ptr CItemBoxInit8_next(nullptr);
        Info::CItemBoxInit8_clbk CItemBoxInit8_user(nullptr);
        
        Info::CItemBoxIsTakeRight10_ptr CItemBoxIsTakeRight10_next(nullptr);
        Info::CItemBoxIsTakeRight10_clbk CItemBoxIsTakeRight10_user(nullptr);
        
        Info::CItemBoxLoop12_ptr CItemBoxLoop12_next(nullptr);
        Info::CItemBoxLoop12_clbk CItemBoxLoop12_user(nullptr);
        
        Info::CItemBoxSendMsg_Create14_ptr CItemBoxSendMsg_Create14_next(nullptr);
        Info::CItemBoxSendMsg_Create14_clbk CItemBoxSendMsg_Create14_user(nullptr);
        
        Info::CItemBoxSendMsg_Destroy16_ptr CItemBoxSendMsg_Destroy16_next(nullptr);
        Info::CItemBoxSendMsg_Destroy16_clbk CItemBoxSendMsg_Destroy16_user(nullptr);
        
        Info::CItemBoxSendMsg_FixPosition18_ptr CItemBoxSendMsg_FixPosition18_next(nullptr);
        Info::CItemBoxSendMsg_FixPosition18_clbk CItemBoxSendMsg_FixPosition18_user(nullptr);
        
        Info::CItemBoxSendMsg_StateChange20_ptr CItemBoxSendMsg_StateChange20_next(nullptr);
        Info::CItemBoxSendMsg_StateChange20_clbk CItemBoxSendMsg_StateChange20_user(nullptr);
        
        
        Info::CItemBoxdtor_CItemBox26_ptr CItemBoxdtor_CItemBox26_next(nullptr);
        Info::CItemBoxdtor_CItemBox26_clbk CItemBoxdtor_CItemBox26_user(nullptr);
        
        
        void CItemBoxctor_CItemBox2_wrapper(struct CItemBox* _this)
        {
           CItemBoxctor_CItemBox2_user(_this, CItemBoxctor_CItemBox2_next);
        };
        bool CItemBoxCreate4_wrapper(struct CItemBox* _this, struct _itembox_create_setdata* pParam, bool bHide)
        {
           return CItemBoxCreate4_user(_this, pParam, bHide, CItemBoxCreate4_next);
        };
        bool CItemBoxDestroy6_wrapper(struct CItemBox* _this)
        {
           return CItemBoxDestroy6_user(_this, CItemBoxDestroy6_next);
        };
        void CItemBoxInit8_wrapper(struct CItemBox* _this, struct _object_id* pID)
        {
           CItemBoxInit8_user(_this, pID, CItemBoxInit8_next);
        };
        bool CItemBoxIsTakeRight10_wrapper(struct CItemBox* _this, struct CPlayer* pOne)
        {
           return CItemBoxIsTakeRight10_user(_this, pOne, CItemBoxIsTakeRight10_next);
        };
        void CItemBoxLoop12_wrapper(struct CItemBox* _this)
        {
           CItemBoxLoop12_user(_this, CItemBoxLoop12_next);
        };
        void CItemBoxSendMsg_Create14_wrapper(struct CItemBox* _this)
        {
           CItemBoxSendMsg_Create14_user(_this, CItemBoxSendMsg_Create14_next);
        };
        void CItemBoxSendMsg_Destroy16_wrapper(struct CItemBox* _this)
        {
           CItemBoxSendMsg_Destroy16_user(_this, CItemBoxSendMsg_Destroy16_next);
        };
        void CItemBoxSendMsg_FixPosition18_wrapper(struct CItemBox* _this, int n)
        {
           CItemBoxSendMsg_FixPosition18_user(_this, n, CItemBoxSendMsg_FixPosition18_next);
        };
        void CItemBoxSendMsg_StateChange20_wrapper(struct CItemBox* _this)
        {
           CItemBoxSendMsg_StateChange20_user(_this, CItemBoxSendMsg_StateChange20_next);
        };
        
        void CItemBoxdtor_CItemBox26_wrapper(struct CItemBox* _this)
        {
           CItemBoxdtor_CItemBox26_user(_this, CItemBoxdtor_CItemBox26_next);
        };
        
        ::std::array<hook_record, 11> CItemBox_functions = 
        {
            _hook_record {
                (LPVOID)0x1401655f0L,
                (LPVOID *)&CItemBoxctor_CItemBox2_user,
                (LPVOID *)&CItemBoxctor_CItemBox2_next,
                (LPVOID)cast_pointer_function(CItemBoxctor_CItemBox2_wrapper),
                (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::ctor_CItemBox)
            },
            _hook_record {
                (LPVOID)0x140165930L,
                (LPVOID *)&CItemBoxCreate4_user,
                (LPVOID *)&CItemBoxCreate4_next,
                (LPVOID)cast_pointer_function(CItemBoxCreate4_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemBox::*)(struct _itembox_create_setdata*, bool))&CItemBox::Create)
            },
            _hook_record {
                (LPVOID)0x140165ea0L,
                (LPVOID *)&CItemBoxDestroy6_user,
                (LPVOID *)&CItemBoxDestroy6_next,
                (LPVOID)cast_pointer_function(CItemBoxDestroy6_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemBox::*)())&CItemBox::Destroy)
            },
            _hook_record {
                (LPVOID)0x140165820L,
                (LPVOID *)&CItemBoxInit8_user,
                (LPVOID *)&CItemBoxInit8_next,
                (LPVOID)cast_pointer_function(CItemBoxInit8_wrapper),
                (LPVOID)cast_pointer_function((void(CItemBox::*)(struct _object_id*))&CItemBox::Init)
            },
            _hook_record {
                (LPVOID)0x140166180L,
                (LPVOID *)&CItemBoxIsTakeRight10_user,
                (LPVOID *)&CItemBoxIsTakeRight10_next,
                (LPVOID)cast_pointer_function(CItemBoxIsTakeRight10_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemBox::*)(struct CPlayer*))&CItemBox::IsTakeRight)
            },
            _hook_record {
                (LPVOID)0x140166000L,
                (LPVOID *)&CItemBoxLoop12_user,
                (LPVOID *)&CItemBoxLoop12_next,
                (LPVOID)cast_pointer_function(CItemBoxLoop12_wrapper),
                (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::Loop)
            },
            _hook_record {
                (LPVOID)0x140166660L,
                (LPVOID *)&CItemBoxSendMsg_Create14_user,
                (LPVOID *)&CItemBoxSendMsg_Create14_next,
                (LPVOID)cast_pointer_function(CItemBoxSendMsg_Create14_wrapper),
                (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::SendMsg_Create)
            },
            _hook_record {
                (LPVOID)0x140166830L,
                (LPVOID *)&CItemBoxSendMsg_Destroy16_user,
                (LPVOID *)&CItemBoxSendMsg_Destroy16_next,
                (LPVOID)cast_pointer_function(CItemBoxSendMsg_Destroy16_wrapper),
                (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x1401668b0L,
                (LPVOID *)&CItemBoxSendMsg_FixPosition18_user,
                (LPVOID *)&CItemBoxSendMsg_FixPosition18_next,
                (LPVOID)cast_pointer_function(CItemBoxSendMsg_FixPosition18_wrapper),
                (LPVOID)cast_pointer_function((void(CItemBox::*)(int))&CItemBox::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x140166a10L,
                (LPVOID *)&CItemBoxSendMsg_StateChange20_user,
                (LPVOID *)&CItemBoxSendMsg_StateChange20_next,
                (LPVOID)cast_pointer_function(CItemBoxSendMsg_StateChange20_wrapper),
                (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::SendMsg_StateChange)
            },
            _hook_record {
                (LPVOID)0x140165790L,
                (LPVOID *)&CItemBoxdtor_CItemBox26_user,
                (LPVOID *)&CItemBoxdtor_CItemBox26_next,
                (LPVOID)cast_pointer_function(CItemBoxdtor_CItemBox26_wrapper),
                (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::dtor_CItemBox)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
