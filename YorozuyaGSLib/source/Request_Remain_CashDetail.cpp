#include <Request_Remain_CashDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::Request_Remain_Cashctor_Request_Remain_Cash2_ptr Request_Remain_Cashctor_Request_Remain_Cash2_next(nullptr);
        Info::Request_Remain_Cashctor_Request_Remain_Cash2_clbk Request_Remain_Cashctor_Request_Remain_Cash2_user(nullptr);
        
        
        void Request_Remain_Cashctor_Request_Remain_Cash2_wrapper(struct Request_Remain_Cash* _this)
        {
           Request_Remain_Cashctor_Request_Remain_Cash2_user(_this, Request_Remain_Cashctor_Request_Remain_Cash2_next);
        };
        
        ::std::array<hook_record, 1> Request_Remain_Cash_functions = 
        {
            _hook_record {
                (LPVOID)0x14031d3a0L,
                (LPVOID *)&Request_Remain_Cashctor_Request_Remain_Cash2_user,
                (LPVOID *)&Request_Remain_Cashctor_Request_Remain_Cash2_next,
                (LPVOID)cast_pointer_function(Request_Remain_Cashctor_Request_Remain_Cash2_wrapper),
                (LPVOID)cast_pointer_function((void(Request_Remain_Cash::*)())&Request_Remain_Cash::ctor_Request_Remain_Cash)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
