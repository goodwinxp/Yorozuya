#include <CMoneySupplyMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMoneySupplyMgrctor_CMoneySupplyMgr2_ptr CMoneySupplyMgrctor_CMoneySupplyMgr2_next(nullptr);
        Info::CMoneySupplyMgrctor_CMoneySupplyMgr2_clbk CMoneySupplyMgrctor_CMoneySupplyMgr2_user(nullptr);
        
        Info::CMoneySupplyMgrInitialize4_ptr CMoneySupplyMgrInitialize4_next(nullptr);
        Info::CMoneySupplyMgrInitialize4_clbk CMoneySupplyMgrInitialize4_user(nullptr);
        
        Info::CMoneySupplyMgrInstance6_ptr CMoneySupplyMgrInstance6_next(nullptr);
        Info::CMoneySupplyMgrInstance6_clbk CMoneySupplyMgrInstance6_user(nullptr);
        
        Info::CMoneySupplyMgrLoopMoneySupply8_ptr CMoneySupplyMgrLoopMoneySupply8_next(nullptr);
        Info::CMoneySupplyMgrLoopMoneySupply8_clbk CMoneySupplyMgrLoopMoneySupply8_user(nullptr);
        
        Info::CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_ptr CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_next(nullptr);
        Info::CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_clbk CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_user(nullptr);
        
        Info::CMoneySupplyMgrUpdateBuyData12_ptr CMoneySupplyMgrUpdateBuyData12_next(nullptr);
        Info::CMoneySupplyMgrUpdateBuyData12_clbk CMoneySupplyMgrUpdateBuyData12_user(nullptr);
        
        Info::CMoneySupplyMgrUpdateBuyUnitData14_ptr CMoneySupplyMgrUpdateBuyUnitData14_next(nullptr);
        Info::CMoneySupplyMgrUpdateBuyUnitData14_clbk CMoneySupplyMgrUpdateBuyUnitData14_user(nullptr);
        
        Info::CMoneySupplyMgrUpdateFeeMoneyData16_ptr CMoneySupplyMgrUpdateFeeMoneyData16_next(nullptr);
        Info::CMoneySupplyMgrUpdateFeeMoneyData16_clbk CMoneySupplyMgrUpdateFeeMoneyData16_user(nullptr);
        
        Info::CMoneySupplyMgrUpdateGateRewardMoneyData18_ptr CMoneySupplyMgrUpdateGateRewardMoneyData18_next(nullptr);
        Info::CMoneySupplyMgrUpdateGateRewardMoneyData18_clbk CMoneySupplyMgrUpdateGateRewardMoneyData18_user(nullptr);
        
        Info::CMoneySupplyMgrUpdateHonorGuildMoneyData20_ptr CMoneySupplyMgrUpdateHonorGuildMoneyData20_next(nullptr);
        Info::CMoneySupplyMgrUpdateHonorGuildMoneyData20_clbk CMoneySupplyMgrUpdateHonorGuildMoneyData20_user(nullptr);
        
        Info::CMoneySupplyMgrUpdateQuestRewardMoneyData22_ptr CMoneySupplyMgrUpdateQuestRewardMoneyData22_next(nullptr);
        Info::CMoneySupplyMgrUpdateQuestRewardMoneyData22_clbk CMoneySupplyMgrUpdateQuestRewardMoneyData22_user(nullptr);
        
        Info::CMoneySupplyMgrUpdateSellData24_ptr CMoneySupplyMgrUpdateSellData24_next(nullptr);
        Info::CMoneySupplyMgrUpdateSellData24_clbk CMoneySupplyMgrUpdateSellData24_user(nullptr);
        
        Info::CMoneySupplyMgrUpdateUnitRepairingChargesData26_ptr CMoneySupplyMgrUpdateUnitRepairingChargesData26_next(nullptr);
        Info::CMoneySupplyMgrUpdateUnitRepairingChargesData26_clbk CMoneySupplyMgrUpdateUnitRepairingChargesData26_user(nullptr);
        
        
        Info::CMoneySupplyMgrdtor_CMoneySupplyMgr31_ptr CMoneySupplyMgrdtor_CMoneySupplyMgr31_next(nullptr);
        Info::CMoneySupplyMgrdtor_CMoneySupplyMgr31_clbk CMoneySupplyMgrdtor_CMoneySupplyMgr31_user(nullptr);
        
        
        void CMoneySupplyMgrctor_CMoneySupplyMgr2_wrapper(struct CMoneySupplyMgr* _this)
        {
           CMoneySupplyMgrctor_CMoneySupplyMgr2_user(_this, CMoneySupplyMgrctor_CMoneySupplyMgr2_next);
        };
        void CMoneySupplyMgrInitialize4_wrapper(struct CMoneySupplyMgr* _this)
        {
           CMoneySupplyMgrInitialize4_user(_this, CMoneySupplyMgrInitialize4_next);
        };
        struct CMoneySupplyMgr* CMoneySupplyMgrInstance6_wrapper()
        {
           return CMoneySupplyMgrInstance6_user(CMoneySupplyMgrInstance6_next);
        };
        void CMoneySupplyMgrLoopMoneySupply8_wrapper(struct CMoneySupplyMgr* _this)
        {
           CMoneySupplyMgrLoopMoneySupply8_user(_this, CMoneySupplyMgrLoopMoneySupply8_next);
        };
        void CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_wrapper(struct CMoneySupplyMgr* _this, struct _MONEY_SUPPLY_DATA* pMSData)
        {
           CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_user(_this, pMSData, CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_next);
        };
        void CMoneySupplyMgrUpdateBuyData12_wrapper(struct CMoneySupplyMgr* _this, char byRace, int nLv, char* szClass, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateBuyData12_user(_this, byRace, nLv, szClass, nAmount, CMoneySupplyMgrUpdateBuyData12_next);
        };
        void CMoneySupplyMgrUpdateBuyUnitData14_wrapper(struct CMoneySupplyMgr* _this, int nLv, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateBuyUnitData14_user(_this, nLv, nAmount, CMoneySupplyMgrUpdateBuyUnitData14_next);
        };
        void CMoneySupplyMgrUpdateFeeMoneyData16_wrapper(struct CMoneySupplyMgr* _this, char byRace, int nLv, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateFeeMoneyData16_user(_this, byRace, nLv, nAmount, CMoneySupplyMgrUpdateFeeMoneyData16_next);
        };
        void CMoneySupplyMgrUpdateGateRewardMoneyData18_wrapper(struct CMoneySupplyMgr* _this, char byRace, int nLv, char* szClass, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateGateRewardMoneyData18_user(_this, byRace, nLv, szClass, nAmount, CMoneySupplyMgrUpdateGateRewardMoneyData18_next);
        };
        void CMoneySupplyMgrUpdateHonorGuildMoneyData20_wrapper(struct CMoneySupplyMgr* _this, char byTradeType, char byRace, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateHonorGuildMoneyData20_user(_this, byTradeType, byRace, nAmount, CMoneySupplyMgrUpdateHonorGuildMoneyData20_next);
        };
        void CMoneySupplyMgrUpdateQuestRewardMoneyData22_wrapper(struct CMoneySupplyMgr* _this, char byRace, int nLv, char* szClass, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateQuestRewardMoneyData22_user(_this, byRace, nLv, szClass, nAmount, CMoneySupplyMgrUpdateQuestRewardMoneyData22_next);
        };
        void CMoneySupplyMgrUpdateSellData24_wrapper(struct CMoneySupplyMgr* _this, char byRace, int nLv, char* szClass, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateSellData24_user(_this, byRace, nLv, szClass, nAmount, CMoneySupplyMgrUpdateSellData24_next);
        };
        void CMoneySupplyMgrUpdateUnitRepairingChargesData26_wrapper(struct CMoneySupplyMgr* _this, int nLv, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateUnitRepairingChargesData26_user(_this, nLv, nAmount, CMoneySupplyMgrUpdateUnitRepairingChargesData26_next);
        };
        
        void CMoneySupplyMgrdtor_CMoneySupplyMgr31_wrapper(struct CMoneySupplyMgr* _this)
        {
           CMoneySupplyMgrdtor_CMoneySupplyMgr31_user(_this, CMoneySupplyMgrdtor_CMoneySupplyMgr31_next);
        };
        
        ::std::array<hook_record, 14> CMoneySupplyMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x14042b630L,
                (LPVOID *)&CMoneySupplyMgrctor_CMoneySupplyMgr2_user,
                (LPVOID *)&CMoneySupplyMgrctor_CMoneySupplyMgr2_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrctor_CMoneySupplyMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)())&CMoneySupplyMgr::ctor_CMoneySupplyMgr)
            },
            _hook_record {
                (LPVOID)0x14042b680L,
                (LPVOID *)&CMoneySupplyMgrInitialize4_user,
                (LPVOID *)&CMoneySupplyMgrInitialize4_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrInitialize4_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)())&CMoneySupplyMgr::Initialize)
            },
            _hook_record {
                (LPVOID)0x140095070L,
                (LPVOID *)&CMoneySupplyMgrInstance6_user,
                (LPVOID *)&CMoneySupplyMgrInstance6_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrInstance6_wrapper),
                (LPVOID)cast_pointer_function((struct CMoneySupplyMgr*(*)())&CMoneySupplyMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x14042b6e0L,
                (LPVOID *)&CMoneySupplyMgrLoopMoneySupply8_user,
                (LPVOID *)&CMoneySupplyMgrLoopMoneySupply8_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrLoopMoneySupply8_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)())&CMoneySupplyMgr::LoopMoneySupply)
            },
            _hook_record {
                (LPVOID)0x14042f5f0L,
                (LPVOID *)&CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_user,
                (LPVOID *)&CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(struct _MONEY_SUPPLY_DATA*))&CMoneySupplyMgr::SendMsg_MoneySupplyDataToWeb)
            },
            _hook_record {
                (LPVOID)0x14042c4c0L,
                (LPVOID *)&CMoneySupplyMgrUpdateBuyData12_user,
                (LPVOID *)&CMoneySupplyMgrUpdateBuyData12_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateBuyData12_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, int, char*, unsigned int))&CMoneySupplyMgr::UpdateBuyData)
            },
            _hook_record {
                (LPVOID)0x14042f470L,
                (LPVOID *)&CMoneySupplyMgrUpdateBuyUnitData14_user,
                (LPVOID *)&CMoneySupplyMgrUpdateBuyUnitData14_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateBuyUnitData14_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(int, unsigned int))&CMoneySupplyMgr::UpdateBuyUnitData)
            },
            _hook_record {
                (LPVOID)0x14042f1b0L,
                (LPVOID *)&CMoneySupplyMgrUpdateFeeMoneyData16_user,
                (LPVOID *)&CMoneySupplyMgrUpdateFeeMoneyData16_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateFeeMoneyData16_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, int, unsigned int))&CMoneySupplyMgr::UpdateFeeMoneyData)
            },
            _hook_record {
                (LPVOID)0x14042e520L,
                (LPVOID *)&CMoneySupplyMgrUpdateGateRewardMoneyData18_user,
                (LPVOID *)&CMoneySupplyMgrUpdateGateRewardMoneyData18_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateGateRewardMoneyData18_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, int, char*, unsigned int))&CMoneySupplyMgr::UpdateGateRewardMoneyData)
            },
            _hook_record {
                (LPVOID)0x14042f2d0L,
                (LPVOID *)&CMoneySupplyMgrUpdateHonorGuildMoneyData20_user,
                (LPVOID *)&CMoneySupplyMgrUpdateHonorGuildMoneyData20_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateHonorGuildMoneyData20_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, char, unsigned int))&CMoneySupplyMgr::UpdateHonorGuildMoneyData)
            },
            _hook_record {
                (LPVOID)0x14042d890L,
                (LPVOID *)&CMoneySupplyMgrUpdateQuestRewardMoneyData22_user,
                (LPVOID *)&CMoneySupplyMgrUpdateQuestRewardMoneyData22_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateQuestRewardMoneyData22_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, int, char*, unsigned int))&CMoneySupplyMgr::UpdateQuestRewardMoneyData)
            },
            _hook_record {
                (LPVOID)0x14042b7d0L,
                (LPVOID *)&CMoneySupplyMgrUpdateSellData24_user,
                (LPVOID *)&CMoneySupplyMgrUpdateSellData24_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateSellData24_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, int, char*, unsigned int))&CMoneySupplyMgr::UpdateSellData)
            },
            _hook_record {
                (LPVOID)0x14042f530L,
                (LPVOID *)&CMoneySupplyMgrUpdateUnitRepairingChargesData26_user,
                (LPVOID *)&CMoneySupplyMgrUpdateUnitRepairingChargesData26_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateUnitRepairingChargesData26_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(int, unsigned int))&CMoneySupplyMgr::UpdateUnitRepairingChargesData)
            },
            _hook_record {
                (LPVOID)0x14042b660L,
                (LPVOID *)&CMoneySupplyMgrdtor_CMoneySupplyMgr31_user,
                (LPVOID *)&CMoneySupplyMgrdtor_CMoneySupplyMgr31_next,
                (LPVOID)cast_pointer_function(CMoneySupplyMgrdtor_CMoneySupplyMgr31_wrapper),
                (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)())&CMoneySupplyMgr::dtor_CMoneySupplyMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
