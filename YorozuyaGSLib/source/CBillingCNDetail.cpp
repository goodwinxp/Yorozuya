#include <CBillingCNDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CBillingCNctor_CBillingCN2_ptr CBillingCNctor_CBillingCN2_next(nullptr);
        Info::CBillingCNctor_CBillingCN2_clbk CBillingCNctor_CBillingCN2_user(nullptr);
        
        
        Info::CBillingCNdtor_CBillingCN7_ptr CBillingCNdtor_CBillingCN7_next(nullptr);
        Info::CBillingCNdtor_CBillingCN7_clbk CBillingCNdtor_CBillingCN7_user(nullptr);
        
        
        void CBillingCNctor_CBillingCN2_wrapper(struct CBillingCN* _this)
        {
           CBillingCNctor_CBillingCN2_user(_this, CBillingCNctor_CBillingCN2_next);
        };
        
        void CBillingCNdtor_CBillingCN7_wrapper(struct CBillingCN* _this)
        {
           CBillingCNdtor_CBillingCN7_user(_this, CBillingCNdtor_CBillingCN7_next);
        };
        
        ::std::array<hook_record, 2> CBillingCN_functions = 
        {
            _hook_record {
                (LPVOID)0x140230ce0L,
                (LPVOID *)&CBillingCNctor_CBillingCN2_user,
                (LPVOID *)&CBillingCNctor_CBillingCN2_next,
                (LPVOID)cast_pointer_function(CBillingCNctor_CBillingCN2_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingCN::*)())&CBillingCN::ctor_CBillingCN)
            },
            _hook_record {
                (LPVOID)0x140230db0L,
                (LPVOID *)&CBillingCNdtor_CBillingCN7_user,
                (LPVOID *)&CBillingCNdtor_CBillingCN7_next,
                (LPVOID)cast_pointer_function(CBillingCNdtor_CBillingCN7_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingCN::*)())&CBillingCN::dtor_CBillingCN)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
