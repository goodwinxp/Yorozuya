#include <CBillingRUDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CBillingRUctor_CBillingRU2_ptr CBillingRUctor_CBillingRU2_next(nullptr);
        Info::CBillingRUctor_CBillingRU2_clbk CBillingRUctor_CBillingRU2_user(nullptr);
        
        
        Info::CBillingRUdtor_CBillingRU7_ptr CBillingRUdtor_CBillingRU7_next(nullptr);
        Info::CBillingRUdtor_CBillingRU7_clbk CBillingRUdtor_CBillingRU7_user(nullptr);
        
        
        void CBillingRUctor_CBillingRU2_wrapper(struct CBillingRU* _this)
        {
           CBillingRUctor_CBillingRU2_user(_this, CBillingRUctor_CBillingRU2_next);
        };
        
        void CBillingRUdtor_CBillingRU7_wrapper(struct CBillingRU* _this)
        {
           CBillingRUdtor_CBillingRU7_user(_this, CBillingRUdtor_CBillingRU7_next);
        };
        
        ::std::array<hook_record, 2> CBillingRU_functions = 
        {
            _hook_record {
                (LPVOID)0x14022eba0L,
                (LPVOID *)&CBillingRUctor_CBillingRU2_user,
                (LPVOID *)&CBillingRUctor_CBillingRU2_next,
                (LPVOID)cast_pointer_function(CBillingRUctor_CBillingRU2_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingRU::*)())&CBillingRU::ctor_CBillingRU)
            },
            _hook_record {
                (LPVOID)0x14022ec70L,
                (LPVOID *)&CBillingRUdtor_CBillingRU7_user,
                (LPVOID *)&CBillingRUdtor_CBillingRU7_next,
                (LPVOID)cast_pointer_function(CBillingRUdtor_CBillingRU7_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingRU::*)())&CBillingRU::dtor_CBillingRU)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
