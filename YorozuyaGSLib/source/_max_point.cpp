#include <_max_point.hpp>


START_ATF_NAMESPACE
    _max_point::_max_point()
    {
        using org_ptr = void (WINAPIV*)(struct _max_point*);
        (org_ptr(0x1403f7040L))(this);
    };
    void _max_point::ctor__max_point()
    {
        using org_ptr = void (WINAPIV*)(struct _max_point*);
        (org_ptr(0x1403f7040L))(this);
    };
    void _max_point::init()
    {
        using org_ptr = void (WINAPIV*)(struct _max_point*);
        (org_ptr(0x1403f7090L))(this);
    };
    int _max_point::size()
    {
        using org_ptr = int (WINAPIV*)(struct _max_point*);
        return (org_ptr(0x1403f70f0L))(this);
    };
END_ATF_NAMESPACE
