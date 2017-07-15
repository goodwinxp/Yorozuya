#include <CCashDbWorkerID.hpp>


START_ATF_NAMESPACE
    CCashDbWorkerID::CCashDbWorkerID()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerID*);
        (org_ptr(0x14022cca0L))(this);
    };
    void CCashDbWorkerID::ctor_CCashDbWorkerID()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerID*);
        (org_ptr(0x14022cca0L))(this);
    };
    void CCashDbWorkerID::GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerID*, struct _param_cash_update*, int, char*, uint64_t);
        (org_ptr(0x14031fdd0L))(this, rParam, nIdx, wszQuery, tBufferSize);
    };
    CCashDbWorkerID::~CCashDbWorkerID()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerID*);
        (org_ptr(0x14022cd70L))(this);
    };
    void CCashDbWorkerID::dtor_CCashDbWorkerID()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerID*);
        (org_ptr(0x14022cd70L))(this);
    };
END_ATF_NAMESPACE
