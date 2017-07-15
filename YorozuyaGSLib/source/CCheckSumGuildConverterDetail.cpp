#include <CCheckSumGuildConverterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CCheckSumGuildConverterConvert2_ptr CCheckSumGuildConverterConvert2_next(nullptr);
        Info::CCheckSumGuildConverterConvert2_clbk CCheckSumGuildConverterConvert2_user(nullptr);
        
        void CCheckSumGuildConverterConvert2_wrapper(struct CCheckSumGuildConverter* _this, long double dDalant, long double dGold, struct CCheckSumGuildData* pkCheckSum)
        {
           CCheckSumGuildConverterConvert2_user(_this, dDalant, dGold, pkCheckSum, CCheckSumGuildConverterConvert2_next);
        };
        
        ::std::array<hook_record, 1> CCheckSumGuildConverter_functions = 
        {
            _hook_record {
                (LPVOID)0x1402c1760L,
                (LPVOID *)&CCheckSumGuildConverterConvert2_user,
                (LPVOID *)&CCheckSumGuildConverterConvert2_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildConverterConvert2_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumGuildConverter::*)(long double, long double, struct CCheckSumGuildData*))&CCheckSumGuildConverter::Convert)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
