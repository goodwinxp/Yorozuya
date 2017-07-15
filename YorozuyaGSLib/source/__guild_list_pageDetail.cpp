#include <__guild_list_pageDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__guild_list_pagector___guild_list_page2_ptr __guild_list_pagector___guild_list_page2_next(nullptr);
        Info::__guild_list_pagector___guild_list_page2_clbk __guild_list_pagector___guild_list_page2_user(nullptr);
        
        
        void __guild_list_pagector___guild_list_page2_wrapper(struct __guild_list_page* _this)
        {
           __guild_list_pagector___guild_list_page2_user(_this, __guild_list_pagector___guild_list_page2_next);
        };
        
        ::std::array<hook_record, 1> __guild_list_page_functions = 
        {
            _hook_record {
                (LPVOID)0x14025e1d0L,
                (LPVOID *)&__guild_list_pagector___guild_list_page2_user,
                (LPVOID *)&__guild_list_pagector___guild_list_page2_next,
                (LPVOID)cast_pointer_function(__guild_list_pagector___guild_list_page2_wrapper),
                (LPVOID)cast_pointer_function((void(__guild_list_page::*)())&__guild_list_page::ctor___guild_list_page)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
