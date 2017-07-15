#include <CCheckSumCharacTrunkConverterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CCheckSumCharacTrunkConverterConvert2_ptr CCheckSumCharacTrunkConverterConvert2_next(nullptr);
        Info::CCheckSumCharacTrunkConverterConvert2_clbk CCheckSumCharacTrunkConverterConvert2_user(nullptr);
        
        Info::CCheckSumCharacTrunkConverterConvertTrunk4_ptr CCheckSumCharacTrunkConverterConvertTrunk4_next(nullptr);
        Info::CCheckSumCharacTrunkConverterConvertTrunk4_clbk CCheckSumCharacTrunkConverterConvertTrunk4_user(nullptr);
        
        void CCheckSumCharacTrunkConverterConvert2_wrapper(struct CCheckSumCharacTrunkConverter* _this, struct _AVATOR_DATA* pAvator, struct CCheckSumCharacAccountTrunkData* pkCheckSum)
        {
           CCheckSumCharacTrunkConverterConvert2_user(_this, pAvator, pkCheckSum, CCheckSumCharacTrunkConverterConvert2_next);
        };
        void CCheckSumCharacTrunkConverterConvertTrunk4_wrapper(struct CCheckSumCharacTrunkConverter* _this, unsigned int dwSerial, long double* pVal)
        {
           CCheckSumCharacTrunkConverterConvertTrunk4_user(_this, dwSerial, pVal, CCheckSumCharacTrunkConverterConvertTrunk4_next);
        };
        
        ::std::array<hook_record, 2> CCheckSumCharacTrunkConverter_functions = 
        {
            _hook_record {
                (LPVOID)0x1402c14d0L,
                (LPVOID *)&CCheckSumCharacTrunkConverterConvert2_user,
                (LPVOID *)&CCheckSumCharacTrunkConverterConvert2_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacTrunkConverterConvert2_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumCharacTrunkConverter::*)(struct _AVATOR_DATA*, struct CCheckSumCharacAccountTrunkData*))&CCheckSumCharacTrunkConverter::Convert)
            },
            _hook_record {
                (LPVOID)0x1402c16c0L,
                (LPVOID *)&CCheckSumCharacTrunkConverterConvertTrunk4_user,
                (LPVOID *)&CCheckSumCharacTrunkConverterConvertTrunk4_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacTrunkConverterConvertTrunk4_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumCharacTrunkConverter::*)(unsigned int, long double*))&CCheckSumCharacTrunkConverter::ConvertTrunk)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
