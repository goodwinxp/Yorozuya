#include <AutoMineMachineMngDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::AutoMineMachineMngctor_AutoMineMachineMng2_ptr AutoMineMachineMngctor_AutoMineMachineMng2_next(nullptr);
        Info::AutoMineMachineMngctor_AutoMineMachineMng2_clbk AutoMineMachineMngctor_AutoMineMachineMng2_user(nullptr);
        
        Info::AutoMineMachineMngBatteryCharge4_ptr AutoMineMachineMngBatteryCharge4_next(nullptr);
        Info::AutoMineMachineMngBatteryCharge4_clbk AutoMineMachineMngBatteryCharge4_user(nullptr);
        
        Info::AutoMineMachineMngChangeOwner6_ptr AutoMineMachineMngChangeOwner6_next(nullptr);
        Info::AutoMineMachineMngChangeOwner6_clbk AutoMineMachineMngChangeOwner6_user(nullptr);
        
        Info::AutoMineMachineMngCloseUI8_ptr AutoMineMachineMngCloseUI8_next(nullptr);
        Info::AutoMineMachineMngCloseUI8_clbk AutoMineMachineMngCloseUI8_user(nullptr);
        
        Info::AutoMineMachineMngCommand10_ptr AutoMineMachineMngCommand10_next(nullptr);
        Info::AutoMineMachineMngCommand10_clbk AutoMineMachineMngCommand10_user(nullptr);
        
        Info::AutoMineMachineMngGetMachine12_ptr AutoMineMachineMngGetMachine12_next(nullptr);
        Info::AutoMineMachineMngGetMachine12_clbk AutoMineMachineMngGetMachine12_user(nullptr);
        
        Info::AutoMineMachineMngGetOutOre14_ptr AutoMineMachineMngGetOutOre14_next(nullptr);
        Info::AutoMineMachineMngGetOutOre14_clbk AutoMineMachineMngGetOutOre14_user(nullptr);
        
        Info::AutoMineMachineMngInitialzie16_ptr AutoMineMachineMngInitialzie16_next(nullptr);
        Info::AutoMineMachineMngInitialzie16_clbk AutoMineMachineMngInitialzie16_user(nullptr);
        
        Info::AutoMineMachineMngInstance18_ptr AutoMineMachineMngInstance18_next(nullptr);
        Info::AutoMineMachineMngInstance18_clbk AutoMineMachineMngInstance18_user(nullptr);
        
        Info::AutoMineMachineMngLoop20_ptr AutoMineMachineMngLoop20_next(nullptr);
        Info::AutoMineMachineMngLoop20_clbk AutoMineMachineMngLoop20_user(nullptr);
        
        Info::AutoMineMachineMngMoveOrePos22_ptr AutoMineMachineMngMoveOrePos22_next(nullptr);
        Info::AutoMineMachineMngMoveOrePos22_clbk AutoMineMachineMngMoveOrePos22_user(nullptr);
        
        Info::AutoMineMachineMngOpenUI24_ptr AutoMineMachineMngOpenUI24_next(nullptr);
        Info::AutoMineMachineMngOpenUI24_clbk AutoMineMachineMngOpenUI24_user(nullptr);
        
        Info::AutoMineMachineMngOreMerge26_ptr AutoMineMachineMngOreMerge26_next(nullptr);
        Info::AutoMineMachineMngOreMerge26_clbk AutoMineMachineMngOreMerge26_user(nullptr);
        
        Info::AutoMineMachineMngRelease28_ptr AutoMineMachineMngRelease28_next(nullptr);
        Info::AutoMineMachineMngRelease28_clbk AutoMineMachineMngRelease28_user(nullptr);
        
        Info::AutoMineMachineMngSelectOreType30_ptr AutoMineMachineMngSelectOreType30_next(nullptr);
        Info::AutoMineMachineMngSelectOreType30_clbk AutoMineMachineMngSelectOreType30_user(nullptr);
        
        Info::AutoMineMachineMngSendMsg_ResultCode32_ptr AutoMineMachineMngSendMsg_ResultCode32_next(nullptr);
        Info::AutoMineMachineMngSendMsg_ResultCode32_clbk AutoMineMachineMngSendMsg_ResultCode32_user(nullptr);
        
        Info::AutoMineMachineMngStartWorkMachine34_ptr AutoMineMachineMngStartWorkMachine34_next(nullptr);
        Info::AutoMineMachineMngStartWorkMachine34_clbk AutoMineMachineMngStartWorkMachine34_user(nullptr);
        
        Info::AutoMineMachineMngStopWorkMachine36_ptr AutoMineMachineMngStopWorkMachine36_next(nullptr);
        Info::AutoMineMachineMngStopWorkMachine36_clbk AutoMineMachineMngStopWorkMachine36_user(nullptr);
        
        Info::AutoMineMachineMng_db_qry_insert_newowner38_ptr AutoMineMachineMng_db_qry_insert_newowner38_next(nullptr);
        Info::AutoMineMachineMng_db_qry_insert_newowner38_clbk AutoMineMachineMng_db_qry_insert_newowner38_user(nullptr);
        
        Info::AutoMineMachineMng_db_qry_update_battery_charge40_ptr AutoMineMachineMng_db_qry_update_battery_charge40_next(nullptr);
        Info::AutoMineMachineMng_db_qry_update_battery_charge40_clbk AutoMineMachineMng_db_qry_update_battery_charge40_user(nullptr);
        
        Info::AutoMineMachineMng_db_qry_update_battery_discharge42_ptr AutoMineMachineMng_db_qry_update_battery_discharge42_next(nullptr);
        Info::AutoMineMachineMng_db_qry_update_battery_discharge42_clbk AutoMineMachineMng_db_qry_update_battery_discharge42_user(nullptr);
        
        Info::AutoMineMachineMng_db_qry_update_mineore44_ptr AutoMineMachineMng_db_qry_update_mineore44_next(nullptr);
        Info::AutoMineMachineMng_db_qry_update_mineore44_clbk AutoMineMachineMng_db_qry_update_mineore44_user(nullptr);
        
        Info::AutoMineMachineMng_db_qry_update_moveore46_ptr AutoMineMachineMng_db_qry_update_moveore46_next(nullptr);
        Info::AutoMineMachineMng_db_qry_update_moveore46_clbk AutoMineMachineMng_db_qry_update_moveore46_user(nullptr);
        
        Info::AutoMineMachineMng_db_qry_update_selore48_ptr AutoMineMachineMng_db_qry_update_selore48_next(nullptr);
        Info::AutoMineMachineMng_db_qry_update_selore48_clbk AutoMineMachineMng_db_qry_update_selore48_user(nullptr);
        
        Info::AutoMineMachineMng_db_qry_update_workstate50_ptr AutoMineMachineMng_db_qry_update_workstate50_next(nullptr);
        Info::AutoMineMachineMng_db_qry_update_workstate50_clbk AutoMineMachineMng_db_qry_update_workstate50_user(nullptr);
        
        Info::AutoMineMachineMngget_type54_ptr AutoMineMachineMngget_type54_next(nullptr);
        Info::AutoMineMachineMngget_type54_clbk AutoMineMachineMngget_type54_user(nullptr);
        
        Info::AutoMineMachineMngrequest_db_query56_ptr AutoMineMachineMngrequest_db_query56_next(nullptr);
        Info::AutoMineMachineMngrequest_db_query56_clbk AutoMineMachineMngrequest_db_query56_user(nullptr);
        
        Info::AutoMineMachineMngresult_db_query58_ptr AutoMineMachineMngresult_db_query58_next(nullptr);
        Info::AutoMineMachineMngresult_db_query58_clbk AutoMineMachineMngresult_db_query58_user(nullptr);
        
        
        Info::AutoMineMachineMngdtor_AutoMineMachineMng60_ptr AutoMineMachineMngdtor_AutoMineMachineMng60_next(nullptr);
        Info::AutoMineMachineMngdtor_AutoMineMachineMng60_clbk AutoMineMachineMngdtor_AutoMineMachineMng60_user(nullptr);
        
        
        void AutoMineMachineMngctor_AutoMineMachineMng2_wrapper(struct AutoMineMachineMng* _this)
        {
           AutoMineMachineMngctor_AutoMineMachineMng2_user(_this, AutoMineMachineMngctor_AutoMineMachineMng2_next);
        };
        bool AutoMineMachineMngBatteryCharge4_wrapper(struct AutoMineMachineMng* _this, int n, char* pMsg)
        {
           return AutoMineMachineMngBatteryCharge4_user(_this, n, pMsg, AutoMineMachineMngBatteryCharge4_next);
        };
        void AutoMineMachineMngChangeOwner6_wrapper(struct AutoMineMachineMng* _this, int nRaceCode, struct CGuild* pGuild, char byCollisionType)
        {
           AutoMineMachineMngChangeOwner6_user(_this, nRaceCode, pGuild, byCollisionType, AutoMineMachineMngChangeOwner6_next);
        };
        bool AutoMineMachineMngCloseUI8_wrapper(struct AutoMineMachineMng* _this, int n)
        {
           return AutoMineMachineMngCloseUI8_user(_this, n, AutoMineMachineMngCloseUI8_next);
        };
        bool AutoMineMachineMngCommand10_wrapper(struct AutoMineMachineMng* _this, int n, int nType, char* pMsg)
        {
           return AutoMineMachineMngCommand10_user(_this, n, nType, pMsg, AutoMineMachineMngCommand10_next);
        };
        struct AutoMineMachine* AutoMineMachineMngGetMachine12_wrapper(struct AutoMineMachineMng* _this, char byRace, char byCollisionType)
        {
           return AutoMineMachineMngGetMachine12_user(_this, byRace, byCollisionType, AutoMineMachineMngGetMachine12_next);
        };
        bool AutoMineMachineMngGetOutOre14_wrapper(struct AutoMineMachineMng* _this, int n, char* pMsg)
        {
           return AutoMineMachineMngGetOutOre14_user(_this, n, pMsg, AutoMineMachineMngGetOutOre14_next);
        };
        bool AutoMineMachineMngInitialzie16_wrapper(struct AutoMineMachineMng* _this)
        {
           return AutoMineMachineMngInitialzie16_user(_this, AutoMineMachineMngInitialzie16_next);
        };
        struct AutoMineMachineMng* AutoMineMachineMngInstance18_wrapper()
        {
           return AutoMineMachineMngInstance18_user(AutoMineMachineMngInstance18_next);
        };
        void AutoMineMachineMngLoop20_wrapper(struct AutoMineMachineMng* _this)
        {
           AutoMineMachineMngLoop20_user(_this, AutoMineMachineMngLoop20_next);
        };
        bool AutoMineMachineMngMoveOrePos22_wrapper(struct AutoMineMachineMng* _this, int n, char* pMsg)
        {
           return AutoMineMachineMngMoveOrePos22_user(_this, n, pMsg, AutoMineMachineMngMoveOrePos22_next);
        };
        bool AutoMineMachineMngOpenUI24_wrapper(struct AutoMineMachineMng* _this, int n)
        {
           return AutoMineMachineMngOpenUI24_user(_this, n, AutoMineMachineMngOpenUI24_next);
        };
        bool AutoMineMachineMngOreMerge26_wrapper(struct AutoMineMachineMng* _this, int n, char* pMsg)
        {
           return AutoMineMachineMngOreMerge26_user(_this, n, pMsg, AutoMineMachineMngOreMerge26_next);
        };
        void AutoMineMachineMngRelease28_wrapper()
        {
           AutoMineMachineMngRelease28_user(AutoMineMachineMngRelease28_next);
        };
        bool AutoMineMachineMngSelectOreType30_wrapper(struct AutoMineMachineMng* _this, int n, char* pMsg)
        {
           return AutoMineMachineMngSelectOreType30_user(_this, n, pMsg, AutoMineMachineMngSelectOreType30_next);
        };
        void AutoMineMachineMngSendMsg_ResultCode32_wrapper(struct AutoMineMachineMng* _this, int n, char byType, char byRetCode)
        {
           AutoMineMachineMngSendMsg_ResultCode32_user(_this, n, byType, byRetCode, AutoMineMachineMngSendMsg_ResultCode32_next);
        };
        bool AutoMineMachineMngStartWorkMachine34_wrapper(struct AutoMineMachineMng* _this, int n)
        {
           return AutoMineMachineMngStartWorkMachine34_user(_this, n, AutoMineMachineMngStartWorkMachine34_next);
        };
        bool AutoMineMachineMngStopWorkMachine36_wrapper(struct AutoMineMachineMng* _this, int n)
        {
           return AutoMineMachineMngStopWorkMachine36_user(_this, n, AutoMineMachineMngStopWorkMachine36_next);
        };
        char AutoMineMachineMng_db_qry_insert_newowner38_wrapper(struct AutoMineMachineMng* _this, char* pdata)
        {
           return AutoMineMachineMng_db_qry_insert_newowner38_user(_this, pdata, AutoMineMachineMng_db_qry_insert_newowner38_next);
        };
        char AutoMineMachineMng_db_qry_update_battery_charge40_wrapper(struct AutoMineMachineMng* _this, char* pdata)
        {
           return AutoMineMachineMng_db_qry_update_battery_charge40_user(_this, pdata, AutoMineMachineMng_db_qry_update_battery_charge40_next);
        };
        char AutoMineMachineMng_db_qry_update_battery_discharge42_wrapper(struct AutoMineMachineMng* _this, char* pdata)
        {
           return AutoMineMachineMng_db_qry_update_battery_discharge42_user(_this, pdata, AutoMineMachineMng_db_qry_update_battery_discharge42_next);
        };
        char AutoMineMachineMng_db_qry_update_mineore44_wrapper(struct AutoMineMachineMng* _this, char* pdata)
        {
           return AutoMineMachineMng_db_qry_update_mineore44_user(_this, pdata, AutoMineMachineMng_db_qry_update_mineore44_next);
        };
        char AutoMineMachineMng_db_qry_update_moveore46_wrapper(struct AutoMineMachineMng* _this, char* pdata)
        {
           return AutoMineMachineMng_db_qry_update_moveore46_user(_this, pdata, AutoMineMachineMng_db_qry_update_moveore46_next);
        };
        char AutoMineMachineMng_db_qry_update_selore48_wrapper(struct AutoMineMachineMng* _this, char* pdata)
        {
           return AutoMineMachineMng_db_qry_update_selore48_user(_this, pdata, AutoMineMachineMng_db_qry_update_selore48_next);
        };
        char AutoMineMachineMng_db_qry_update_workstate50_wrapper(struct AutoMineMachineMng* _this, char* pdata)
        {
           return AutoMineMachineMng_db_qry_update_workstate50_user(_this, pdata, AutoMineMachineMng_db_qry_update_workstate50_next);
        };
        char AutoMineMachineMngget_type54_wrapper(struct AutoMineMachineMng* _this, struct CPlayer* pUser, char byRace)
        {
           return AutoMineMachineMngget_type54_user(_this, pUser, byRace, AutoMineMachineMngget_type54_next);
        };
        char AutoMineMachineMngrequest_db_query56_wrapper(struct AutoMineMachineMng* _this, char* pdata)
        {
           return AutoMineMachineMngrequest_db_query56_user(_this, pdata, AutoMineMachineMngrequest_db_query56_next);
        };
        void AutoMineMachineMngresult_db_query58_wrapper(struct AutoMineMachineMng* _this, char byRet, char* pdata)
        {
           AutoMineMachineMngresult_db_query58_user(_this, byRet, pdata, AutoMineMachineMngresult_db_query58_next);
        };
        
        void AutoMineMachineMngdtor_AutoMineMachineMng60_wrapper(struct AutoMineMachineMng* _this)
        {
           AutoMineMachineMngdtor_AutoMineMachineMng60_user(_this, AutoMineMachineMngdtor_AutoMineMachineMng60_next);
        };
        
        ::std::array<hook_record, 29> AutoMineMachineMng_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d5d10L,
                (LPVOID *)&AutoMineMachineMngctor_AutoMineMachineMng2_user,
                (LPVOID *)&AutoMineMachineMngctor_AutoMineMachineMng2_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngctor_AutoMineMachineMng2_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachineMng::*)())&AutoMineMachineMng::ctor_AutoMineMachineMng)
            },
            _hook_record {
                (LPVOID)0x1402d6980L,
                (LPVOID *)&AutoMineMachineMngBatteryCharge4_user,
                (LPVOID *)&AutoMineMachineMngBatteryCharge4_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngBatteryCharge4_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachineMng::*)(int, char*))&AutoMineMachineMng::BatteryCharge)
            },
            _hook_record {
                (LPVOID)0x1402d60a0L,
                (LPVOID *)&AutoMineMachineMngChangeOwner6_user,
                (LPVOID *)&AutoMineMachineMngChangeOwner6_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngChangeOwner6_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachineMng::*)(int, struct CGuild*, char))&AutoMineMachineMng::ChangeOwner)
            },
            _hook_record {
                (LPVOID)0x1402d6370L,
                (LPVOID *)&AutoMineMachineMngCloseUI8_user,
                (LPVOID *)&AutoMineMachineMngCloseUI8_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngCloseUI8_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachineMng::*)(int))&AutoMineMachineMng::CloseUI)
            },
            _hook_record {
                (LPVOID)0x1402d61d0L,
                (LPVOID *)&AutoMineMachineMngCommand10_user,
                (LPVOID *)&AutoMineMachineMngCommand10_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngCommand10_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachineMng::*)(int, int, char*))&AutoMineMachineMng::Command)
            },
            _hook_record {
                (LPVOID)0x14029d710L,
                (LPVOID *)&AutoMineMachineMngGetMachine12_user,
                (LPVOID *)&AutoMineMachineMngGetMachine12_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngGetMachine12_wrapper),
                (LPVOID)cast_pointer_function((struct AutoMineMachine*(AutoMineMachineMng::*)(char, char))&AutoMineMachineMng::GetMachine)
            },
            _hook_record {
                (LPVOID)0x1402d6750L,
                (LPVOID *)&AutoMineMachineMngGetOutOre14_user,
                (LPVOID *)&AutoMineMachineMngGetOutOre14_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngGetOutOre14_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachineMng::*)(int, char*))&AutoMineMachineMng::GetOutOre)
            },
            _hook_record {
                (LPVOID)0x1402d5dc0L,
                (LPVOID *)&AutoMineMachineMngInitialzie16_user,
                (LPVOID *)&AutoMineMachineMngInitialzie16_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngInitialzie16_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachineMng::*)())&AutoMineMachineMng::Initialzie)
            },
            _hook_record {
                (LPVOID)0x1402d5bd0L,
                (LPVOID *)&AutoMineMachineMngInstance18_user,
                (LPVOID *)&AutoMineMachineMngInstance18_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngInstance18_wrapper),
                (LPVOID)cast_pointer_function((struct AutoMineMachineMng*(*)())&AutoMineMachineMng::Instance)
            },
            _hook_record {
                (LPVOID)0x1402d6110L,
                (LPVOID *)&AutoMineMachineMngLoop20_user,
                (LPVOID *)&AutoMineMachineMngLoop20_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngLoop20_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachineMng::*)())&AutoMineMachineMng::Loop)
            },
            _hook_record {
                (LPVOID)0x1402d6850L,
                (LPVOID *)&AutoMineMachineMngMoveOrePos22_user,
                (LPVOID *)&AutoMineMachineMngMoveOrePos22_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngMoveOrePos22_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachineMng::*)(int, char*))&AutoMineMachineMng::MoveOrePos)
            },
            _hook_record {
                (LPVOID)0x1402d61f0L,
                (LPVOID *)&AutoMineMachineMngOpenUI24_user,
                (LPVOID *)&AutoMineMachineMngOpenUI24_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngOpenUI24_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachineMng::*)(int))&AutoMineMachineMng::OpenUI)
            },
            _hook_record {
                (LPVOID)0x1402d6a90L,
                (LPVOID *)&AutoMineMachineMngOreMerge26_user,
                (LPVOID *)&AutoMineMachineMngOreMerge26_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngOreMerge26_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachineMng::*)(int, char*))&AutoMineMachineMng::OreMerge)
            },
            _hook_record {
                (LPVOID)0x1402d5c90L,
                (LPVOID *)&AutoMineMachineMngRelease28_user,
                (LPVOID *)&AutoMineMachineMngRelease28_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngRelease28_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&AutoMineMachineMng::Release)
            },
            _hook_record {
                (LPVOID)0x1402d6640L,
                (LPVOID *)&AutoMineMachineMngSelectOreType30_user,
                (LPVOID *)&AutoMineMachineMngSelectOreType30_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngSelectOreType30_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachineMng::*)(int, char*))&AutoMineMachineMng::SelectOreType)
            },
            _hook_record {
                (LPVOID)0x1402d6b90L,
                (LPVOID *)&AutoMineMachineMngSendMsg_ResultCode32_user,
                (LPVOID *)&AutoMineMachineMngSendMsg_ResultCode32_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngSendMsg_ResultCode32_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachineMng::*)(int, char, char))&AutoMineMachineMng::SendMsg_ResultCode)
            },
            _hook_record {
                (LPVOID)0x1402d6460L,
                (LPVOID *)&AutoMineMachineMngStartWorkMachine34_user,
                (LPVOID *)&AutoMineMachineMngStartWorkMachine34_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngStartWorkMachine34_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachineMng::*)(int))&AutoMineMachineMng::StartWorkMachine)
            },
            _hook_record {
                (LPVOID)0x1402d6550L,
                (LPVOID *)&AutoMineMachineMngStopWorkMachine36_user,
                (LPVOID *)&AutoMineMachineMngStopWorkMachine36_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngStopWorkMachine36_wrapper),
                (LPVOID)cast_pointer_function((bool(AutoMineMachineMng::*)(int))&AutoMineMachineMng::StopWorkMachine)
            },
            _hook_record {
                (LPVOID)0x1402d6dc0L,
                (LPVOID *)&AutoMineMachineMng_db_qry_insert_newowner38_user,
                (LPVOID *)&AutoMineMachineMng_db_qry_insert_newowner38_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMng_db_qry_insert_newowner38_wrapper),
                (LPVOID)cast_pointer_function((char(AutoMineMachineMng::*)(char*))&AutoMineMachineMng::_db_qry_insert_newowner)
            },
            _hook_record {
                (LPVOID)0x1402d6ed0L,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_battery_charge40_user,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_battery_charge40_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMng_db_qry_update_battery_charge40_wrapper),
                (LPVOID)cast_pointer_function((char(AutoMineMachineMng::*)(char*))&AutoMineMachineMng::_db_qry_update_battery_charge)
            },
            _hook_record {
                (LPVOID)0x1402d6fc0L,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_battery_discharge42_user,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_battery_discharge42_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMng_db_qry_update_battery_discharge42_wrapper),
                (LPVOID)cast_pointer_function((char(AutoMineMachineMng::*)(char*))&AutoMineMachineMng::_db_qry_update_battery_discharge)
            },
            _hook_record {
                (LPVOID)0x1402d7040L,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_mineore44_user,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_mineore44_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMng_db_qry_update_mineore44_wrapper),
                (LPVOID)cast_pointer_function((char(AutoMineMachineMng::*)(char*))&AutoMineMachineMng::_db_qry_update_mineore)
            },
            _hook_record {
                (LPVOID)0x1402d71f0L,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_moveore46_user,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_moveore46_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMng_db_qry_update_moveore46_wrapper),
                (LPVOID)cast_pointer_function((char(AutoMineMachineMng::*)(char*))&AutoMineMachineMng::_db_qry_update_moveore)
            },
            _hook_record {
                (LPVOID)0x1402d7170L,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_selore48_user,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_selore48_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMng_db_qry_update_selore48_wrapper),
                (LPVOID)cast_pointer_function((char(AutoMineMachineMng::*)(char*))&AutoMineMachineMng::_db_qry_update_selore)
            },
            _hook_record {
                (LPVOID)0x1402d70f0L,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_workstate50_user,
                (LPVOID *)&AutoMineMachineMng_db_qry_update_workstate50_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMng_db_qry_update_workstate50_wrapper),
                (LPVOID)cast_pointer_function((char(AutoMineMachineMng::*)(char*))&AutoMineMachineMng::_db_qry_update_workstate)
            },
            _hook_record {
                (LPVOID)0x1402d6000L,
                (LPVOID *)&AutoMineMachineMngget_type54_user,
                (LPVOID *)&AutoMineMachineMngget_type54_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngget_type54_wrapper),
                (LPVOID)cast_pointer_function((char(AutoMineMachineMng::*)(struct CPlayer*, char))&AutoMineMachineMng::get_type)
            },
            _hook_record {
                (LPVOID)0x1402d6c30L,
                (LPVOID *)&AutoMineMachineMngrequest_db_query56_user,
                (LPVOID *)&AutoMineMachineMngrequest_db_query56_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngrequest_db_query56_wrapper),
                (LPVOID)cast_pointer_function((char(AutoMineMachineMng::*)(char*))&AutoMineMachineMng::request_db_query)
            },
            _hook_record {
                (LPVOID)0x1402d6d30L,
                (LPVOID *)&AutoMineMachineMngresult_db_query58_user,
                (LPVOID *)&AutoMineMachineMngresult_db_query58_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngresult_db_query58_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachineMng::*)(char, char*))&AutoMineMachineMng::result_db_query)
            },
            _hook_record {
                (LPVOID)0x1402d5d70L,
                (LPVOID *)&AutoMineMachineMngdtor_AutoMineMachineMng60_user,
                (LPVOID *)&AutoMineMachineMngdtor_AutoMineMachineMng60_next,
                (LPVOID)cast_pointer_function(AutoMineMachineMngdtor_AutoMineMachineMng60_wrapper),
                (LPVOID)cast_pointer_function((void(AutoMineMachineMng::*)())&AutoMineMachineMng::dtor_AutoMineMachineMng)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
