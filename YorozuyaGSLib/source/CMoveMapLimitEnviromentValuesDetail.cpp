#include <CMoveMapLimitEnviromentValuesDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CMoveMapLimitEnviromentValuesInit2_ptr CMoveMapLimitEnviromentValuesInit2_next(nullptr);
        Info::CMoveMapLimitEnviromentValuesInit2_clbk CMoveMapLimitEnviromentValuesInit2_user(nullptr);
        
        bool CMoveMapLimitEnviromentValuesInit2_wrapper()
        {
           return CMoveMapLimitEnviromentValuesInit2_user(CMoveMapLimitEnviromentValuesInit2_next);
        };
        
        ::std::array<hook_record, 1> CMoveMapLimitEnviromentValues_functions = 
        {
            _hook_record {
                (LPVOID)0x1403a1550L,
                (LPVOID *)&CMoveMapLimitEnviromentValuesInit2_user,
                (LPVOID *)&CMoveMapLimitEnviromentValuesInit2_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitEnviromentValuesInit2_wrapper),
                (LPVOID)cast_pointer_function((bool(*)())&CMoveMapLimitEnviromentValues::Init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
