#include <ATL__CComBSTRDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace Detail
        {
            
            Info::ATL__CComBSTRdtor_CComBSTR1_ptr ATL__CComBSTRdtor_CComBSTR1_next(nullptr);
            Info::ATL__CComBSTRdtor_CComBSTR1_clbk ATL__CComBSTRdtor_CComBSTR1_user(nullptr);
            
            
            void ATL__CComBSTRdtor_CComBSTR1_wrapper(struct ATL::CComBSTR* _this)
            {
               ATL__CComBSTRdtor_CComBSTR1_user(_this, ATL__CComBSTRdtor_CComBSTR1_next);
            };
            
            ::std::array<hook_record, 1> CComBSTR_functions = 
            {
                _hook_record {
                    (LPVOID)0x1404dc4e0L,
                    (LPVOID *)&ATL__CComBSTRdtor_CComBSTR1_user,
                    (LPVOID *)&ATL__CComBSTRdtor_CComBSTR1_next,
                    (LPVOID)cast_pointer_function(ATL__CComBSTRdtor_CComBSTR1_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CComBSTR::*)())&ATL::CComBSTR::dtor_CComBSTR)
                },
            };
        }; // end namespace Detail
    }; // end namespace ATL
END_ATF_NAMESPACE
