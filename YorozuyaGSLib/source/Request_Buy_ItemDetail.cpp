#include <Request_Buy_ItemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::Request_Buy_Itemctor_Request_Buy_Item2_ptr Request_Buy_Itemctor_Request_Buy_Item2_next(nullptr);
        Info::Request_Buy_Itemctor_Request_Buy_Item2_clbk Request_Buy_Itemctor_Request_Buy_Item2_user(nullptr);
        
        
        void Request_Buy_Itemctor_Request_Buy_Item2_wrapper(struct Request_Buy_Item* _this)
        {
           Request_Buy_Itemctor_Request_Buy_Item2_user(_this, Request_Buy_Itemctor_Request_Buy_Item2_next);
        };
        
        ::std::array<hook_record, 1> Request_Buy_Item_functions = 
        {
            _hook_record {
                (LPVOID)0x14031d420L,
                (LPVOID *)&Request_Buy_Itemctor_Request_Buy_Item2_user,
                (LPVOID *)&Request_Buy_Itemctor_Request_Buy_Item2_next,
                (LPVOID)cast_pointer_function(Request_Buy_Itemctor_Request_Buy_Item2_wrapper),
                (LPVOID)cast_pointer_function((void(Request_Buy_Item::*)())&Request_Buy_Item::ctor_Request_Buy_Item)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
