#include <CCashDbWorkerUS.hpp>


START_ATF_NAMESPACE
    CCashDbWorkerUS::CCashDbWorkerUS()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerUS*);
        (org_ptr(0x140231600L))(this);
    };
    void CCashDbWorkerUS::ctor_CCashDbWorkerUS()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerUS*);
        (org_ptr(0x140231600L))(this);
    };
    void CCashDbWorkerUS::GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerUS*, struct _param_cash_update*, int, char*, uint64_t);
        (org_ptr(0x140322260L))(this, rParam, nIdx, wszQuery, tBufferSize);
    };
    CCashDbWorkerUS::~CCashDbWorkerUS()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerUS*);
        (org_ptr(0x1402316d0L))(this);
    };
    void CCashDbWorkerUS::dtor_CCashDbWorkerUS()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerUS*);
        (org_ptr(0x1402316d0L))(this);
    };
END_ATF_NAMESPACE
