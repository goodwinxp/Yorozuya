#include <__guild_list_page.hpp>


START_ATF_NAMESPACE
    __guild_list_page::__guild_list_page()
    {
        using org_ptr = void (WINAPIV*)(struct __guild_list_page*);
        (org_ptr(0x14025e1d0L))(this);
    };
    void __guild_list_page::ctor___guild_list_page()
    {
        using org_ptr = void (WINAPIV*)(struct __guild_list_page*);
        (org_ptr(0x14025e1d0L))(this);
    };
    
END_ATF_NAMESPACE
