#include <_DB_LOAD_AUTOMINE_MACHINE.hpp>


START_ATF_NAMESPACE
    _DB_LOAD_AUTOMINE_MACHINE::_DB_LOAD_AUTOMINE_MACHINE()
    {
        using org_ptr = void (WINAPIV*)(struct _DB_LOAD_AUTOMINE_MACHINE*);
        (org_ptr(0x1402d4100L))(this);
    };
    void _DB_LOAD_AUTOMINE_MACHINE::ctor__DB_LOAD_AUTOMINE_MACHINE()
    {
        using org_ptr = void (WINAPIV*)(struct _DB_LOAD_AUTOMINE_MACHINE*);
        (org_ptr(0x1402d4100L))(this);
    };
    int _DB_LOAD_AUTOMINE_MACHINE::size()
    {
        using org_ptr = int (WINAPIV*)(struct _DB_LOAD_AUTOMINE_MACHINE*);
        return (org_ptr(0x1402d4070L))(this);
    };
END_ATF_NAMESPACE
