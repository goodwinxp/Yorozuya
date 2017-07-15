#include <CLuaLooting_Novus_ItemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CLuaLooting_Novus_Itemctor_CLuaLooting_Novus_Item2_ptr CLuaLooting_Novus_Itemctor_CLuaLooting_Novus_Item2_next(nullptr);
        Info::CLuaLooting_Novus_Itemctor_CLuaLooting_Novus_Item2_clbk CLuaLooting_Novus_Itemctor_CLuaLooting_Novus_Item2_user(nullptr);
        
        
        Info::CLuaLooting_Novus_Itemdtor_CLuaLooting_Novus_Item6_ptr CLuaLooting_Novus_Itemdtor_CLuaLooting_Novus_Item6_next(nullptr);
        Info::CLuaLooting_Novus_Itemdtor_CLuaLooting_Novus_Item6_clbk CLuaLooting_Novus_Itemdtor_CLuaLooting_Novus_Item6_user(nullptr);
        
        
        void CLuaLooting_Novus_Itemctor_CLuaLooting_Novus_Item2_wrapper(struct CLuaLooting_Novus_Item* _this)
        {
           CLuaLooting_Novus_Itemctor_CLuaLooting_Novus_Item2_user(_this, CLuaLooting_Novus_Itemctor_CLuaLooting_Novus_Item2_next);
        };
        
        void CLuaLooting_Novus_Itemdtor_CLuaLooting_Novus_Item6_wrapper(struct CLuaLooting_Novus_Item* _this)
        {
           CLuaLooting_Novus_Itemdtor_CLuaLooting_Novus_Item6_user(_this, CLuaLooting_Novus_Itemdtor_CLuaLooting_Novus_Item6_next);
        };
        
        ::std::array<hook_record, 2> CLuaLooting_Novus_Item_functions = 
        {
            _hook_record {
                (LPVOID)0x140405cd0L,
                (LPVOID *)&CLuaLooting_Novus_Itemctor_CLuaLooting_Novus_Item2_user,
                (LPVOID *)&CLuaLooting_Novus_Itemctor_CLuaLooting_Novus_Item2_next,
                (LPVOID)cast_pointer_function(CLuaLooting_Novus_Itemctor_CLuaLooting_Novus_Item2_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaLooting_Novus_Item::*)())&CLuaLooting_Novus_Item::ctor_CLuaLooting_Novus_Item)
            },
            _hook_record {
                (LPVOID)0x140405a60L,
                (LPVOID *)&CLuaLooting_Novus_Itemdtor_CLuaLooting_Novus_Item6_user,
                (LPVOID *)&CLuaLooting_Novus_Itemdtor_CLuaLooting_Novus_Item6_next,
                (LPVOID)cast_pointer_function(CLuaLooting_Novus_Itemdtor_CLuaLooting_Novus_Item6_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaLooting_Novus_Item::*)())&CLuaLooting_Novus_Item::dtor_CLuaLooting_Novus_Item)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
