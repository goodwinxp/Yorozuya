#include <CMerchantDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMerchantctor_CMerchant2_ptr CMerchantctor_CMerchant2_next(nullptr);
        Info::CMerchantctor_CMerchant2_clbk CMerchantctor_CMerchant2_user(nullptr);
        
        Info::CMerchantCreate4_ptr CMerchantCreate4_next(nullptr);
        Info::CMerchantCreate4_clbk CMerchantCreate4_user(nullptr);
        
        Info::CMerchantDestroy6_ptr CMerchantDestroy6_next(nullptr);
        Info::CMerchantDestroy6_clbk CMerchantDestroy6_user(nullptr);
        
        Info::CMerchantGetFireTol8_ptr CMerchantGetFireTol8_next(nullptr);
        Info::CMerchantGetFireTol8_clbk CMerchantGetFireTol8_user(nullptr);
        
        Info::CMerchantGetNewMonSerial10_ptr CMerchantGetNewMonSerial10_next(nullptr);
        Info::CMerchantGetNewMonSerial10_clbk CMerchantGetNewMonSerial10_user(nullptr);
        
        Info::CMerchantGetObjName12_ptr CMerchantGetObjName12_next(nullptr);
        Info::CMerchantGetObjName12_clbk CMerchantGetObjName12_user(nullptr);
        
        Info::CMerchantGetObjRace14_ptr CMerchantGetObjRace14_next(nullptr);
        Info::CMerchantGetObjRace14_clbk CMerchantGetObjRace14_user(nullptr);
        
        Info::CMerchantGetSoilTol16_ptr CMerchantGetSoilTol16_next(nullptr);
        Info::CMerchantGetSoilTol16_clbk CMerchantGetSoilTol16_user(nullptr);
        
        Info::CMerchantGetStoreDummyName18_ptr CMerchantGetStoreDummyName18_next(nullptr);
        Info::CMerchantGetStoreDummyName18_clbk CMerchantGetStoreDummyName18_user(nullptr);
        
        Info::CMerchantGetWaterTol20_ptr CMerchantGetWaterTol20_next(nullptr);
        Info::CMerchantGetWaterTol20_clbk CMerchantGetWaterTol20_user(nullptr);
        
        Info::CMerchantGetWindTol22_ptr CMerchantGetWindTol22_next(nullptr);
        Info::CMerchantGetWindTol22_clbk CMerchantGetWindTol22_user(nullptr);
        
        Info::CMerchantInit24_ptr CMerchantInit24_next(nullptr);
        Info::CMerchantInit24_clbk CMerchantInit24_user(nullptr);
        
        Info::CMerchantLoop26_ptr CMerchantLoop26_next(nullptr);
        Info::CMerchantLoop26_clbk CMerchantLoop26_user(nullptr);
        
        Info::CMerchantOutOfSec28_ptr CMerchantOutOfSec28_next(nullptr);
        Info::CMerchantOutOfSec28_clbk CMerchantOutOfSec28_user(nullptr);
        
        Info::CMerchantSendMsg_Create30_ptr CMerchantSendMsg_Create30_next(nullptr);
        Info::CMerchantSendMsg_Create30_clbk CMerchantSendMsg_Create30_user(nullptr);
        
        Info::CMerchantSendMsg_Destroy32_ptr CMerchantSendMsg_Destroy32_next(nullptr);
        Info::CMerchantSendMsg_Destroy32_clbk CMerchantSendMsg_Destroy32_user(nullptr);
        
        Info::CMerchantSendMsg_FixPosition34_ptr CMerchantSendMsg_FixPosition34_next(nullptr);
        Info::CMerchantSendMsg_FixPosition34_clbk CMerchantSendMsg_FixPosition34_user(nullptr);
        
        Info::CMerchantSendMsg_Move36_ptr CMerchantSendMsg_Move36_next(nullptr);
        Info::CMerchantSendMsg_Move36_clbk CMerchantSendMsg_Move36_user(nullptr);
        
        Info::CMerchantSendMsg_RealFixPosition38_ptr CMerchantSendMsg_RealFixPosition38_next(nullptr);
        Info::CMerchantSendMsg_RealFixPosition38_clbk CMerchantSendMsg_RealFixPosition38_user(nullptr);
        
        Info::CMerchantSendMsg_RealMovePoint40_ptr CMerchantSendMsg_RealMovePoint40_next(nullptr);
        Info::CMerchantSendMsg_RealMovePoint40_clbk CMerchantSendMsg_RealMovePoint40_user(nullptr);
        
        Info::CMerchantSendMsg_TransShipTicketNumInform42_ptr CMerchantSendMsg_TransShipTicketNumInform42_next(nullptr);
        Info::CMerchantSendMsg_TransShipTicketNumInform42_clbk CMerchantSendMsg_TransShipTicketNumInform42_user(nullptr);
        
        
        Info::CMerchantdtor_CMerchant48_ptr CMerchantdtor_CMerchant48_next(nullptr);
        Info::CMerchantdtor_CMerchant48_clbk CMerchantdtor_CMerchant48_user(nullptr);
        
        
        void CMerchantctor_CMerchant2_wrapper(struct CMerchant* _this)
        {
           CMerchantctor_CMerchant2_user(_this, CMerchantctor_CMerchant2_next);
        };
        bool CMerchantCreate4_wrapper(struct CMerchant* _this, struct _npc_create_setdata* pData)
        {
           return CMerchantCreate4_user(_this, pData, CMerchantCreate4_next);
        };
        bool CMerchantDestroy6_wrapper(struct CMerchant* _this, struct CGameObject* pAttObj)
        {
           return CMerchantDestroy6_user(_this, pAttObj, CMerchantDestroy6_next);
        };
        int CMerchantGetFireTol8_wrapper(struct CMerchant* _this)
        {
           return CMerchantGetFireTol8_user(_this, CMerchantGetFireTol8_next);
        };
        unsigned int CMerchantGetNewMonSerial10_wrapper()
        {
           return CMerchantGetNewMonSerial10_user(CMerchantGetNewMonSerial10_next);
        };
        char* CMerchantGetObjName12_wrapper(struct CMerchant* _this)
        {
           return CMerchantGetObjName12_user(_this, CMerchantGetObjName12_next);
        };
        int CMerchantGetObjRace14_wrapper(struct CMerchant* _this)
        {
           return CMerchantGetObjRace14_user(_this, CMerchantGetObjRace14_next);
        };
        int CMerchantGetSoilTol16_wrapper(struct CMerchant* _this)
        {
           return CMerchantGetSoilTol16_user(_this, CMerchantGetSoilTol16_next);
        };
        char* CMerchantGetStoreDummyName18_wrapper(struct CMerchant* _this)
        {
           return CMerchantGetStoreDummyName18_user(_this, CMerchantGetStoreDummyName18_next);
        };
        int CMerchantGetWaterTol20_wrapper(struct CMerchant* _this)
        {
           return CMerchantGetWaterTol20_user(_this, CMerchantGetWaterTol20_next);
        };
        int CMerchantGetWindTol22_wrapper(struct CMerchant* _this)
        {
           return CMerchantGetWindTol22_user(_this, CMerchantGetWindTol22_next);
        };
        bool CMerchantInit24_wrapper(struct CMerchant* _this, struct _object_id* pID)
        {
           return CMerchantInit24_user(_this, pID, CMerchantInit24_next);
        };
        void CMerchantLoop26_wrapper(struct CMerchant* _this)
        {
           CMerchantLoop26_user(_this, CMerchantLoop26_next);
        };
        void CMerchantOutOfSec28_wrapper(struct CMerchant* _this)
        {
           CMerchantOutOfSec28_user(_this, CMerchantOutOfSec28_next);
        };
        void CMerchantSendMsg_Create30_wrapper(struct CMerchant* _this)
        {
           CMerchantSendMsg_Create30_user(_this, CMerchantSendMsg_Create30_next);
        };
        void CMerchantSendMsg_Destroy32_wrapper(struct CMerchant* _this)
        {
           CMerchantSendMsg_Destroy32_user(_this, CMerchantSendMsg_Destroy32_next);
        };
        void CMerchantSendMsg_FixPosition34_wrapper(struct CMerchant* _this, int n)
        {
           CMerchantSendMsg_FixPosition34_user(_this, n, CMerchantSendMsg_FixPosition34_next);
        };
        void CMerchantSendMsg_Move36_wrapper(struct CMerchant* _this)
        {
           CMerchantSendMsg_Move36_user(_this, CMerchantSendMsg_Move36_next);
        };
        void CMerchantSendMsg_RealFixPosition38_wrapper(struct CMerchant* _this, bool bCircle)
        {
           CMerchantSendMsg_RealFixPosition38_user(_this, bCircle, CMerchantSendMsg_RealFixPosition38_next);
        };
        void CMerchantSendMsg_RealMovePoint40_wrapper(struct CMerchant* _this, int n)
        {
           CMerchantSendMsg_RealMovePoint40_user(_this, n, CMerchantSendMsg_RealMovePoint40_next);
        };
        void CMerchantSendMsg_TransShipTicketNumInform42_wrapper(struct CMerchant* _this, int n)
        {
           CMerchantSendMsg_TransShipTicketNumInform42_user(_this, n, CMerchantSendMsg_TransShipTicketNumInform42_next);
        };
        
        void CMerchantdtor_CMerchant48_wrapper(struct CMerchant* _this)
        {
           CMerchantdtor_CMerchant48_user(_this, CMerchantdtor_CMerchant48_next);
        };
        
        ::std::array<hook_record, 22> CMerchant_functions = 
        {
            _hook_record {
                (LPVOID)0x140139010L,
                (LPVOID *)&CMerchantctor_CMerchant2_user,
                (LPVOID *)&CMerchantctor_CMerchant2_next,
                (LPVOID)cast_pointer_function(CMerchantctor_CMerchant2_wrapper),
                (LPVOID)cast_pointer_function((void(CMerchant::*)())&CMerchant::ctor_CMerchant)
            },
            _hook_record {
                (LPVOID)0x140139140L,
                (LPVOID *)&CMerchantCreate4_user,
                (LPVOID *)&CMerchantCreate4_next,
                (LPVOID)cast_pointer_function(CMerchantCreate4_wrapper),
                (LPVOID)cast_pointer_function((bool(CMerchant::*)(struct _npc_create_setdata*))&CMerchant::Create)
            },
            _hook_record {
                (LPVOID)0x1401391e0L,
                (LPVOID *)&CMerchantDestroy6_user,
                (LPVOID *)&CMerchantDestroy6_next,
                (LPVOID)cast_pointer_function(CMerchantDestroy6_wrapper),
                (LPVOID)cast_pointer_function((bool(CMerchant::*)(struct CGameObject*))&CMerchant::Destroy)
            },
            _hook_record {
                (LPVOID)0x14013a140L,
                (LPVOID *)&CMerchantGetFireTol8_user,
                (LPVOID *)&CMerchantGetFireTol8_next,
                (LPVOID)cast_pointer_function(CMerchantGetFireTol8_wrapper),
                (LPVOID)cast_pointer_function((int(CMerchant::*)())&CMerchant::GetFireTol)
            },
            _hook_record {
                (LPVOID)0x14013a260L,
                (LPVOID *)&CMerchantGetNewMonSerial10_user,
                (LPVOID *)&CMerchantGetNewMonSerial10_next,
                (LPVOID)cast_pointer_function(CMerchantGetNewMonSerial10_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(*)())&CMerchant::GetNewMonSerial)
            },
            _hook_record {
                (LPVOID)0x1401392a0L,
                (LPVOID *)&CMerchantGetObjName12_user,
                (LPVOID *)&CMerchantGetObjName12_next,
                (LPVOID)cast_pointer_function(CMerchantGetObjName12_wrapper),
                (LPVOID)cast_pointer_function((char*(CMerchant::*)())&CMerchant::GetObjName)
            },
            _hook_record {
                (LPVOID)0x14013a1c0L,
                (LPVOID *)&CMerchantGetObjRace14_user,
                (LPVOID *)&CMerchantGetObjRace14_next,
                (LPVOID)cast_pointer_function(CMerchantGetObjRace14_wrapper),
                (LPVOID)cast_pointer_function((int(CMerchant::*)())&CMerchant::GetObjRace)
            },
            _hook_record {
                (LPVOID)0x14013a180L,
                (LPVOID *)&CMerchantGetSoilTol16_user,
                (LPVOID *)&CMerchantGetSoilTol16_next,
                (LPVOID)cast_pointer_function(CMerchantGetSoilTol16_wrapper),
                (LPVOID)cast_pointer_function((int(CMerchant::*)())&CMerchant::GetSoilTol)
            },
            _hook_record {
                (LPVOID)0x140139380L,
                (LPVOID *)&CMerchantGetStoreDummyName18_user,
                (LPVOID *)&CMerchantGetStoreDummyName18_next,
                (LPVOID)cast_pointer_function(CMerchantGetStoreDummyName18_wrapper),
                (LPVOID)cast_pointer_function((char*(CMerchant::*)())&CMerchant::GetStoreDummyName)
            },
            _hook_record {
                (LPVOID)0x14013a160L,
                (LPVOID *)&CMerchantGetWaterTol20_user,
                (LPVOID *)&CMerchantGetWaterTol20_next,
                (LPVOID)cast_pointer_function(CMerchantGetWaterTol20_wrapper),
                (LPVOID)cast_pointer_function((int(CMerchant::*)())&CMerchant::GetWaterTol)
            },
            _hook_record {
                (LPVOID)0x14013a1a0L,
                (LPVOID *)&CMerchantGetWindTol22_user,
                (LPVOID *)&CMerchantGetWindTol22_next,
                (LPVOID)cast_pointer_function(CMerchantGetWindTol22_wrapper),
                (LPVOID)cast_pointer_function((int(CMerchant::*)())&CMerchant::GetWindTol)
            },
            _hook_record {
                (LPVOID)0x1401390b0L,
                (LPVOID *)&CMerchantInit24_user,
                (LPVOID *)&CMerchantInit24_next,
                (LPVOID)cast_pointer_function(CMerchantInit24_wrapper),
                (LPVOID)cast_pointer_function((bool(CMerchant::*)(struct _object_id*))&CMerchant::Init)
            },
            _hook_record {
                (LPVOID)0x140139250L,
                (LPVOID *)&CMerchantLoop26_user,
                (LPVOID *)&CMerchantLoop26_next,
                (LPVOID)cast_pointer_function(CMerchantLoop26_wrapper),
                (LPVOID)cast_pointer_function((void(CMerchant::*)())&CMerchant::Loop)
            },
            _hook_record {
                (LPVOID)0x14013a0f0L,
                (LPVOID *)&CMerchantOutOfSec28_user,
                (LPVOID *)&CMerchantOutOfSec28_next,
                (LPVOID)cast_pointer_function(CMerchantOutOfSec28_wrapper),
                (LPVOID)cast_pointer_function((void(CMerchant::*)())&CMerchant::OutOfSec)
            },
            _hook_record {
                (LPVOID)0x1401393e0L,
                (LPVOID *)&CMerchantSendMsg_Create30_user,
                (LPVOID *)&CMerchantSendMsg_Create30_next,
                (LPVOID)cast_pointer_function(CMerchantSendMsg_Create30_wrapper),
                (LPVOID)cast_pointer_function((void(CMerchant::*)())&CMerchant::SendMsg_Create)
            },
            _hook_record {
                (LPVOID)0x1401394d0L,
                (LPVOID *)&CMerchantSendMsg_Destroy32_user,
                (LPVOID *)&CMerchantSendMsg_Destroy32_next,
                (LPVOID)cast_pointer_function(CMerchantSendMsg_Destroy32_wrapper),
                (LPVOID)cast_pointer_function((void(CMerchant::*)())&CMerchant::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x140139a80L,
                (LPVOID *)&CMerchantSendMsg_FixPosition34_user,
                (LPVOID *)&CMerchantSendMsg_FixPosition34_next,
                (LPVOID)cast_pointer_function(CMerchantSendMsg_FixPosition34_wrapper),
                (LPVOID)cast_pointer_function((void(CMerchant::*)(int))&CMerchant::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x140139560L,
                (LPVOID *)&CMerchantSendMsg_Move36_user,
                (LPVOID *)&CMerchantSendMsg_Move36_next,
                (LPVOID)cast_pointer_function(CMerchantSendMsg_Move36_wrapper),
                (LPVOID)cast_pointer_function((void(CMerchant::*)())&CMerchant::SendMsg_Move)
            },
            _hook_record {
                (LPVOID)0x14013a1e0L,
                (LPVOID *)&CMerchantSendMsg_RealFixPosition38_user,
                (LPVOID *)&CMerchantSendMsg_RealFixPosition38_next,
                (LPVOID)cast_pointer_function(CMerchantSendMsg_RealFixPosition38_wrapper),
                (LPVOID)cast_pointer_function((void(CMerchant::*)(bool))&CMerchant::SendMsg_RealFixPosition)
            },
            _hook_record {
                (LPVOID)0x140139ba0L,
                (LPVOID *)&CMerchantSendMsg_RealMovePoint40_user,
                (LPVOID *)&CMerchantSendMsg_RealMovePoint40_next,
                (LPVOID)cast_pointer_function(CMerchantSendMsg_RealMovePoint40_wrapper),
                (LPVOID)cast_pointer_function((void(CMerchant::*)(int))&CMerchant::SendMsg_RealMovePoint)
            },
            _hook_record {
                (LPVOID)0x140139650L,
                (LPVOID *)&CMerchantSendMsg_TransShipTicketNumInform42_user,
                (LPVOID *)&CMerchantSendMsg_TransShipTicketNumInform42_next,
                (LPVOID)cast_pointer_function(CMerchantSendMsg_TransShipTicketNumInform42_wrapper),
                (LPVOID)cast_pointer_function((void(CMerchant::*)(int))&CMerchant::SendMsg_TransShipTicketNumInform)
            },
            _hook_record {
                (LPVOID)0x140139060L,
                (LPVOID *)&CMerchantdtor_CMerchant48_user,
                (LPVOID *)&CMerchantdtor_CMerchant48_next,
                (LPVOID)cast_pointer_function(CMerchantdtor_CMerchant48_wrapper),
                (LPVOID)cast_pointer_function((void(CMerchant::*)())&CMerchant::dtor_CMerchant)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
