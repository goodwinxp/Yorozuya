#include <CPvpOrderView.hpp>


START_ATF_NAMESPACE
    long double CPvpOrderView::GetPvpCash()
    {
        using org_ptr = long double (WINAPIV*)(struct CPvpOrderView*);
        return (org_ptr(0x14007c2e0L))(this);
    };
    long double CPvpOrderView::GetPvpTempCash()
    {
        using org_ptr = long double (WINAPIV*)(struct CPvpOrderView*);
        return (org_ptr(0x14007d570L))(this);
    };
    bool CPvpOrderView::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpOrderView*);
        return (org_ptr(0x1403f7180L))(this);
    };
    void CPvpOrderView::Loop(uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, uint16_t);
        (org_ptr(0x1403f79c0L))(this, wIndex);
    };
    void CPvpOrderView::Notify_OrderView(uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, uint16_t);
        (org_ptr(0x1403f7b40L))(this, wIndex);
    };
    void CPvpOrderView::Notify_Point(uint16_t wIndex, long double dChangePoint, unsigned int dwTarSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, uint16_t, long double, unsigned int);
        (org_ptr(0x1403f7c20L))(this, wIndex, dChangePoint, dwTarSerial);
    };
    void CPvpOrderView::Notify_PvPEnd(uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, uint16_t);
        (org_ptr(0x1403f7ce0L))(this, wIndex);
    };
    void CPvpOrderView::Notify_PvpTempCash(uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, uint16_t);
        (org_ptr(0x1403f7d60L))(this, wIndex);
    };
    void CPvpOrderView::ResetPvPOrderView()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*);
        (org_ptr(0x1403f7970L))(this);
    };
    void CPvpOrderView::SetOrderViewAttackState()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*);
        (org_ptr(0x1403f7aa0L))(this);
    };
    void CPvpOrderView::SetOrderViewDamagedState()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*);
        (org_ptr(0x1403f7af0L))(this);
    };
    void CPvpOrderView::SetPvpCash(long double dAlter)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, long double);
        (org_ptr(0x14007c2b0L))(this, dAlter);
    };
    bool CPvpOrderView::SetPvpOrderView(long double dPvpPoint, struct _PVP_ORDER_VIEW_DB_BASE* pkInfo, struct CPlayer* pOne)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpOrderView*, long double, struct _PVP_ORDER_VIEW_DB_BASE*, struct CPlayer*);
        return (org_ptr(0x1403f71c0L))(this, dPvpPoint, pkInfo, pOne);
    };
    void CPvpOrderView::Update(int64_t tUpdateDate, int nDeath, int nKill, long double dTodayStacked, long double dPvpPoint, long double dPvpTempCash)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, int64_t, int, int, long double, long double, long double);
        (org_ptr(0x1403f75b0L))(this, tUpdateDate, nDeath, nKill, dTodayStacked, dPvpPoint, dPvpTempCash);
    };
    void CPvpOrderView::UpdatePvPDeath(uint16_t wIndex, unsigned int dwTarSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, uint16_t, unsigned int);
        (org_ptr(0x1403f7650L))(this, wIndex, dwTarSerial);
    };
    void CPvpOrderView::UpdatePvPKill(uint16_t wIndex, unsigned int dwTarSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, uint16_t, unsigned int);
        (org_ptr(0x1403f7760L))(this, wIndex, dwTarSerial);
    };
    void CPvpOrderView::UpdatePvPPoint(long double dUpPoint, long double dNewPoint)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, long double, long double);
        (org_ptr(0x1403f7880L))(this, dUpPoint, dNewPoint);
    };
    void CPvpOrderView::UpdatePvpCash(long double dPvpCash)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, long double);
        (org_ptr(0x1403f74e0L))(this, dPvpCash);
    };
    void CPvpOrderView::Update_ContHaveCash(char byCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, char);
        (org_ptr(0x1403f8020L))(this, byCnt);
    };
    void CPvpOrderView::Update_ContLoseCash(char byCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, char);
        (org_ptr(0x1403f80b0L))(this, byCnt);
    };
    void CPvpOrderView::Update_KillerList(unsigned int dwSerial, int nIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, unsigned int, int);
        (org_ptr(0x1403f7f90L))(this, dwSerial, nIndex);
    };
    void CPvpOrderView::Update_PvpTempCash(uint16_t wIndex, long double dTempPvpCash)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, uint16_t, long double);
        (org_ptr(0x1403f7df0L))(this, wIndex, dTempPvpCash);
    };
    void CPvpOrderView::Update_RaceWarRecvr(bool bUse)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpOrderView*, bool);
        (org_ptr(0x1403f8140L))(this, bUse);
    };
END_ATF_NAMESPACE
