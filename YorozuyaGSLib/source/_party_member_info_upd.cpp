#include <_party_member_info_upd.hpp>


START_ATF_NAMESPACE
    _party_member_info_upd::_party_member_info_upd()
    {
        using org_ptr = void (WINAPIV*)(struct _party_member_info_upd*);
        (org_ptr(0x1400efb50L))(this);
    };
    void _party_member_info_upd::ctor__party_member_info_upd()
    {
        using org_ptr = void (WINAPIV*)(struct _party_member_info_upd*);
        (org_ptr(0x1400efb50L))(this);
    };
    int _party_member_info_upd::size()
    {
        using org_ptr = int (WINAPIV*)(struct _party_member_info_upd*);
        return (org_ptr(0x1400efb70L))(this);
    };
    
END_ATF_NAMESPACE
