#include <CCashDbWorkerCNDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerCNctor_CCashDbWorkerCN2_ptr CCashDbWorkerCNctor_CCashDbWorkerCN2_next(nullptr);
        Info::CCashDbWorkerCNctor_CCashDbWorkerCN2_clbk CCashDbWorkerCNctor_CCashDbWorkerCN2_user(nullptr);
        
        
        Info::CCashDbWorkerCNdtor_CCashDbWorkerCN7_ptr CCashDbWorkerCNdtor_CCashDbWorkerCN7_next(nullptr);
        Info::CCashDbWorkerCNdtor_CCashDbWorkerCN7_clbk CCashDbWorkerCNdtor_CCashDbWorkerCN7_user(nullptr);
        
        
        void CCashDbWorkerCNctor_CCashDbWorkerCN2_wrapper(struct CCashDbWorkerCN* _this)
        {
           CCashDbWorkerCNctor_CCashDbWorkerCN2_user(_this, CCashDbWorkerCNctor_CCashDbWorkerCN2_next);
        };
        
        void CCashDbWorkerCNdtor_CCashDbWorkerCN7_wrapper(struct CCashDbWorkerCN* _this)
        {
           CCashDbWorkerCNdtor_CCashDbWorkerCN7_user(_this, CCashDbWorkerCNdtor_CCashDbWorkerCN7_next);
        };
        
        ::std::array<hook_record, 2> CCashDbWorkerCN_functions = 
        {
            _hook_record {
                (LPVOID)0x140230bb0L,
                (LPVOID *)&CCashDbWorkerCNctor_CCashDbWorkerCN2_user,
                (LPVOID *)&CCashDbWorkerCNctor_CCashDbWorkerCN2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerCNctor_CCashDbWorkerCN2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerCN::*)())&CCashDbWorkerCN::ctor_CCashDbWorkerCN)
            },
            _hook_record {
                (LPVOID)0x140230c80L,
                (LPVOID *)&CCashDbWorkerCNdtor_CCashDbWorkerCN7_user,
                (LPVOID *)&CCashDbWorkerCNdtor_CCashDbWorkerCN7_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerCNdtor_CCashDbWorkerCN7_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerCN::*)())&CCashDbWorkerCN::dtor_CCashDbWorkerCN)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
