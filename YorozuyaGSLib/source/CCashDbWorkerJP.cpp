#include <CCashDbWorkerJP.hpp>


START_ATF_NAMESPACE
    CCashDbWorkerJP::CCashDbWorkerJP()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerJP*);
        (org_ptr(0x14022d630L))(this);
    };
    void CCashDbWorkerJP::ctor_CCashDbWorkerJP()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerJP*);
        (org_ptr(0x14022d630L))(this);
    };
    int CCashDbWorkerJP::ConvertErrorCode(char state)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerJP*, char);
        return (org_ptr(0x1403206a0L))(this, state);
    };
    void CCashDbWorkerJP::GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerJP*, struct _param_cash_update*, int, char*, uint64_t);
        (org_ptr(0x14031ff50L))(this, rParam, nIdx, wszQuery, tBufferSize);
    };
    void CCashDbWorkerJP::_all_rollback(struct _param_cash_update* psheet)
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerJP*, struct _param_cash_update*);
        (org_ptr(0x140320350L))(this, psheet);
    };
    int CCashDbWorkerJP::_wait_tsk_cash_rollback(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerJP*, struct Task*);
        return (org_ptr(0x140320200L))(this, pkTsk);
    };
    int CCashDbWorkerJP::_wait_tsk_cash_select(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerJP*, struct Task*);
        return (org_ptr(0x1403200a0L))(this, pkTsk);
    };
    int CCashDbWorkerJP::_wait_tsk_cash_update(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerJP*, struct Task*);
        return (org_ptr(0x140320110L))(this, pkTsk);
    };
    CCashDbWorkerJP::~CCashDbWorkerJP()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerJP*);
        (org_ptr(0x14022d700L))(this);
    };
    void CCashDbWorkerJP::dtor_CCashDbWorkerJP()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerJP*);
        (org_ptr(0x14022d700L))(this);
    };
END_ATF_NAMESPACE
