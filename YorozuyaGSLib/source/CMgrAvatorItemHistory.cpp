#include <CMgrAvatorItemHistory.hpp>


START_ATF_NAMESPACE
    CMgrAvatorItemHistory::CMgrAvatorItemHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*);
        (org_ptr(0x1402357e0L))(this);
    };
    void CMgrAvatorItemHistory::ctor_CMgrAvatorItemHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*);
        (org_ptr(0x1402357e0L))(this);
    };
    void CMgrAvatorItemHistory::ClassUP(char byCurClassGrade, char byLastClassGrade, char* szOldClass, char* szCurClass, int* piOldMaxPoint, int* piAlterMaxPoint, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char, char, char*, char*, int*, int*, char*);
        (org_ptr(0x14023db00L))(this, byCurClassGrade, byLastClassGrade, szOldClass, szCurClass, piOldMaxPoint, piAlterMaxPoint, pszFileName);
    };
    void CMgrAvatorItemHistory::ClearLogBuffer()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*);
        (org_ptr(0x14023fa60L))(this);
    };
    void CMgrAvatorItemHistory::GetNewFileName(unsigned int dwAvatorSerial, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, unsigned int, char*);
        (org_ptr(0x140235f80L))(this, dwAvatorSerial, pszFileName);
    };
    int CMgrAvatorItemHistory::GetTotalWaitSize()
    {
        using org_ptr = int (WINAPIV*)(struct CMgrAvatorItemHistory*);
        return (org_ptr(0x14023fce0L))(this);
    };
    void CMgrAvatorItemHistory::IOThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x14023fae0L))(pv);
    };
    void CMgrAvatorItemHistory::InitClass(int iCostGold, unsigned int dwInitClassCnt, char byLastClassGrade, char* szOldClass, char* szCurClass, int* piOldMaxPoint, int* piAlterMaxPoint, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, char, char*, char*, int*, int*, char*);
        (org_ptr(0x14023dbf0L))(this, iCostGold, dwInitClassCnt, byLastClassGrade, szOldClass, szCurClass, piOldMaxPoint, piAlterMaxPoint, pszFileName);
    };
    void CMgrAvatorItemHistory::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*);
        (org_ptr(0x140236220L))(this);
    };
    void CMgrAvatorItemHistory::WriteFile(char* pszFileName, char* pszLog)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*, char*);
        (org_ptr(0x14023f7f0L))(this, pszFileName, pszLog);
    };
    void CMgrAvatorItemHistory::WriteLog(char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*);
        (org_ptr(0x14023fa80L))(this, pszFileName);
    };
    void CMgrAvatorItemHistory::add_storage_fail(int n, struct _STORAGE_LIST::_db_con* pItem, char* strErrorCodePos, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, char*, char*);
        (org_ptr(0x140240b40L))(this, n, pItem, strErrorCodePos, pszFileName);
    };
    void CMgrAvatorItemHistory::auto_trade_buy(char* szSellerName, unsigned int dwSellerSerial, char* szSellerID, unsigned int dwRegistSerial, struct _STORAGE_LIST::_db_con* pItem, unsigned int dwPrice, unsigned int dwLeftDalant, unsigned int dwLeftGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*, unsigned int, char*, unsigned int, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023a040L))(this, szSellerName, dwSellerSerial, szSellerID, dwRegistSerial, pItem, dwPrice, dwLeftDalant, dwLeftGold, pszFileName);
    };
    void CMgrAvatorItemHistory::auto_trade_login_sell(char* szBuyerName, unsigned int dwBuyerSerial, char* szBuyerID, unsigned int dwRegistSerial, struct _STORAGE_LIST::_db_con* pItem, int64_t tResultTime, unsigned int dwPrice, unsigned int dwTax, unsigned int dwLeftDalant, unsigned int dwLeftGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*, unsigned int, char*, unsigned int, struct _STORAGE_LIST::_db_con*, int64_t, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023a3e0L))(this, szBuyerName, dwBuyerSerial, szBuyerID, dwRegistSerial, pItem, tResultTime, dwPrice, dwTax, dwLeftDalant, dwLeftGold, pszFileName);
    };
    void CMgrAvatorItemHistory::auto_trade_sell(char* szBuyerName, unsigned int dwBuyerSerial, char* szBuyerID, unsigned int dwRegistSerial, struct _STORAGE_LIST::_db_con* pItem, unsigned int dwPrice, unsigned int dwTax, unsigned int dwLeftDalant, unsigned int dwLeftGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*, unsigned int, char*, unsigned int, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023a200L))(this, szBuyerName, dwBuyerSerial, szBuyerID, dwRegistSerial, pItem, dwPrice, dwTax, dwLeftDalant, dwLeftGold, pszFileName);
    };
    void CMgrAvatorItemHistory::back_trap_item(int n, struct _STORAGE_LIST::_db_con* pItem, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, char*);
        (org_ptr(0x1402405c0L))(this, n, pItem, pszFileName);
    };
    void CMgrAvatorItemHistory::buy_item(int n, struct _buy_offer* pOffer, char byOfferNum, unsigned int dwCostDalant, unsigned int dwCostGold, unsigned int dwNewDalant, unsigned int dwNewGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _buy_offer*, char, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x140238910L))(this, n, pOffer, byOfferNum, dwCostDalant, dwCostGold, dwNewDalant, dwNewGold, pszFileName);
    };
    void CMgrAvatorItemHistory::buy_to_inven_cashitem(char byTbl, uint16_t wIndex, int nPrice, int nDis, int nNum, int nBuyPrice, int nAmount, char* pFileName, uint64_t lnUID, char byEventType)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char, uint16_t, int, int, int, int, int, char*, uint64_t, char);
        (org_ptr(0x14023df10L))(this, byTbl, wIndex, nPrice, nDis, nNum, nBuyPrice, nAmount, pFileName, lnUID, byEventType);
    };
    void CMgrAvatorItemHistory::buy_unit(int n, char bySlotIndex, struct _UNIT_DB_BASE::_LIST* pData, unsigned int* pdwConsumMoney, unsigned int dwNewDalant, unsigned int dwNewGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char, struct _UNIT_DB_BASE::_LIST*, unsigned int*, unsigned int, unsigned int, char*);
        (org_ptr(0x14023c900L))(this, n, bySlotIndex, pData, pdwConsumMoney, dwNewDalant, dwNewGold, pszFileName);
    };
    void CMgrAvatorItemHistory::cash_item_use(int n, struct _STORAGE_LIST::_db_con* pUseItem, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, char*);
        (org_ptr(0x14023bce0L))(this, n, pUseItem, pszFileName);
    };
    void CMgrAvatorItemHistory::cashitem_del_from_inven(char byTblCode, uint16_t wItemIndex, uint64_t lnUID, char* pFN)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char, uint16_t, uint64_t, char*);
        (org_ptr(0x14023dd70L))(this, byTblCode, wItemIndex, lnUID, pFN);
    };
    void CMgrAvatorItemHistory::char_copy(int n, char* pszDstName, unsigned int dwDstSerial, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, unsigned int, char*);
        (org_ptr(0x14023da60L))(this, n, pszDstName, dwDstSerial, pszFileName);
    };
    void CMgrAvatorItemHistory::cheat_add_item(int n, struct _STORAGE_LIST::_db_con* pItem, char byAddNum, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, char, char*);
        (org_ptr(0x14023c0c0L))(this, n, pItem, byAddNum, pszFileName);
    };
    void CMgrAvatorItemHistory::cheat_alter_money(int n, unsigned int dwNewDalant, unsigned int dwNewGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023c020L))(this, n, dwNewDalant, dwNewGold, pszFileName);
    };
    void CMgrAvatorItemHistory::cheat_del_item(int n, struct _STORAGE_LIST::_db_con* pItem, char byDelNum, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, char, char*);
        (org_ptr(0x14023c2a0L))(this, n, pItem, byDelNum, pszFileName);
    };
    void CMgrAvatorItemHistory::cheat_make_item_no_material(int n, char byRetCode, struct _STORAGE_LIST::_db_con* pMakeItem, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char, struct _STORAGE_LIST::_db_con*, char*);
        (org_ptr(0x14023b910L))(this, n, byRetCode, pMakeItem, pszFileName);
    };
    void CMgrAvatorItemHistory::close(int n, char* pCloseCode, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, char*);
        (org_ptr(0x140238090L))(this, n, pCloseCode, pszFileName);
    };
    void CMgrAvatorItemHistory::combine_ex_reward_item(int n, char byMakeNum, struct _ITEMCOMBINE_DB_BASE* pCombineDB, char* pbyRewardTypeList, uint64_t* lnUIDs, char* strFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char, struct _ITEMCOMBINE_DB_BASE*, char*, uint64_t*, char*);
        (org_ptr(0x14023d700L))(this, n, byMakeNum, pCombineDB, pbyRewardTypeList, lnUIDs, strFileName);
    };
    void CMgrAvatorItemHistory::combine_ex_using_material(int n, unsigned int dwCheckKey, char bySlotNum, struct _STORAGE_LIST::_db_con** ppMaterial, char* pbyMtrNum, unsigned int dwFee, char* strFileName, int bSucc, unsigned int dwFailCount)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, char, struct _STORAGE_LIST::_db_con**, char*, unsigned int, char*, int, unsigned int);
        (org_ptr(0x14023d440L))(this, n, dwCheckKey, bySlotNum, ppMaterial, pbyMtrNum, dwFee, strFileName, bSucc, dwFailCount);
    };
    void CMgrAvatorItemHistory::combine_item(int n, struct _STORAGE_LIST::_db_con* pMaterial, char* pbyMtrNum, char byMaterialNum, struct _STORAGE_LIST::_db_con* pMakeItem, unsigned int dwFee, unsigned int dwLeftDalant, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, char*, char, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int, char*);
        (org_ptr(0x14023bab0L))(this, n, pMaterial, pbyMtrNum, byMaterialNum, pMakeItem, dwFee, dwLeftDalant, pszFileName);
    };
    void CMgrAvatorItemHistory::consume_del_item(int n, struct _STORAGE_LIST::_db_con* pItem, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, char*);
        (org_ptr(0x14023c5d0L))(this, n, pItem, pszFileName);
    };
    void CMgrAvatorItemHistory::coupon_use_buy_item(struct _STORAGE_LIST::_db_con* pCouponItem, char* ApplyItem, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, struct _STORAGE_LIST::_db_con*, char*, char*);
        (org_ptr(0x140240950L))(this, pCouponItem, ApplyItem, pszFileName);
    };
    void CMgrAvatorItemHistory::cut_clear_item(int n, uint16_t* pwCuttingResBuffer, unsigned int dwAddGold, unsigned int dwNewGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, uint16_t*, unsigned int, unsigned int, char*);
        (org_ptr(0x14023c480L))(this, n, pwCuttingResBuffer, dwAddGold, dwNewGold, pszFileName);
    };
    void CMgrAvatorItemHistory::cut_item(int n, struct _STORAGE_LIST::_db_con* pOreItem, int nOreNum, uint16_t* pwCuttingResBuffer, unsigned int dwCostDalant, unsigned int dwNewDalant, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, int, uint16_t*, unsigned int, unsigned int, char*);
        (org_ptr(0x14023b400L))(this, n, pOreItem, nOreNum, pwCuttingResBuffer, dwCostDalant, dwNewDalant, pszFileName);
    };
    void CMgrAvatorItemHistory::delete_npc_quest_item(int n, struct _STORAGE_LIST::_db_con* pItem, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, char*);
        (org_ptr(0x1402406a0L))(this, n, pItem, pszFileName);
    };
    void CMgrAvatorItemHistory::destroy_unit(int n, char bySlotIndex, char byFrameCode, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char, char, char*);
        (org_ptr(0x14023cb60L))(this, n, bySlotIndex, byFrameCode, pszFileName);
    };
    void CMgrAvatorItemHistory::exchange_item(int n, struct _STORAGE_LIST::_db_con* pUseItem, struct _STORAGE_LIST::_db_con* pOutItem, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, struct _STORAGE_LIST::_db_con*, char*);
        (org_ptr(0x14023be30L))(this, n, pUseItem, pOutItem, pszFileName);
    };
    void CMgrAvatorItemHistory::exchange_money(int n, unsigned int dwCurDalant, unsigned int dwCurGold, unsigned int dwNewDalant, unsigned int dwNewGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023ae70L))(this, n, dwCurDalant, dwCurGold, dwNewDalant, dwNewGold, pszFileName);
    };
    void CMgrAvatorItemHistory::exchange_pvp_gold(int n, unsigned int dwPoint, unsigned int dwNewDalant, unsigned int dwNewGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023af20L))(this, n, dwPoint, dwNewDalant, dwNewGold, pszFileName);
    };
    void CMgrAvatorItemHistory::exp_prof_log(int count, char* szFile)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*);
        (org_ptr(0x140240540L))(this, count, szFile);
    };
    void CMgrAvatorItemHistory::grade_down_item(int n, struct _STORAGE_LIST::_db_con* pItem, struct _STORAGE_LIST::_db_con* pTalik, unsigned int dwAfterLv, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, struct _STORAGE_LIST::_db_con*, unsigned int, char*);
        (org_ptr(0x14023ac20L))(this, n, pItem, pTalik, dwAfterLv, pszFileName);
    };
    void CMgrAvatorItemHistory::grade_up_item(int n, struct _STORAGE_LIST::_db_con* pItem, struct _STORAGE_LIST::_db_con* pTalik, struct _STORAGE_LIST::_db_con* pJewel, char byJewelNum, char byErrCode, unsigned int dwAfterLv, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, struct _STORAGE_LIST::_db_con*, struct _STORAGE_LIST::_db_con*, char, char, unsigned int, char*);
        (org_ptr(0x14023a6e0L))(this, n, pItem, pTalik, pJewel, byJewelNum, byErrCode, dwAfterLv, pszFileName);
    };
    void CMgrAvatorItemHistory::guild_est_money(int n, char* pszGuildName, unsigned int dwEstDalant, unsigned int dwLeftDalant, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, unsigned int, unsigned int, char*);
        (org_ptr(0x14023afc0L))(this, n, pszGuildName, dwEstDalant, dwLeftDalant, pszFileName);
    };
    void CMgrAvatorItemHistory::guild_est_money_rollback(int n, char* pszGuildName, unsigned int dwEstDalant, unsigned int dwLeftDalant, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, unsigned int, unsigned int, char*);
        (org_ptr(0x14023b060L))(this, n, pszGuildName, dwEstDalant, dwLeftDalant, pszFileName);
    };
    void CMgrAvatorItemHistory::guild_pop_money(int n, char* pszGuildName, unsigned int dwPopDalant, unsigned int dwPopGold, unsigned int dwLeftDalant, unsigned int dwLeftGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023b280L))(this, n, pszGuildName, dwPopDalant, dwPopGold, dwLeftDalant, dwLeftGold, pszFileName);
    };
    void CMgrAvatorItemHistory::guild_pop_money_rollback(int n, char* pszGuildName, unsigned int dwPopDalant, unsigned int dwPopGold, unsigned int dwLeftDalant, unsigned int dwLeftGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023b340L))(this, n, pszGuildName, dwPopDalant, dwPopGold, dwLeftDalant, dwLeftGold, pszFileName);
    };
    void CMgrAvatorItemHistory::guild_push_money(int n, char* pszGuildName, unsigned int dwPushDalant, unsigned int dwPushGold, unsigned int dwLeftDalant, unsigned int dwLeftGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023b100L))(this, n, pszGuildName, dwPushDalant, dwPushGold, dwLeftDalant, dwLeftGold, pszFileName);
    };
    void CMgrAvatorItemHistory::guild_push_money_rollback(int n, char* pszGuildName, unsigned int dwPushDalant, unsigned int dwPushGold, unsigned int dwLeftDalant, unsigned int dwLeftGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023b1c0L))(this, n, pszGuildName, dwPushDalant, dwPushGold, dwLeftDalant, dwLeftGold, pszFileName);
    };
    void CMgrAvatorItemHistory::guild_suggest_change_taxrate(unsigned int dwGuild, unsigned int dwMatterObj2, char* szFile)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, unsigned int, unsigned int, char*);
        (org_ptr(0x1402404a0L))(this, dwGuild, dwMatterObj2, szFile);
    };
    void CMgrAvatorItemHistory::have_auto_item(int n, struct CUnmannedTraderRegistItemInfo* pkInfo, char byMaxCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct CUnmannedTraderRegistItemInfo*, char);
        (org_ptr(0x140239130L))(this, n, pkInfo, byMaxCnt);
    };
    void CMgrAvatorItemHistory::have_item(int n, char* pszName, struct _AVATOR_DATA* pLoadData, struct _AVATOR_DATA* pBackupData, char* pszID, unsigned int dwIDSerial, char byDgr, unsigned int dwIP, unsigned int dwExpRate, bool bStart, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, unsigned int, char, unsigned int, unsigned int, bool, char*);
        (org_ptr(0x1402362b0L))(this, n, pszName, pLoadData, pBackupData, pszID, dwIDSerial, byDgr, dwIP, dwExpRate, bStart, pszFileName);
    };
    void CMgrAvatorItemHistory::have_item_close(int n, char* pszName, struct _AVATOR_DATA* pLoadData, struct _AVATOR_DATA* pBackupData, char* pszID, unsigned int dwIDSerial, char byDgr, unsigned int dwIP, unsigned int dwExpRate, struct CUnmannedTraderRegistItemInfo* pkInfo, char byMaxCnt, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, unsigned int, char, unsigned int, unsigned int, struct CUnmannedTraderRegistItemInfo*, char, char*);
        (org_ptr(0x140237500L))(this, n, pszName, pLoadData, pBackupData, pszID, dwIDSerial, byDgr, dwIP, dwExpRate, pkInfo, byMaxCnt, pszFileName);
    };
    void CMgrAvatorItemHistory::item_serial_full(int n, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*);
        (org_ptr(0x14023d9e0L))(this, n, pszFileName);
    };
    void CMgrAvatorItemHistory::lenditem_del_from_inven(char byTblCode, uint16_t wItemIndex, uint64_t lnUID, char* pFN)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char, uint16_t, uint64_t, char*);
        (org_ptr(0x140240bd0L))(this, byTblCode, wItemIndex, lnUID, pFN);
    };
    void CMgrAvatorItemHistory::login_cancel_auto_trade(int n, unsigned int dwRegistSerial, struct _STORAGE_LIST::_db_con* pRegItem, int64_t tResultTime, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, struct _STORAGE_LIST::_db_con*, int64_t, char*);
        (org_ptr(0x140239d60L))(this, n, dwRegistSerial, pRegItem, tResultTime, pszFileName);
    };
    void CMgrAvatorItemHistory::make_item(int n, struct _STORAGE_LIST::_db_con* pMaterial, char* pbyMtrNum, char byMaterialNum, char byRetCode, bool bInsert, struct _STORAGE_LIST::_db_con* pMakeItem, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, char*, char, char, bool, struct _STORAGE_LIST::_db_con*, char*);
        (org_ptr(0x14023b5b0L))(this, n, pMaterial, pbyMtrNum, byMaterialNum, byRetCode, bInsert, pMakeItem, pszFileName);
    };
    void CMgrAvatorItemHistory::mastery_change_jade(int nMstCode, unsigned int dwOldCum, unsigned int dwNewCum, int nLv, float fVal, char* szFileName, int nWpType)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, unsigned int, int, float, char*, int);
        (org_ptr(0x140240780L))(this, nMstCode, dwOldCum, dwNewCum, nLv, fVal, szFileName, nWpType);
    };
    void CMgrAvatorItemHistory::patriarch_push_money(char* pwszPatriarchName, unsigned int dwPushDalant, unsigned int dwLeftDalant, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*, unsigned int, unsigned int, char*);
        (org_ptr(0x1402403f0L))(this, pwszPatriarchName, dwPushDalant, dwLeftDalant, pszFileName);
    };
    void CMgrAvatorItemHistory::pay_money(int n, char* pszClause, unsigned int dwPayDalant, unsigned int dwPayGold, unsigned int dwNewDalant, unsigned int dwNewGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x140238120L))(this, n, pszClause, dwPayDalant, dwPayGold, dwNewDalant, dwNewGold, pszFileName);
    };
    void CMgrAvatorItemHistory::personal_amine_install(char byTblCode, uint16_t wItemIndex, struct _personal_amine_inven_db_load* pCon, char* szFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char, uint16_t, struct _personal_amine_inven_db_load*, char*);
        (org_ptr(0x140240090L))(this, byTblCode, wItemIndex, pCon, szFileName);
    };
    void CMgrAvatorItemHistory::personal_amine_itemlog(char* szLogDesc, char byPos, char byTblCode, uint16_t wItemIndex, unsigned int dwDur, char* szFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*, char, char, uint16_t, unsigned int, char*);
        (org_ptr(0x14023fe40L))(this, szLogDesc, byPos, byTblCode, wItemIndex, dwDur, szFileName);
    };
    void CMgrAvatorItemHistory::personal_amine_stop(unsigned int* pdwMineCnt, int nMaxOreNum, char byTblCode, uint16_t wItemIndex, char* szFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, unsigned int*, int, char, uint16_t, char*);
        (org_ptr(0x14023ff30L))(this, pdwMineCnt, nMaxOreNum, byTblCode, wItemIndex, szFileName);
    };
    void CMgrAvatorItemHistory::personal_amine_uninstall(char byType, unsigned int* pdwMineCnt, int nMaxOreNum, struct _STORAGE_LIST::_db_con* pItem, char* szFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char, unsigned int*, int, struct _STORAGE_LIST::_db_con*, char*);
        (org_ptr(0x140240250L))(this, byType, pdwMineCnt, nMaxOreNum, pItem, szFileName);
    };
    void CMgrAvatorItemHistory::post_delete(struct CPostData* pPost, char* pFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, struct CPostData*, char*);
        (org_ptr(0x14023f5a0L))(this, pPost, pFileName);
    };
    void CMgrAvatorItemHistory::post_getpresent(char* wszSendName, unsigned int dwPostSerial, struct _STORAGE_LIST::_db_con* Item, uint64_t dwDur, unsigned int dwGold, char* pFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*, unsigned int, struct _STORAGE_LIST::_db_con*, uint64_t, unsigned int, char*);
        (org_ptr(0x14023e420L))(this, wszSendName, dwPostSerial, Item, dwDur, dwGold, pFileName);
    };
    void CMgrAvatorItemHistory::post_receive(struct CPostData* pPost, char* pFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, struct CPostData*, char*);
        (org_ptr(0x14023f120L))(this, pPost, pFileName);
    };
    void CMgrAvatorItemHistory::post_return(char* wszRecvName, unsigned int dwPostSerial, struct _STORAGE_LIST::_db_con* Item, uint64_t dwDur, unsigned int dwGold, char* pFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*, unsigned int, struct _STORAGE_LIST::_db_con*, uint64_t, unsigned int, char*);
        (org_ptr(0x14023e650L))(this, wszRecvName, dwPostSerial, Item, dwDur, dwGold, pFileName);
    };
    void CMgrAvatorItemHistory::post_returnreceive(struct CPostData* pPost, char* pFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, struct CPostData*, char*);
        (org_ptr(0x14023f360L))(this, pPost, pFileName);
    };
    void CMgrAvatorItemHistory::post_senditem(char* wszRecvName, struct _STORAGE_LIST::_db_con* Item, uint64_t dwDur, unsigned int dwGold, char* pFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*, struct _STORAGE_LIST::_db_con*, uint64_t, unsigned int, char*);
        (org_ptr(0x14023e200L))(this, wszRecvName, Item, dwDur, dwGold, pFileName);
    };
    void CMgrAvatorItemHistory::post_storage(struct CPostStorage* pStorage, char* pFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, struct CPostStorage*, char*);
        (org_ptr(0x14023e880L))(this, pStorage, pFileName);
    };
    void CMgrAvatorItemHistory::price_auto_trade(int n, unsigned int dwRegistSerial, struct _STORAGE_LIST::_db_con* pRegItem, unsigned int dwTax, unsigned int dwOldPrice, unsigned int dwNewPrice, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x140239950L))(this, n, dwRegistSerial, pRegItem, dwTax, dwOldPrice, dwNewPrice, pszFileName);
    };
    void CMgrAvatorItemHistory::raceboss_candidate(int ncost, unsigned int dwSerial, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, char*);
        (org_ptr(0x14023d3c0L))(this, ncost, dwSerial, pszFileName);
    };
    void CMgrAvatorItemHistory::raceboss_giveback(unsigned int dwSerial, unsigned int dwDalant, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, unsigned int, unsigned int, char*);
        (org_ptr(0x14023d2b0L))(this, dwSerial, dwDalant, pszFileName);
    };
    void CMgrAvatorItemHistory::raceboss_vote(unsigned int dwSerial, unsigned int dwAvatorSerial, char* pAvatorName, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, unsigned int, unsigned int, char*, char*);
        (org_ptr(0x14023d330L))(this, dwSerial, dwAvatorSerial, pAvatorName, pszFileName);
    };
    void CMgrAvatorItemHistory::re_reg_auto_trade(int n, unsigned int dwRegistSerial, struct _STORAGE_LIST::_db_con* pRegItem, unsigned int dwPrice, unsigned int dwfee, unsigned int dwLeftDalant, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x1402397e0L))(this, n, dwRegistSerial, pRegItem, dwPrice, dwfee, dwLeftDalant, pszFileName);
    };
    void CMgrAvatorItemHistory::read_cashamount(unsigned int dwAC, unsigned int dwAV, int nCash, char* pFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, unsigned int, unsigned int, int, char*);
        (org_ptr(0x14023dcf0L))(this, dwAC, dwAV, nCash, pFileName);
    };
    void CMgrAvatorItemHistory::reg_auto_trade(int n, unsigned int dwRegistSerial, struct _STORAGE_LIST::_db_con* pRegItem, unsigned int dwPrice, unsigned int dwfee, unsigned int dwLeftDalant, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x140239670L))(this, n, dwRegistSerial, pRegItem, dwPrice, dwfee, dwLeftDalant, pszFileName);
    };
    void CMgrAvatorItemHistory::return_post_storage(struct CPostReturnStorage* pReturn, char* pFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, struct CPostReturnStorage*, char*);
        (org_ptr(0x14023ecd0L))(this, pReturn, pFileName);
    };
    void CMgrAvatorItemHistory::reward_add_item(int n, char* pszClause, struct _STORAGE_LIST::_db_con* pItem, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, struct _STORAGE_LIST::_db_con*, char*);
        (org_ptr(0x14023c7b0L))(this, n, pszClause, pItem, pszFileName);
    };
    void CMgrAvatorItemHistory::reward_add_money(int n, char* pszClause, unsigned int dwAddDalant, unsigned int dwAddGold, unsigned int dwSumDalant, unsigned int dwSumGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char*, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023c6f0L))(this, n, pszClause, dwAddDalant, dwAddGold, dwSumDalant, dwSumGold, pszFileName);
    };
    void CMgrAvatorItemHistory::rollback_cashitem(char* szRet, uint64_t lnUID, char* strItemCode, int nCash, char* pFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*, uint64_t, char*, int, char*);
        (org_ptr(0x14023e160L))(this, szRet, lnUID, strItemCode, nCash, pFileName);
    };
    void CMgrAvatorItemHistory::self_cancel_auto_trade(int n, unsigned int dwRegistSerial, struct _STORAGE_LIST::_db_con* pRegItem, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, struct _STORAGE_LIST::_db_con*, char*);
        (org_ptr(0x140239ac0L))(this, n, dwRegistSerial, pRegItem, pszFileName);
    };
    void CMgrAvatorItemHistory::sell_item(int n, struct _sell_offer* pOffer, char byOfferNum, unsigned int dwIncomeDalant, unsigned int dwIncomeGold, unsigned int dwNewDalant, unsigned int dwNewGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _sell_offer*, char, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x140238ae0L))(this, n, pOffer, byOfferNum, dwIncomeDalant, dwIncomeGold, dwNewDalant, dwNewGold, pszFileName);
    };
    void CMgrAvatorItemHistory::sell_unit(int n, char bySlotIndex, char byFrameCode, float fGaugeRate, unsigned int dwSellMoney, unsigned int dwPayDalant, unsigned int dwNewDalant, unsigned int dwNewGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char, char, float, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023ca70L))(this, n, bySlotIndex, byFrameCode, fGaugeRate, dwSellMoney, dwPayDalant, dwNewDalant, dwNewGold, pszFileName);
    };
    void CMgrAvatorItemHistory::take_ground_item(int n, char byItemBoxCode, struct _STORAGE_LIST::_db_con* pItem, char* pszThrowerName, unsigned int dwThrowerSerial, char* pszThrowerID, uint16_t wMonRecIndex, char* pMapCode, float* pfPos, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char, struct _STORAGE_LIST::_db_con*, char*, unsigned int, char*, uint16_t, char*, float*, char*);
        (org_ptr(0x1402381b0L))(this, n, byItemBoxCode, pItem, pszThrowerName, dwThrowerSerial, pszThrowerID, wMonRecIndex, pMapCode, pfPos, pszFileName);
    };
    void CMgrAvatorItemHistory::throw_ground_item(int n, struct _STORAGE_LIST::_db_con* pItem, char* pMapCode, float* pfPos, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, char*, float*, char*);
        (org_ptr(0x140238770L))(this, n, pItem, pMapCode, pfPos, pszFileName);
    };
    void CMgrAvatorItemHistory::time_jade_effect_log(char* pszItemName, struct _STORAGE_LIST::_db_con* pItem, bool bAdd, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, char*, struct _STORAGE_LIST::_db_con*, bool, char*);
        (org_ptr(0x140240a40L))(this, pszItemName, pItem, bAdd, pszFileName);
    };
    void CMgrAvatorItemHistory::time_out_cancel_auto_trade(int n, unsigned int dwRegistSerial, struct _STORAGE_LIST::_db_con* pRegItem, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, unsigned int, struct _STORAGE_LIST::_db_con*, char*);
        (org_ptr(0x140239c10L))(this, n, dwRegistSerial, pRegItem, pszFileName);
    };
    void CMgrAvatorItemHistory::trade(int n, struct _STORAGE_LIST::_db_con* pOutItem, int nOutItemNum, unsigned int dwOutDalant, unsigned int dwOutGold, struct _STORAGE_LIST::_db_con* pInItem, int nInItemNum, unsigned int dwInDalant, unsigned int dwInGold, char* pszDstName, unsigned int dwDstSerial, char* pszDstID, unsigned int dwSumDalant, unsigned int dwSumGold, char* pMapCode, float* pfPos, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, int, unsigned int, unsigned int, struct _STORAGE_LIST::_db_con*, int, unsigned int, unsigned int, char*, unsigned int, char*, unsigned int, unsigned int, char*, float*, char*);
        (org_ptr(0x140238d20L))(this, n, pOutItem, nOutItemNum, dwOutDalant, dwOutGold, pInItem, nInItemNum, dwInDalant, dwInGold, pszDstName, dwDstSerial, pszDstID, dwSumDalant, dwSumGold, pMapCode, pfPos, pszFileName);
    };
    void CMgrAvatorItemHistory::trans_ground_item(struct _STORAGE_LIST::_db_con* pItem, char* pszTakerName, unsigned int dwTakerSerial, char* pszTakerID, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, struct _STORAGE_LIST::_db_con*, char*, unsigned int, char*, char*);
        (org_ptr(0x140238600L))(this, pItem, pszTakerName, dwTakerSerial, pszTakerID, pszFileName);
    };
    void CMgrAvatorItemHistory::trunk_io_item(int n, struct _STORAGE_LIST::_db_con* pIOItem, bool bInput, unsigned int dwFeeDalant, unsigned int dwNewDalant, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, bool, unsigned int, unsigned int, char*);
        (org_ptr(0x14023cd70L))(this, n, pIOItem, bInput, dwFeeDalant, dwNewDalant, pszFileName);
    };
    void CMgrAvatorItemHistory::trunk_io_money(int n, bool bInput, unsigned int dwIODalant, unsigned int dwIOGold, unsigned int dwPayDalant, unsigned int dwInvenDalant, unsigned int dwInvenGold, unsigned int dwTrkDalant, unsigned int dwTrkGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char*);
        (org_ptr(0x14023d170L))(this, n, bInput, dwIODalant, dwIOGold, dwPayDalant, dwInvenDalant, dwInvenGold, dwTrkDalant, dwTrkGold, pszFileName);
    };
    void CMgrAvatorItemHistory::trunk_swap_item(int n, struct _STORAGE_LIST::_db_con* pInputItem, struct _STORAGE_LIST::_db_con* pOutputItem, unsigned int dwFeeDalant, unsigned int dwNewDalant, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, struct _STORAGE_LIST::_db_con*, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int, char*);
        (org_ptr(0x14023cf40L))(this, n, pInputItem, pOutputItem, dwFeeDalant, dwNewDalant, pszFileName);
    };
    void CMgrAvatorItemHistory::tuning_unit(int n, char bySlotIndex, struct _UNIT_DB_BASE::_LIST* pData, int* pnPayMoney, unsigned int dwNewDalant, unsigned int dwNewGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, char, struct _UNIT_DB_BASE::_LIST*, int*, unsigned int, unsigned int, char*);
        (org_ptr(0x14023cc00L))(this, n, bySlotIndex, pData, pnPayMoney, dwNewDalant, dwNewGold, pszFileName);
    };
    void CMgrAvatorItemHistory::used_cash(int nCurCash, int nUseCash, char* pFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*, int, int, char*);
        (org_ptr(0x14023e0d0L))(this, nCurCash, nUseCash, pFileName);
    };
    CMgrAvatorItemHistory::~CMgrAvatorItemHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*);
        (org_ptr(0x140235d50L))(this);
    };
    void CMgrAvatorItemHistory::dtor_CMgrAvatorItemHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorItemHistory*);
        (org_ptr(0x140235d50L))(this);
    };
    
    
    
    
END_ATF_NAMESPACE
