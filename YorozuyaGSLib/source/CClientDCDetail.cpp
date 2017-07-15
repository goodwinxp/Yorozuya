#include <CClientDCDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CClientDCdtor_CClientDC1_ptr CClientDCdtor_CClientDC1_next(nullptr);
        Info::CClientDCdtor_CClientDC1_clbk CClientDCdtor_CClientDC1_user(nullptr);
        
        
        int64_t CClientDCdtor_CClientDC1_wrapper(struct CClientDC* _this)
        {
           return CClientDCdtor_CClientDC1_user(_this, CClientDCdtor_CClientDC1_next);
        };
        
        ::std::array<hook_record, 1> CClientDC_functions = 
        {
            _hook_record {
                (LPVOID)0x1404dc282L,
                (LPVOID *)&CClientDCdtor_CClientDC1_user,
                (LPVOID *)&CClientDCdtor_CClientDC1_next,
                (LPVOID)cast_pointer_function(CClientDCdtor_CClientDC1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CClientDC::*)())&CClientDC::dtor_CClientDC)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
