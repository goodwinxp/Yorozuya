#include <CCashDbWorkerPHDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerPHctor_CCashDbWorkerPH2_ptr CCashDbWorkerPHctor_CCashDbWorkerPH2_next(nullptr);
        Info::CCashDbWorkerPHctor_CCashDbWorkerPH2_clbk CCashDbWorkerPHctor_CCashDbWorkerPH2_user(nullptr);
        
        
        Info::CCashDbWorkerPHdtor_CCashDbWorkerPH7_ptr CCashDbWorkerPHdtor_CCashDbWorkerPH7_next(nullptr);
        Info::CCashDbWorkerPHdtor_CCashDbWorkerPH7_clbk CCashDbWorkerPHdtor_CCashDbWorkerPH7_user(nullptr);
        
        
        void CCashDbWorkerPHctor_CCashDbWorkerPH2_wrapper(struct CCashDbWorkerPH* _this)
        {
           CCashDbWorkerPHctor_CCashDbWorkerPH2_user(_this, CCashDbWorkerPHctor_CCashDbWorkerPH2_next);
        };
        
        void CCashDbWorkerPHdtor_CCashDbWorkerPH7_wrapper(struct CCashDbWorkerPH* _this)
        {
           CCashDbWorkerPHdtor_CCashDbWorkerPH7_user(_this, CCashDbWorkerPHdtor_CCashDbWorkerPH7_next);
        };
        
        ::std::array<hook_record, 2> CCashDbWorkerPH_functions = 
        {
            _hook_record {
                (LPVOID)0x14022e130L,
                (LPVOID *)&CCashDbWorkerPHctor_CCashDbWorkerPH2_user,
                (LPVOID *)&CCashDbWorkerPHctor_CCashDbWorkerPH2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerPHctor_CCashDbWorkerPH2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerPH::*)())&CCashDbWorkerPH::ctor_CCashDbWorkerPH)
            },
            _hook_record {
                (LPVOID)0x14022e200L,
                (LPVOID *)&CCashDbWorkerPHdtor_CCashDbWorkerPH7_user,
                (LPVOID *)&CCashDbWorkerPHdtor_CCashDbWorkerPH7_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerPHdtor_CCashDbWorkerPH7_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerPH::*)())&CCashDbWorkerPH::dtor_CCashDbWorkerPH)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
