#include <_portal_dummy.hpp>


START_ATF_NAMESPACE
    bool _portal_dummy::SetDummy(struct _portal_fld* pRec, struct _dummy_position* pDumPos)
    {
        using org_ptr = bool (WINAPIV*)(struct _portal_dummy*, struct _portal_fld*, struct _dummy_position*);
        return (org_ptr(0x1401892f0L))(this, pRec, pDumPos);
    };
    _portal_dummy::_portal_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _portal_dummy*);
        (org_ptr(0x1401892c0L))(this);
    };
    void _portal_dummy::ctor__portal_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _portal_dummy*);
        (org_ptr(0x1401892c0L))(this);
    };
END_ATF_NAMESPACE
