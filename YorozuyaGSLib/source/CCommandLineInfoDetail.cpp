#include <CCommandLineInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCommandLineInfodtor_CCommandLineInfo1_ptr CCommandLineInfodtor_CCommandLineInfo1_next(nullptr);
        Info::CCommandLineInfodtor_CCommandLineInfo1_clbk CCommandLineInfodtor_CCommandLineInfo1_user(nullptr);
        
        
        int64_t CCommandLineInfodtor_CCommandLineInfo1_wrapper(struct CCommandLineInfo* _this)
        {
           return CCommandLineInfodtor_CCommandLineInfo1_user(_this, CCommandLineInfodtor_CCommandLineInfo1_next);
        };
        
        ::std::array<hook_record, 1> CCommandLineInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x1404dbffaL,
                (LPVOID *)&CCommandLineInfodtor_CCommandLineInfo1_user,
                (LPVOID *)&CCommandLineInfodtor_CCommandLineInfo1_next,
                (LPVOID)cast_pointer_function(CCommandLineInfodtor_CCommandLineInfo1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CCommandLineInfo::*)())&CCommandLineInfo::dtor_CCommandLineInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
