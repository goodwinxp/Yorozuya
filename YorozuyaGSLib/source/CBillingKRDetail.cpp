#include <CBillingKRDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CBillingKRctor_CBillingKR2_ptr CBillingKRctor_CBillingKR2_next(nullptr);
        Info::CBillingKRctor_CBillingKR2_clbk CBillingKRctor_CBillingKR2_user(nullptr);
        
        
        Info::CBillingKRdtor_CBillingKR7_ptr CBillingKRdtor_CBillingKR7_next(nullptr);
        Info::CBillingKRdtor_CBillingKR7_clbk CBillingKRdtor_CBillingKR7_user(nullptr);
        
        
        void CBillingKRctor_CBillingKR2_wrapper(struct CBillingKR* _this)
        {
           CBillingKRctor_CBillingKR2_user(_this, CBillingKRctor_CBillingKR2_next);
        };
        
        void CBillingKRdtor_CBillingKR7_wrapper(struct CBillingKR* _this)
        {
           CBillingKRdtor_CBillingKR7_user(_this, CBillingKRdtor_CBillingKR7_next);
        };
        
        ::std::array<hook_record, 2> CBillingKR_functions = 
        {
            _hook_record {
                (LPVOID)0x14022ba70L,
                (LPVOID *)&CBillingKRctor_CBillingKR2_user,
                (LPVOID *)&CBillingKRctor_CBillingKR2_next,
                (LPVOID)cast_pointer_function(CBillingKRctor_CBillingKR2_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingKR::*)())&CBillingKR::ctor_CBillingKR)
            },
            _hook_record {
                (LPVOID)0x14022bc00L,
                (LPVOID *)&CBillingKRdtor_CBillingKR7_user,
                (LPVOID *)&CBillingKRdtor_CBillingKR7_next,
                (LPVOID)cast_pointer_function(CBillingKRdtor_CBillingKR7_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingKR::*)())&CBillingKR::dtor_CBillingKR)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
