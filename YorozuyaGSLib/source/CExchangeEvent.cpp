#include <CExchangeEvent.hpp>


START_ATF_NAMESPACE
    CExchangeEvent::CExchangeEvent()
    {
        using org_ptr = void (WINAPIV*)(struct CExchangeEvent*);
        (org_ptr(0x140329780L))(this);
    };
    void CExchangeEvent::ctor_CExchangeEvent()
    {
        using org_ptr = void (WINAPIV*)(struct CExchangeEvent*);
        (org_ptr(0x140329780L))(this);
    };
    void CExchangeEvent::ChangeData()
    {
        using org_ptr = void (WINAPIV*)(struct CExchangeEvent*);
        (org_ptr(0x140329ef0L))(this);
    };
    bool CExchangeEvent::CheckBuddhaEventData(bool* pbDelete)
    {
        using org_ptr = bool (WINAPIV*)(struct CExchangeEvent*, bool*);
        return (org_ptr(0x14032a340L))(this, pbDelete);
    };
    void CExchangeEvent::DeleteExchangeEventItem(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CExchangeEvent*, struct CPlayer*);
        (org_ptr(0x140329cb0L))(this, pOne);
    };
    void CExchangeEvent::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140329a40L))();
    };
    struct EventItemInfo* CExchangeEvent::GetEventItemInfo(int nInfoType)
    {
        using org_ptr = struct EventItemInfo* (WINAPIV*)(struct CExchangeEvent*, int);
        return (org_ptr(0x140329c70L))(this, nInfoType);
    };
    void CExchangeEvent::GiveEventItem(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CExchangeEvent*, struct CPlayer*);
        (org_ptr(0x14032a630L))(this, pOne);
    };
    bool CExchangeEvent::Initialzie()
    {
        using org_ptr = bool (WINAPIV*)(struct CExchangeEvent*);
        return (org_ptr(0x140329ac0L))(this);
    };
    struct CExchangeEvent* CExchangeEvent::Instance()
    {
        using org_ptr = struct CExchangeEvent* (WINAPIV*)();
        return (org_ptr(0x140329980L))();
    };
    bool CExchangeEvent::IsDelete()
    {
        using org_ptr = bool (WINAPIV*)(struct CExchangeEvent*);
        return (org_ptr(0x140329eb0L))(this);
    };
    bool CExchangeEvent::IsEnable()
    {
        using org_ptr = bool (WINAPIV*)(struct CExchangeEvent*);
        return (org_ptr(0x140329e90L))(this);
    };
    bool CExchangeEvent::IsWait()
    {
        using org_ptr = bool (WINAPIV*)(struct CExchangeEvent*);
        return (org_ptr(0x140329ed0L))(this);
    };
    void CExchangeEvent::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CExchangeEvent*);
        (org_ptr(0x14032a060L))(this);
    };
    void CExchangeEvent::ReadBuddhaEventInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CExchangeEvent*);
        (org_ptr(0x14032a7c0L))(this);
    };
    CExchangeEvent::~CExchangeEvent()
    {
        using org_ptr = void (WINAPIV*)(struct CExchangeEvent*);
        (org_ptr(0x1403298f0L))(this);
    };
    void CExchangeEvent::dtor_CExchangeEvent()
    {
        using org_ptr = void (WINAPIV*)(struct CExchangeEvent*);
        (org_ptr(0x1403298f0L))(this);
    };
END_ATF_NAMESPACE
