#include <Define_the_symbol__ATL_MIXED__Thank_youDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Define_the_symbol__ATL_MIXED
    {
        namespace Detail
        {
            
            Info::Define_the_symbol__ATL_MIXED__Thank_youctor_Thank_you2_ptr Define_the_symbol__ATL_MIXED__Thank_youctor_Thank_you2_next(nullptr);
            Info::Define_the_symbol__ATL_MIXED__Thank_youctor_Thank_you2_clbk Define_the_symbol__ATL_MIXED__Thank_youctor_Thank_you2_user(nullptr);
            
            Info::Define_the_symbol__ATL_MIXED__Thank_youone4_ptr Define_the_symbol__ATL_MIXED__Thank_youone4_next(nullptr);
            Info::Define_the_symbol__ATL_MIXED__Thank_youone4_clbk Define_the_symbol__ATL_MIXED__Thank_youone4_user(nullptr);
            
            
            void Define_the_symbol__ATL_MIXED__Thank_youctor_Thank_you2_wrapper(struct Define_the_symbol__ATL_MIXED::Thank_you* _this)
            {
               Define_the_symbol__ATL_MIXED__Thank_youctor_Thank_you2_user(_this, Define_the_symbol__ATL_MIXED__Thank_youctor_Thank_you2_next);
            };
            void Define_the_symbol__ATL_MIXED__Thank_youone4_wrapper(struct Define_the_symbol__ATL_MIXED::Thank_you* _this)
            {
               Define_the_symbol__ATL_MIXED__Thank_youone4_user(_this, Define_the_symbol__ATL_MIXED__Thank_youone4_next);
            };
            
            ::std::array<hook_record, 2> Thank_you_functions = 
            {
                _hook_record {
                    (LPVOID)0x1400279e0L,
                    (LPVOID *)&Define_the_symbol__ATL_MIXED__Thank_youctor_Thank_you2_user,
                    (LPVOID *)&Define_the_symbol__ATL_MIXED__Thank_youctor_Thank_you2_next,
                    (LPVOID)cast_pointer_function(Define_the_symbol__ATL_MIXED__Thank_youctor_Thank_you2_wrapper),
                    (LPVOID)cast_pointer_function((void(Define_the_symbol__ATL_MIXED::Thank_you::*)())&Define_the_symbol__ATL_MIXED::Thank_you::ctor_Thank_you)
                },
                _hook_record {
                    (LPVOID)0x140027a10L,
                    (LPVOID *)&Define_the_symbol__ATL_MIXED__Thank_youone4_user,
                    (LPVOID *)&Define_the_symbol__ATL_MIXED__Thank_youone4_next,
                    (LPVOID)cast_pointer_function(Define_the_symbol__ATL_MIXED__Thank_youone4_wrapper),
                    (LPVOID)cast_pointer_function((void(Define_the_symbol__ATL_MIXED::Thank_you::*)())&Define_the_symbol__ATL_MIXED::Thank_you::one)
                },
            };
        }; // end namespace Detail
    }; // end namespace Define_the_symbol__ATL_MIXED
END_ATF_NAMESPACE
