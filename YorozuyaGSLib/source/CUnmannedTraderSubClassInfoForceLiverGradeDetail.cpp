#include <CUnmannedTraderSubClassInfoForceLiverGradeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade2_ptr CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade2_next(nullptr);
        Info::CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade2_clbk CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade2_user(nullptr);
        
        
        Info::CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade4_ptr CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade4_next(nullptr);
        Info::CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade4_clbk CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade4_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoForceLiverGradeCreate6_ptr CUnmannedTraderSubClassInfoForceLiverGradeCreate6_next(nullptr);
        Info::CUnmannedTraderSubClassInfoForceLiverGradeCreate6_clbk CUnmannedTraderSubClassInfoForceLiverGradeCreate6_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoForceLiverGradeGetGroupID8_ptr CUnmannedTraderSubClassInfoForceLiverGradeGetGroupID8_next(nullptr);
        Info::CUnmannedTraderSubClassInfoForceLiverGradeGetGroupID8_clbk CUnmannedTraderSubClassInfoForceLiverGradeGetGroupID8_user(nullptr);
        
        Info::CUnmannedTraderSubClassInfoForceLiverGradeLoadXML10_ptr CUnmannedTraderSubClassInfoForceLiverGradeLoadXML10_next(nullptr);
        Info::CUnmannedTraderSubClassInfoForceLiverGradeLoadXML10_clbk CUnmannedTraderSubClassInfoForceLiverGradeLoadXML10_user(nullptr);
        
        
        Info::CUnmannedTraderSubClassInfoForceLiverGradedtor_CUnmannedTraderSubClassInfoForceLiverGrade14_ptr CUnmannedTraderSubClassInfoForceLiverGradedtor_CUnmannedTraderSubClassInfoForceLiverGrade14_next(nullptr);
        Info::CUnmannedTraderSubClassInfoForceLiverGradedtor_CUnmannedTraderSubClassInfoForceLiverGrade14_clbk CUnmannedTraderSubClassInfoForceLiverGradedtor_CUnmannedTraderSubClassInfoForceLiverGrade14_user(nullptr);
        
        
        void CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade2_wrapper(struct CUnmannedTraderSubClassInfoForceLiverGrade* _this, struct CUnmannedTraderSubClassInfoForceLiverGrade* lhs)
        {
           CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade2_user(_this, lhs, CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade2_next);
        };
        
        void CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade4_wrapper(struct CUnmannedTraderSubClassInfoForceLiverGrade* _this, unsigned int dwID)
        {
           CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade4_user(_this, dwID, CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade4_next);
        };
        struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassInfoForceLiverGradeCreate6_wrapper(struct CUnmannedTraderSubClassInfoForceLiverGrade* _this, unsigned int dwID)
        {
           return CUnmannedTraderSubClassInfoForceLiverGradeCreate6_user(_this, dwID, CUnmannedTraderSubClassInfoForceLiverGradeCreate6_next);
        };
        bool CUnmannedTraderSubClassInfoForceLiverGradeGetGroupID8_wrapper(struct CUnmannedTraderSubClassInfoForceLiverGrade* _this, char byTableCode, uint16_t wItemTableIndex, char* bySubClass)
        {
           return CUnmannedTraderSubClassInfoForceLiverGradeGetGroupID8_user(_this, byTableCode, wItemTableIndex, bySubClass, CUnmannedTraderSubClassInfoForceLiverGradeGetGroupID8_next);
        };
        bool CUnmannedTraderSubClassInfoForceLiverGradeLoadXML10_wrapper(struct CUnmannedTraderSubClassInfoForceLiverGrade* _this, struct TiXmlElement* elemSubClass, struct CLogFile* kLogger, unsigned int dwDivisionID, unsigned int dwClassID)
        {
           return CUnmannedTraderSubClassInfoForceLiverGradeLoadXML10_user(_this, elemSubClass, kLogger, dwDivisionID, dwClassID, CUnmannedTraderSubClassInfoForceLiverGradeLoadXML10_next);
        };
        
        void CUnmannedTraderSubClassInfoForceLiverGradedtor_CUnmannedTraderSubClassInfoForceLiverGrade14_wrapper(struct CUnmannedTraderSubClassInfoForceLiverGrade* _this)
        {
           CUnmannedTraderSubClassInfoForceLiverGradedtor_CUnmannedTraderSubClassInfoForceLiverGrade14_user(_this, CUnmannedTraderSubClassInfoForceLiverGradedtor_CUnmannedTraderSubClassInfoForceLiverGrade14_next);
        };
        
        ::std::array<hook_record, 6> CUnmannedTraderSubClassInfoForceLiverGrade_functions = 
        {
            _hook_record {
                (LPVOID)0x140383bd0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade2_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassInfoForceLiverGrade::*)(struct CUnmannedTraderSubClassInfoForceLiverGrade*))&CUnmannedTraderSubClassInfoForceLiverGrade::ctor_CUnmannedTraderSubClassInfoForceLiverGrade)
            },
            _hook_record {
                (LPVOID)0x140383b50L,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade4_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoForceLiverGradector_CUnmannedTraderSubClassInfoForceLiverGrade4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassInfoForceLiverGrade::*)(unsigned int))&CUnmannedTraderSubClassInfoForceLiverGrade::ctor_CUnmannedTraderSubClassInfoForceLiverGrade)
            },
            _hook_record {
                (LPVOID)0x140383fa0L,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradeCreate6_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradeCreate6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoForceLiverGradeCreate6_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderSubClassInfo*(CUnmannedTraderSubClassInfoForceLiverGrade::*)(unsigned int))&CUnmannedTraderSubClassInfoForceLiverGrade::Create)
            },
            _hook_record {
                (LPVOID)0x140383e10L,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradeGetGroupID8_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradeGetGroupID8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoForceLiverGradeGetGroupID8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSubClassInfoForceLiverGrade::*)(char, uint16_t, char*))&CUnmannedTraderSubClassInfoForceLiverGrade::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x140383d40L,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradeLoadXML10_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradeLoadXML10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoForceLiverGradeLoadXML10_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSubClassInfoForceLiverGrade::*)(struct TiXmlElement*, struct CLogFile*, unsigned int, unsigned int))&CUnmannedTraderSubClassInfoForceLiverGrade::LoadXML)
            },
            _hook_record {
                (LPVOID)0x140383c90L,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradedtor_CUnmannedTraderSubClassInfoForceLiverGrade14_user,
                (LPVOID *)&CUnmannedTraderSubClassInfoForceLiverGradedtor_CUnmannedTraderSubClassInfoForceLiverGrade14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassInfoForceLiverGradedtor_CUnmannedTraderSubClassInfoForceLiverGrade14_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassInfoForceLiverGrade::*)())&CUnmannedTraderSubClassInfoForceLiverGrade::dtor_CUnmannedTraderSubClassInfoForceLiverGrade)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
