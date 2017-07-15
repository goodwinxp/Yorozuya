#include <CParkingUnitDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CParkingUnitctor_CParkingUnit2_ptr CParkingUnitctor_CParkingUnit2_next(nullptr);
        Info::CParkingUnitctor_CParkingUnit2_clbk CParkingUnitctor_CParkingUnit2_user(nullptr);
        
        Info::CParkingUnitCalcCurHPRate4_ptr CParkingUnitCalcCurHPRate4_next(nullptr);
        Info::CParkingUnitCalcCurHPRate4_clbk CParkingUnitCalcCurHPRate4_user(nullptr);
        
        Info::CParkingUnitChangeOwner6_ptr CParkingUnitChangeOwner6_next(nullptr);
        Info::CParkingUnitChangeOwner6_clbk CParkingUnitChangeOwner6_user(nullptr);
        
        Info::CParkingUnitCreate8_ptr CParkingUnitCreate8_next(nullptr);
        Info::CParkingUnitCreate8_clbk CParkingUnitCreate8_user(nullptr);
        
        Info::CParkingUnitDestroy10_ptr CParkingUnitDestroy10_next(nullptr);
        Info::CParkingUnitDestroy10_clbk CParkingUnitDestroy10_user(nullptr);
        
        Info::CParkingUnitInit12_ptr CParkingUnitInit12_next(nullptr);
        Info::CParkingUnitInit12_clbk CParkingUnitInit12_user(nullptr);
        
        Info::CParkingUnitIsRideRight14_ptr CParkingUnitIsRideRight14_next(nullptr);
        Info::CParkingUnitIsRideRight14_clbk CParkingUnitIsRideRight14_user(nullptr);
        
        Info::CParkingUnitLoop16_ptr CParkingUnitLoop16_next(nullptr);
        Info::CParkingUnitLoop16_clbk CParkingUnitLoop16_user(nullptr);
        
        Info::CParkingUnitSendMsg_ChangeOwner18_ptr CParkingUnitSendMsg_ChangeOwner18_next(nullptr);
        Info::CParkingUnitSendMsg_ChangeOwner18_clbk CParkingUnitSendMsg_ChangeOwner18_user(nullptr);
        
        Info::CParkingUnitSendMsg_Create20_ptr CParkingUnitSendMsg_Create20_next(nullptr);
        Info::CParkingUnitSendMsg_Create20_clbk CParkingUnitSendMsg_Create20_user(nullptr);
        
        Info::CParkingUnitSendMsg_Destroy22_ptr CParkingUnitSendMsg_Destroy22_next(nullptr);
        Info::CParkingUnitSendMsg_Destroy22_clbk CParkingUnitSendMsg_Destroy22_user(nullptr);
        
        Info::CParkingUnitSendMsg_FixPosition24_ptr CParkingUnitSendMsg_FixPosition24_next(nullptr);
        Info::CParkingUnitSendMsg_FixPosition24_clbk CParkingUnitSendMsg_FixPosition24_user(nullptr);
        
        
        Info::CParkingUnitdtor_CParkingUnit30_ptr CParkingUnitdtor_CParkingUnit30_next(nullptr);
        Info::CParkingUnitdtor_CParkingUnit30_clbk CParkingUnitdtor_CParkingUnit30_user(nullptr);
        
        
        void CParkingUnitctor_CParkingUnit2_wrapper(struct CParkingUnit* _this)
        {
           CParkingUnitctor_CParkingUnit2_user(_this, CParkingUnitctor_CParkingUnit2_next);
        };
        uint16_t CParkingUnitCalcCurHPRate4_wrapper(struct CParkingUnit* _this)
        {
           return CParkingUnitCalcCurHPRate4_user(_this, CParkingUnitCalcCurHPRate4_next);
        };
        void CParkingUnitChangeOwner6_wrapper(struct CParkingUnit* _this, struct CPlayer* pNewOwner, char byUnitSlotIndex)
        {
           CParkingUnitChangeOwner6_user(_this, pNewOwner, byUnitSlotIndex, CParkingUnitChangeOwner6_next);
        };
        bool CParkingUnitCreate8_wrapper(struct CParkingUnit* _this, struct _parkingunit_create_setdata* pParam)
        {
           return CParkingUnitCreate8_user(_this, pParam, CParkingUnitCreate8_next);
        };
        bool CParkingUnitDestroy10_wrapper(struct CParkingUnit* _this, char byDestoryType)
        {
           return CParkingUnitDestroy10_user(_this, byDestoryType, CParkingUnitDestroy10_next);
        };
        void CParkingUnitInit12_wrapper(struct CParkingUnit* _this, struct _object_id* pID)
        {
           CParkingUnitInit12_user(_this, pID, CParkingUnitInit12_next);
        };
        bool CParkingUnitIsRideRight14_wrapper(struct CParkingUnit* _this, struct CPlayer* pOne)
        {
           return CParkingUnitIsRideRight14_user(_this, pOne, CParkingUnitIsRideRight14_next);
        };
        void CParkingUnitLoop16_wrapper(struct CParkingUnit* _this)
        {
           CParkingUnitLoop16_user(_this, CParkingUnitLoop16_next);
        };
        void CParkingUnitSendMsg_ChangeOwner18_wrapper(struct CParkingUnit* _this, char byUnitSlotIndex, struct CPlayer* pOldOwner)
        {
           CParkingUnitSendMsg_ChangeOwner18_user(_this, byUnitSlotIndex, pOldOwner, CParkingUnitSendMsg_ChangeOwner18_next);
        };
        void CParkingUnitSendMsg_Create20_wrapper(struct CParkingUnit* _this)
        {
           CParkingUnitSendMsg_Create20_user(_this, CParkingUnitSendMsg_Create20_next);
        };
        void CParkingUnitSendMsg_Destroy22_wrapper(struct CParkingUnit* _this, char byDestoryType)
        {
           CParkingUnitSendMsg_Destroy22_user(_this, byDestoryType, CParkingUnitSendMsg_Destroy22_next);
        };
        void CParkingUnitSendMsg_FixPosition24_wrapper(struct CParkingUnit* _this, int n)
        {
           CParkingUnitSendMsg_FixPosition24_user(_this, n, CParkingUnitSendMsg_FixPosition24_next);
        };
        
        void CParkingUnitdtor_CParkingUnit30_wrapper(struct CParkingUnit* _this)
        {
           CParkingUnitdtor_CParkingUnit30_user(_this, CParkingUnitdtor_CParkingUnit30_next);
        };
        
        ::std::array<hook_record, 13> CParkingUnit_functions = 
        {
            _hook_record {
                (LPVOID)0x140167900L,
                (LPVOID *)&CParkingUnitctor_CParkingUnit2_user,
                (LPVOID *)&CParkingUnitctor_CParkingUnit2_next,
                (LPVOID)cast_pointer_function(CParkingUnitctor_CParkingUnit2_wrapper),
                (LPVOID)cast_pointer_function((void(CParkingUnit::*)())&CParkingUnit::ctor_CParkingUnit)
            },
            _hook_record {
                (LPVOID)0x1401683f0L,
                (LPVOID *)&CParkingUnitCalcCurHPRate4_user,
                (LPVOID *)&CParkingUnitCalcCurHPRate4_next,
                (LPVOID)cast_pointer_function(CParkingUnitCalcCurHPRate4_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CParkingUnit::*)())&CParkingUnit::CalcCurHPRate)
            },
            _hook_record {
                (LPVOID)0x140167c30L,
                (LPVOID *)&CParkingUnitChangeOwner6_user,
                (LPVOID *)&CParkingUnitChangeOwner6_next,
                (LPVOID)cast_pointer_function(CParkingUnitChangeOwner6_wrapper),
                (LPVOID)cast_pointer_function((void(CParkingUnit::*)(struct CPlayer*, char))&CParkingUnit::ChangeOwner)
            },
            _hook_record {
                (LPVOID)0x140167a40L,
                (LPVOID *)&CParkingUnitCreate8_user,
                (LPVOID *)&CParkingUnitCreate8_next,
                (LPVOID)cast_pointer_function(CParkingUnitCreate8_wrapper),
                (LPVOID)cast_pointer_function((bool(CParkingUnit::*)(struct _parkingunit_create_setdata*))&CParkingUnit::Create)
            },
            _hook_record {
                (LPVOID)0x140167b80L,
                (LPVOID *)&CParkingUnitDestroy10_user,
                (LPVOID *)&CParkingUnitDestroy10_next,
                (LPVOID)cast_pointer_function(CParkingUnitDestroy10_wrapper),
                (LPVOID)cast_pointer_function((bool(CParkingUnit::*)(char))&CParkingUnit::Destroy)
            },
            _hook_record {
                (LPVOID)0x140167980L,
                (LPVOID *)&CParkingUnitInit12_user,
                (LPVOID *)&CParkingUnitInit12_next,
                (LPVOID)cast_pointer_function(CParkingUnitInit12_wrapper),
                (LPVOID)cast_pointer_function((void(CParkingUnit::*)(struct _object_id*))&CParkingUnit::Init)
            },
            _hook_record {
                (LPVOID)0x140167cc0L,
                (LPVOID *)&CParkingUnitIsRideRight14_user,
                (LPVOID *)&CParkingUnitIsRideRight14_next,
                (LPVOID)cast_pointer_function(CParkingUnitIsRideRight14_wrapper),
                (LPVOID)cast_pointer_function((bool(CParkingUnit::*)(struct CPlayer*))&CParkingUnit::IsRideRight)
            },
            _hook_record {
                (LPVOID)0x140167c20L,
                (LPVOID *)&CParkingUnitLoop16_user,
                (LPVOID *)&CParkingUnitLoop16_next,
                (LPVOID)cast_pointer_function(CParkingUnitLoop16_wrapper),
                (LPVOID)cast_pointer_function((void(CParkingUnit::*)())&CParkingUnit::Loop)
            },
            _hook_record {
                (LPVOID)0x140167ec0L,
                (LPVOID *)&CParkingUnitSendMsg_ChangeOwner18_user,
                (LPVOID *)&CParkingUnitSendMsg_ChangeOwner18_next,
                (LPVOID)cast_pointer_function(CParkingUnitSendMsg_ChangeOwner18_wrapper),
                (LPVOID)cast_pointer_function((void(CParkingUnit::*)(char, struct CPlayer*))&CParkingUnit::SendMsg_ChangeOwner)
            },
            _hook_record {
                (LPVOID)0x140167ce0L,
                (LPVOID *)&CParkingUnitSendMsg_Create20_user,
                (LPVOID *)&CParkingUnitSendMsg_Create20_next,
                (LPVOID)cast_pointer_function(CParkingUnitSendMsg_Create20_wrapper),
                (LPVOID)cast_pointer_function((void(CParkingUnit::*)())&CParkingUnit::SendMsg_Create)
            },
            _hook_record {
                (LPVOID)0x140167e20L,
                (LPVOID *)&CParkingUnitSendMsg_Destroy22_user,
                (LPVOID *)&CParkingUnitSendMsg_Destroy22_next,
                (LPVOID)cast_pointer_function(CParkingUnitSendMsg_Destroy22_wrapper),
                (LPVOID)cast_pointer_function((void(CParkingUnit::*)(char))&CParkingUnit::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x140167fd0L,
                (LPVOID *)&CParkingUnitSendMsg_FixPosition24_user,
                (LPVOID *)&CParkingUnitSendMsg_FixPosition24_next,
                (LPVOID)cast_pointer_function(CParkingUnitSendMsg_FixPosition24_wrapper),
                (LPVOID)cast_pointer_function((void(CParkingUnit::*)(int))&CParkingUnit::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x140168480L,
                (LPVOID *)&CParkingUnitdtor_CParkingUnit30_user,
                (LPVOID *)&CParkingUnitdtor_CParkingUnit30_next,
                (LPVOID)cast_pointer_function(CParkingUnitdtor_CParkingUnit30_wrapper),
                (LPVOID)cast_pointer_function((void(CParkingUnit::*)())&CParkingUnit::dtor_CParkingUnit)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
