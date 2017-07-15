#include <_party_join_joiner_result_zocl.hpp>


START_ATF_NAMESPACE
    _party_join_joiner_result_zocl::_party_join_joiner_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _party_join_joiner_result_zocl*);
        (org_ptr(0x1400efad0L))(this);
    };
    void _party_join_joiner_result_zocl::ctor__party_join_joiner_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _party_join_joiner_result_zocl*);
        (org_ptr(0x1400efad0L))(this);
    };
    int _party_join_joiner_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _party_join_joiner_result_zocl*);
        return (org_ptr(0x1400efaf0L))(this);
    };
    
END_ATF_NAMESPACE
