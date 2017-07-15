#include <CUnmannedTraderClassInfoFactoryDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderClassInfoFactoryctor_CUnmannedTraderClassInfoFactory2_ptr CUnmannedTraderClassInfoFactoryctor_CUnmannedTraderClassInfoFactory2_next(nullptr);
        Info::CUnmannedTraderClassInfoFactoryctor_CUnmannedTraderClassInfoFactory2_clbk CUnmannedTraderClassInfoFactoryctor_CUnmannedTraderClassInfoFactory2_user(nullptr);
        
        Info::CUnmannedTraderClassInfoFactoryCreate4_ptr CUnmannedTraderClassInfoFactoryCreate4_next(nullptr);
        Info::CUnmannedTraderClassInfoFactoryCreate4_clbk CUnmannedTraderClassInfoFactoryCreate4_user(nullptr);
        
        Info::CUnmannedTraderClassInfoFactoryDestroy6_ptr CUnmannedTraderClassInfoFactoryDestroy6_next(nullptr);
        Info::CUnmannedTraderClassInfoFactoryDestroy6_clbk CUnmannedTraderClassInfoFactoryDestroy6_user(nullptr);
        
        Info::CUnmannedTraderClassInfoFactoryRegist8_ptr CUnmannedTraderClassInfoFactoryRegist8_next(nullptr);
        Info::CUnmannedTraderClassInfoFactoryRegist8_clbk CUnmannedTraderClassInfoFactoryRegist8_user(nullptr);
        
        
        Info::CUnmannedTraderClassInfoFactorydtor_CUnmannedTraderClassInfoFactory10_ptr CUnmannedTraderClassInfoFactorydtor_CUnmannedTraderClassInfoFactory10_next(nullptr);
        Info::CUnmannedTraderClassInfoFactorydtor_CUnmannedTraderClassInfoFactory10_clbk CUnmannedTraderClassInfoFactorydtor_CUnmannedTraderClassInfoFactory10_user(nullptr);
        
        
        void CUnmannedTraderClassInfoFactoryctor_CUnmannedTraderClassInfoFactory2_wrapper(struct CUnmannedTraderClassInfoFactory* _this)
        {
           CUnmannedTraderClassInfoFactoryctor_CUnmannedTraderClassInfoFactory2_user(_this, CUnmannedTraderClassInfoFactoryctor_CUnmannedTraderClassInfoFactory2_next);
        };
        struct CUnmannedTraderClassInfo* CUnmannedTraderClassInfoFactoryCreate4_wrapper(struct CUnmannedTraderClassInfoFactory* _this, char* szType, unsigned int dwID)
        {
           return CUnmannedTraderClassInfoFactoryCreate4_user(_this, szType, dwID, CUnmannedTraderClassInfoFactoryCreate4_next);
        };
        void CUnmannedTraderClassInfoFactoryDestroy6_wrapper(struct CUnmannedTraderClassInfoFactory* _this)
        {
           CUnmannedTraderClassInfoFactoryDestroy6_user(_this, CUnmannedTraderClassInfoFactoryDestroy6_next);
        };
        bool CUnmannedTraderClassInfoFactoryRegist8_wrapper(struct CUnmannedTraderClassInfoFactory* _this, struct CUnmannedTraderClassInfo* pkType)
        {
           return CUnmannedTraderClassInfoFactoryRegist8_user(_this, pkType, CUnmannedTraderClassInfoFactoryRegist8_next);
        };
        
        void CUnmannedTraderClassInfoFactorydtor_CUnmannedTraderClassInfoFactory10_wrapper(struct CUnmannedTraderClassInfoFactory* _this)
        {
           CUnmannedTraderClassInfoFactorydtor_CUnmannedTraderClassInfoFactory10_user(_this, CUnmannedTraderClassInfoFactorydtor_CUnmannedTraderClassInfoFactory10_next);
        };
        
        ::std::array<hook_record, 5> CUnmannedTraderClassInfoFactory_functions = 
        {
            _hook_record {
                (LPVOID)0x1403847e0L,
                (LPVOID *)&CUnmannedTraderClassInfoFactoryctor_CUnmannedTraderClassInfoFactory2_user,
                (LPVOID *)&CUnmannedTraderClassInfoFactoryctor_CUnmannedTraderClassInfoFactory2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoFactoryctor_CUnmannedTraderClassInfoFactory2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderClassInfoFactory::*)())&CUnmannedTraderClassInfoFactory::ctor_CUnmannedTraderClassInfoFactory)
            },
            _hook_record {
                (LPVOID)0x140384c10L,
                (LPVOID *)&CUnmannedTraderClassInfoFactoryCreate4_user,
                (LPVOID *)&CUnmannedTraderClassInfoFactoryCreate4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoFactoryCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderClassInfo*(CUnmannedTraderClassInfoFactory::*)(char*, unsigned int))&CUnmannedTraderClassInfoFactory::Create)
            },
            _hook_record {
                (LPVOID)0x140384e00L,
                (LPVOID *)&CUnmannedTraderClassInfoFactoryDestroy6_user,
                (LPVOID *)&CUnmannedTraderClassInfoFactoryDestroy6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoFactoryDestroy6_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderClassInfoFactory::*)())&CUnmannedTraderClassInfoFactory::Destroy)
            },
            _hook_record {
                (LPVOID)0x1403849e0L,
                (LPVOID *)&CUnmannedTraderClassInfoFactoryRegist8_user,
                (LPVOID *)&CUnmannedTraderClassInfoFactoryRegist8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoFactoryRegist8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderClassInfoFactory::*)(struct CUnmannedTraderClassInfo*))&CUnmannedTraderClassInfoFactory::Regist)
            },
            _hook_record {
                (LPVOID)0x140384960L,
                (LPVOID *)&CUnmannedTraderClassInfoFactorydtor_CUnmannedTraderClassInfoFactory10_user,
                (LPVOID *)&CUnmannedTraderClassInfoFactorydtor_CUnmannedTraderClassInfoFactory10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoFactorydtor_CUnmannedTraderClassInfoFactory10_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderClassInfoFactory::*)())&CUnmannedTraderClassInfoFactory::dtor_CUnmannedTraderClassInfoFactory)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
