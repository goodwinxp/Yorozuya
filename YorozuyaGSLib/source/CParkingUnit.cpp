#include <CParkingUnit.hpp>


START_ATF_NAMESPACE
    CParkingUnit::CParkingUnit()
    {
        using org_ptr = void (WINAPIV*)(struct CParkingUnit*);
        (org_ptr(0x140167900L))(this);
    };
    void CParkingUnit::ctor_CParkingUnit()
    {
        using org_ptr = void (WINAPIV*)(struct CParkingUnit*);
        (org_ptr(0x140167900L))(this);
    };
    uint16_t CParkingUnit::CalcCurHPRate()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CParkingUnit*);
        return (org_ptr(0x1401683f0L))(this);
    };
    void CParkingUnit::ChangeOwner(struct CPlayer* pNewOwner, char byUnitSlotIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CParkingUnit*, struct CPlayer*, char);
        (org_ptr(0x140167c30L))(this, pNewOwner, byUnitSlotIndex);
    };
    bool CParkingUnit::Create(struct _parkingunit_create_setdata* pParam)
    {
        using org_ptr = bool (WINAPIV*)(struct CParkingUnit*, struct _parkingunit_create_setdata*);
        return (org_ptr(0x140167a40L))(this, pParam);
    };
    bool CParkingUnit::Destroy(char byDestoryType)
    {
        using org_ptr = bool (WINAPIV*)(struct CParkingUnit*, char);
        return (org_ptr(0x140167b80L))(this, byDestoryType);
    };
    void CParkingUnit::Init(struct _object_id* pID)
    {
        using org_ptr = void (WINAPIV*)(struct CParkingUnit*, struct _object_id*);
        (org_ptr(0x140167980L))(this, pID);
    };
    bool CParkingUnit::IsRideRight(struct CPlayer* pOne)
    {
        using org_ptr = bool (WINAPIV*)(struct CParkingUnit*, struct CPlayer*);
        return (org_ptr(0x140167cc0L))(this, pOne);
    };
    void CParkingUnit::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CParkingUnit*);
        (org_ptr(0x140167c20L))(this);
    };
    void CParkingUnit::SendMsg_ChangeOwner(char byUnitSlotIndex, struct CPlayer* pOldOwner)
    {
        using org_ptr = void (WINAPIV*)(struct CParkingUnit*, char, struct CPlayer*);
        (org_ptr(0x140167ec0L))(this, byUnitSlotIndex, pOldOwner);
    };
    void CParkingUnit::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CParkingUnit*);
        (org_ptr(0x140167ce0L))(this);
    };
    void CParkingUnit::SendMsg_Destroy(char byDestoryType)
    {
        using org_ptr = void (WINAPIV*)(struct CParkingUnit*, char);
        (org_ptr(0x140167e20L))(this, byDestoryType);
    };
    void CParkingUnit::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CParkingUnit*, int);
        (org_ptr(0x140167fd0L))(this, n);
    };
    CParkingUnit::~CParkingUnit()
    {
        using org_ptr = void (WINAPIV*)(struct CParkingUnit*);
        (org_ptr(0x140168480L))(this);
    };
    void CParkingUnit::dtor_CParkingUnit()
    {
        using org_ptr = void (WINAPIV*)(struct CParkingUnit*);
        (org_ptr(0x140168480L))(this);
    };
END_ATF_NAMESPACE
