#include <_REGED_AVATOR_DB.hpp>


START_ATF_NAMESPACE
    void _REGED_AVATOR_DB::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _REGED_AVATOR_DB*);
        (org_ptr(0x1400754d0L))(this);
    };
    _REGED_AVATOR_DB::_REGED_AVATOR_DB()
    {
        using org_ptr = void (WINAPIV*)(struct _REGED_AVATOR_DB*);
        (org_ptr(0x140075480L))(this);
    };
    void _REGED_AVATOR_DB::ctor__REGED_AVATOR_DB()
    {
        using org_ptr = void (WINAPIV*)(struct _REGED_AVATOR_DB*);
        (org_ptr(0x140075480L))(this);
    };
END_ATF_NAMESPACE
