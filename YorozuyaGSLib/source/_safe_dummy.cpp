#include <_safe_dummy.hpp>


START_ATF_NAMESPACE
    bool _safe_dummy::SetDummy(struct _dummy_position* pDumPos)
    {
        using org_ptr = bool (WINAPIV*)(struct _safe_dummy*, struct _dummy_position*);
        return (org_ptr(0x140189bf0L))(this, pDumPos);
    };
    _safe_dummy::_safe_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _safe_dummy*);
        (org_ptr(0x140189bd0L))(this);
    };
    void _safe_dummy::ctor__safe_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _safe_dummy*);
        (org_ptr(0x140189bd0L))(this);
    };
END_ATF_NAMESPACE
