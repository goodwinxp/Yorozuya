#include <CPvpCashPoint.hpp>


START_ATF_NAMESPACE
    CPvpCashPoint::CPvpCashPoint()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*);
        (org_ptr(0x1403f4f80L))(this);
    };
    void CPvpCashPoint::ctor_CPvpCashPoint()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*);
        (org_ptr(0x1403f4f80L))(this);
    };
    long double CPvpCashPoint::CalPvpCashPoint(int nDstLv, int nSrcLv, char* pSrcClass, char nParty)
    {
        using org_ptr = long double (WINAPIV*)(struct CPvpCashPoint*, int, int, char*, char);
        return (org_ptr(0x1403f50e0L))(this, nDstLv, nSrcLv, pSrcClass, nParty);
    };
    bool CPvpCashPoint::CheckPvpHaveCondition(struct CPlayer* pKiller, struct CPlayer* pDier, long double dOldTempPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpCashPoint*, struct CPlayer*, struct CPlayer*, long double);
        return (org_ptr(0x1403f54f0L))(this, pKiller, pDier, dOldTempPoint);
    };
    bool CPvpCashPoint::CheckPvpLoseCondition(struct CPlayer* pKiller, struct CPlayer* pDier)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpCashPoint*, struct CPlayer*, struct CPlayer*);
        return (org_ptr(0x1403f5370L))(this, pKiller, pDier);
    };
    int CPvpCashPoint::GetContPvpHave()
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashPoint*);
        return (org_ptr(0x14007d610L))(this);
    };
    int CPvpCashPoint::GetContPvpLose()
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashPoint*);
        return (org_ptr(0x14007d630L))(this);
    };
    int CPvpCashPoint::GetMaxTempPoint(char nLv, bool bPremium)
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashPoint*, char, bool);
        return (org_ptr(0x1403f5230L))(this, nLv, bPremium);
    };
    int CPvpCashPoint::GetMinTempPoint(char nLv)
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashPoint*, char);
        return (org_ptr(0x1403f5280L))(this, nLv);
    };
    int CPvpCashPoint::GetMyClassVal(char* pClass)
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashPoint*, char*);
        return (org_ptr(0x1403f51e0L))(this, pClass);
    };
    bool CPvpCashPoint::GetRaceWarRecvr()
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpCashPoint*);
        return (org_ptr(0x140284cf0L))(this);
    };
    int CPvpCashPoint::GetTalikRecvrPoint(char byTblCode, unsigned int dwIndex)
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashPoint*, char, unsigned int);
        return (org_ptr(0x1403f5190L))(this, byTblCode, dwIndex);
    };
    void CPvpCashPoint::Init(struct _PVP_ORDER_VIEW_DB_BASE* pkInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*, struct _PVP_ORDER_VIEW_DB_BASE*);
        (org_ptr(0x1403f5010L))(this, pkInfo);
    };
    bool CPvpCashPoint::IsPvpMap(struct CPlayer* pOne)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpCashPoint*, struct CPlayer*);
        return (org_ptr(0x1403f52d0L))(this, pOne);
    };
    void CPvpCashPoint::KillerListInit()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*);
        (org_ptr(0x1403f59d0L))(this);
    };
    void CPvpCashPoint::SendMsg_PvpCashInform(int n, char byError)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*, int, char);
        (org_ptr(0x1403f5940L))(this, n, byError);
    };
    void CPvpCashPoint::SendMsg_RecoverResult(int n, char byRet, int nRecvrPoint)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*, int, char, int);
        (org_ptr(0x1403f58a0L))(this, n, byRet, nRecvrPoint);
    };
    void CPvpCashPoint::SendMsg_TalikList(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*, int);
        (org_ptr(0x1403f57a0L))(this, n);
    };
    void CPvpCashPoint::SetContPvpHave(char byCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*, char);
        (org_ptr(0x14007d5b0L))(this, byCnt);
    };
    void CPvpCashPoint::SetContPvpLose(int byCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*, int);
        (org_ptr(0x14007d5e0L))(this, byCnt);
    };
    bool CPvpCashPoint::SetKillerList(unsigned int dwKillerSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpCashPoint*, unsigned int);
        return (org_ptr(0x1403f5640L))(this, dwKillerSerial);
    };
    void CPvpCashPoint::SetRaceWarRecvr(bool bUsed)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*, bool);
        (org_ptr(0x14007c320L))(this, bUsed);
    };
    void CPvpCashPoint::UpdateKillerList(struct _PVP_ORDER_VIEW_DB_BASE* pkInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*, struct _PVP_ORDER_VIEW_DB_BASE*);
        (org_ptr(0x1403f56e0L))(this, pkInfo);
    };
    CPvpCashPoint::~CPvpCashPoint()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*);
        (org_ptr(0x140074750L))(this);
    };
    void CPvpCashPoint::dtor_CPvpCashPoint()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashPoint*);
        (org_ptr(0x140074750L))(this);
    };
END_ATF_NAMESPACE
