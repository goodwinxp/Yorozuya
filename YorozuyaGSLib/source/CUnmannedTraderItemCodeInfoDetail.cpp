#include <CUnmannedTraderItemCodeInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo2_ptr CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo2_next(nullptr);
        Info::CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo2_clbk CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo2_user(nullptr);
        
        
        Info::CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo4_ptr CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo4_next(nullptr);
        Info::CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo4_clbk CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo4_user(nullptr);
        
        
        Info::CUnmannedTraderItemCodeInfodtor_CUnmannedTraderItemCodeInfo12_ptr CUnmannedTraderItemCodeInfodtor_CUnmannedTraderItemCodeInfo12_next(nullptr);
        Info::CUnmannedTraderItemCodeInfodtor_CUnmannedTraderItemCodeInfo12_clbk CUnmannedTraderItemCodeInfodtor_CUnmannedTraderItemCodeInfo12_user(nullptr);
        
        
        void CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo2_wrapper(struct CUnmannedTraderItemCodeInfo* _this, struct CUnmannedTraderItemCodeInfo* lhs)
        {
           CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo2_user(_this, lhs, CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo2_next);
        };
        
        void CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo4_wrapper(struct CUnmannedTraderItemCodeInfo* _this, char* szCode, unsigned int dwStartIndex, unsigned int dwEndIndex)
        {
           CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo4_user(_this, szCode, dwStartIndex, dwEndIndex, CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo4_next);
        };
        
        void CUnmannedTraderItemCodeInfodtor_CUnmannedTraderItemCodeInfo12_wrapper(struct CUnmannedTraderItemCodeInfo* _this)
        {
           CUnmannedTraderItemCodeInfodtor_CUnmannedTraderItemCodeInfo12_user(_this, CUnmannedTraderItemCodeInfodtor_CUnmannedTraderItemCodeInfo12_next);
        };
        
        ::std::array<hook_record, 3> CUnmannedTraderItemCodeInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x140379990L,
                (LPVOID *)&CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo2_user,
                (LPVOID *)&CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderItemCodeInfo::*)(struct CUnmannedTraderItemCodeInfo*))&CUnmannedTraderItemCodeInfo::ctor_CUnmannedTraderItemCodeInfo)
            },
            _hook_record {
                (LPVOID)0x14038d760L,
                (LPVOID *)&CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo4_user,
                (LPVOID *)&CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemCodeInfoctor_CUnmannedTraderItemCodeInfo4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderItemCodeInfo::*)(char*, unsigned int, unsigned int))&CUnmannedTraderItemCodeInfo::ctor_CUnmannedTraderItemCodeInfo)
            },
            _hook_record {
                (LPVOID)0x14038d7f0L,
                (LPVOID *)&CUnmannedTraderItemCodeInfodtor_CUnmannedTraderItemCodeInfo12_user,
                (LPVOID *)&CUnmannedTraderItemCodeInfodtor_CUnmannedTraderItemCodeInfo12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemCodeInfodtor_CUnmannedTraderItemCodeInfo12_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderItemCodeInfo::*)())&CUnmannedTraderItemCodeInfo::dtor_CUnmannedTraderItemCodeInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
