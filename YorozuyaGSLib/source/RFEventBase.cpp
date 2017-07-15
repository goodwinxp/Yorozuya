#include <RFEventBase.hpp>


START_ATF_NAMESPACE
    int RFEventBase::DoEvent(struct CPlayer* pOne)
    {
        using org_ptr = int (WINAPIV*)(struct RFEventBase*, struct CPlayer*);
        return (org_ptr(0x1403294d0L))(this, pOne);
    };
    char* RFEventBase::GetPlayerState(unsigned int nIdx, unsigned int nAvator)
    {
        using org_ptr = char* (WINAPIV*)(struct RFEventBase*, unsigned int, unsigned int);
        return (org_ptr(0x140329550L))(this, nIdx, nAvator);
    };
    bool RFEventBase::Initialzie()
    {
        using org_ptr = bool (WINAPIV*)(struct RFEventBase*);
        return (org_ptr(0x1403294a0L))(this);
    };
    bool RFEventBase::IsDbUpdate(unsigned int nIdx)
    {
        using org_ptr = bool (WINAPIV*)(struct RFEventBase*, unsigned int);
        return (org_ptr(0x140329500L))(this, nIdx);
    };
    bool RFEventBase::IsEnable()
    {
        using org_ptr = bool (WINAPIV*)(struct RFEventBase*);
        return (org_ptr(0x1403294f0L))(this);
    };
    void RFEventBase::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct RFEventBase*);
        (org_ptr(0x140329520L))(this);
    };
    RFEventBase::RFEventBase()
    {
        using org_ptr = void (WINAPIV*)(struct RFEventBase*);
        (org_ptr(0x140329450L))(this);
    };
    void RFEventBase::ctor_RFEventBase()
    {
        using org_ptr = void (WINAPIV*)(struct RFEventBase*);
        (org_ptr(0x140329450L))(this);
    };
    bool RFEventBase::SetEvent(char* p, int size, bool bInit)
    {
        using org_ptr = bool (WINAPIV*)(struct RFEventBase*, char*, int, bool);
        return (org_ptr(0x1403294b0L))(this, p, size, bInit);
    };
    bool RFEventBase::SetPlayerState(void* p, int size)
    {
        using org_ptr = bool (WINAPIV*)(struct RFEventBase*, void*, int);
        return (org_ptr(0x140329530L))(this, p, size);
    };
    RFEventBase::~RFEventBase()
    {
        using org_ptr = void (WINAPIV*)(struct RFEventBase*);
        (org_ptr(0x140329480L))(this);
    };
    void RFEventBase::dtor_RFEventBase()
    {
        using org_ptr = void (WINAPIV*)(struct RFEventBase*);
        (org_ptr(0x140329480L))(this);
    };
END_ATF_NAMESPACE
