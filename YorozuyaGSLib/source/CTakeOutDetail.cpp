#include <CTakeOutDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CTakeOutTakeOut_Lotto2_ptr CTakeOutTakeOut_Lotto2_next(nullptr);
        Info::CTakeOutTakeOut_Lotto2_clbk CTakeOutTakeOut_Lotto2_user(nullptr);
        
        void CTakeOutTakeOut_Lotto2_wrapper(int* pBuff, unsigned int dwNodeCount)
        {
           CTakeOutTakeOut_Lotto2_user(pBuff, dwNodeCount, CTakeOutTakeOut_Lotto2_next);
        };
        
        ::std::array<hook_record, 1> CTakeOut_functions = 
        {
            _hook_record {
                (LPVOID)0x1402af680L,
                (LPVOID *)&CTakeOutTakeOut_Lotto2_user,
                (LPVOID *)&CTakeOutTakeOut_Lotto2_next,
                (LPVOID)cast_pointer_function(CTakeOutTakeOut_Lotto2_wrapper),
                (LPVOID)cast_pointer_function((void(*)(int*, unsigned int))&CTakeOut::TakeOut_Lotto)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
