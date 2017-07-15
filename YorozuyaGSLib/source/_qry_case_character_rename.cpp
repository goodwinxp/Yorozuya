#include <_qry_case_character_rename.hpp>


START_ATF_NAMESPACE
    _qry_case_character_rename::_qry_case_character_rename()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_character_rename*);
        (org_ptr(0x1400b85b0L))(this);
    };
    void _qry_case_character_rename::ctor__qry_case_character_rename()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_character_rename*);
        (org_ptr(0x1400b85b0L))(this);
    };
    int _qry_case_character_rename::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_character_rename*);
        return (org_ptr(0x1400b8600L))(this);
    };
END_ATF_NAMESPACE
