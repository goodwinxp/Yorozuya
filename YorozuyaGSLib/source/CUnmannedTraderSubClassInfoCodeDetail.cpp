#include <CUnmannedTraderSubClassInfoCodeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderSubClassInfoCodector_CUnmannedTraderSubClassInfoCode2_ptr CUnmannedTraderSubClassInfoCodector_CUnmannedTraderSubClassInfoCode2_next(nullptr);
        Info::CUnmannedTraderSubClassInfoCodector_CUnmannedTraderSubClassInfoCode2_clbk CUnmannedTraderSubClassInfoCodector_CUnmannedTraderSubClassInfoCode2_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoCodeCreate4_ptr CUnmannedTraderSubClassInfoCodeCreate4_next(nullptr);
        Info::CUnmannedTraderSubClassInfoCodeCreate4_clbk CUnmannedTraderSubClassInfoCodeCreate4_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoCodeGetGroupID6_ptr CUnmannedTraderSubClassInfoCodeGetGroupID6_next(nullptr);
        Info::CUnmannedTraderSubClassInfoCodeGetGroupID6_clbk CUnmannedTraderSubClassInfoCodeGetGroupID6_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoCodeLoadXML8_ptr CUnmannedTraderSubClassInfoCodeLoadXML8_next(nullptr);
        Info::CUnmannedTraderSubClassInfoCodeLoadXML8_clbk CUnmannedTraderSubClassInfoCodeLoadXML8_user(nullptr);
        
        
        Info::CUnmannedTraderSubClassInfoCodedtor_CUnmannedTraderSubClassInfoCode12_ptr CUnmannedTraderSubClassInfoCodedtor_CUnmannedTraderSubClassInfoCode12_next(nullptr);
        Info::CUnmannedTraderSubClassInfoCodedtor_CUnmannedTraderSubClassInfoCode12_clbk CUnmannedTraderSubClassInfoCodedtor_CUnmannedTraderSubClassInfoCode12_user(nullptr);
        
        
        void CUnmannedTraderSubClassInfoCodector_CUnmannedTraderSubClassInfoCode2_wrapper(struct CUnmannedTraderSubClassInfoCode* _this, unsigned int dwID)
        {
           CUnmannedTraderSubClassInfoCodector_CUnmannedTraderSubClassInfoCode2_user(_this, dwID, CUnmannedTraderSubClassInfoCodector_CUnmannedTraderSubClassInfoCode2_next);
        };
        struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassInfoCodeCreate4_wrapper(struct CUnmannedTraderSubClassInfoCode* _this, unsigned int dwID)
        {
           return CUnmannedTraderSubClassInfoCodeCreate4_user(_this, dwID, CUnmannedTraderSubClassInfoCodeCreate4_next);
        };
        bool CUnmannedTraderSubClassInfoCodeGetGroupID6_wrapper(struct CUnmannedTraderSubClassInfoCode* _this, char byTableCode, uint16_t wItemTableIndex, char* bySubClass)
        {
           return CUnmannedTraderSubClassInfoCodeGetGroupID6_user(_this, byTableCode, wItemTableIndex, bySubClass, CUnmannedTraderSubClassInfoCodeGetGroupID6_next);
        };
        bool CUnmannedTraderSubClassInfoCodeLoadXML8_wrapper(struct CUnmannedTraderSubClassInfoCode* _this, struct TiXmlElement* elemSubClass, struct CLogFile* kLogger, unsigned int dwDivisionID, unsigned int dwClassID)
        {
           return CUnmannedTraderSubClassInfoCodeLoadXML8_user(_this, elemSubClass, kLogger, dwDivisionID, dwClassID, CUnmannedTraderSubClassInfoCodeLoadXML8_next);
        };
        
        void CUnmannedTraderSubClassInfoCodedtor_CUnmannedTraderSubClassInfoCode12_wrapper(struct CUnmannedTraderSubClassInfoCode* _this)
        {
           CUnmannedTraderSubClassInfoCodedtor_CUnmannedTraderSubClassInfoCode12_user(_this, CUnmannedTraderSubClassInfoCodedtor_CUnmannedTraderSubClassInfoCode12_next);
        };
        
        ::std::array<hook_record, 5> CUnmannedTraderSubClassInfoCode_functions = 
        {
            _hook_record {
                (LPVOID)0x140382e20L,
                (LPVOID *)&CUnmannedTraderSubClassInfoCodector_CUnmannedTraderSubClassInfoCode2_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoCodector_CUnmannedTraderSubClassInfoCode2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoCodector_CUnmannedTraderSubClassInfoCode2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassInfoCode::*)(unsigned int))&CUnmannedTraderSubClassInfoCode::ctor_CUnmannedTraderSubClassInfoCode)
            },
            _hook_record {
                (LPVOID)0x140383850L,
                (LPVOID *)&CUnmannedTraderSubClassInfoCodeCreate4_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoCodeCreate4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoCodeCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderSubClassInfo*(CUnmannedTraderSubClassInfoCode::*)(unsigned int))&CUnmannedTraderSubClassInfoCode::Create)
            },
            _hook_record {
                (LPVOID)0x140383430L,
                (LPVOID *)&CUnmannedTraderSubClassInfoCodeGetGroupID6_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoCodeGetGroupID6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoCodeGetGroupID6_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSubClassInfoCode::*)(char, uint16_t, char*))&CUnmannedTraderSubClassInfoCode::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x140383130L,
                (LPVOID *)&CUnmannedTraderSubClassInfoCodeLoadXML8_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoCodeLoadXML8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoCodeLoadXML8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSubClassInfoCode::*)(struct TiXmlElement*, struct CLogFile*, unsigned int, unsigned int))&CUnmannedTraderSubClassInfoCode::LoadXML)
            },
            _hook_record {
                (LPVOID)0x140382ee0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoCodedtor_CUnmannedTraderSubClassInfoCode12_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoCodedtor_CUnmannedTraderSubClassInfoCode12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoCodedtor_CUnmannedTraderSubClassInfoCode12_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassInfoCode::*)())&CUnmannedTraderSubClassInfoCode::dtor_CUnmannedTraderSubClassInfoCode)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
