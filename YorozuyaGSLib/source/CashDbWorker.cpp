#include <CashDbWorker.hpp>


START_ATF_NAMESPACE
    CashDbWorker::CashDbWorker()
        : Worker("CashDbWorker", 2532, 2500)
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*);
        (org_ptr(0x14022b750L))(this);
    };
    void CashDbWorker::ctor_CashDbWorker()
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*);
        (org_ptr(0x14022b750L))(this);
    };
    void CashDbWorker::CompleteWork()
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*);
        (org_ptr(0x1402eed20L))(this);
    };
    int CashDbWorker::ConvertErrorCode(char state)
    {
        using org_ptr = int (WINAPIV*)(struct CashDbWorker*, char);
        return (org_ptr(0x1402f0cd0L))(this, state);
    };
    void CashDbWorker::DoWork()
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*);
        (org_ptr(0x1402f0b80L))(this);
    };
    bool CashDbWorker::GetBillingDBConnectionStatus()
    {
        using org_ptr = bool (WINAPIV*)(struct CashDbWorker*);
        return (org_ptr(0x1402eee50L))(this);
    };
    void CashDbWorker::GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*, struct _param_cash_update*, int, char*, uint64_t);
        (org_ptr(0x1402eeeb0L))(this, rParam, nIdx, wszQuery, tBufferSize);
    };
    bool CashDbWorker::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct CashDbWorker*);
        return (org_ptr(0x1402eec00L))(this);
    };
    bool CashDbWorker::IsNULL()
    {
        using org_ptr = bool (WINAPIV*)(struct CashDbWorker*);
        return (org_ptr(0x1402eeb10L))(this);
    };
    bool CashDbWorker::PushTask(int nTaskCode, char* p, uint64_t size)
    {
        using org_ptr = bool (WINAPIV*)(struct CashDbWorker*, int, char*, uint64_t);
        return (org_ptr(0x1402eeca0L))(this, nTaskCode, p, size);
    };
    void CashDbWorker::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*);
        (org_ptr(0x1402eeb60L))(this);
    };
    void CashDbWorker::SendMsgSucceedBuy(uint16_t wSock, struct _param_cash_update* sheet)
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*, uint16_t, struct _param_cash_update*);
        (org_ptr(0x1402f14f0L))(this, wSock, sheet);
    };
    void CashDbWorker::_all_rollback(struct _param_cash_update* psheet)
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*, struct _param_cash_update*);
        (org_ptr(0x1402f0440L))(this, psheet);
    };
    void CashDbWorker::_complete_tsk_cash_rollback(struct Task* pkTsk)
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*, struct Task*);
        (org_ptr(0x1402efe80L))(this, pkTsk);
    };
    void CashDbWorker::_complete_tsk_cash_select(struct Task* pkTsk)
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*, struct Task*);
        (org_ptr(0x1402ef070L))(this, pkTsk);
    };
    void CashDbWorker::_complete_tsk_cash_total_selling_select(struct Task* pkTsk)
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*, struct Task*);
        (org_ptr(0x1402f03b0L))(this, pkTsk);
    };
    void CashDbWorker::_complete_tsk_cash_update(struct Task* pkTsk)
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*, struct Task*);
        (org_ptr(0x1402ef290L))(this, pkTsk);
    };
    void CashDbWorker::_complete_tsk_cashitem_buy_dblog(struct Task* pkTsk)
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*, struct Task*);
        (org_ptr(0x1402f0210L))(this, pkTsk);
    };
    void CashDbWorker::_delete_from_inven(struct CPlayer* pOne, struct _param_cash_update* psheet, int nNum)
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*, struct CPlayer*, struct _param_cash_update*, int);
        (org_ptr(0x1402f1370L))(this, pOne, psheet, nNum);
    };
    struct CPlayer* CashDbWorker::_get_player(uint16_t wSock, unsigned int dwAvator)
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct CashDbWorker*, uint16_t, unsigned int);
        return (org_ptr(0x1402f2f10L))(this, wSock, dwAvator);
    };
    bool CashDbWorker::_init_database()
    {
        using org_ptr = bool (WINAPIV*)(struct CashDbWorker*);
        return (org_ptr(0x1402f0720L))(this);
    };
    bool CashDbWorker::_init_loggers()
    {
        using org_ptr = bool (WINAPIV*)(struct CashDbWorker*);
        return (org_ptr(0x1402f0e50L))(this);
    };
    bool CashDbWorker::_insert_to_inven(struct CPlayer* pOne, struct _param_cash_update::__item* pGII)
    {
        using org_ptr = bool (WINAPIV*)(struct CashDbWorker*, struct CPlayer*, struct _param_cash_update::__item*);
        return (org_ptr(0x1402f0fa0L))(this, pOne, pGII);
    };
    int CashDbWorker::_wait_tsk_cash_buy_dblog(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CashDbWorker*, struct Task*);
        return (org_ptr(0x1402f0070L))(this, pkTsk);
    };
    int CashDbWorker::_wait_tsk_cash_rollback(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CashDbWorker*, struct Task*);
        return (org_ptr(0x1402efd00L))(this, pkTsk);
    };
    int CashDbWorker::_wait_tsk_cash_select(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CashDbWorker*, struct Task*);
        return (org_ptr(0x1402ef000L))(this, pkTsk);
    };
    int CashDbWorker::_wait_tsk_cash_update(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CashDbWorker*, struct Task*);
        return (org_ptr(0x1402ef1a0L))(this, pkTsk);
    };
    int CashDbWorker::_wait_tst_cash_total_selling_select(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CashDbWorker*, struct Task*);
        return (org_ptr(0x1402f0340L))(this, pkTsk);
    };
    CashDbWorker::~CashDbWorker()
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*);
        (org_ptr(0x14022b8d0L))(this);
    };
    void CashDbWorker::dtor_CashDbWorker()
    {
        using org_ptr = void (WINAPIV*)(struct CashDbWorker*);
        (org_ptr(0x14022b8d0L))(this);
    };
    
END_ATF_NAMESPACE
