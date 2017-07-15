#include <CCashDbWorkerIDDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerIDctor_CCashDbWorkerID2_ptr CCashDbWorkerIDctor_CCashDbWorkerID2_next(nullptr);
        Info::CCashDbWorkerIDctor_CCashDbWorkerID2_clbk CCashDbWorkerIDctor_CCashDbWorkerID2_user(nullptr);
        
        Info::CCashDbWorkerIDGetUseCashQueryStr4_ptr CCashDbWorkerIDGetUseCashQueryStr4_next(nullptr);
        Info::CCashDbWorkerIDGetUseCashQueryStr4_clbk CCashDbWorkerIDGetUseCashQueryStr4_user(nullptr);
        
        
        Info::CCashDbWorkerIDdtor_CCashDbWorkerID9_ptr CCashDbWorkerIDdtor_CCashDbWorkerID9_next(nullptr);
        Info::CCashDbWorkerIDdtor_CCashDbWorkerID9_clbk CCashDbWorkerIDdtor_CCashDbWorkerID9_user(nullptr);
        
        
        void CCashDbWorkerIDctor_CCashDbWorkerID2_wrapper(struct CCashDbWorkerID* _this)
        {
           CCashDbWorkerIDctor_CCashDbWorkerID2_user(_this, CCashDbWorkerIDctor_CCashDbWorkerID2_next);
        };
        void CCashDbWorkerIDGetUseCashQueryStr4_wrapper(struct CCashDbWorkerID* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CCashDbWorkerIDGetUseCashQueryStr4_user(_this, rParam, nIdx, wszQuery, tBufferSize, CCashDbWorkerIDGetUseCashQueryStr4_next);
        };
        
        void CCashDbWorkerIDdtor_CCashDbWorkerID9_wrapper(struct CCashDbWorkerID* _this)
        {
           CCashDbWorkerIDdtor_CCashDbWorkerID9_user(_this, CCashDbWorkerIDdtor_CCashDbWorkerID9_next);
        };
        
        ::std::array<hook_record, 3> CCashDbWorkerID_functions = 
        {
            _hook_record {
                (LPVOID)0x14022cca0L,
                (LPVOID *)&CCashDbWorkerIDctor_CCashDbWorkerID2_user,
                (LPVOID *)&CCashDbWorkerIDctor_CCashDbWorkerID2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerIDctor_CCashDbWorkerID2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerID::*)())&CCashDbWorkerID::ctor_CCashDbWorkerID)
            },
            _hook_record {
                (LPVOID)0x14031fdd0L,
                (LPVOID *)&CCashDbWorkerIDGetUseCashQueryStr4_user,
                (LPVOID *)&CCashDbWorkerIDGetUseCashQueryStr4_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerIDGetUseCashQueryStr4_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerID::*)(struct _param_cash_update*, int, char*, uint64_t))&CCashDbWorkerID::GetUseCashQueryStr)
            },
            _hook_record {
                (LPVOID)0x14022cd70L,
                (LPVOID *)&CCashDbWorkerIDdtor_CCashDbWorkerID9_user,
                (LPVOID *)&CCashDbWorkerIDdtor_CCashDbWorkerID9_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerIDdtor_CCashDbWorkerID9_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerID::*)())&CCashDbWorkerID::dtor_CCashDbWorkerID)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
