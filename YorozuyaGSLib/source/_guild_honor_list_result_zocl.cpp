#include <_guild_honor_list_result_zocl.hpp>


START_ATF_NAMESPACE
    _guild_honor_list_result_zocl::_guild_honor_list_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_honor_list_result_zocl*);
        (org_ptr(0x1402604f0L))(this);
    };
    void _guild_honor_list_result_zocl::ctor__guild_honor_list_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_honor_list_result_zocl*);
        (org_ptr(0x1402604f0L))(this);
    };
    int _guild_honor_list_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _guild_honor_list_result_zocl*);
        return (org_ptr(0x140260550L))(this);
    };
    
END_ATF_NAMESPACE
