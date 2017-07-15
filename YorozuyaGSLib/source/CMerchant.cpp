#include <CMerchant.hpp>


START_ATF_NAMESPACE
    CMerchant::CMerchant()
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*);
        (org_ptr(0x140139010L))(this);
    };
    void CMerchant::ctor_CMerchant()
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*);
        (org_ptr(0x140139010L))(this);
    };
    bool CMerchant::Create(struct _npc_create_setdata* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CMerchant*, struct _npc_create_setdata*);
        return (org_ptr(0x140139140L))(this, pData);
    };
    bool CMerchant::Destroy(struct CGameObject* pAttObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CMerchant*, struct CGameObject*);
        return (org_ptr(0x1401391e0L))(this, pAttObj);
    };
    int CMerchant::GetFireTol()
    {
        using org_ptr = int (WINAPIV*)(struct CMerchant*);
        return (org_ptr(0x14013a140L))(this);
    };
    unsigned int CMerchant::GetNewMonSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)();
        return (org_ptr(0x14013a260L))();
    };
    char* CMerchant::GetObjName()
    {
        using org_ptr = char* (WINAPIV*)(struct CMerchant*);
        return (org_ptr(0x1401392a0L))(this);
    };
    int CMerchant::GetObjRace()
    {
        using org_ptr = int (WINAPIV*)(struct CMerchant*);
        return (org_ptr(0x14013a1c0L))(this);
    };
    int CMerchant::GetSoilTol()
    {
        using org_ptr = int (WINAPIV*)(struct CMerchant*);
        return (org_ptr(0x14013a180L))(this);
    };
    char* CMerchant::GetStoreDummyName()
    {
        using org_ptr = char* (WINAPIV*)(struct CMerchant*);
        return (org_ptr(0x140139380L))(this);
    };
    int CMerchant::GetWaterTol()
    {
        using org_ptr = int (WINAPIV*)(struct CMerchant*);
        return (org_ptr(0x14013a160L))(this);
    };
    int CMerchant::GetWindTol()
    {
        using org_ptr = int (WINAPIV*)(struct CMerchant*);
        return (org_ptr(0x14013a1a0L))(this);
    };
    bool CMerchant::Init(struct _object_id* pID)
    {
        using org_ptr = bool (WINAPIV*)(struct CMerchant*, struct _object_id*);
        return (org_ptr(0x1401390b0L))(this, pID);
    };
    void CMerchant::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*);
        (org_ptr(0x140139250L))(this);
    };
    void CMerchant::OutOfSec()
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*);
        (org_ptr(0x14013a0f0L))(this);
    };
    void CMerchant::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*);
        (org_ptr(0x1401393e0L))(this);
    };
    void CMerchant::SendMsg_Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*);
        (org_ptr(0x1401394d0L))(this);
    };
    void CMerchant::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*, int);
        (org_ptr(0x140139a80L))(this, n);
    };
    void CMerchant::SendMsg_Move()
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*);
        (org_ptr(0x140139560L))(this);
    };
    void CMerchant::SendMsg_RealFixPosition(bool bCircle)
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*, bool);
        (org_ptr(0x14013a1e0L))(this, bCircle);
    };
    void CMerchant::SendMsg_RealMovePoint(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*, int);
        (org_ptr(0x140139ba0L))(this, n);
    };
    void CMerchant::SendMsg_TransShipTicketNumInform(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*, int);
        (org_ptr(0x140139650L))(this, n);
    };
    CMerchant::~CMerchant()
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*);
        (org_ptr(0x140139060L))(this);
    };
    void CMerchant::dtor_CMerchant()
    {
        using org_ptr = void (WINAPIV*)(struct CMerchant*);
        (org_ptr(0x140139060L))(this);
    };
END_ATF_NAMESPACE
