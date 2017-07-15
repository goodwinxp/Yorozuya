#include <CCashDbWorkerTHDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerTHctor_CCashDbWorkerTH2_ptr CCashDbWorkerTHctor_CCashDbWorkerTH2_next(nullptr);
        Info::CCashDbWorkerTHctor_CCashDbWorkerTH2_clbk CCashDbWorkerTHctor_CCashDbWorkerTH2_user(nullptr);
        
        Info::CCashDbWorkerTHGetUseCashQueryStr4_ptr CCashDbWorkerTHGetUseCashQueryStr4_next(nullptr);
        Info::CCashDbWorkerTHGetUseCashQueryStr4_clbk CCashDbWorkerTHGetUseCashQueryStr4_user(nullptr);
        
        
        Info::CCashDbWorkerTHdtor_CCashDbWorkerTH9_ptr CCashDbWorkerTHdtor_CCashDbWorkerTH9_next(nullptr);
        Info::CCashDbWorkerTHdtor_CCashDbWorkerTH9_clbk CCashDbWorkerTHdtor_CCashDbWorkerTH9_user(nullptr);
        
        
        void CCashDbWorkerTHctor_CCashDbWorkerTH2_wrapper(struct CCashDbWorkerTH* _this)
        {
           CCashDbWorkerTHctor_CCashDbWorkerTH2_user(_this, CCashDbWorkerTHctor_CCashDbWorkerTH2_next);
        };
        void CCashDbWorkerTHGetUseCashQueryStr4_wrapper(struct CCashDbWorkerTH* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CCashDbWorkerTHGetUseCashQueryStr4_user(_this, rParam, nIdx, wszQuery, tBufferSize, CCashDbWorkerTHGetUseCashQueryStr4_next);
        };
        
        void CCashDbWorkerTHdtor_CCashDbWorkerTH9_wrapper(struct CCashDbWorkerTH* _this)
        {
           CCashDbWorkerTHdtor_CCashDbWorkerTH9_user(_this, CCashDbWorkerTHdtor_CCashDbWorkerTH9_next);
        };
        
        ::std::array<hook_record, 3> CCashDbWorkerTH_functions = 
        {
            _hook_record {
                (LPVOID)0x140232490L,
                (LPVOID *)&CCashDbWorkerTHctor_CCashDbWorkerTH2_user,
                (LPVOID *)&CCashDbWorkerTHctor_CCashDbWorkerTH2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerTHctor_CCashDbWorkerTH2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerTH::*)())&CCashDbWorkerTH::ctor_CCashDbWorkerTH)
            },
            _hook_record {
                (LPVOID)0x1403225a0L,
                (LPVOID *)&CCashDbWorkerTHGetUseCashQueryStr4_user,
                (LPVOID *)&CCashDbWorkerTHGetUseCashQueryStr4_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerTHGetUseCashQueryStr4_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerTH::*)(struct _param_cash_update*, int, char*, uint64_t))&CCashDbWorkerTH::GetUseCashQueryStr)
            },
            _hook_record {
                (LPVOID)0x140232560L,
                (LPVOID *)&CCashDbWorkerTHdtor_CCashDbWorkerTH9_user,
                (LPVOID *)&CCashDbWorkerTHdtor_CCashDbWorkerTH9_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerTHdtor_CCashDbWorkerTH9_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerTH::*)())&CCashDbWorkerTH::dtor_CCashDbWorkerTH)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
