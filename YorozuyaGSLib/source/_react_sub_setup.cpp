#include <_react_sub_setup.hpp>


START_ATF_NAMESPACE
    _react_sub_setup::_react_sub_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _react_sub_setup*);
        (org_ptr(0x14027a680L))(this);
    };
    void _react_sub_setup::ctor__react_sub_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _react_sub_setup*);
        (org_ptr(0x14027a680L))(this);
    };
END_ATF_NAMESPACE
