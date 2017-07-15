#include <_NameChangeBuddyInfo.hpp>


START_ATF_NAMESPACE
    void _NameChangeBuddyInfo::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _NameChangeBuddyInfo*);
        (org_ptr(0x140073e70L))(this);
    };
    _NameChangeBuddyInfo::_NameChangeBuddyInfo()
    {
        using org_ptr = void (WINAPIV*)(struct _NameChangeBuddyInfo*);
        (org_ptr(0x140073e20L))(this);
    };
    void _NameChangeBuddyInfo::ctor__NameChangeBuddyInfo()
    {
        using org_ptr = void (WINAPIV*)(struct _NameChangeBuddyInfo*);
        (org_ptr(0x140073e20L))(this);
    };
END_ATF_NAMESPACE
