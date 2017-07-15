#include <ICsSendInterface.hpp>


START_ATF_NAMESPACE
    void ICsSendInterface::SendMsg_BuyCashItem(uint16_t wSock, struct _param_cash_update* psheet, struct _param_cash_update* sheetplus)
    {
        using org_ptr = void (WINAPIV*)(uint16_t, struct _param_cash_update*, struct _param_cash_update*);
        (org_ptr(0x14030c760L))(wSock, psheet, sheetplus);
    };
    void ICsSendInterface::SendMsg_CashDiscountEventInform(uint16_t wSock, char byEventType, struct _cash_discount_ini_* pIni)
    {
        using org_ptr = void (WINAPIV*)(uint16_t, char, struct _cash_discount_ini_*);
        (org_ptr(0x14030cc30L))(wSock, byEventType, pIni);
    };
    void ICsSendInterface::SendMsg_CashEventInform(uint16_t wSock, char byEventType, char byStatus, struct _cash_event_ini* pIni, struct _cash_lim_sale* pLim)
    {
        using org_ptr = void (WINAPIV*)(uint16_t, char, char, struct _cash_event_ini*, struct _cash_lim_sale*);
        (org_ptr(0x14030ce00L))(wSock, byEventType, byStatus, pIni, pLim);
    };
    void ICsSendInterface::SendMsg_ConditionalEventInform(uint16_t wSock, char byEventType, uint16_t wCsDiscount, char byStatus, char* pEMsg)
    {
        using org_ptr = void (WINAPIV*)(uint16_t, char, uint16_t, char, char*);
        (org_ptr(0x14030d1a0L))(wSock, byEventType, wCsDiscount, byStatus, pEMsg);
    };
    void ICsSendInterface::SendMsg_Error(uint16_t wSock, int eCode)
    {
        using org_ptr = void (WINAPIV*)(uint16_t, int);
        (org_ptr(0x14030c590L))(wSock, eCode);
    };
    void ICsSendInterface::SendMsg_GoodsList(uint16_t wSock, struct _param_cash_select* psheet)
    {
        using org_ptr = void (WINAPIV*)(uint16_t, struct _param_cash_select*);
        (org_ptr(0x14030c620L))(wSock, psheet);
    };
    void ICsSendInterface::SendMsg_LimitedsaleEventInform(uint16_t wSock, char byTableCode, unsigned int dwIndex, uint16_t wNum)
    {
        using org_ptr = void (WINAPIV*)(uint16_t, char, unsigned int, uint16_t);
        (org_ptr(0x14030d2b0L))(wSock, byTableCode, dwIndex, wNum);
    };
END_ATF_NAMESPACE
