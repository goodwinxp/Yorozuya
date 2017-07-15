#include <CUnmannedTraderClassInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderClassInfoctor_CUnmannedTraderClassInfo2_ptr CUnmannedTraderClassInfoctor_CUnmannedTraderClassInfo2_next(nullptr);
        Info::CUnmannedTraderClassInfoctor_CUnmannedTraderClassInfo2_clbk CUnmannedTraderClassInfoctor_CUnmannedTraderClassInfo2_user(nullptr);
        
        Info::CUnmannedTraderClassInfoCopy4_ptr CUnmannedTraderClassInfoCopy4_next(nullptr);
        Info::CUnmannedTraderClassInfoCopy4_clbk CUnmannedTraderClassInfoCopy4_user(nullptr);
        
        Info::CUnmannedTraderClassInfoGetID6_ptr CUnmannedTraderClassInfoGetID6_next(nullptr);
        Info::CUnmannedTraderClassInfoGetID6_clbk CUnmannedTraderClassInfoGetID6_user(nullptr);
        
        Info::CUnmannedTraderClassInfoGetTypeName8_ptr CUnmannedTraderClassInfoGetTypeName8_next(nullptr);
        Info::CUnmannedTraderClassInfoGetTypeName8_clbk CUnmannedTraderClassInfoGetTypeName8_user(nullptr);
        
        
        Info::CUnmannedTraderClassInfodtor_CUnmannedTraderClassInfo12_ptr CUnmannedTraderClassInfodtor_CUnmannedTraderClassInfo12_next(nullptr);
        Info::CUnmannedTraderClassInfodtor_CUnmannedTraderClassInfo12_clbk CUnmannedTraderClassInfodtor_CUnmannedTraderClassInfo12_user(nullptr);
        
        
        void CUnmannedTraderClassInfoctor_CUnmannedTraderClassInfo2_wrapper(struct CUnmannedTraderClassInfo* _this, unsigned int dwID)
        {
           CUnmannedTraderClassInfoctor_CUnmannedTraderClassInfo2_user(_this, dwID, CUnmannedTraderClassInfoctor_CUnmannedTraderClassInfo2_next);
        };
        struct CUnmannedTraderClassInfo* CUnmannedTraderClassInfoCopy4_wrapper(struct CUnmannedTraderClassInfo* _this, struct CUnmannedTraderClassInfo* lhs)
        {
           return CUnmannedTraderClassInfoCopy4_user(_this, lhs, CUnmannedTraderClassInfoCopy4_next);
        };
        unsigned int CUnmannedTraderClassInfoGetID6_wrapper(struct CUnmannedTraderClassInfo* _this)
        {
           return CUnmannedTraderClassInfoGetID6_user(_this, CUnmannedTraderClassInfoGetID6_next);
        };
        char* CUnmannedTraderClassInfoGetTypeName8_wrapper(struct CUnmannedTraderClassInfo* _this)
        {
           return CUnmannedTraderClassInfoGetTypeName8_user(_this, CUnmannedTraderClassInfoGetTypeName8_next);
        };
        
        void CUnmannedTraderClassInfodtor_CUnmannedTraderClassInfo12_wrapper(struct CUnmannedTraderClassInfo* _this)
        {
           CUnmannedTraderClassInfodtor_CUnmannedTraderClassInfo12_user(_this, CUnmannedTraderClassInfodtor_CUnmannedTraderClassInfo12_next);
        };
        
        ::std::array<hook_record, 5> CUnmannedTraderClassInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x140376f10L,
                (LPVOID *)&CUnmannedTraderClassInfoctor_CUnmannedTraderClassInfo2_user,
                (LPVOID *)&CUnmannedTraderClassInfoctor_CUnmannedTraderClassInfo2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoctor_CUnmannedTraderClassInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderClassInfo::*)(unsigned int))&CUnmannedTraderClassInfo::ctor_CUnmannedTraderClassInfo)
            },
            _hook_record {
                (LPVOID)0x140376fd0L,
                (LPVOID *)&CUnmannedTraderClassInfoCopy4_user,
                (LPVOID *)&CUnmannedTraderClassInfoCopy4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoCopy4_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderClassInfo*(CUnmannedTraderClassInfo::*)(struct CUnmannedTraderClassInfo*))&CUnmannedTraderClassInfo::Copy)
            },
            _hook_record {
                (LPVOID)0x14036f440L,
                (LPVOID *)&CUnmannedTraderClassInfoGetID6_user,
                (LPVOID *)&CUnmannedTraderClassInfoGetID6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoGetID6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CUnmannedTraderClassInfo::*)())&CUnmannedTraderClassInfo::GetID)
            },
            _hook_record {
                (LPVOID)0x140385180L,
                (LPVOID *)&CUnmannedTraderClassInfoGetTypeName8_user,
                (LPVOID *)&CUnmannedTraderClassInfoGetTypeName8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoGetTypeName8_wrapper),
                (LPVOID)cast_pointer_function((char*(CUnmannedTraderClassInfo::*)())&CUnmannedTraderClassInfo::GetTypeName)
            },
            _hook_record {
                (LPVOID)0x140376fb0L,
                (LPVOID *)&CUnmannedTraderClassInfodtor_CUnmannedTraderClassInfo12_user,
                (LPVOID *)&CUnmannedTraderClassInfodtor_CUnmannedTraderClassInfo12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfodtor_CUnmannedTraderClassInfo12_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderClassInfo::*)())&CUnmannedTraderClassInfo::dtor_CUnmannedTraderClassInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
