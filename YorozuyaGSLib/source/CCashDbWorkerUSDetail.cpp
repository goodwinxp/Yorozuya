#include <CCashDbWorkerUSDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerUSctor_CCashDbWorkerUS2_ptr CCashDbWorkerUSctor_CCashDbWorkerUS2_next(nullptr);
        Info::CCashDbWorkerUSctor_CCashDbWorkerUS2_clbk CCashDbWorkerUSctor_CCashDbWorkerUS2_user(nullptr);
        
        Info::CCashDbWorkerUSGetUseCashQueryStr4_ptr CCashDbWorkerUSGetUseCashQueryStr4_next(nullptr);
        Info::CCashDbWorkerUSGetUseCashQueryStr4_clbk CCashDbWorkerUSGetUseCashQueryStr4_user(nullptr);
        
        
        Info::CCashDbWorkerUSdtor_CCashDbWorkerUS9_ptr CCashDbWorkerUSdtor_CCashDbWorkerUS9_next(nullptr);
        Info::CCashDbWorkerUSdtor_CCashDbWorkerUS9_clbk CCashDbWorkerUSdtor_CCashDbWorkerUS9_user(nullptr);
        
        
        void CCashDbWorkerUSctor_CCashDbWorkerUS2_wrapper(struct CCashDbWorkerUS* _this)
        {
           CCashDbWorkerUSctor_CCashDbWorkerUS2_user(_this, CCashDbWorkerUSctor_CCashDbWorkerUS2_next);
        };
        void CCashDbWorkerUSGetUseCashQueryStr4_wrapper(struct CCashDbWorkerUS* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CCashDbWorkerUSGetUseCashQueryStr4_user(_this, rParam, nIdx, wszQuery, tBufferSize, CCashDbWorkerUSGetUseCashQueryStr4_next);
        };
        
        void CCashDbWorkerUSdtor_CCashDbWorkerUS9_wrapper(struct CCashDbWorkerUS* _this)
        {
           CCashDbWorkerUSdtor_CCashDbWorkerUS9_user(_this, CCashDbWorkerUSdtor_CCashDbWorkerUS9_next);
        };
        
        ::std::array<hook_record, 3> CCashDbWorkerUS_functions = 
        {
            _hook_record {
                (LPVOID)0x140231600L,
                (LPVOID *)&CCashDbWorkerUSctor_CCashDbWorkerUS2_user,
                (LPVOID *)&CCashDbWorkerUSctor_CCashDbWorkerUS2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerUSctor_CCashDbWorkerUS2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerUS::*)())&CCashDbWorkerUS::ctor_CCashDbWorkerUS)
            },
            _hook_record {
                (LPVOID)0x140322260L,
                (LPVOID *)&CCashDbWorkerUSGetUseCashQueryStr4_user,
                (LPVOID *)&CCashDbWorkerUSGetUseCashQueryStr4_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerUSGetUseCashQueryStr4_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerUS::*)(struct _param_cash_update*, int, char*, uint64_t))&CCashDbWorkerUS::GetUseCashQueryStr)
            },
            _hook_record {
                (LPVOID)0x1402316d0L,
                (LPVOID *)&CCashDbWorkerUSdtor_CCashDbWorkerUS9_user,
                (LPVOID *)&CCashDbWorkerUSdtor_CCashDbWorkerUS9_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerUSdtor_CCashDbWorkerUS9_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerUS::*)())&CCashDbWorkerUS::dtor_CCashDbWorkerUS)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
