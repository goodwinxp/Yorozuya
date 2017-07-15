#include <CCashDbWorkerESDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerESctor_CCashDbWorkerES2_ptr CCashDbWorkerESctor_CCashDbWorkerES2_next(nullptr);
        Info::CCashDbWorkerESctor_CCashDbWorkerES2_clbk CCashDbWorkerESctor_CCashDbWorkerES2_user(nullptr);
        
        Info::CCashDbWorkerESGetUseCashQueryStr4_ptr CCashDbWorkerESGetUseCashQueryStr4_next(nullptr);
        Info::CCashDbWorkerESGetUseCashQueryStr4_clbk CCashDbWorkerESGetUseCashQueryStr4_user(nullptr);
        
        
        Info::CCashDbWorkerESdtor_CCashDbWorkerES9_ptr CCashDbWorkerESdtor_CCashDbWorkerES9_next(nullptr);
        Info::CCashDbWorkerESdtor_CCashDbWorkerES9_clbk CCashDbWorkerESdtor_CCashDbWorkerES9_user(nullptr);
        
        
        void CCashDbWorkerESctor_CCashDbWorkerES2_wrapper(struct CCashDbWorkerES* _this)
        {
           CCashDbWorkerESctor_CCashDbWorkerES2_user(_this, CCashDbWorkerESctor_CCashDbWorkerES2_next);
        };
        void CCashDbWorkerESGetUseCashQueryStr4_wrapper(struct CCashDbWorkerES* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CCashDbWorkerESGetUseCashQueryStr4_user(_this, rParam, nIdx, wszQuery, tBufferSize, CCashDbWorkerESGetUseCashQueryStr4_next);
        };
        
        void CCashDbWorkerESdtor_CCashDbWorkerES9_wrapper(struct CCashDbWorkerES* _this)
        {
           CCashDbWorkerESdtor_CCashDbWorkerES9_user(_this, CCashDbWorkerESdtor_CCashDbWorkerES9_next);
        };
        
        ::std::array<hook_record, 3> CCashDbWorkerES_functions = 
        {
            _hook_record {
                (LPVOID)0x140231b00L,
                (LPVOID *)&CCashDbWorkerESctor_CCashDbWorkerES2_user,
                (LPVOID *)&CCashDbWorkerESctor_CCashDbWorkerES2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerESctor_CCashDbWorkerES2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerES::*)())&CCashDbWorkerES::ctor_CCashDbWorkerES)
            },
            _hook_record {
                (LPVOID)0x140322400L,
                (LPVOID *)&CCashDbWorkerESGetUseCashQueryStr4_user,
                (LPVOID *)&CCashDbWorkerESGetUseCashQueryStr4_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerESGetUseCashQueryStr4_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerES::*)(struct _param_cash_update*, int, char*, uint64_t))&CCashDbWorkerES::GetUseCashQueryStr)
            },
            _hook_record {
                (LPVOID)0x140231bd0L,
                (LPVOID *)&CCashDbWorkerESdtor_CCashDbWorkerES9_user,
                (LPVOID *)&CCashDbWorkerESdtor_CCashDbWorkerES9_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerESdtor_CCashDbWorkerES9_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerES::*)())&CCashDbWorkerES::dtor_CCashDbWorkerES)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
