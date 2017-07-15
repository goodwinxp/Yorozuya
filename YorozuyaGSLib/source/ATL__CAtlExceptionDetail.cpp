#include <ATL__CAtlExceptionDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace Detail
        {
            
            Info::ATL__CAtlExceptionctor_CAtlException1_ptr ATL__CAtlExceptionctor_CAtlException1_next(nullptr);
            Info::ATL__CAtlExceptionctor_CAtlException1_clbk ATL__CAtlExceptionctor_CAtlException1_user(nullptr);
            
            
            void ATL__CAtlExceptionctor_CAtlException1_wrapper(struct ATL::CAtlException* _this, HRESULT hr)
            {
               ATL__CAtlExceptionctor_CAtlException1_user(_this, hr, ATL__CAtlExceptionctor_CAtlException1_next);
            };
            
            ::std::array<hook_record, 1> CAtlException_functions = 
            {
                _hook_record {
                    (LPVOID)0x14066dd10L,
                    (LPVOID *)&ATL__CAtlExceptionctor_CAtlException1_user,
                    (LPVOID *)&ATL__CAtlExceptionctor_CAtlException1_next,
                    (LPVOID)cast_pointer_function(ATL__CAtlExceptionctor_CAtlException1_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CAtlException::*)(HRESULT))&ATL::CAtlException::ctor_CAtlException)
                },
            };
        }; // end namespace Detail
    }; // end namespace ATL
END_ATF_NAMESPACE
