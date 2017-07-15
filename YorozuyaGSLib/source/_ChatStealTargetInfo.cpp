#include <_ChatStealTargetInfo.hpp>


START_ATF_NAMESPACE
    _ChatStealTargetInfo::_ChatStealTargetInfo()
    {
        using org_ptr = void (WINAPIV*)(struct _ChatStealTargetInfo*);
        (org_ptr(0x1403f8cf0L))(this);
    };
    void _ChatStealTargetInfo::ctor__ChatStealTargetInfo()
    {
        using org_ptr = void (WINAPIV*)(struct _ChatStealTargetInfo*);
        (org_ptr(0x1403f8cf0L))(this);
    };
END_ATF_NAMESPACE
