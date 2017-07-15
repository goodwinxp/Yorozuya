#include <_POSTSTORAGE_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _POSTSTORAGE_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _POSTSTORAGE_DB_BASE*);
        (org_ptr(0x140077470L))(this);
    };
    void _POSTSTORAGE_DB_BASE::UpdateInit()
    {
        using org_ptr = void (WINAPIV*)(struct _POSTSTORAGE_DB_BASE*);
        (org_ptr(0x14011fcc0L))(this);
    };
    _POSTSTORAGE_DB_BASE::_POSTSTORAGE_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _POSTSTORAGE_DB_BASE*);
        (org_ptr(0x140077420L))(this);
    };
    void _POSTSTORAGE_DB_BASE::ctor__POSTSTORAGE_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _POSTSTORAGE_DB_BASE*);
        (org_ptr(0x140077420L))(this);
    };
    
END_ATF_NAMESPACE
