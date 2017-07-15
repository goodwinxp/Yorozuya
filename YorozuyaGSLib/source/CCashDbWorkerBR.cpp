#include <CCashDbWorkerBR.hpp>


START_ATF_NAMESPACE
    CCashDbWorkerBR::CCashDbWorkerBR()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerBR*);
        (org_ptr(0x14022f290L))(this);
    };
    void CCashDbWorkerBR::ctor_CCashDbWorkerBR()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerBR*);
        (org_ptr(0x14022f290L))(this);
    };
    void CCashDbWorkerBR::GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerBR*, struct _param_cash_update*, int, char*, uint64_t);
        (org_ptr(0x140321f40L))(this, rParam, nIdx, wszQuery, tBufferSize);
    };
    CCashDbWorkerBR::~CCashDbWorkerBR()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerBR*);
        (org_ptr(0x14022f360L))(this);
    };
    void CCashDbWorkerBR::dtor_CCashDbWorkerBR()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerBR*);
        (org_ptr(0x14022f360L))(this);
    };
END_ATF_NAMESPACE
