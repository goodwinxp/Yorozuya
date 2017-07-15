#include <_start_dummy.hpp>


START_ATF_NAMESPACE
    bool _start_dummy::SetDummy(struct _dummy_position* pDumPos)
    {
        using org_ptr = bool (WINAPIV*)(struct _start_dummy*, struct _dummy_position*);
        return (org_ptr(0x140189410L))(this, pDumPos);
    };
    _start_dummy::_start_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _start_dummy*);
        (org_ptr(0x1401893f0L))(this);
    };
    void _start_dummy::ctor__start_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _start_dummy*);
        (org_ptr(0x1401893f0L))(this);
    };
END_ATF_NAMESPACE
