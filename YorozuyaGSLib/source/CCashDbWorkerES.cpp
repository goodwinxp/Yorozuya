#include <CCashDbWorkerES.hpp>


START_ATF_NAMESPACE
    CCashDbWorkerES::CCashDbWorkerES()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerES*);
        (org_ptr(0x140231b00L))(this);
    };
    void CCashDbWorkerES::ctor_CCashDbWorkerES()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerES*);
        (org_ptr(0x140231b00L))(this);
    };
    void CCashDbWorkerES::GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerES*, struct _param_cash_update*, int, char*, uint64_t);
        (org_ptr(0x140322400L))(this, rParam, nIdx, wszQuery, tBufferSize);
    };
    CCashDbWorkerES::~CCashDbWorkerES()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerES*);
        (org_ptr(0x140231bd0L))(this);
    };
    void CCashDbWorkerES::dtor_CCashDbWorkerES()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerES*);
        (org_ptr(0x140231bd0L))(this);
    };
END_ATF_NAMESPACE
