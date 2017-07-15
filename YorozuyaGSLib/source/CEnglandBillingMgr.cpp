#include <CEnglandBillingMgr.hpp>


START_ATF_NAMESPACE
    CEnglandBillingMgr::CEnglandBillingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CEnglandBillingMgr*);
        (org_ptr(0x1403196b0L))(this);
    };
    void CEnglandBillingMgr::ctor_CEnglandBillingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CEnglandBillingMgr*);
        (org_ptr(0x1403196b0L))(this);
    };
    int CEnglandBillingMgr::CallFunc_Item_Buy(struct _param_cash_update* rParam, int n, int nIdx)
    {
        using org_ptr = int (WINAPIV*)(struct CEnglandBillingMgr*, struct _param_cash_update*, int, int);
        return (org_ptr(0x140319c80L))(this, rParam, n, nIdx);
    };
    int CEnglandBillingMgr::CallFunc_RFOnline_Auth(struct _param_cash_select* rParam, int nIdx)
    {
        using org_ptr = int (WINAPIV*)(struct CEnglandBillingMgr*, struct _param_cash_select*, int);
        return (org_ptr(0x1403198f0L))(this, rParam, nIdx);
    };
    bool CEnglandBillingMgr::Free()
    {
        using org_ptr = bool (WINAPIV*)(struct CEnglandBillingMgr*);
        return (org_ptr(0x140319730L))(this);
    };
    bool CEnglandBillingMgr::MakeConnectionThread()
    {
        using org_ptr = bool (WINAPIV*)(struct CEnglandBillingMgr*);
        return (org_ptr(0x1403197b0L))(this);
    };
    void CEnglandBillingMgr::SetPoolPointer(struct TaskPool* lpPointer)
    {
        using org_ptr = void (WINAPIV*)(struct CEnglandBillingMgr*, struct TaskPool*);
        (org_ptr(0x140319790L))(this, lpPointer);
    };
    CEnglandBillingMgr::~CEnglandBillingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CEnglandBillingMgr*);
        (org_ptr(0x1403196f0L))(this);
    };
    void CEnglandBillingMgr::dtor_CEnglandBillingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CEnglandBillingMgr*);
        (org_ptr(0x1403196f0L))(this);
    };
END_ATF_NAMESPACE
