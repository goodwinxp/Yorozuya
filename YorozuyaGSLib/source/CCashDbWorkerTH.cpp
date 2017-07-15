#include <CCashDbWorkerTH.hpp>


START_ATF_NAMESPACE
    CCashDbWorkerTH::CCashDbWorkerTH()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerTH*);
        (org_ptr(0x140232490L))(this);
    };
    void CCashDbWorkerTH::ctor_CCashDbWorkerTH()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerTH*);
        (org_ptr(0x140232490L))(this);
    };
    void CCashDbWorkerTH::GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerTH*, struct _param_cash_update*, int, char*, uint64_t);
        (org_ptr(0x1403225a0L))(this, rParam, nIdx, wszQuery, tBufferSize);
    };
    CCashDbWorkerTH::~CCashDbWorkerTH()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerTH*);
        (org_ptr(0x140232560L))(this);
    };
    void CCashDbWorkerTH::dtor_CCashDbWorkerTH()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerTH*);
        (org_ptr(0x140232560L))(this);
    };
END_ATF_NAMESPACE
