#include <_store_dummy.hpp>


START_ATF_NAMESPACE
    bool _store_dummy::SetDummy(int nType, struct _base_fld* pRec, struct _dummy_position* pDumPos)
    {
        using org_ptr = bool (WINAPIV*)(struct _store_dummy*, int, struct _base_fld*, struct _dummy_position*);
        return (org_ptr(0x140189380L))(this, nType, pRec, pDumPos);
    };
    _store_dummy::_store_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _store_dummy*);
        (org_ptr(0x140189340L))(this);
    };
    void _store_dummy::ctor__store_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _store_dummy*);
        (org_ptr(0x140189340L))(this);
    };
END_ATF_NAMESPACE
