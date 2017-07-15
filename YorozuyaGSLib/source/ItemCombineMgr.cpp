#include <ItemCombineMgr.hpp>


START_ATF_NAMESPACE
    bool ItemCombineMgr::CheckLoadData()
    {
        using org_ptr = bool (WINAPIV*)();
        return (org_ptr(0x1402ab8e0L))();
    };
    char ItemCombineMgr::ClearDB_CombineResult()
    {
        using org_ptr = char (WINAPIV*)(struct ItemCombineMgr*);
        return (org_ptr(0x1402ad5f0L))(this);
    };
    char ItemCombineMgr::ConsumeMeterial_And_CalculateNewItems(_STORAGE_LIST::_db_con** pMt_Sv_Inv, char byMtSlotNum, _combine_ex_item_request_clzo::_list* pipMaterials, struct _combine_ex_item_result_zocl* pSaveData, struct _ItemCombine_exp_fld* pfld, char byLinkTableIndex, int nType)
    {
        using org_ptr = char (WINAPIV*)(struct ItemCombineMgr*, _STORAGE_LIST::_db_con**, char, _combine_ex_item_request_clzo::_list*, struct _combine_ex_item_result_zocl*, struct _ItemCombine_exp_fld*, char, int);
        return (org_ptr(0x1402ac350L))(this, pMt_Sv_Inv, byMtSlotNum, pipMaterials, pSaveData, pfld, byLinkTableIndex, nType);
    };
    void ItemCombineMgr::InitMgr(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct ItemCombineMgr*, struct CPlayer*);
        (org_ptr(0x1402ab9d0L))(this, pOne);
    };
    ItemCombineMgr::ItemCombineMgr()
    {
        using org_ptr = void (WINAPIV*)(struct ItemCombineMgr*);
        (org_ptr(0x1402ab790L))(this);
    };
    void ItemCombineMgr::ctor_ItemCombineMgr()
    {
        using org_ptr = void (WINAPIV*)(struct ItemCombineMgr*);
        (org_ptr(0x1402ab790L))(this);
    };
    char ItemCombineMgr::LoadDB_CombineResult(struct _combine_ex_item_result_zocl* pLoadData)
    {
        using org_ptr = char (WINAPIV*)(struct ItemCombineMgr*, struct _combine_ex_item_result_zocl*);
        return (org_ptr(0x1402ad400L))(this, pLoadData);
    };
    bool ItemCombineMgr::LoadData()
    {
        using org_ptr = bool (WINAPIV*)();
        return (org_ptr(0x1402ab7c0L))();
    };
    char ItemCombineMgr::MakeNewItems(struct _ITEMCOMBINE_DB_BASE* pPlayerItemDB, struct _combine_ex_item_accept_request_clzo* pRecv, struct _combine_ex_item_accept_result_zocl* pSend)
    {
        using org_ptr = char (WINAPIV*)(struct ItemCombineMgr*, struct _ITEMCOMBINE_DB_BASE*, struct _combine_ex_item_accept_request_clzo*, struct _combine_ex_item_accept_result_zocl*);
        return (org_ptr(0x1402ad780L))(this, pPlayerItemDB, pRecv, pSend);
    };
    void ItemCombineMgr::OnPlayerCreateCompleteProc()
    {
        using org_ptr = void (WINAPIV*)(struct ItemCombineMgr*);
        (org_ptr(0x1402ab950L))(this);
    };
    char ItemCombineMgr::RequestCombineAcceptProcess(struct _combine_ex_item_accept_request_clzo* pRecv, struct _combine_ex_item_accept_result_zocl* pSend)
    {
        using org_ptr = char (WINAPIV*)(struct ItemCombineMgr*, struct _combine_ex_item_accept_request_clzo*, struct _combine_ex_item_accept_result_zocl*);
        return (org_ptr(0x1402ad660L))(this, pRecv, pSend);
    };
    char ItemCombineMgr::RequestCombineProcess(struct _combine_ex_item_request_clzo* pRecv, struct _combine_ex_item_result_zocl* pSend)
    {
        using org_ptr = char (WINAPIV*)(struct ItemCombineMgr*, struct _combine_ex_item_request_clzo*, struct _combine_ex_item_result_zocl*);
        return (org_ptr(0x1402ab9f0L))(this, pRecv, pSend);
    };
    char ItemCombineMgr::UpdateDB_CombineResult(struct _combine_ex_item_result_zocl* pSaveData)
    {
        using org_ptr = char (WINAPIV*)(struct ItemCombineMgr*, struct _combine_ex_item_result_zocl*);
        return (org_ptr(0x1402ad230L))(this, pSaveData);
    };
    ItemCombineMgr::~ItemCombineMgr()
    {
        using org_ptr = void (WINAPIV*)(struct ItemCombineMgr*);
        (org_ptr(0x1402ab7b0L))(this);
    };
    void ItemCombineMgr::dtor_ItemCombineMgr()
    {
        using org_ptr = void (WINAPIV*)(struct ItemCombineMgr*);
        (org_ptr(0x1402ab7b0L))(this);
    };
    
    
END_ATF_NAMESPACE
