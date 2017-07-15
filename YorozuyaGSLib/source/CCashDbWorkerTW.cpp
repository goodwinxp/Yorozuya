#include <CCashDbWorkerTW.hpp>


START_ATF_NAMESPACE
    CCashDbWorkerTW::CCashDbWorkerTW()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerTW*);
        (org_ptr(0x140230440L))(this);
    };
    void CCashDbWorkerTW::ctor_CCashDbWorkerTW()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerTW*);
        (org_ptr(0x140230440L))(this);
    };
    void CCashDbWorkerTW::GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerTW*, struct _param_cash_update*, int, char*, uint64_t);
        (org_ptr(0x1403220c0L))(this, rParam, nIdx, wszQuery, tBufferSize);
    };
    CCashDbWorkerTW::~CCashDbWorkerTW()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerTW*);
        (org_ptr(0x140230510L))(this);
    };
    void CCashDbWorkerTW::dtor_CCashDbWorkerTW()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerTW*);
        (org_ptr(0x140230510L))(this);
    };
END_ATF_NAMESPACE
