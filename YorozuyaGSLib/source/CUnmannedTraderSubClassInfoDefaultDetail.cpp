#include <CUnmannedTraderSubClassInfoDefaultDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderSubClassInfoDefaultctor_CUnmannedTraderSubClassInfoDefault2_ptr CUnmannedTraderSubClassInfoDefaultctor_CUnmannedTraderSubClassInfoDefault2_next(nullptr);
        Info::CUnmannedTraderSubClassInfoDefaultctor_CUnmannedTraderSubClassInfoDefault2_clbk CUnmannedTraderSubClassInfoDefaultctor_CUnmannedTraderSubClassInfoDefault2_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoDefaultCreate4_ptr CUnmannedTraderSubClassInfoDefaultCreate4_next(nullptr);
        Info::CUnmannedTraderSubClassInfoDefaultCreate4_clbk CUnmannedTraderSubClassInfoDefaultCreate4_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoDefaultGetGroupID6_ptr CUnmannedTraderSubClassInfoDefaultGetGroupID6_next(nullptr);
        Info::CUnmannedTraderSubClassInfoDefaultGetGroupID6_clbk CUnmannedTraderSubClassInfoDefaultGetGroupID6_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoDefaultLoadXML8_ptr CUnmannedTraderSubClassInfoDefaultLoadXML8_next(nullptr);
        Info::CUnmannedTraderSubClassInfoDefaultLoadXML8_clbk CUnmannedTraderSubClassInfoDefaultLoadXML8_user(nullptr);
        
        
        void CUnmannedTraderSubClassInfoDefaultctor_CUnmannedTraderSubClassInfoDefault2_wrapper(struct CUnmannedTraderSubClassInfoDefault* _this, unsigned int dwID)
        {
           CUnmannedTraderSubClassInfoDefaultctor_CUnmannedTraderSubClassInfoDefault2_user(_this, dwID, CUnmannedTraderSubClassInfoDefaultctor_CUnmannedTraderSubClassInfoDefault2_next);
        };
        struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassInfoDefaultCreate4_wrapper(struct CUnmannedTraderSubClassInfoDefault* _this, unsigned int dwID)
        {
           return CUnmannedTraderSubClassInfoDefaultCreate4_user(_this, dwID, CUnmannedTraderSubClassInfoDefaultCreate4_next);
        };
        bool CUnmannedTraderSubClassInfoDefaultGetGroupID6_wrapper(struct CUnmannedTraderSubClassInfoDefault* _this, char byTableCode, uint16_t wItemTableIndex, char* bySubClass)
        {
           return CUnmannedTraderSubClassInfoDefaultGetGroupID6_user(_this, byTableCode, wItemTableIndex, bySubClass, CUnmannedTraderSubClassInfoDefaultGetGroupID6_next);
        };
        bool CUnmannedTraderSubClassInfoDefaultLoadXML8_wrapper(struct CUnmannedTraderSubClassInfoDefault* _this, struct TiXmlElement* elemSubClass, struct CLogFile* kLogger, unsigned int dwDivisionID, unsigned int dwClassID)
        {
           return CUnmannedTraderSubClassInfoDefaultLoadXML8_user(_this, elemSubClass, kLogger, dwDivisionID, dwClassID, CUnmannedTraderSubClassInfoDefaultLoadXML8_next);
        };
        
        ::std::array<hook_record, 4> CUnmannedTraderSubClassInfoDefault_functions = 
        {
            _hook_record {
                (LPVOID)0x140383920L,
                (LPVOID *)&CUnmannedTraderSubClassInfoDefaultctor_CUnmannedTraderSubClassInfoDefault2_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoDefaultctor_CUnmannedTraderSubClassInfoDefault2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoDefaultctor_CUnmannedTraderSubClassInfoDefault2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassInfoDefault::*)(unsigned int))&CUnmannedTraderSubClassInfoDefault::ctor_CUnmannedTraderSubClassInfoDefault)
            },
            _hook_record {
                (LPVOID)0x140383a10L,
                (LPVOID *)&CUnmannedTraderSubClassInfoDefaultCreate4_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoDefaultCreate4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoDefaultCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderSubClassInfo*(CUnmannedTraderSubClassInfoDefault::*)(unsigned int))&CUnmannedTraderSubClassInfoDefault::Create)
            },
            _hook_record {
                (LPVOID)0x140383ae0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoDefaultGetGroupID6_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoDefaultGetGroupID6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoDefaultGetGroupID6_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSubClassInfoDefault::*)(char, uint16_t, char*))&CUnmannedTraderSubClassInfoDefault::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x1403839a0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoDefaultLoadXML8_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoDefaultLoadXML8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoDefaultLoadXML8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSubClassInfoDefault::*)(struct TiXmlElement*, struct CLogFile*, unsigned int, unsigned int))&CUnmannedTraderSubClassInfoDefault::LoadXML)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
