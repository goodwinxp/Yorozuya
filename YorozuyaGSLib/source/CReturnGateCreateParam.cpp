#include <CReturnGateCreateParam.hpp>


START_ATF_NAMESPACE
    CReturnGateCreateParam::CReturnGateCreateParam(struct CPlayer* pkOwner)
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateCreateParam*, struct CPlayer*);
        (org_ptr(0x1401684e0L))(this, pkOwner);
    };
    void CReturnGateCreateParam::ctor_CReturnGateCreateParam(struct CPlayer* pkOwner)
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateCreateParam*, struct CPlayer*);
        (org_ptr(0x1401684e0L))(this, pkOwner);
    };
    struct CPlayer* CReturnGateCreateParam::GetOwner()
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct CReturnGateCreateParam*);
        return (org_ptr(0x1401692d0L))(this);
    };
    CReturnGateCreateParam::~CReturnGateCreateParam()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateCreateParam*);
        (org_ptr(0x140251510L))(this);
    };
    void CReturnGateCreateParam::dtor_CReturnGateCreateParam()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateCreateParam*);
        (org_ptr(0x140251510L))(this);
    };
END_ATF_NAMESPACE
