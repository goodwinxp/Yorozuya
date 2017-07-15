#include <CCashDbWorkerBRDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerBRctor_CCashDbWorkerBR2_ptr CCashDbWorkerBRctor_CCashDbWorkerBR2_next(nullptr);
        Info::CCashDbWorkerBRctor_CCashDbWorkerBR2_clbk CCashDbWorkerBRctor_CCashDbWorkerBR2_user(nullptr);
        
        Info::CCashDbWorkerBRGetUseCashQueryStr4_ptr CCashDbWorkerBRGetUseCashQueryStr4_next(nullptr);
        Info::CCashDbWorkerBRGetUseCashQueryStr4_clbk CCashDbWorkerBRGetUseCashQueryStr4_user(nullptr);
        
        
        Info::CCashDbWorkerBRdtor_CCashDbWorkerBR9_ptr CCashDbWorkerBRdtor_CCashDbWorkerBR9_next(nullptr);
        Info::CCashDbWorkerBRdtor_CCashDbWorkerBR9_clbk CCashDbWorkerBRdtor_CCashDbWorkerBR9_user(nullptr);
        
        
        void CCashDbWorkerBRctor_CCashDbWorkerBR2_wrapper(struct CCashDbWorkerBR* _this)
        {
           CCashDbWorkerBRctor_CCashDbWorkerBR2_user(_this, CCashDbWorkerBRctor_CCashDbWorkerBR2_next);
        };
        void CCashDbWorkerBRGetUseCashQueryStr4_wrapper(struct CCashDbWorkerBR* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CCashDbWorkerBRGetUseCashQueryStr4_user(_this, rParam, nIdx, wszQuery, tBufferSize, CCashDbWorkerBRGetUseCashQueryStr4_next);
        };
        
        void CCashDbWorkerBRdtor_CCashDbWorkerBR9_wrapper(struct CCashDbWorkerBR* _this)
        {
           CCashDbWorkerBRdtor_CCashDbWorkerBR9_user(_this, CCashDbWorkerBRdtor_CCashDbWorkerBR9_next);
        };
        
        ::std::array<hook_record, 3> CCashDbWorkerBR_functions = 
        {
            _hook_record {
                (LPVOID)0x14022f290L,
                (LPVOID *)&CCashDbWorkerBRctor_CCashDbWorkerBR2_user,
                (LPVOID *)&CCashDbWorkerBRctor_CCashDbWorkerBR2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerBRctor_CCashDbWorkerBR2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerBR::*)())&CCashDbWorkerBR::ctor_CCashDbWorkerBR)
            },
            _hook_record {
                (LPVOID)0x140321f40L,
                (LPVOID *)&CCashDbWorkerBRGetUseCashQueryStr4_user,
                (LPVOID *)&CCashDbWorkerBRGetUseCashQueryStr4_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerBRGetUseCashQueryStr4_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerBR::*)(struct _param_cash_update*, int, char*, uint64_t))&CCashDbWorkerBR::GetUseCashQueryStr)
            },
            _hook_record {
                (LPVOID)0x14022f360L,
                (LPVOID *)&CCashDbWorkerBRdtor_CCashDbWorkerBR9_user,
                (LPVOID *)&CCashDbWorkerBRdtor_CCashDbWorkerBR9_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerBRdtor_CCashDbWorkerBR9_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerBR::*)())&CCashDbWorkerBR::dtor_CCashDbWorkerBR)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
