#include <CCashDbWorkerNULL.hpp>


START_ATF_NAMESPACE
    CCashDbWorkerNULL::CCashDbWorkerNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerNULL*);
        (org_ptr(0x1402f3020L))(this);
    };
    void CCashDbWorkerNULL::ctor_CCashDbWorkerNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerNULL*);
        (org_ptr(0x1402f3020L))(this);
    };
    void CCashDbWorkerNULL::CompleteWork()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerNULL*);
        (org_ptr(0x1402f30a0L))(this);
    };
    int CCashDbWorkerNULL::ConvertErrorCode(char state)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerNULL*, char);
        return (org_ptr(0x1402f1780L))(this, state);
    };
    void CCashDbWorkerNULL::DoWork()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerNULL*);
        (org_ptr(0x1402f30f0L))(this);
    };
    void CCashDbWorkerNULL::GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerNULL*, struct _param_cash_update*, int, char*, uint64_t);
        (org_ptr(0x1402f30b0L))(this, rParam, nIdx, wszQuery, tBufferSize);
    };
    bool CCashDbWorkerNULL::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct CCashDbWorkerNULL*);
        return (org_ptr(0x1402f3090L))(this);
    };
    void CCashDbWorkerNULL::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerNULL*);
        (org_ptr(0x1402f3080L))(this);
    };
    void CCashDbWorkerNULL::_all_rollback(struct _param_cash_update* psheet)
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerNULL*, struct _param_cash_update*);
        (org_ptr(0x1402f30d0L))(this, psheet);
    };
    bool CCashDbWorkerNULL::_init_database()
    {
        using org_ptr = bool (WINAPIV*)(struct CCashDbWorkerNULL*);
        return (org_ptr(0x1402f30e0L))(this);
    };
    int CCashDbWorkerNULL::_wait_tsk_cash_buy_dblog(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerNULL*, struct Task*);
        return (org_ptr(0x1402f1740L))(this, pkTsk);
    };
    int CCashDbWorkerNULL::_wait_tsk_cash_rollback(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerNULL*, struct Task*);
        return (org_ptr(0x1402f1720L))(this, pkTsk);
    };
    int CCashDbWorkerNULL::_wait_tsk_cash_select(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerNULL*, struct Task*);
        return (org_ptr(0x1402f16e0L))(this, pkTsk);
    };
    int CCashDbWorkerNULL::_wait_tsk_cash_update(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerNULL*, struct Task*);
        return (org_ptr(0x1402f1700L))(this, pkTsk);
    };
    int CCashDbWorkerNULL::_wait_tst_cash_total_selling_select(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerNULL*, struct Task*);
        return (org_ptr(0x1402f1760L))(this, pkTsk);
    };
    CCashDbWorkerNULL::~CCashDbWorkerNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerNULL*);
        (org_ptr(0x1402f3170L))(this);
    };
    void CCashDbWorkerNULL::dtor_CCashDbWorkerNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerNULL*);
        (org_ptr(0x1402f3170L))(this);
    };
END_ATF_NAMESPACE
