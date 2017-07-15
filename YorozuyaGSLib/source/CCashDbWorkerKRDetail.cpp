#include <CCashDbWorkerKRDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerKRctor_CCashDbWorkerKR2_ptr CCashDbWorkerKRctor_CCashDbWorkerKR2_next(nullptr);
        Info::CCashDbWorkerKRctor_CCashDbWorkerKR2_clbk CCashDbWorkerKRctor_CCashDbWorkerKR2_user(nullptr);
        
        
        Info::CCashDbWorkerKRdtor_CCashDbWorkerKR7_ptr CCashDbWorkerKRdtor_CCashDbWorkerKR7_next(nullptr);
        Info::CCashDbWorkerKRdtor_CCashDbWorkerKR7_clbk CCashDbWorkerKRdtor_CCashDbWorkerKR7_user(nullptr);
        
        
        void CCashDbWorkerKRctor_CCashDbWorkerKR2_wrapper(struct CCashDbWorkerKR* _this)
        {
           CCashDbWorkerKRctor_CCashDbWorkerKR2_user(_this, CCashDbWorkerKRctor_CCashDbWorkerKR2_next);
        };
        
        void CCashDbWorkerKRdtor_CCashDbWorkerKR7_wrapper(struct CCashDbWorkerKR* _this)
        {
           CCashDbWorkerKRdtor_CCashDbWorkerKR7_user(_this, CCashDbWorkerKRdtor_CCashDbWorkerKR7_next);
        };
        
        ::std::array<hook_record, 2> CCashDbWorkerKR_functions = 
        {
            _hook_record {
                (LPVOID)0x14022b6f0L,
                (LPVOID *)&CCashDbWorkerKRctor_CCashDbWorkerKR2_user,
                (LPVOID *)&CCashDbWorkerKRctor_CCashDbWorkerKR2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerKRctor_CCashDbWorkerKR2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerKR::*)())&CCashDbWorkerKR::ctor_CCashDbWorkerKR)
            },
            _hook_record {
                (LPVOID)0x14022ba10L,
                (LPVOID *)&CCashDbWorkerKRdtor_CCashDbWorkerKR7_user,
                (LPVOID *)&CCashDbWorkerKRdtor_CCashDbWorkerKR7_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerKRdtor_CCashDbWorkerKR7_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerKR::*)())&CCashDbWorkerKR::dtor_CCashDbWorkerKR)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
