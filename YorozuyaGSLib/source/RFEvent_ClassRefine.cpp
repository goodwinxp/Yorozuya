#include <RFEvent_ClassRefine.hpp>


START_ATF_NAMESPACE
    int RFEvent_ClassRefine::CanDoEvent(struct CPlayer* pOne)
    {
        using org_ptr = int (WINAPIV*)(struct RFEvent_ClassRefine*, struct CPlayer*);
        return (org_ptr(0x140328bc0L))(this, pOne);
    };
    bool RFEvent_ClassRefine::CheckRefineEventData()
    {
        using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*);
        return (org_ptr(0x140328e30L))(this);
    };
    int RFEvent_ClassRefine::DoEvent(struct CPlayer* pOne)
    {
        using org_ptr = int (WINAPIV*)(struct RFEvent_ClassRefine*, struct CPlayer*);
        return (org_ptr(0x140328cd0L))(this, pOne);
    };
    char* RFEvent_ClassRefine::GetPlayerState(unsigned int nIdx, unsigned int nAvator)
    {
        using org_ptr = char* (WINAPIV*)(struct RFEvent_ClassRefine*, unsigned int, unsigned int);
        return (org_ptr(0x1403296a0L))(this, nIdx, nAvator);
    };
    bool RFEvent_ClassRefine::Initialzie()
    {
        using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*);
        return (org_ptr(0x1403287e0L))(this);
    };
    bool RFEvent_ClassRefine::IsDbUpdate(unsigned int nIdx)
    {
        using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*, unsigned int);
        return (org_ptr(0x140329600L))(this, nIdx);
    };
    bool RFEvent_ClassRefine::IsEnable()
    {
        using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*);
        return (org_ptr(0x1403295e0L))(this);
    };
    void RFEvent_ClassRefine::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
        (org_ptr(0x140328da0L))(this);
    };
    RFEvent_ClassRefine::RFEvent_ClassRefine()
    {
        using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
        (org_ptr(0x1403286b0L))(this);
    };
    void RFEvent_ClassRefine::ctor_RFEvent_ClassRefine()
    {
        using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
        (org_ptr(0x1403286b0L))(this);
    };
    void RFEvent_ClassRefine::ReadClassRefineEventInfo()
    {
        using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
        (org_ptr(0x140329040L))(this);
    };
    void RFEvent_ClassRefine::ResetRefineData()
    {
        using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
        (org_ptr(0x140328f70L))(this);
    };
    bool RFEvent_ClassRefine::SetEvent(char* p, int size, bool bInit)
    {
        using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*, char*, int, bool);
        return (org_ptr(0x140328950L))(this, p, size, bInit);
    };
    bool RFEvent_ClassRefine::SetPlayerState(void* p, int size)
    {
        using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*, void*, int);
        return (org_ptr(0x140328a60L))(this, p, size);
    };
    RFEvent_ClassRefine::~RFEvent_ClassRefine()
    {
        using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
        (org_ptr(0x140328750L))(this);
    };
    void RFEvent_ClassRefine::dtor_RFEvent_ClassRefine()
    {
        using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
        (org_ptr(0x140328750L))(this);
    };
END_ATF_NAMESPACE
