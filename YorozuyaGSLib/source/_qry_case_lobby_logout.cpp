#include <_qry_case_lobby_logout.hpp>


START_ATF_NAMESPACE
    _qry_case_lobby_logout::_qry_case_lobby_logout()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_lobby_logout*);
        (org_ptr(0x14011f290L))(this);
    };
    void _qry_case_lobby_logout::ctor__qry_case_lobby_logout()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_lobby_logout*);
        (org_ptr(0x14011f290L))(this);
    };
    void _qry_case_lobby_logout::init()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_lobby_logout*);
        (org_ptr(0x14011f2e0L))(this);
    };
    int _qry_case_lobby_logout::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_lobby_logout*);
        return (org_ptr(0x14011f390L))(this);
    };
    
END_ATF_NAMESPACE
