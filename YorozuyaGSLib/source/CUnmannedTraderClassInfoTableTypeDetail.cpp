#include <CUnmannedTraderClassInfoTableTypeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderClassInfoTableTypector_CUnmannedTraderClassInfoTableType2_ptr CUnmannedTraderClassInfoTableTypector_CUnmannedTraderClassInfoTableType2_next(nullptr);
        Info::CUnmannedTraderClassInfoTableTypector_CUnmannedTraderClassInfoTableType2_clbk CUnmannedTraderClassInfoTableTypector_CUnmannedTraderClassInfoTableType2_user(nullptr);
        
        Info::CUnmannedTraderClassInfoTableTypeCleanUp4_ptr CUnmannedTraderClassInfoTableTypeCleanUp4_next(nullptr);
        Info::CUnmannedTraderClassInfoTableTypeCleanUp4_clbk CUnmannedTraderClassInfoTableTypeCleanUp4_user(nullptr);
        
        Info::CUnmannedTraderClassInfoTableTypeCreate6_ptr CUnmannedTraderClassInfoTableTypeCreate6_next(nullptr);
        Info::CUnmannedTraderClassInfoTableTypeCreate6_clbk CUnmannedTraderClassInfoTableTypeCreate6_user(nullptr);
        
        Info::CUnmannedTraderClassInfoTableTypeGetGroupID8_ptr CUnmannedTraderClassInfoTableTypeGetGroupID8_next(nullptr);
        Info::CUnmannedTraderClassInfoTableTypeGetGroupID8_clbk CUnmannedTraderClassInfoTableTypeGetGroupID8_user(nullptr);
        
        Info::CUnmannedTraderClassInfoTableTypeGetGroupID10_ptr CUnmannedTraderClassInfoTableTypeGetGroupID10_next(nullptr);
        Info::CUnmannedTraderClassInfoTableTypeGetGroupID10_clbk CUnmannedTraderClassInfoTableTypeGetGroupID10_user(nullptr);
        
        Info::CUnmannedTraderClassInfoTableTypeIsExistGroupID12_ptr CUnmannedTraderClassInfoTableTypeIsExistGroupID12_next(nullptr);
        Info::CUnmannedTraderClassInfoTableTypeIsExistGroupID12_clbk CUnmannedTraderClassInfoTableTypeIsExistGroupID12_user(nullptr);
        
        Info::CUnmannedTraderClassInfoTableTypeIsValidID14_ptr CUnmannedTraderClassInfoTableTypeIsValidID14_next(nullptr);
        Info::CUnmannedTraderClassInfoTableTypeIsValidID14_clbk CUnmannedTraderClassInfoTableTypeIsValidID14_user(nullptr);
        
        Info::CUnmannedTraderClassInfoTableTypeLoadXML16_ptr CUnmannedTraderClassInfoTableTypeLoadXML16_next(nullptr);
        Info::CUnmannedTraderClassInfoTableTypeLoadXML16_clbk CUnmannedTraderClassInfoTableTypeLoadXML16_user(nullptr);
        
        
        Info::CUnmannedTraderClassInfoTableTypedtor_CUnmannedTraderClassInfoTableType20_ptr CUnmannedTraderClassInfoTableTypedtor_CUnmannedTraderClassInfoTableType20_next(nullptr);
        Info::CUnmannedTraderClassInfoTableTypedtor_CUnmannedTraderClassInfoTableType20_clbk CUnmannedTraderClassInfoTableTypedtor_CUnmannedTraderClassInfoTableType20_user(nullptr);
        
        
        void CUnmannedTraderClassInfoTableTypector_CUnmannedTraderClassInfoTableType2_wrapper(struct CUnmannedTraderClassInfoTableType* _this, unsigned int dwID)
        {
           CUnmannedTraderClassInfoTableTypector_CUnmannedTraderClassInfoTableType2_user(_this, dwID, CUnmannedTraderClassInfoTableTypector_CUnmannedTraderClassInfoTableType2_next);
        };
        void CUnmannedTraderClassInfoTableTypeCleanUp4_wrapper(struct CUnmannedTraderClassInfoTableType* _this)
        {
           CUnmannedTraderClassInfoTableTypeCleanUp4_user(_this, CUnmannedTraderClassInfoTableTypeCleanUp4_next);
        };
        struct CUnmannedTraderClassInfo* CUnmannedTraderClassInfoTableTypeCreate6_wrapper(struct CUnmannedTraderClassInfoTableType* _this, unsigned int dwID)
        {
           return CUnmannedTraderClassInfoTableTypeCreate6_user(_this, dwID, CUnmannedTraderClassInfoTableTypeCreate6_next);
        };
        bool CUnmannedTraderClassInfoTableTypeGetGroupID8_wrapper(struct CUnmannedTraderClassInfoTableType* _this, char byTableCode, uint16_t wItemTableIndex, char* byClass)
        {
           return CUnmannedTraderClassInfoTableTypeGetGroupID8_user(_this, byTableCode, wItemTableIndex, byClass, CUnmannedTraderClassInfoTableTypeGetGroupID8_next);
        };
        bool CUnmannedTraderClassInfoTableTypeGetGroupID10_wrapper(struct CUnmannedTraderClassInfoTableType* _this, char byTableCode, uint16_t wItemTableIndex, char* byClass, char* bySubClass)
        {
           return CUnmannedTraderClassInfoTableTypeGetGroupID10_user(_this, byTableCode, wItemTableIndex, byClass, bySubClass, CUnmannedTraderClassInfoTableTypeGetGroupID10_next);
        };
        bool CUnmannedTraderClassInfoTableTypeIsExistGroupID12_wrapper(struct CUnmannedTraderClassInfoTableType* _this, char byClass, char bySubClass)
        {
           return CUnmannedTraderClassInfoTableTypeIsExistGroupID12_user(_this, byClass, bySubClass, CUnmannedTraderClassInfoTableTypeIsExistGroupID12_next);
        };
        bool CUnmannedTraderClassInfoTableTypeIsValidID14_wrapper(struct CUnmannedTraderClassInfoTableType* _this, unsigned int dwID)
        {
           return CUnmannedTraderClassInfoTableTypeIsValidID14_user(_this, dwID, CUnmannedTraderClassInfoTableTypeIsValidID14_next);
        };
        bool CUnmannedTraderClassInfoTableTypeLoadXML16_wrapper(struct CUnmannedTraderClassInfoTableType* _this, struct TiXmlElement* elemClass, struct CLogFile* kLogger, unsigned int dwDivisionID)
        {
           return CUnmannedTraderClassInfoTableTypeLoadXML16_user(_this, elemClass, kLogger, dwDivisionID, CUnmannedTraderClassInfoTableTypeLoadXML16_next);
        };
        
        void CUnmannedTraderClassInfoTableTypedtor_CUnmannedTraderClassInfoTableType20_wrapper(struct CUnmannedTraderClassInfoTableType* _this)
        {
           CUnmannedTraderClassInfoTableTypedtor_CUnmannedTraderClassInfoTableType20_user(_this, CUnmannedTraderClassInfoTableTypedtor_CUnmannedTraderClassInfoTableType20_next);
        };
        
        ::std::array<hook_record, 9> CUnmannedTraderClassInfoTableType_functions = 
        {
            _hook_record {
                (LPVOID)0x14037cc10L,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypector_CUnmannedTraderClassInfoTableType2_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypector_CUnmannedTraderClassInfoTableType2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableTypector_CUnmannedTraderClassInfoTableType2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderClassInfoTableType::*)(unsigned int))&CUnmannedTraderClassInfoTableType::ctor_CUnmannedTraderClassInfoTableType)
            },
            _hook_record {
                (LPVOID)0x14037d900L,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeCleanUp4_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeCleanUp4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableTypeCleanUp4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderClassInfoTableType::*)())&CUnmannedTraderClassInfoTableType::CleanUp)
            },
            _hook_record {
                (LPVOID)0x14037dfd0L,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeCreate6_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeCreate6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableTypeCreate6_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderClassInfo*(CUnmannedTraderClassInfoTableType::*)(unsigned int))&CUnmannedTraderClassInfoTableType::Create)
            },
            _hook_record {
                (LPVOID)0x14037d2b0L,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeGetGroupID8_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeGetGroupID8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableTypeGetGroupID8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderClassInfoTableType::*)(char, uint16_t, char*))&CUnmannedTraderClassInfoTableType::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x14037d4d0L,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeGetGroupID10_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeGetGroupID10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableTypeGetGroupID10_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderClassInfoTableType::*)(char, uint16_t, char*, char*))&CUnmannedTraderClassInfoTableType::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x14037d300L,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeIsExistGroupID12_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeIsExistGroupID12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableTypeIsExistGroupID12_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderClassInfoTableType::*)(char, char))&CUnmannedTraderClassInfoTableType::IsExistGroupID)
            },
            _hook_record {
                (LPVOID)0x14037da00L,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeIsValidID14_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeIsValidID14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableTypeIsValidID14_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderClassInfoTableType::*)(unsigned int))&CUnmannedTraderClassInfoTableType::IsValidID)
            },
            _hook_record {
                (LPVOID)0x14037cdb0L,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeLoadXML16_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypeLoadXML16_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableTypeLoadXML16_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderClassInfoTableType::*)(struct TiXmlElement*, struct CLogFile*, unsigned int))&CUnmannedTraderClassInfoTableType::LoadXML)
            },
            _hook_record {
                (LPVOID)0x14037cce0L,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypedtor_CUnmannedTraderClassInfoTableType20_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableTypedtor_CUnmannedTraderClassInfoTableType20_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableTypedtor_CUnmannedTraderClassInfoTableType20_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderClassInfoTableType::*)())&CUnmannedTraderClassInfoTableType::dtor_CUnmannedTraderClassInfoTableType)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
