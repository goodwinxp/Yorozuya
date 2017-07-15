#include <CCheckSumDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCheckSumctor_CCheckSum2_ptr CCheckSumctor_CCheckSum2_next(nullptr);
        Info::CCheckSumctor_CCheckSum2_clbk CCheckSumctor_CCheckSum2_user(nullptr);
        
        Info::CCheckSumDecodeValue4_ptr CCheckSumDecodeValue4_next(nullptr);
        Info::CCheckSumDecodeValue4_clbk CCheckSumDecodeValue4_user(nullptr);
        
        Info::CCheckSumEncodeValue6_ptr CCheckSumEncodeValue6_next(nullptr);
        Info::CCheckSumEncodeValue6_clbk CCheckSumEncodeValue6_user(nullptr);
        
        Info::CCheckSumInit8_ptr CCheckSumInit8_next(nullptr);
        Info::CCheckSumInit8_clbk CCheckSumInit8_user(nullptr);
        
        
        Info::CCheckSumdtor_CCheckSum10_ptr CCheckSumdtor_CCheckSum10_next(nullptr);
        Info::CCheckSumdtor_CCheckSum10_clbk CCheckSumdtor_CCheckSum10_user(nullptr);
        
        
        void CCheckSumctor_CCheckSum2_wrapper(struct CCheckSum* _this)
        {
           CCheckSumctor_CCheckSum2_user(_this, CCheckSumctor_CCheckSum2_next);
        };
        unsigned int CCheckSumDecodeValue4_wrapper(struct CCheckSum* _this, char byIndex, unsigned int dwSerial, unsigned int dwValue)
        {
           return CCheckSumDecodeValue4_user(_this, byIndex, dwSerial, dwValue, CCheckSumDecodeValue4_next);
        };
        unsigned int CCheckSumEncodeValue6_wrapper(struct CCheckSum* _this, char byIndex, unsigned int dwSerial, unsigned int dwValue)
        {
           return CCheckSumEncodeValue6_user(_this, byIndex, dwSerial, dwValue, CCheckSumEncodeValue6_next);
        };
        bool CCheckSumInit8_wrapper(struct CCheckSum* _this)
        {
           return CCheckSumInit8_user(_this, CCheckSumInit8_next);
        };
        
        void CCheckSumdtor_CCheckSum10_wrapper(struct CCheckSum* _this)
        {
           CCheckSumdtor_CCheckSum10_user(_this, CCheckSumdtor_CCheckSum10_next);
        };
        
        ::std::array<hook_record, 5> CCheckSum_functions = 
        {
            _hook_record {
                (LPVOID)0x1402c0560L,
                (LPVOID *)&CCheckSumctor_CCheckSum2_user,
                (LPVOID *)&CCheckSumctor_CCheckSum2_next,
                (LPVOID)cast_pointer_function(CCheckSumctor_CCheckSum2_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSum::*)())&CCheckSum::ctor_CCheckSum)
            },
            _hook_record {
                (LPVOID)0x1402c0620L,
                (LPVOID *)&CCheckSumDecodeValue4_user,
                (LPVOID *)&CCheckSumDecodeValue4_next,
                (LPVOID)cast_pointer_function(CCheckSumDecodeValue4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CCheckSum::*)(char, unsigned int, unsigned int))&CCheckSum::DecodeValue)
            },
            _hook_record {
                (LPVOID)0x1402c05a0L,
                (LPVOID *)&CCheckSumEncodeValue6_user,
                (LPVOID *)&CCheckSumEncodeValue6_next,
                (LPVOID)cast_pointer_function(CCheckSumEncodeValue6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CCheckSum::*)(char, unsigned int, unsigned int))&CCheckSum::EncodeValue)
            },
            _hook_record {
                (LPVOID)0x1402c0590L,
                (LPVOID *)&CCheckSumInit8_user,
                (LPVOID *)&CCheckSumInit8_next,
                (LPVOID)cast_pointer_function(CCheckSumInit8_wrapper),
                (LPVOID)cast_pointer_function((bool(CCheckSum::*)())&CCheckSum::Init)
            },
            _hook_record {
                (LPVOID)0x1402c0580L,
                (LPVOID *)&CCheckSumdtor_CCheckSum10_user,
                (LPVOID *)&CCheckSumdtor_CCheckSum10_next,
                (LPVOID)cast_pointer_function(CCheckSumdtor_CCheckSum10_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSum::*)())&CCheckSum::dtor_CCheckSum)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
