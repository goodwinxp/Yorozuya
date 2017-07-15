#include <CCashDbWorkerGB.hpp>


START_ATF_NAMESPACE
    CCashDbWorkerGB::CCashDbWorkerGB()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerGB*);
        (org_ptr(0x14022c340L))(this);
    };
    void CCashDbWorkerGB::ctor_CCashDbWorkerGB()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerGB*);
        (org_ptr(0x14022c340L))(this);
    };
    void CCashDbWorkerGB::CompleteWork()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerGB*);
        (org_ptr(0x140318ec0L))(this);
    };
    void CCashDbWorkerGB::DoWork()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerGB*);
        (org_ptr(0x1403193d0L))(this);
    };
    void CCashDbWorkerGB::GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerGB*, struct _param_cash_update*, int, char*, uint64_t);
        (org_ptr(0x1403190b0L))(this, rParam, nIdx, wszQuery, tBufferSize);
    };
    bool CCashDbWorkerGB::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct CCashDbWorkerGB*);
        return (org_ptr(0x140318e40L))(this);
    };
    void CCashDbWorkerGB::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerGB*);
        (org_ptr(0x140318de0L))(this);
    };
    bool CCashDbWorkerGB::_init_database()
    {
        using org_ptr = bool (WINAPIV*)(struct CCashDbWorkerGB*);
        return (org_ptr(0x1403192e0L))(this);
    };
    int CCashDbWorkerGB::_wait_tsk_cash_select(struct Task* pkTsk, int nIdx)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerGB*, struct Task*, int);
        return (org_ptr(0x140319040L))(this, pkTsk, nIdx);
    };
    int CCashDbWorkerGB::_wait_tsk_cash_update(struct Task* pkTsk, int nIdx)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerGB*, struct Task*, int);
        return (org_ptr(0x140319200L))(this, pkTsk, nIdx);
    };
    CCashDbWorkerGB::~CCashDbWorkerGB()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerGB*);
        (org_ptr(0x14022c410L))(this);
    };
    void CCashDbWorkerGB::dtor_CCashDbWorkerGB()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerGB*);
        (org_ptr(0x14022c410L))(this);
    };
END_ATF_NAMESPACE
