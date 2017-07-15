#include <CReturnGate.hpp>


START_ATF_NAMESPACE
    CReturnGate::CReturnGate(struct _object_id* pID)
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGate*, struct _object_id*);
        (org_ptr(0x1401685c0L))(this, pID);
    };
    void CReturnGate::ctor_CReturnGate(struct _object_id* pID)
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGate*, struct _object_id*);
        (org_ptr(0x1401685c0L))(this, pID);
    };
    void CReturnGate::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGate*);
        (org_ptr(0x140168720L))(this);
    };
    void CReturnGate::Close()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGate*);
        (org_ptr(0x1401688c0L))(this);
    };
    int CReturnGate::Enter(struct CPlayer* pkObj)
    {
        using org_ptr = int (WINAPIV*)(struct CReturnGate*, struct CPlayer*);
        return (org_ptr(0x140168930L))(this, pkObj);
    };
    uint16_t CReturnGate::GetIndex()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CReturnGate*);
        return (org_ptr(0x140251520L))(this);
    };
    void CReturnGate::GetInfo(struct _open_return_gate_inform_zocl* Info)
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGate*, struct _open_return_gate_inform_zocl*);
        (org_ptr(0x140168b20L))(this, Info);
    };
    struct CPlayer* CReturnGate::GetOwner()
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct CReturnGate*);
        return (org_ptr(0x140034aa0L))(this);
    };
    bool CReturnGate::IsClose()
    {
        using org_ptr = bool (WINAPIV*)(struct CReturnGate*);
        return (org_ptr(0x140168aa0L))(this);
    };
    bool CReturnGate::IsOpen()
    {
        using org_ptr = bool (WINAPIV*)(struct CReturnGate*);
        return (org_ptr(0x140251540L))(this);
    };
    bool CReturnGate::IsValidOwner()
    {
        using org_ptr = bool (WINAPIV*)(struct CReturnGate*);
        return (org_ptr(0x140168a20L))(this);
    };
    bool CReturnGate::IsValidPosition(float* pfCurPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CReturnGate*, float*);
        return (org_ptr(0x140168cf0L))(this, pfCurPos);
    };
    bool CReturnGate::Open(struct CReturnGateCreateParam* pParam)
    {
        using org_ptr = bool (WINAPIV*)(struct CReturnGate*, struct CReturnGateCreateParam*);
        return (org_ptr(0x140168760L))(this, pParam);
    };
    void CReturnGate::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGate*);
        (org_ptr(0x140168d50L))(this);
    };
    void CReturnGate::SendMsg_Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGate*);
        (org_ptr(0x140168e60L))(this);
    };
    void CReturnGate::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGate*, int);
        (org_ptr(0x140168bd0L))(this, n);
    };
    void CReturnGate::SendMsg_MovePortal(struct CPlayer* pkObj)
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGate*, struct CPlayer*);
        (org_ptr(0x140168ee0L))(this, pkObj);
    };
    CReturnGate::~CReturnGate()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGate*);
        (org_ptr(0x1401686d0L))(this);
    };
    void CReturnGate::dtor_CReturnGate()
    {
        using org_ptr = void (WINAPIV*)(struct CReturnGate*);
        (org_ptr(0x1401686d0L))(this);
    };
    
END_ATF_NAMESPACE
