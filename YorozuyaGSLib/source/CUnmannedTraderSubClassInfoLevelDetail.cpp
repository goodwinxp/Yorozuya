#include <CUnmannedTraderSubClassInfoLevelDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderSubClassInfoLevelctor_CUnmannedTraderSubClassInfoLevel2_ptr CUnmannedTraderSubClassInfoLevelctor_CUnmannedTraderSubClassInfoLevel2_next(nullptr);
        Info::CUnmannedTraderSubClassInfoLevelctor_CUnmannedTraderSubClassInfoLevel2_clbk CUnmannedTraderSubClassInfoLevelctor_CUnmannedTraderSubClassInfoLevel2_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoLevelCreate4_ptr CUnmannedTraderSubClassInfoLevelCreate4_next(nullptr);
        Info::CUnmannedTraderSubClassInfoLevelCreate4_clbk CUnmannedTraderSubClassInfoLevelCreate4_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoLevelGetGroupID6_ptr CUnmannedTraderSubClassInfoLevelGetGroupID6_next(nullptr);
        Info::CUnmannedTraderSubClassInfoLevelGetGroupID6_clbk CUnmannedTraderSubClassInfoLevelGetGroupID6_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoLevelLoadXML8_ptr CUnmannedTraderSubClassInfoLevelLoadXML8_next(nullptr);
        Info::CUnmannedTraderSubClassInfoLevelLoadXML8_clbk CUnmannedTraderSubClassInfoLevelLoadXML8_user(nullptr);
        
        
        Info::CUnmannedTraderSubClassInfoLeveldtor_CUnmannedTraderSubClassInfoLevel12_ptr CUnmannedTraderSubClassInfoLeveldtor_CUnmannedTraderSubClassInfoLevel12_next(nullptr);
        Info::CUnmannedTraderSubClassInfoLeveldtor_CUnmannedTraderSubClassInfoLevel12_clbk CUnmannedTraderSubClassInfoLeveldtor_CUnmannedTraderSubClassInfoLevel12_user(nullptr);
        
        
        void CUnmannedTraderSubClassInfoLevelctor_CUnmannedTraderSubClassInfoLevel2_wrapper(struct CUnmannedTraderSubClassInfoLevel* _this, unsigned int dwID)
        {
           CUnmannedTraderSubClassInfoLevelctor_CUnmannedTraderSubClassInfoLevel2_user(_this, dwID, CUnmannedTraderSubClassInfoLevelctor_CUnmannedTraderSubClassInfoLevel2_next);
        };
        struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassInfoLevelCreate4_wrapper(struct CUnmannedTraderSubClassInfoLevel* _this, unsigned int dwID)
        {
           return CUnmannedTraderSubClassInfoLevelCreate4_user(_this, dwID, CUnmannedTraderSubClassInfoLevelCreate4_next);
        };
        bool CUnmannedTraderSubClassInfoLevelGetGroupID6_wrapper(struct CUnmannedTraderSubClassInfoLevel* _this, char byTableCode, uint16_t wItemTableIndex, char* bySubClass)
        {
           return CUnmannedTraderSubClassInfoLevelGetGroupID6_user(_this, byTableCode, wItemTableIndex, bySubClass, CUnmannedTraderSubClassInfoLevelGetGroupID6_next);
        };
        bool CUnmannedTraderSubClassInfoLevelLoadXML8_wrapper(struct CUnmannedTraderSubClassInfoLevel* _this, struct TiXmlElement* elemSubClass, struct CLogFile* kLogger, unsigned int dwDivisionID, unsigned int dwClassID)
        {
           return CUnmannedTraderSubClassInfoLevelLoadXML8_user(_this, elemSubClass, kLogger, dwDivisionID, dwClassID, CUnmannedTraderSubClassInfoLevelLoadXML8_next);
        };
        
        void CUnmannedTraderSubClassInfoLeveldtor_CUnmannedTraderSubClassInfoLevel12_wrapper(struct CUnmannedTraderSubClassInfoLevel* _this)
        {
           CUnmannedTraderSubClassInfoLeveldtor_CUnmannedTraderSubClassInfoLevel12_user(_this, CUnmannedTraderSubClassInfoLeveldtor_CUnmannedTraderSubClassInfoLevel12_next);
        };
        
        ::std::array<hook_record, 5> CUnmannedTraderSubClassInfoLevel_functions = 
        {
            _hook_record {
                (LPVOID)0x140384070L,
                (LPVOID *)&CUnmannedTraderSubClassInfoLevelctor_CUnmannedTraderSubClassInfoLevel2_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoLevelctor_CUnmannedTraderSubClassInfoLevel2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoLevelctor_CUnmannedTraderSubClassInfoLevel2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassInfoLevel::*)(unsigned int))&CUnmannedTraderSubClassInfoLevel::ctor_CUnmannedTraderSubClassInfoLevel)
            },
            _hook_record {
                (LPVOID)0x1403844f0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoLevelCreate4_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoLevelCreate4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoLevelCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderSubClassInfo*(CUnmannedTraderSubClassInfoLevel::*)(unsigned int))&CUnmannedTraderSubClassInfoLevel::Create)
            },
            _hook_record {
                (LPVOID)0x140384380L,
                (LPVOID *)&CUnmannedTraderSubClassInfoLevelGetGroupID6_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoLevelGetGroupID6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoLevelGetGroupID6_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSubClassInfoLevel::*)(char, uint16_t, char*))&CUnmannedTraderSubClassInfoLevel::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x1403841b0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoLevelLoadXML8_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoLevelLoadXML8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoLevelLoadXML8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSubClassInfoLevel::*)(struct TiXmlElement*, struct CLogFile*, unsigned int, unsigned int))&CUnmannedTraderSubClassInfoLevel::LoadXML)
            },
            _hook_record {
                (LPVOID)0x1403840f0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoLeveldtor_CUnmannedTraderSubClassInfoLevel12_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoLeveldtor_CUnmannedTraderSubClassInfoLevel12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoLeveldtor_CUnmannedTraderSubClassInfoLevel12_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassInfoLevel::*)())&CUnmannedTraderSubClassInfoLevel::dtor_CUnmannedTraderSubClassInfoLevel)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
