#include <_class_value.hpp>


START_ATF_NAMESPACE
    _class_value::_class_value()
    {
        using org_ptr = void (WINAPIV*)(struct _class_value*);
        (org_ptr(0x1403f6f80L))(this);
    };
    void _class_value::ctor__class_value()
    {
        using org_ptr = void (WINAPIV*)(struct _class_value*);
        (org_ptr(0x1403f6f80L))(this);
    };
    void _class_value::init()
    {
        using org_ptr = void (WINAPIV*)(struct _class_value*);
        (org_ptr(0x1403f6fd0L))(this);
    };
    int _class_value::size()
    {
        using org_ptr = int (WINAPIV*)(struct _class_value*);
        return (org_ptr(0x1403f7030L))(this);
    };
END_ATF_NAMESPACE
