#include <UIDGeneratorDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::UIDGeneratorgetuid2_ptr UIDGeneratorgetuid2_next(nullptr);
        Info::UIDGeneratorgetuid2_clbk UIDGeneratorgetuid2_user(nullptr);
        
        Info::UIDGeneratorgetuid4_ptr UIDGeneratorgetuid4_next(nullptr);
        Info::UIDGeneratorgetuid4_clbk UIDGeneratorgetuid4_user(nullptr);
        
        Info::UIDGeneratortmuid6_ptr UIDGeneratortmuid6_next(nullptr);
        Info::UIDGeneratortmuid6_clbk UIDGeneratortmuid6_user(nullptr);
        
        uint64_t UIDGeneratorgetuid2_wrapper(char n)
        {
           return UIDGeneratorgetuid2_user(n, UIDGeneratorgetuid2_next);
        };
        uint64_t UIDGeneratorgetuid4_wrapper(char n, char ncode)
        {
           return UIDGeneratorgetuid4_user(n, ncode, UIDGeneratorgetuid4_next);
        };
        void UIDGeneratortmuid6_wrapper(uint64_t uid, char* szBuf)
        {
           UIDGeneratortmuid6_user(uid, szBuf, UIDGeneratortmuid6_next);
        };
        
        ::std::array<hook_record, 3> UIDGenerator_functions = 
        {
            _hook_record {
                (LPVOID)0x14043f130L,
                (LPVOID *)&UIDGeneratorgetuid2_user,
                (LPVOID *)&UIDGeneratorgetuid2_next,
                (LPVOID)cast_pointer_function(UIDGeneratorgetuid2_wrapper),
                (LPVOID)cast_pointer_function((uint64_t(*)(char))&UIDGenerator::getuid)
            },
            _hook_record {
                (LPVOID)0x14043f200L,
                (LPVOID *)&UIDGeneratorgetuid4_user,
                (LPVOID *)&UIDGeneratorgetuid4_next,
                (LPVOID)cast_pointer_function(UIDGeneratorgetuid4_wrapper),
                (LPVOID)cast_pointer_function((uint64_t(*)(char, char))&UIDGenerator::getuid)
            },
            _hook_record {
                (LPVOID)0x14043f2f0L,
                (LPVOID *)&UIDGeneratortmuid6_user,
                (LPVOID *)&UIDGeneratortmuid6_next,
                (LPVOID)cast_pointer_function(UIDGeneratortmuid6_wrapper),
                (LPVOID)cast_pointer_function((void(*)(uint64_t, char*))&UIDGenerator::tmuid)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
