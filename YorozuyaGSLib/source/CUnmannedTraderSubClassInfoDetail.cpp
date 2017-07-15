#include <CUnmannedTraderSubClassInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo2_ptr CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo2_next(nullptr);
        Info::CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo2_clbk CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo2_user(nullptr);
        
        
        Info::CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo4_ptr CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo4_next(nullptr);
        Info::CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo4_clbk CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo4_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoCopy6_ptr CUnmannedTraderSubClassInfoCopy6_next(nullptr);
        Info::CUnmannedTraderSubClassInfoCopy6_clbk CUnmannedTraderSubClassInfoCopy6_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoGetGroupID8_ptr CUnmannedTraderSubClassInfoGetGroupID8_next(nullptr);
        Info::CUnmannedTraderSubClassInfoGetGroupID8_clbk CUnmannedTraderSubClassInfoGetGroupID8_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoGetID10_ptr CUnmannedTraderSubClassInfoGetID10_next(nullptr);
        Info::CUnmannedTraderSubClassInfoGetID10_clbk CUnmannedTraderSubClassInfoGetID10_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoGetTypeName12_ptr CUnmannedTraderSubClassInfoGetTypeName12_next(nullptr);
        Info::CUnmannedTraderSubClassInfoGetTypeName12_clbk CUnmannedTraderSubClassInfoGetTypeName12_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoLoadXML14_ptr CUnmannedTraderSubClassInfoLoadXML14_next(nullptr);
        Info::CUnmannedTraderSubClassInfoLoadXML14_clbk CUnmannedTraderSubClassInfoLoadXML14_user(nullptr);
        
        
        Info::CUnmannedTraderSubClassInfodtor_CUnmannedTraderSubClassInfo18_ptr CUnmannedTraderSubClassInfodtor_CUnmannedTraderSubClassInfo18_next(nullptr);
        Info::CUnmannedTraderSubClassInfodtor_CUnmannedTraderSubClassInfo18_clbk CUnmannedTraderSubClassInfodtor_CUnmannedTraderSubClassInfo18_user(nullptr);
        
        
        void CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo2_wrapper(struct CUnmannedTraderSubClassInfo* _this, struct CUnmannedTraderSubClassInfo* lhs)
        {
           CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo2_user(_this, lhs, CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo2_next);
        };
        
        void CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo4_wrapper(struct CUnmannedTraderSubClassInfo* _this, unsigned int dwID)
        {
           CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo4_user(_this, dwID, CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo4_next);
        };
        struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassInfoCopy6_wrapper(struct CUnmannedTraderSubClassInfo* _this, struct CUnmannedTraderSubClassInfo* lhs)
        {
           return CUnmannedTraderSubClassInfoCopy6_user(_this, lhs, CUnmannedTraderSubClassInfoCopy6_next);
        };
        bool CUnmannedTraderSubClassInfoGetGroupID8_wrapper(struct CUnmannedTraderSubClassInfo* _this, char byTableCode, uint16_t wItemTableIndex, char* bySubClass)
        {
           return CUnmannedTraderSubClassInfoGetGroupID8_user(_this, byTableCode, wItemTableIndex, bySubClass, CUnmannedTraderSubClassInfoGetGroupID8_next);
        };
        unsigned int CUnmannedTraderSubClassInfoGetID10_wrapper(struct CUnmannedTraderSubClassInfo* _this)
        {
           return CUnmannedTraderSubClassInfoGetID10_user(_this, CUnmannedTraderSubClassInfoGetID10_next);
        };
        char* CUnmannedTraderSubClassInfoGetTypeName12_wrapper(struct CUnmannedTraderSubClassInfo* _this)
        {
           return CUnmannedTraderSubClassInfoGetTypeName12_user(_this, CUnmannedTraderSubClassInfoGetTypeName12_next);
        };
        bool CUnmannedTraderSubClassInfoLoadXML14_wrapper(struct CUnmannedTraderSubClassInfo* _this, struct TiXmlElement* pkElement, struct CLogFile* kLogger, unsigned int dwDivisionID, unsigned int dwClassID)
        {
           return CUnmannedTraderSubClassInfoLoadXML14_user(_this, pkElement, kLogger, dwDivisionID, dwClassID, CUnmannedTraderSubClassInfoLoadXML14_next);
        };
        
        void CUnmannedTraderSubClassInfodtor_CUnmannedTraderSubClassInfo18_wrapper(struct CUnmannedTraderSubClassInfo* _this)
        {
           CUnmannedTraderSubClassInfodtor_CUnmannedTraderSubClassInfo18_user(_this, CUnmannedTraderSubClassInfodtor_CUnmannedTraderSubClassInfo18_next);
        };
        
        ::std::array<hook_record, 8> CUnmannedTraderSubClassInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x140384630L,
                (LPVOID *)&CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo2_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassInfo::*)(struct CUnmannedTraderSubClassInfo*))&CUnmannedTraderSubClassInfo::ctor_CUnmannedTraderSubClassInfo)
            },
            _hook_record {
                (LPVOID)0x1403845c0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo4_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoctor_CUnmannedTraderSubClassInfo4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassInfo::*)(unsigned int))&CUnmannedTraderSubClassInfo::ctor_CUnmannedTraderSubClassInfo)
            },
            _hook_record {
                (LPVOID)0x140384710L,
                (LPVOID *)&CUnmannedTraderSubClassInfoCopy6_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoCopy6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoCopy6_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderSubClassInfo*(CUnmannedTraderSubClassInfo::*)(struct CUnmannedTraderSubClassInfo*))&CUnmannedTraderSubClassInfo::Copy)
            },
            _hook_record {
                (LPVOID)0x1403846e0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoGetGroupID8_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoGetGroupID8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoGetGroupID8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSubClassInfo::*)(char, uint16_t, char*))&CUnmannedTraderSubClassInfo::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x14037e0a0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoGetID10_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoGetID10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoGetID10_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CUnmannedTraderSubClassInfo::*)())&CUnmannedTraderSubClassInfo::GetID)
            },
            _hook_record {
                (LPVOID)0x140385cb0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoGetTypeName12_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoGetTypeName12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoGetTypeName12_wrapper),
                (LPVOID)cast_pointer_function((char*(CUnmannedTraderSubClassInfo::*)())&CUnmannedTraderSubClassInfo::GetTypeName)
            },
            _hook_record {
                (LPVOID)0x1403846c0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoLoadXML14_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoLoadXML14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoLoadXML14_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSubClassInfo::*)(struct TiXmlElement*, struct CLogFile*, unsigned int, unsigned int))&CUnmannedTraderSubClassInfo::LoadXML)
            },
            _hook_record {
                (LPVOID)0x1403846a0L,
                (LPVOID *)&CUnmannedTraderSubClassInfodtor_CUnmannedTraderSubClassInfo18_user,
                (LPVOID *)&CUnmannedTraderSubClassInfodtor_CUnmannedTraderSubClassInfo18_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfodtor_CUnmannedTraderSubClassInfo18_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassInfo::*)())&CUnmannedTraderSubClassInfo::dtor_CUnmannedTraderSubClassInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
