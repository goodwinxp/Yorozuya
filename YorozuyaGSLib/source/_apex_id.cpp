#include <_apex_id.hpp>


START_ATF_NAMESPACE
    _apex_id::_apex_id(char byID)
    {
        using org_ptr = void (WINAPIV*)(struct _apex_id*, char);
        (org_ptr(0x140410bb0L))(this, byID);
    };
    void _apex_id::ctor__apex_id(char byID)
    {
        using org_ptr = void (WINAPIV*)(struct _apex_id*, char);
        (org_ptr(0x140410bb0L))(this, byID);
    };
END_ATF_NAMESPACE
