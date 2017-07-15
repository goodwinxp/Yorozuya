#include <_BUDDY_LIST.hpp>


START_ATF_NAMESPACE
    int _BUDDY_LIST::GetBuddyNum()
    {
        using org_ptr = int (WINAPIV*)(struct _BUDDY_LIST*);
        return (org_ptr(0x140090a50L))(this);
    };
    struct _BUDDY_LIST::__list* _BUDDY_LIST::GetEmptyData()
    {
        using org_ptr = struct _BUDDY_LIST::__list* (WINAPIV*)(struct _BUDDY_LIST*);
        return (org_ptr(0x140090340L))(this);
    };
    void _BUDDY_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_LIST*);
        (org_ptr(0x140073660L))(this);
    };
    bool _BUDDY_LIST::IsBuddy(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct _BUDDY_LIST*, unsigned int);
        return (org_ptr(0x1400794b0L))(this, dwSerial);
    };
    bool _BUDDY_LIST::IsPushLastApply(unsigned int dwDstSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct _BUDDY_LIST*, unsigned int);
        return (org_ptr(0x140090670L))(this, dwDstSerial);
    };
    int _BUDDY_LIST::PopBuddy(unsigned int dwSerial, struct CPlayer** ppPoper)
    {
        using org_ptr = int (WINAPIV*)(struct _BUDDY_LIST*, unsigned int, struct CPlayer**);
        return (org_ptr(0x1400908e0L))(this, dwSerial, ppPoper);
    };
    void _BUDDY_LIST::PopLastApplyTemp(unsigned int dwDstSerial)
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_LIST*, unsigned int);
        (org_ptr(0x1400906d0L))(this, dwDstSerial);
    };
    int _BUDDY_LIST::PushBuddy(unsigned int dwSerial, char* pwszName, struct CPlayer* pPtr)
    {
        using org_ptr = int (WINAPIV*)(struct _BUDDY_LIST*, unsigned int, char*, struct CPlayer*);
        return (org_ptr(0x1400904c0L))(this, dwSerial, pwszName, pPtr);
    };
    void _BUDDY_LIST::PushLastApplyTemp(unsigned int dwDstSerial)
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_LIST*, unsigned int);
        (org_ptr(0x1400903f0L))(this, dwDstSerial);
    };
    bool _BUDDY_LIST::SearchBuddyLogin(struct CPlayer* pLoger, unsigned int dwSerial, char* pwszName)
    {
        using org_ptr = bool (WINAPIV*)(struct _BUDDY_LIST*, struct CPlayer*, unsigned int, char*);
        return (org_ptr(0x1400793a0L))(this, pLoger, dwSerial, pwszName);
    };
    bool _BUDDY_LIST::SearchBuddyLogoff(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct _BUDDY_LIST*, unsigned int);
        return (org_ptr(0x140079f40L))(this, dwSerial);
    };
    _BUDDY_LIST::_BUDDY_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_LIST*);
        (org_ptr(0x140072fb0L))(this);
    };
    void _BUDDY_LIST::ctor__BUDDY_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_LIST*);
        (org_ptr(0x140072fb0L))(this);
    };
    _BUDDY_LIST::~_BUDDY_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_LIST*);
        (org_ptr(0x140074700L))(this);
    };
    void _BUDDY_LIST::dtor__BUDDY_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_LIST*);
        (org_ptr(0x140074700L))(this);
    };
    void _BUDDY_LIST::__list::ON(char* pwszName, struct CPlayer* ptr)
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_LIST::__list*, char*, struct CPlayer*);
        (org_ptr(0x140079330L))(this, pwszName, ptr);
    };
    _BUDDY_LIST::__list::__list()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_LIST::__list*);
        (org_ptr(0x1400735e0L))(this);
    };
    void _BUDDY_LIST::__list::ctor___list()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_LIST::__list*);
        (org_ptr(0x1400735e0L))(this);
    };
    bool _BUDDY_LIST::__list::fill()
    {
        using org_ptr = bool (WINAPIV*)(struct _BUDDY_LIST::__list*);
        return (org_ptr(0x140079310L))(this);
    };
    void _BUDDY_LIST::__list::init()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_LIST::__list*);
        (org_ptr(0x140073630L))(this);
    };
END_ATF_NAMESPACE
