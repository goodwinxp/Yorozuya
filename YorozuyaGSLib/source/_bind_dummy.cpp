#include <_bind_dummy.hpp>


START_ATF_NAMESPACE
    bool _bind_dummy::SetDummy(struct _dummy_position* pDumPos)
    {
        using org_ptr = bool (WINAPIV*)(struct _bind_dummy*, struct _dummy_position*);
        return (org_ptr(0x140189470L))(this, pDumPos);
    };
    _bind_dummy::_bind_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _bind_dummy*);
        (org_ptr(0x140189450L))(this);
    };
    void _bind_dummy::ctor__bind_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _bind_dummy*);
        (org_ptr(0x140189450L))(this);
    };
END_ATF_NAMESPACE
