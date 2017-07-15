#include <CReturnGateController.hpp>


START_ATF_NAMESPACE
    CReturnGateController::CReturnGateController()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
        (org_ptr(0x140250040L))(this);
    };
    void CReturnGateController::ctor_CReturnGateController()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
        (org_ptr(0x140250040L))(this);
    };
    void CReturnGateController::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
        (org_ptr(0x1402509d0L))(this);
    };
    void CReturnGateController::Close(struct CReturnGate* pkGate)
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateController*, struct CReturnGate*);
        (org_ptr(0x140250f70L))(this, pkGate);
    };
    void CReturnGateController::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1402501a0L))();
    };
    bool CReturnGateController::Enter(unsigned int uiGateInx, struct CPlayer* pkObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CReturnGateController*, unsigned int, struct CPlayer*);
        return (org_ptr(0x1402508b0L))(this, uiGateInx, pkObj);
    };
    struct CReturnGate* CReturnGateController::GetEmpty()
    {
        using org_ptr = struct CReturnGate* (WINAPIV*)(struct CReturnGateController*);
        return (org_ptr(0x140250c30L))(this);
    };
    struct CReturnGate* CReturnGateController::GetGate(unsigned int uiInx)
    {
        using org_ptr = struct CReturnGate* (WINAPIV*)(struct CReturnGateController*, unsigned int);
        return (org_ptr(0x140250980L))(this, uiInx);
    };
    bool CReturnGateController::Init(unsigned int uiSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CReturnGateController*, unsigned int);
        return (org_ptr(0x140250220L))(this, uiSize);
    };
    struct CReturnGateController* CReturnGateController::Instance()
    {
        using org_ptr = struct CReturnGateController* (WINAPIV*)();
        return (org_ptr(0x1402500e0L))();
    };
    bool CReturnGateController::IsExistOwner(struct CPlayer* pkObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CReturnGateController*, struct CPlayer*);
        return (org_ptr(0x140250ce0L))(this, pkObj);
    };
    void CReturnGateController::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
        (org_ptr(0x140250920L))(this);
    };
    bool CReturnGateController::Open(struct CPlayer* pkOwner)
    {
        using org_ptr = bool (WINAPIV*)(struct CReturnGateController*, struct CPlayer*);
        return (org_ptr(0x1402506a0L))(this, pkOwner);
    };
    int CReturnGateController::ProcessEnter(unsigned int uiGateInx, struct CPlayer* pkObj)
    {
        using org_ptr = int (WINAPIV*)(struct CReturnGateController*, unsigned int, struct CPlayer*);
        return (org_ptr(0x140250dd0L))(this, uiGateInx, pkObj);
    };
    void CReturnGateController::SendEnterResult(int iResult, struct CPlayer* pkObj)
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateController*, int, struct CPlayer*);
        (org_ptr(0x140251000L))(this, iResult, pkObj);
    };
    void CReturnGateController::UpdateClose()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
        (org_ptr(0x140250e90L))(this);
    };
    CReturnGateController::~CReturnGateController()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
        (org_ptr(0x1402500a0L))(this);
    };
    void CReturnGateController::dtor_CReturnGateController()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
        (org_ptr(0x1402500a0L))(this);
    };
END_ATF_NAMESPACE
