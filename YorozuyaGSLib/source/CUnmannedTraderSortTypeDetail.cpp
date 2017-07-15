#include <CUnmannedTraderSortTypeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderSortTypector_CUnmannedTraderSortType2_ptr CUnmannedTraderSortTypector_CUnmannedTraderSortType2_next(nullptr);
        Info::CUnmannedTraderSortTypector_CUnmannedTraderSortType2_clbk CUnmannedTraderSortTypector_CUnmannedTraderSortType2_user(nullptr);
        
        Info::CUnmannedTraderSortTypeGetID4_ptr CUnmannedTraderSortTypeGetID4_next(nullptr);
        Info::CUnmannedTraderSortTypeGetID4_clbk CUnmannedTraderSortTypeGetID4_user(nullptr);
        
        Info::CUnmannedTraderSortTypeGetQuery6_ptr CUnmannedTraderSortTypeGetQuery6_next(nullptr);
        Info::CUnmannedTraderSortTypeGetQuery6_clbk CUnmannedTraderSortTypeGetQuery6_user(nullptr);
        
        Info::CUnmannedTraderSortTypeLoadXML8_ptr CUnmannedTraderSortTypeLoadXML8_next(nullptr);
        Info::CUnmannedTraderSortTypeLoadXML8_clbk CUnmannedTraderSortTypeLoadXML8_user(nullptr);
        
        
        Info::CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_ptr CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_next(nullptr);
        Info::CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_clbk CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_user(nullptr);
        
        
        void CUnmannedTraderSortTypector_CUnmannedTraderSortType2_wrapper(struct CUnmannedTraderSortType* _this, unsigned int dwID)
        {
           CUnmannedTraderSortTypector_CUnmannedTraderSortType2_user(_this, dwID, CUnmannedTraderSortTypector_CUnmannedTraderSortType2_next);
        };
        unsigned int CUnmannedTraderSortTypeGetID4_wrapper(struct CUnmannedTraderSortType* _this)
        {
           return CUnmannedTraderSortTypeGetID4_user(_this, CUnmannedTraderSortTypeGetID4_next);
        };
        char* CUnmannedTraderSortTypeGetQuery6_wrapper(struct CUnmannedTraderSortType* _this)
        {
           return CUnmannedTraderSortTypeGetQuery6_user(_this, CUnmannedTraderSortTypeGetQuery6_next);
        };
        bool CUnmannedTraderSortTypeLoadXML8_wrapper(struct CUnmannedTraderSortType* _this, struct TiXmlElement* pkElemSortType, struct CLogFile* kLogger, unsigned int dwDivisionID)
        {
           return CUnmannedTraderSortTypeLoadXML8_user(_this, pkElemSortType, kLogger, dwDivisionID, CUnmannedTraderSortTypeLoadXML8_next);
        };
        
        void CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_wrapper(struct CUnmannedTraderSortType* _this)
        {
           CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_user(_this, CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_next);
        };
        
        ::std::array<hook_record, 5> CUnmannedTraderSortType_functions = 
        {
            _hook_record {
                (LPVOID)0x140376c90L,
                (LPVOID *)&CUnmannedTraderSortTypector_CUnmannedTraderSortType2_user,
                (LPVOID *)&CUnmannedTraderSortTypector_CUnmannedTraderSortType2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSortTypector_CUnmannedTraderSortType2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSortType::*)(unsigned int))&CUnmannedTraderSortType::ctor_CUnmannedTraderSortType)
            },
            _hook_record {
                (LPVOID)0x14036f280L,
                (LPVOID *)&CUnmannedTraderSortTypeGetID4_user,
                (LPVOID *)&CUnmannedTraderSortTypeGetID4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSortTypeGetID4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CUnmannedTraderSortType::*)())&CUnmannedTraderSortType::GetID)
            },
            _hook_record {
                (LPVOID)0x14035f6f0L,
                (LPVOID *)&CUnmannedTraderSortTypeGetQuery6_user,
                (LPVOID *)&CUnmannedTraderSortTypeGetQuery6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSortTypeGetQuery6_wrapper),
                (LPVOID)cast_pointer_function((char*(CUnmannedTraderSortType::*)())&CUnmannedTraderSortType::GetQuery)
            },
            _hook_record {
                (LPVOID)0x140376d20L,
                (LPVOID *)&CUnmannedTraderSortTypeLoadXML8_user,
                (LPVOID *)&CUnmannedTraderSortTypeLoadXML8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSortTypeLoadXML8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSortType::*)(struct TiXmlElement*, struct CLogFile*, unsigned int))&CUnmannedTraderSortType::LoadXML)
            },
            _hook_record {
                (LPVOID)0x140376d10L,
                (LPVOID *)&CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_user,
                (LPVOID *)&CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSortType::*)())&CUnmannedTraderSortType::dtor_CUnmannedTraderSortType)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
