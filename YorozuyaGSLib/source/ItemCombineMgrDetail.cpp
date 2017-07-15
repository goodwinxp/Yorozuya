#include <ItemCombineMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::ItemCombineMgrCheckLoadData2_ptr ItemCombineMgrCheckLoadData2_next(nullptr);
        Info::ItemCombineMgrCheckLoadData2_clbk ItemCombineMgrCheckLoadData2_user(nullptr);
        
        Info::ItemCombineMgrClearDB_CombineResult4_ptr ItemCombineMgrClearDB_CombineResult4_next(nullptr);
        Info::ItemCombineMgrClearDB_CombineResult4_clbk ItemCombineMgrClearDB_CombineResult4_user(nullptr);
        
        Info::ItemCombineMgrConsumeMeterial_And_CalculateNewItems6_ptr ItemCombineMgrConsumeMeterial_And_CalculateNewItems6_next(nullptr);
        Info::ItemCombineMgrConsumeMeterial_And_CalculateNewItems6_clbk ItemCombineMgrConsumeMeterial_And_CalculateNewItems6_user(nullptr);
        
        Info::ItemCombineMgrInitMgr8_ptr ItemCombineMgrInitMgr8_next(nullptr);
        Info::ItemCombineMgrInitMgr8_clbk ItemCombineMgrInitMgr8_user(nullptr);
        
        
        Info::ItemCombineMgrctor_ItemCombineMgr10_ptr ItemCombineMgrctor_ItemCombineMgr10_next(nullptr);
        Info::ItemCombineMgrctor_ItemCombineMgr10_clbk ItemCombineMgrctor_ItemCombineMgr10_user(nullptr);
        
        Info::ItemCombineMgrLoadDB_CombineResult12_ptr ItemCombineMgrLoadDB_CombineResult12_next(nullptr);
        Info::ItemCombineMgrLoadDB_CombineResult12_clbk ItemCombineMgrLoadDB_CombineResult12_user(nullptr);
        
        Info::ItemCombineMgrLoadData14_ptr ItemCombineMgrLoadData14_next(nullptr);
        Info::ItemCombineMgrLoadData14_clbk ItemCombineMgrLoadData14_user(nullptr);
        
        Info::ItemCombineMgrMakeNewItems16_ptr ItemCombineMgrMakeNewItems16_next(nullptr);
        Info::ItemCombineMgrMakeNewItems16_clbk ItemCombineMgrMakeNewItems16_user(nullptr);
        
        Info::ItemCombineMgrOnPlayerCreateCompleteProc18_ptr ItemCombineMgrOnPlayerCreateCompleteProc18_next(nullptr);
        Info::ItemCombineMgrOnPlayerCreateCompleteProc18_clbk ItemCombineMgrOnPlayerCreateCompleteProc18_user(nullptr);
        
        Info::ItemCombineMgrRequestCombineAcceptProcess20_ptr ItemCombineMgrRequestCombineAcceptProcess20_next(nullptr);
        Info::ItemCombineMgrRequestCombineAcceptProcess20_clbk ItemCombineMgrRequestCombineAcceptProcess20_user(nullptr);
        
        Info::ItemCombineMgrRequestCombineProcess22_ptr ItemCombineMgrRequestCombineProcess22_next(nullptr);
        Info::ItemCombineMgrRequestCombineProcess22_clbk ItemCombineMgrRequestCombineProcess22_user(nullptr);
        
        Info::ItemCombineMgrUpdateDB_CombineResult24_ptr ItemCombineMgrUpdateDB_CombineResult24_next(nullptr);
        Info::ItemCombineMgrUpdateDB_CombineResult24_clbk ItemCombineMgrUpdateDB_CombineResult24_user(nullptr);
        
        
        Info::ItemCombineMgrdtor_ItemCombineMgr26_ptr ItemCombineMgrdtor_ItemCombineMgr26_next(nullptr);
        Info::ItemCombineMgrdtor_ItemCombineMgr26_clbk ItemCombineMgrdtor_ItemCombineMgr26_user(nullptr);
        
        bool ItemCombineMgrCheckLoadData2_wrapper()
        {
           return ItemCombineMgrCheckLoadData2_user(ItemCombineMgrCheckLoadData2_next);
        };
        char ItemCombineMgrClearDB_CombineResult4_wrapper(struct ItemCombineMgr* _this)
        {
           return ItemCombineMgrClearDB_CombineResult4_user(_this, ItemCombineMgrClearDB_CombineResult4_next);
        };
        char ItemCombineMgrConsumeMeterial_And_CalculateNewItems6_wrapper(struct ItemCombineMgr* _this, struct _STORAGE_LIST::_db_con** pMt_Sv_Inv, char byMtSlotNum, struct _combine_ex_item_request_clzo::_list* pipMaterials, struct _combine_ex_item_result_zocl* pSaveData, struct _ItemCombine_exp_fld* pfld, char byLinkTableIndex, int nType)
        {
           return ItemCombineMgrConsumeMeterial_And_CalculateNewItems6_user(_this, pMt_Sv_Inv, byMtSlotNum, pipMaterials, pSaveData, pfld, byLinkTableIndex, nType, ItemCombineMgrConsumeMeterial_And_CalculateNewItems6_next);
        };
        void ItemCombineMgrInitMgr8_wrapper(struct ItemCombineMgr* _this, struct CPlayer* pOne)
        {
           ItemCombineMgrInitMgr8_user(_this, pOne, ItemCombineMgrInitMgr8_next);
        };
        
        void ItemCombineMgrctor_ItemCombineMgr10_wrapper(struct ItemCombineMgr* _this)
        {
           ItemCombineMgrctor_ItemCombineMgr10_user(_this, ItemCombineMgrctor_ItemCombineMgr10_next);
        };
        char ItemCombineMgrLoadDB_CombineResult12_wrapper(struct ItemCombineMgr* _this, struct _combine_ex_item_result_zocl* pLoadData)
        {
           return ItemCombineMgrLoadDB_CombineResult12_user(_this, pLoadData, ItemCombineMgrLoadDB_CombineResult12_next);
        };
        bool ItemCombineMgrLoadData14_wrapper()
        {
           return ItemCombineMgrLoadData14_user(ItemCombineMgrLoadData14_next);
        };
        char ItemCombineMgrMakeNewItems16_wrapper(struct ItemCombineMgr* _this, struct _ITEMCOMBINE_DB_BASE* pPlayerItemDB, struct _combine_ex_item_accept_request_clzo* pRecv, struct _combine_ex_item_accept_result_zocl* pSend)
        {
           return ItemCombineMgrMakeNewItems16_user(_this, pPlayerItemDB, pRecv, pSend, ItemCombineMgrMakeNewItems16_next);
        };
        void ItemCombineMgrOnPlayerCreateCompleteProc18_wrapper(struct ItemCombineMgr* _this)
        {
           ItemCombineMgrOnPlayerCreateCompleteProc18_user(_this, ItemCombineMgrOnPlayerCreateCompleteProc18_next);
        };
        char ItemCombineMgrRequestCombineAcceptProcess20_wrapper(struct ItemCombineMgr* _this, struct _combine_ex_item_accept_request_clzo* pRecv, struct _combine_ex_item_accept_result_zocl* pSend)
        {
           return ItemCombineMgrRequestCombineAcceptProcess20_user(_this, pRecv, pSend, ItemCombineMgrRequestCombineAcceptProcess20_next);
        };
        char ItemCombineMgrRequestCombineProcess22_wrapper(struct ItemCombineMgr* _this, struct _combine_ex_item_request_clzo* pRecv, struct _combine_ex_item_result_zocl* pSend)
        {
           return ItemCombineMgrRequestCombineProcess22_user(_this, pRecv, pSend, ItemCombineMgrRequestCombineProcess22_next);
        };
        char ItemCombineMgrUpdateDB_CombineResult24_wrapper(struct ItemCombineMgr* _this, struct _combine_ex_item_result_zocl* pSaveData)
        {
           return ItemCombineMgrUpdateDB_CombineResult24_user(_this, pSaveData, ItemCombineMgrUpdateDB_CombineResult24_next);
        };
        
        void ItemCombineMgrdtor_ItemCombineMgr26_wrapper(struct ItemCombineMgr* _this)
        {
           ItemCombineMgrdtor_ItemCombineMgr26_user(_this, ItemCombineMgrdtor_ItemCombineMgr26_next);
        };
        
        ::std::array<hook_record, 13> ItemCombineMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x1402ab8e0L,
                (LPVOID *)&ItemCombineMgrCheckLoadData2_user,
                (LPVOID *)&ItemCombineMgrCheckLoadData2_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrCheckLoadData2_wrapper),
                (LPVOID)cast_pointer_function((bool(*)())&ItemCombineMgr::CheckLoadData)
            },
            _hook_record {
                (LPVOID)0x1402ad5f0L,
                (LPVOID *)&ItemCombineMgrClearDB_CombineResult4_user,
                (LPVOID *)&ItemCombineMgrClearDB_CombineResult4_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrClearDB_CombineResult4_wrapper),
                (LPVOID)cast_pointer_function((char(ItemCombineMgr::*)())&ItemCombineMgr::ClearDB_CombineResult)
            },
            _hook_record {
                (LPVOID)0x1402ac350L,
                (LPVOID *)&ItemCombineMgrConsumeMeterial_And_CalculateNewItems6_user,
                (LPVOID *)&ItemCombineMgrConsumeMeterial_And_CalculateNewItems6_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrConsumeMeterial_And_CalculateNewItems6_wrapper),
                (LPVOID)cast_pointer_function((char(ItemCombineMgr::*)(struct _STORAGE_LIST::_db_con**, char, struct _combine_ex_item_request_clzo::_list*, struct _combine_ex_item_result_zocl*, struct _ItemCombine_exp_fld*, char, int))&ItemCombineMgr::ConsumeMeterial_And_CalculateNewItems)
            },
            _hook_record {
                (LPVOID)0x1402ab9d0L,
                (LPVOID *)&ItemCombineMgrInitMgr8_user,
                (LPVOID *)&ItemCombineMgrInitMgr8_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrInitMgr8_wrapper),
                (LPVOID)cast_pointer_function((void(ItemCombineMgr::*)(struct CPlayer*))&ItemCombineMgr::InitMgr)
            },
            _hook_record {
                (LPVOID)0x1402ab790L,
                (LPVOID *)&ItemCombineMgrctor_ItemCombineMgr10_user,
                (LPVOID *)&ItemCombineMgrctor_ItemCombineMgr10_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrctor_ItemCombineMgr10_wrapper),
                (LPVOID)cast_pointer_function((void(ItemCombineMgr::*)())&ItemCombineMgr::ctor_ItemCombineMgr)
            },
            _hook_record {
                (LPVOID)0x1402ad400L,
                (LPVOID *)&ItemCombineMgrLoadDB_CombineResult12_user,
                (LPVOID *)&ItemCombineMgrLoadDB_CombineResult12_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrLoadDB_CombineResult12_wrapper),
                (LPVOID)cast_pointer_function((char(ItemCombineMgr::*)(struct _combine_ex_item_result_zocl*))&ItemCombineMgr::LoadDB_CombineResult)
            },
            _hook_record {
                (LPVOID)0x1402ab7c0L,
                (LPVOID *)&ItemCombineMgrLoadData14_user,
                (LPVOID *)&ItemCombineMgrLoadData14_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrLoadData14_wrapper),
                (LPVOID)cast_pointer_function((bool(*)())&ItemCombineMgr::LoadData)
            },
            _hook_record {
                (LPVOID)0x1402ad780L,
                (LPVOID *)&ItemCombineMgrMakeNewItems16_user,
                (LPVOID *)&ItemCombineMgrMakeNewItems16_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrMakeNewItems16_wrapper),
                (LPVOID)cast_pointer_function((char(ItemCombineMgr::*)(struct _ITEMCOMBINE_DB_BASE*, struct _combine_ex_item_accept_request_clzo*, struct _combine_ex_item_accept_result_zocl*))&ItemCombineMgr::MakeNewItems)
            },
            _hook_record {
                (LPVOID)0x1402ab950L,
                (LPVOID *)&ItemCombineMgrOnPlayerCreateCompleteProc18_user,
                (LPVOID *)&ItemCombineMgrOnPlayerCreateCompleteProc18_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrOnPlayerCreateCompleteProc18_wrapper),
                (LPVOID)cast_pointer_function((void(ItemCombineMgr::*)())&ItemCombineMgr::OnPlayerCreateCompleteProc)
            },
            _hook_record {
                (LPVOID)0x1402ad660L,
                (LPVOID *)&ItemCombineMgrRequestCombineAcceptProcess20_user,
                (LPVOID *)&ItemCombineMgrRequestCombineAcceptProcess20_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrRequestCombineAcceptProcess20_wrapper),
                (LPVOID)cast_pointer_function((char(ItemCombineMgr::*)(struct _combine_ex_item_accept_request_clzo*, struct _combine_ex_item_accept_result_zocl*))&ItemCombineMgr::RequestCombineAcceptProcess)
            },
            _hook_record {
                (LPVOID)0x1402ab9f0L,
                (LPVOID *)&ItemCombineMgrRequestCombineProcess22_user,
                (LPVOID *)&ItemCombineMgrRequestCombineProcess22_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrRequestCombineProcess22_wrapper),
                (LPVOID)cast_pointer_function((char(ItemCombineMgr::*)(struct _combine_ex_item_request_clzo*, struct _combine_ex_item_result_zocl*))&ItemCombineMgr::RequestCombineProcess)
            },
            _hook_record {
                (LPVOID)0x1402ad230L,
                (LPVOID *)&ItemCombineMgrUpdateDB_CombineResult24_user,
                (LPVOID *)&ItemCombineMgrUpdateDB_CombineResult24_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrUpdateDB_CombineResult24_wrapper),
                (LPVOID)cast_pointer_function((char(ItemCombineMgr::*)(struct _combine_ex_item_result_zocl*))&ItemCombineMgr::UpdateDB_CombineResult)
            },
            _hook_record {
                (LPVOID)0x1402ab7b0L,
                (LPVOID *)&ItemCombineMgrdtor_ItemCombineMgr26_user,
                (LPVOID *)&ItemCombineMgrdtor_ItemCombineMgr26_next,
                (LPVOID)cast_pointer_function(ItemCombineMgrdtor_ItemCombineMgr26_wrapper),
                (LPVOID)cast_pointer_function((void(ItemCombineMgr::*)())&ItemCombineMgr::dtor_ItemCombineMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
