#include <_dummy_position.hpp>


START_ATF_NAMESPACE
    void _dummy_position::SetActiveMonNum(int nAlter)
    {
        using org_ptr = void (WINAPIV*)(struct _dummy_position*, int);
        (org_ptr(0x14014bd20L))(this, nAlter);
    };
    _dummy_position::_dummy_position()
    {
        using org_ptr = void (WINAPIV*)(struct _dummy_position*);
        (org_ptr(0x14012e430L))(this);
    };
    void _dummy_position::ctor__dummy_position()
    {
        using org_ptr = void (WINAPIV*)(struct _dummy_position*);
        (org_ptr(0x14012e430L))(this);
    };
END_ATF_NAMESPACE
