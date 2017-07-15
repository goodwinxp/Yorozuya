#include <AutoMineMachineDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::AutoMineMachinector_AutoMineMachine2_ptr AutoMineMachinector_AutoMineMachine2_next(nullptr);
        Info::AutoMineMachinector_AutoMineMachine2_clbk AutoMineMachinector_AutoMineMachine2_user(nullptr);
        
        Info::AutoMineMachineChangeOwner4_ptr AutoMineMachineChangeOwner4_next(nullptr);
        Info::AutoMineMachineChangeOwner4_clbk AutoMineMachineChangeOwner4_user(nullptr);
        
        Info::AutoMineMachineCharge6_ptr AutoMineMachineCharge6_next(nullptr);
        Info::AutoMineMachineCharge6_clbk AutoMineMachineCharge6_user(nullptr);
        
        Info::AutoMineMachineDischarge8_ptr AutoMineMachineDischarge8_next(nullptr);
        Info::AutoMineMachineDischarge8_clbk AutoMineMachineDischarge8_user(nullptr);
        
        Info::AutoMineMachineGetMachineInfo10_ptr AutoMineMachineGetMachineInfo10_next(nullptr);
        Info::AutoMineMachineGetMachineInfo10_clbk AutoMineMachineGetMachineInfo10_user(nullptr);
        
        Info::AutoMineMachineGetOutOreInAutoMine12_ptr AutoMineMachineGetOutOreInAutoMine12_next(nullptr);
        Info::AutoMineMachineGetOutOreInAutoMine12_clbk AutoMineMachineGetOutOreInAutoMine12_user(nullptr);
        
        Info::AutoMineMachineGetOwnerGuild14_ptr AutoMineMachineGetOwnerGuild14_next(nullptr);
        Info::AutoMineMachineGetOwnerGuild14_clbk AutoMineMachineGetOwnerGuild14_user(nullptr);
        
        Info::AutoMineMachineGetState16_ptr AutoMineMachineGetState16_next(nullptr);
        Info::AutoMineMachineGetState16_clbk AutoMineMachineGetState16_user(nullptr);
        
        Info::AutoMineMachineInitialize18_ptr AutoMineMachineInitialize18_next(nullptr);
        Info::AutoMineMachineInitialize18_clbk AutoMineMachineInitialize18_user(nullptr);
        
        Info::AutoMineMachineIsMaster20_ptr AutoMineMachineIsMaster20_next(nullptr);
        Info::AutoMineMachineIsMaster20_clbk AutoMineMachineIsMaster20_user(nullptr);
        
        Info::AutoMineMachineLoadDatabase22_ptr AutoMineMachineLoadDatabase22_next(nullptr);
        Info::AutoMineMachineLoadDatabase22_clbk AutoMineMachineLoadDatabase22_user(nullptr);
        
        Info::AutoMineMachineLoop24_ptr AutoMineMachineLoop24_next(nullptr);
        Info::AutoMineMachineLoop24_clbk AutoMineMachineLoop24_user(nullptr);
        
        Info::AutoMineMachineMoveOreInAutoMine26_ptr AutoMineMachineMoveOreInAutoMine26_next(nullptr);
        Info::AutoMineMachineMoveOreInAutoMine26_clbk AutoMineMachineMoveOreInAutoMine26_user(nullptr);
        
        Info::AutoMineMachineOreMerge28_ptr AutoMineMachineOreMerge28_next(nullptr);
        Info::AutoMineMachineOreMerge28_clbk AutoMineMachineOreMerge28_user(nullptr);
        
        Info::AutoMineMachineSelectOre30_ptr AutoMineMachineSelectOre30_next(nullptr);
        Info::AutoMineMachineSelectOre30_clbk AutoMineMachineSelectOre30_user(nullptr);
        
        Info::AutoMineMachineSendMsg_MachineInfo32_ptr AutoMineMachineSendMsg_MachineInfo32_next(nullptr);
        Info::AutoMineMachineSendMsg_MachineInfo32_clbk AutoMineMachineSendMsg_MachineInfo32_user(nullptr);
        
        Info::AutoMineMachineSendMsg_ResultCode34_ptr AutoMineMachineSendMsg_ResultCode34_next(nullptr);
        Info::AutoMineMachineSendMsg_ResultCode34_clbk AutoMineMachineSendMsg_ResultCode34_user(nullptr);
        
        Info::AutoMineMachineSetOpenUI36_ptr AutoMineMachineSetOpenUI36_next(nullptr);
        Info::AutoMineMachineSetOpenUI36_clbk AutoMineMachineSetOpenUI36_user(nullptr);
        
        Info::AutoMineMachineSetOwner38_ptr AutoMineMachineSetOwner38_next(nullptr);
        Info::AutoMineMachineSetOwner38_clbk AutoMineMachineSetOwner38_user(nullptr);
        
        Info::AutoMineMachineStart40_ptr AutoMineMachineStart40_next(nullptr);
        Info::AutoMineMachineStart40_clbk AutoMineMachineStart40_user(nullptr);
        
        Info::AutoMineMachineStop42_ptr AutoMineMachineStop42_next(nullptr);
        Info::AutoMineMachineStop42_clbk AutoMineMachineStop42_user(nullptr);
        
        Info::AutoMineMachineSubChargeCost44_ptr AutoMineMachineSubChargeCost44_next(nullptr);
        Info::AutoMineMachineSubChargeCost44_clbk AutoMineMachineSubChargeCost44_user(nullptr);
        
        Info::AutoMineMachine_Convert_GoldToGage46_ptr AutoMineMachine_Convert_GoldToGage46_next(nullptr);
        Info::AutoMineMachine_Convert_GoldToGage46_clbk AutoMineMachine_Convert_GoldToGage46_user(nullptr);
        
        Info::AutoMineMachine_InitMineOre48_ptr AutoMineMachine_InitMineOre48_next(nullptr);
        Info::AutoMineMachine_InitMineOre48_clbk AutoMineMachine_InitMineOre48_user(nullptr);
        
        Info::AutoMineMachine_Mining50_ptr AutoMineMachine_Mining50_next(nullptr);
        Info::AutoMineMachine_Mining50_clbk AutoMineMachine_Mining50_user(nullptr);
        
        Info::AutoMineMachinepush_dqs_battery_charge52_ptr AutoMineMachinepush_dqs_battery_charge52_next(nullptr);
        Info::AutoMineMachinepush_dqs_battery_charge52_clbk AutoMineMachinepush_dqs_battery_charge52_user(nullptr);
        
        Info::AutoMineMachinepush_dqs_battery_discharge54_ptr AutoMineMachinepush_dqs_battery_discharge54_next(nullptr);
        Info::AutoMineMachinepush_dqs_battery_discharge54_clbk AutoMineMachinepush_dqs_battery_discharge54_user(nullptr);
        
        Info::AutoMineMachinepush_dqs_getore56_ptr AutoMineMachinepush_dqs_getore56_next(nullptr);
        Info::AutoMineMachinepush_dqs_getore56_clbk AutoMineMachinepush_dqs_getore56_user(nullptr);
        
        Info::AutoMineMachinepush_dqs_mineore58_ptr AutoMineMachinepush_dqs_mineore58_next(nullptr);
        Info::AutoMineMachinepush_dqs_mineore58_clbk AutoMineMachinepush_dqs_mineore58_user(nullptr);
        
        Info::AutoMineMachinepush_dqs_moveore60_ptr AutoMineMachinepush_dqs_moveore60_next(nullptr);
        Info::AutoMineMachinepush_dqs_moveore60_clbk AutoMineMachinepush_dqs_moveore60_user(nullptr);
        
        Info::AutoMineMachinepush_dqs_newowner62_ptr AutoMineMachinepush_dqs_newowner62_next(nullptr);
        Info::AutoMineMachinepush_dqs_newowner62_clbk AutoMineMachinepush_dqs_newowner62_user(nullptr);
        
        Info::AutoMineMachinepush_dqs_selore64_ptr AutoMineMachinepush_dqs_selore64_next(nullptr);
        Info::AutoMineMachinepush_dqs_selore64_clbk AutoMineMachinepush_dqs_selore64_user(nullptr);
        
        Info::AutoMineMachinepush_dqs_workingstate66_ptr AutoMineMachinepush_dqs_workingstate66_next(nullptr);
        Info::AutoMineMachinepush_dqs_workingstate66_clbk AutoMineMachinepush_dqs_workingstate66_user(nullptr);
        
        
        Info::AutoMineMachinedtor_AutoMineMachine68_ptr AutoMineMachinedtor_AutoMineMachine68_next(nullptr);
        Info::AutoMineMachinedtor_AutoMineMachine68_clbk AutoMineMachinedtor_AutoMineMachine68_user(nullptr);
        
        
        void AutoMineMachinector_AutoMineMachine2_wrapper(struct AutoMineMachine* _this)
        {
           AutoMineMachinector_AutoMineMachine2_user(_this, AutoMineMachinector_AutoMineMachine2_next);
        };
        void AutoMineMachineChangeOwner4_wrapper(struct AutoMineMachine* _this, struct CGuild* pOwnerGuild)
        {
           AutoMineMachineChangeOwner4_user(_this, pOwnerGuild, AutoMineMachineChangeOwner4_next);
        };
        void AutoMineMachineCharge6_wrapper(struct AutoMineMachine* _this, int n, int nCharge, int nGold)
        {
           AutoMineMachineCharge6_user(_this, n, nCharge, nGold, AutoMineMachineCharge6_next);
        };
        void AutoMineMachineDischarge8_wrapper(struct AutoMineMachine* _this)
        {
           AutoMineMachineDischarge8_user(_this, AutoMineMachineDischarge8_next);
        };
        void AutoMineMachineGetMachineInfo10_wrapper(struct AutoMineMachine* _this, struct _DB_LOAD_AUTOMINE_MACHINE* pInfo)
        {
           AutoMineMachineGetMachineInfo10_user(_this, pInfo, AutoMineMachineGetMachineInfo10_next);
        };
        void AutoMineMachineGetOutOreInAutoMine12_wrapper(struct AutoMineMachine* _this, struct CPlayer* pUser, char* pMsg)
        {
           AutoMineMachineGetOutOreInAutoMine12_user(_this, pUser, pMsg, AutoMineMachineGetOutOreInAutoMine12_next);
        };
        struct CGuild* AutoMineMachineGetOwnerGuild14_wrapper(struct AutoMineMachine* _this)
        {
           return AutoMineMachineGetOwnerGuild14_user(_this, AutoMineMachineGetOwnerGuild14_next);
        };
        void AutoMineMachineGetState16_wrapper(struct AutoMineMachine* _this, unsigned int* dwState)
        {
           AutoMineMachineGetState16_user(_this, dwState, AutoMineMachineGetState16_next);
        };
        bool AutoMineMachineInitialize18_wrapper(struct AutoMineMachine* _this, char byRace, char byCollisionType)
        {
           return AutoMineMachineInitialize18_user(_this, byRace, byCollisionType, AutoMineMachineInitialize18_next);
        };
        bool AutoMineMachineIsMaster20_wrapper(struct AutoMineMachine* _this, struct CPlayer* pUser)
        {
           return AutoMineMachineIsMaster20_user(_this, pUser, AutoMineMachineIsMaster20_next);
        };
        bool AutoMineMachineLoadDatabase22_wrapper(struct AutoMineMachine* _this, struct _DB_LOAD_AUTOMINE_MACHINE* pdata)
        {
           return AutoMineMachineLoadDatabase22_user(_this, pdata, AutoMineMachineLoadDatabase22_next);
        };
        void AutoMineMachineLoop24_wrapper(struct AutoMineMachine* _this)
        {
           AutoMineMachineLoop24_user(_this, AutoMineMachineLoop24_next);
        };
        void AutoMineMachineMoveOreInAutoMine26_wrapper(struct AutoMineMachine* _this, int n, char sl, char ss, char dl, char ds)
        {
           AutoMineMachineMoveOreInAutoMine26_user(_this, n, sl, ss, dl, ds, AutoMineMachineMoveOreInAutoMine26_next);
        };
        void AutoMineMachineOreMerge28_wrapper(struct AutoMineMachine* _this, int n, char* pMsg)
        {
           AutoMineMachineOreMerge28_user(_this, n, pMsg, AutoMineMachineOreMerge28_next);
        };
        void AutoMineMachineSelectOre30_wrapper(struct AutoMineMachine* _this, int n, char byOre)
        {
           AutoMineMachineSelectOre30_user(_this, n, byOre, AutoMineMachineSelectOre30_next);
        };
        void AutoMineMachineSendMsg_MachineInfo32_wrapper(struct AutoMineMachine* _this, int n)
        {
           AutoMineMachineSendMsg_MachineInfo32_user(_this, n, AutoMineMachineSendMsg_MachineInfo32_next);
        };
        void AutoMineMachineSendMsg_ResultCode34_wrapper(struct AutoMineMachine* _this, int n, char byType, char byRetCode)
        {
           AutoMineMachineSendMsg_ResultCode34_user(_this, n, byType, byRetCode, AutoMineMachineSendMsg_ResultCode34_next);
        };
        void AutoMineMachineSetOpenUI36_wrapper(struct AutoMineMachine* _this, bool bOpen)
        {
           AutoMineMachineSetOpenUI36_user(_this, bOpen, AutoMineMachineSetOpenUI36_next);
        };
        bool AutoMineMachineSetOwner38_wrapper(struct AutoMineMachine* _this, char byRace, char byCollisionType, struct CGuild* pGuild)
        {
           return AutoMineMachineSetOwner38_user(_this, byRace, byCollisionType, pGuild, AutoMineMachineSetOwner38_next);
        };
        void AutoMineMachineStart40_wrapper(struct AutoMineMachine* _this, int n)
        {
           AutoMineMachineStart40_user(_this, n, AutoMineMachineStart40_next);
        };
        void AutoMineMachineStop42_wrapper(struct AutoMineMachine* _this, int n)
        {
           AutoMineMachineStop42_user(_this, n, AutoMineMachineStop42_next);
        };
        void AutoMineMachineSubChargeCost44_wrapper(struct AutoMineMachine* _this, char byRet, char* pdata)
        {
           AutoMineMachineSubChargeCost44_user(_this, byRet, pdata, AutoMineMachineSubChargeCost44_next);
        };
        int AutoMineMachine_Convert_GoldToGage46_wrapper(struct AutoMineMachine* _this, int nGold)
        {
           return AutoMineMachine_Convert_GoldToGage46_user(_this, nGold, AutoMineMachine_Convert_GoldToGage46_next);
        };
        bool AutoMineMachine_InitMineOre48_wrapper(struct AutoMineMachine* _this)
        {
           return AutoMineMachine_InitMineOre48_user(_this, AutoMineMachine_InitMineOre48_next);
        };
        void AutoMineMachine_Mining50_wrapper(struct AutoMineMachine* _this)
        {
           AutoMineMachine_Mining50_user(_this, AutoMineMachine_Mining50_next);
        };
        void AutoMineMachinepush_dqs_battery_charge52_wrapper(struct AutoMineMachine* _this, uint16_t wIndex, int ncharge, int ncost)
        {
           AutoMineMachinepush_dqs_battery_charge52_user(_this, wIndex, ncharge, ncost, AutoMineMachinepush_dqs_battery_charge52_next);
        };
        void AutoMineMachinepush_dqs_battery_discharge54_wrapper(struct AutoMineMachine* _this)
        {
           AutoMineMachinepush_dqs_battery_discharge54_user(_this, AutoMineMachinepush_dqs_battery_discharge54_next);
        };
        void AutoMineMachinepush_dqs_getore56_wrapper(struct AutoMineMachine* _this, int nP, int nS, char byNum)
        {
           AutoMineMachinepush_dqs_getore56_user(_this, nP, nS, byNum, AutoMineMachinepush_dqs_getore56_next);
        };
        void AutoMineMachinepush_dqs_mineore58_wrapper(struct AutoMineMachine* _this, int nP, int nS)
        {
           AutoMineMachinepush_dqs_mineore58_user(_this, nP, nS, AutoMineMachinepush_dqs_mineore58_next);
        };
        void AutoMineMachinepush_dqs_moveore60_wrapper(struct AutoMineMachine* _this, int nDBSlot_S, struct _INVENKEY* pSKey, char bySNum, int nDBSlot_D, struct _INVENKEY* pDKey, char byDNum)
        {
           AutoMineMachinepush_dqs_moveore60_user(_this, nDBSlot_S, pSKey, bySNum, nDBSlot_D, pDKey, byDNum, AutoMineMachinepush_dqs_moveore60_next);
        };
        void AutoMineMachinepush_dqs_newowner62_wrapper(struct AutoMineMachine* _this)
        {
           AutoMineMachinepush_dqs_newowner62_user(_this, AutoMineMachinepush_dqs_newowner62_next);
        };
        void AutoMineMachinepush_dqs_selore64_wrapper(struct AutoMineMachine* _this)
        {
           AutoMineMachinepush_dqs_selore64_user(_this, AutoMineMachinepush_dqs_selore64_next);
        };
        void AutoMineMachinepush_dqs_workingstate66_wrapper(struct AutoMineMachine* _this)
        {
           AutoMineMachinepush_dqs_workingstate66_user(_this, AutoMineMachinepush_dqs_workingstate66_next);
        };
        
        void AutoMineMachinedtor_AutoMineMachine68_wrapper(struct AutoMineMachine* _this)
        {
           AutoMineMachinedtor_AutoMineMachine68_user(_this, AutoMineMachinedtor_AutoMineMachine68_next);
        };
        
        ::std::array<hook_record, 34> AutoMineMachine_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d0340L,
                (LPVOID *)&AutoMineMachinector_AutoMineMachine2_user,
                (LPVOID *)&AutoMineMachinector_AutoMineMachine2_next,
                (LPVOID)cast_pointer_function(AutoMineMachinector_AutoMineMachine2_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)())&AutoMineMachine::ctor_AutoMineMachine)
            },
            _hook_record {
                (LPVOID)0x1402d0ec0L,
                (LPVOID *)&AutoMineMachineChangeOwner4_user,
                (LPVOID *)&AutoMineMachineChangeOwner4_next,
                (LPVOID)cast_pointer_function(AutoMineMachineChangeOwner4_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(struct CGuild*))&AutoMineMachine::ChangeOwner)
            },
            _hook_record {
                (LPVOID)0x1402d1590L,
                (LPVOID *)&AutoMineMachineCharge6_user,
                (LPVOID *)&AutoMineMachineCharge6_next,
                (LPVOID)cast_pointer_function(AutoMineMachineCharge6_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(int, int, int))&AutoMineMachine::Charge)
            },
            _hook_record {
                (LPVOID)0x1402d1790L,
                (LPVOID *)&AutoMineMachineDischarge8_user,
                (LPVOID *)&AutoMineMachineDischarge8_next,
                (LPVOID)cast_pointer_function(AutoMineMachineDischarge8_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)())&AutoMineMachine::Discharge)
            },
            _hook_record {
                (LPVOID)0x1402d1250L,
                (LPVOID *)&AutoMineMachineGetMachineInfo10_user,
                (LPVOID *)&AutoMineMachineGetMachineInfo10_next,
                (LPVOID)cast_pointer_function(AutoMineMachineGetMachineInfo10_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(struct _DB_LOAD_AUTOMINE_MACHINE*))&AutoMineMachine::GetMachineInfo)
            },
            _hook_record {
                (LPVOID)0x1402d1ad0L,
                (LPVOID *)&AutoMineMachineGetOutOreInAutoMine12_user,
                (LPVOID *)&AutoMineMachineGetOutOreInAutoMine12_next,
                (LPVOID)cast_pointer_function(AutoMineMachineGetOutOreInAutoMine12_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(struct CPlayer*, char*))&AutoMineMachine::GetOutOreInAutoMine)
            },
            _hook_record {
                (LPVOID)0x14029d6f0L,
                (LPVOID *)&AutoMineMachineGetOwnerGuild14_user,
                (LPVOID *)&AutoMineMachineGetOwnerGuild14_next,
                (LPVOID)cast_pointer_function(AutoMineMachineGetOwnerGuild14_wrapper),
                (LPVOID)cast_pointer_function((struct CGuild*(AutoMineMachine::*)())&AutoMineMachine::GetOwnerGuild)
            },
            _hook_record {
                (LPVOID)0x1402d17b0L,
                (LPVOID *)&AutoMineMachineGetState16_user,
                (LPVOID *)&AutoMineMachineGetState16_next,
                (LPVOID)cast_pointer_function(AutoMineMachineGetState16_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(unsigned int*))&AutoMineMachine::GetState)
            },
            _hook_record {
                (LPVOID)0x1402d0570L,
                (LPVOID *)&AutoMineMachineInitialize18_user,
                (LPVOID *)&AutoMineMachineInitialize18_next,
                (LPVOID)cast_pointer_function(AutoMineMachineInitialize18_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachine::*)(char, char))&AutoMineMachine::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402d1020L,
                (LPVOID *)&AutoMineMachineIsMaster20_user,
                (LPVOID *)&AutoMineMachineIsMaster20_next,
                (LPVOID)cast_pointer_function(AutoMineMachineIsMaster20_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachine::*)(struct CPlayer*))&AutoMineMachine::IsMaster)
            },
            _hook_record {
                (LPVOID)0x1402d0940L,
                (LPVOID *)&AutoMineMachineLoadDatabase22_user,
                (LPVOID *)&AutoMineMachineLoadDatabase22_next,
                (LPVOID)cast_pointer_function(AutoMineMachineLoadDatabase22_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachine::*)(struct _DB_LOAD_AUTOMINE_MACHINE*))&AutoMineMachine::LoadDatabase)
            },
            _hook_record {
                (LPVOID)0x1402d2530L,
                (LPVOID *)&AutoMineMachineLoop24_user,
                (LPVOID *)&AutoMineMachineLoop24_next,
                (LPVOID)cast_pointer_function(AutoMineMachineLoop24_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)())&AutoMineMachine::Loop)
            },
            _hook_record {
                (LPVOID)0x1402d1800L,
                (LPVOID *)&AutoMineMachineMoveOreInAutoMine26_user,
                (LPVOID *)&AutoMineMachineMoveOreInAutoMine26_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMoveOreInAutoMine26_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(int, char, char, char, char))&AutoMineMachine::MoveOreInAutoMine)
            },
            _hook_record {
                (LPVOID)0x1402d1fd0L,
                (LPVOID *)&AutoMineMachineOreMerge28_user,
                (LPVOID *)&AutoMineMachineOreMerge28_next,
                (LPVOID)cast_pointer_function(AutoMineMachineOreMerge28_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(int, char*))&AutoMineMachine::OreMerge)
            },
            _hook_record {
                (LPVOID)0x1402d1430L,
                (LPVOID *)&AutoMineMachineSelectOre30_user,
                (LPVOID *)&AutoMineMachineSelectOre30_next,
                (LPVOID)cast_pointer_function(AutoMineMachineSelectOre30_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(int, char))&AutoMineMachine::SelectOre)
            },
            _hook_record {
                (LPVOID)0x1402d2830L,
                (LPVOID *)&AutoMineMachineSendMsg_MachineInfo32_user,
                (LPVOID *)&AutoMineMachineSendMsg_MachineInfo32_next,
                (LPVOID)cast_pointer_function(AutoMineMachineSendMsg_MachineInfo32_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(int))&AutoMineMachine::SendMsg_MachineInfo)
            },
            _hook_record {
                (LPVOID)0x1402d2a80L,
                (LPVOID *)&AutoMineMachineSendMsg_ResultCode34_user,
                (LPVOID *)&AutoMineMachineSendMsg_ResultCode34_next,
                (LPVOID)cast_pointer_function(AutoMineMachineSendMsg_ResultCode34_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(int, char, char))&AutoMineMachine::SendMsg_ResultCode)
            },
            _hook_record {
                (LPVOID)0x1402d7940L,
                (LPVOID *)&AutoMineMachineSetOpenUI36_user,
                (LPVOID *)&AutoMineMachineSetOpenUI36_next,
                (LPVOID)cast_pointer_function(AutoMineMachineSetOpenUI36_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(bool))&AutoMineMachine::SetOpenUI)
            },
            _hook_record {
                (LPVOID)0x1402d0d10L,
                (LPVOID *)&AutoMineMachineSetOwner38_user,
                (LPVOID *)&AutoMineMachineSetOwner38_next,
                (LPVOID)cast_pointer_function(AutoMineMachineSetOwner38_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachine::*)(char, char, struct CGuild*))&AutoMineMachine::SetOwner)
            },
            _hook_record {
                (LPVOID)0x1402d10b0L,
                (LPVOID *)&AutoMineMachineStart40_user,
                (LPVOID *)&AutoMineMachineStart40_next,
                (LPVOID)cast_pointer_function(AutoMineMachineStart40_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(int))&AutoMineMachine::Start)
            },
            _hook_record {
                (LPVOID)0x1402d1180L,
                (LPVOID *)&AutoMineMachineStop42_user,
                (LPVOID *)&AutoMineMachineStop42_next,
                (LPVOID)cast_pointer_function(AutoMineMachineStop42_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(int))&AutoMineMachine::Stop)
            },
            _hook_record {
                (LPVOID)0x1402d25e0L,
                (LPVOID *)&AutoMineMachineSubChargeCost44_user,
                (LPVOID *)&AutoMineMachineSubChargeCost44_next,
                (LPVOID)cast_pointer_function(AutoMineMachineSubChargeCost44_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(char, char*))&AutoMineMachine::SubChargeCost)
            },
            _hook_record {
                (LPVOID)0x1402d1520L,
                (LPVOID *)&AutoMineMachine_Convert_GoldToGage46_user,
                (LPVOID *)&AutoMineMachine_Convert_GoldToGage46_next,
                (LPVOID)cast_pointer_function(AutoMineMachine_Convert_GoldToGage46_wrapper),
                (LPVOID)cast_pointer_function((int(AutoMineMachine::*)(int))&AutoMineMachine::_Convert_GoldToGage)
            },
            _hook_record {
                (LPVOID)0x1402d07e0L,
                (LPVOID *)&AutoMineMachine_InitMineOre48_user,
                (LPVOID *)&AutoMineMachine_InitMineOre48_next,
                (LPVOID)cast_pointer_function(AutoMineMachine_InitMineOre48_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachine::*)())&AutoMineMachine::_InitMineOre)
            },
            _hook_record {
                (LPVOID)0x1402d20f0L,
                (LPVOID *)&AutoMineMachine_Mining50_user,
                (LPVOID *)&AutoMineMachine_Mining50_next,
                (LPVOID)cast_pointer_function(AutoMineMachine_Mining50_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)())&AutoMineMachine::_Mining)
            },
            _hook_record {
                (LPVOID)0x1402d2bd0L,
                (LPVOID *)&AutoMineMachinepush_dqs_battery_charge52_user,
                (LPVOID *)&AutoMineMachinepush_dqs_battery_charge52_next,
                (LPVOID)cast_pointer_function(AutoMineMachinepush_dqs_battery_charge52_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(uint16_t, int, int))&AutoMineMachine::push_dqs_battery_charge)
            },
            _hook_record {
                (LPVOID)0x1402d2db0L,
                (LPVOID *)&AutoMineMachinepush_dqs_battery_discharge54_user,
                (LPVOID *)&AutoMineMachinepush_dqs_battery_discharge54_next,
                (LPVOID)cast_pointer_function(AutoMineMachinepush_dqs_battery_discharge54_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)())&AutoMineMachine::push_dqs_battery_discharge)
            },
            _hook_record {
                (LPVOID)0x1402d2fa0L,
                (LPVOID *)&AutoMineMachinepush_dqs_getore56_user,
                (LPVOID *)&AutoMineMachinepush_dqs_getore56_next,
                (LPVOID)cast_pointer_function(AutoMineMachinepush_dqs_getore56_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(int, int, char))&AutoMineMachine::push_dqs_getore)
            },
            _hook_record {
                (LPVOID)0x1402d2e70L,
                (LPVOID *)&AutoMineMachinepush_dqs_mineore58_user,
                (LPVOID *)&AutoMineMachinepush_dqs_mineore58_next,
                (LPVOID)cast_pointer_function(AutoMineMachinepush_dqs_mineore58_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(int, int))&AutoMineMachine::push_dqs_mineore)
            },
            _hook_record {
                (LPVOID)0x1402d3090L,
                (LPVOID *)&AutoMineMachinepush_dqs_moveore60_user,
                (LPVOID *)&AutoMineMachinepush_dqs_moveore60_next,
                (LPVOID)cast_pointer_function(AutoMineMachinepush_dqs_moveore60_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)(int, struct _INVENKEY*, char, int, struct _INVENKEY*, char))&AutoMineMachine::push_dqs_moveore)
            },
            _hook_record {
                (LPVOID)0x1402d2b20L,
                (LPVOID *)&AutoMineMachinepush_dqs_newowner62_user,
                (LPVOID *)&AutoMineMachinepush_dqs_newowner62_next,
                (LPVOID)cast_pointer_function(AutoMineMachinepush_dqs_newowner62_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)())&AutoMineMachine::push_dqs_newowner)
            },
            _hook_record {
                (LPVOID)0x1402d3290L,
                (LPVOID *)&AutoMineMachinepush_dqs_selore64_user,
                (LPVOID *)&AutoMineMachinepush_dqs_selore64_next,
                (LPVOID)cast_pointer_function(AutoMineMachinepush_dqs_selore64_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)())&AutoMineMachine::push_dqs_selore)
            },
            _hook_record {
                (LPVOID)0x1402d31d0L,
                (LPVOID *)&AutoMineMachinepush_dqs_workingstate66_user,
                (LPVOID *)&AutoMineMachinepush_dqs_workingstate66_next,
                (LPVOID)cast_pointer_function(AutoMineMachinepush_dqs_workingstate66_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)())&AutoMineMachine::push_dqs_workingstate)
            },
            _hook_record {
                (LPVOID)0x1402d04a0L,
                (LPVOID *)&AutoMineMachinedtor_AutoMineMachine68_user,
                (LPVOID *)&AutoMineMachinedtor_AutoMineMachine68_next,
                (LPVOID)cast_pointer_function(AutoMineMachinedtor_AutoMineMachine68_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachine::*)())&AutoMineMachine::dtor_AutoMineMachine)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
