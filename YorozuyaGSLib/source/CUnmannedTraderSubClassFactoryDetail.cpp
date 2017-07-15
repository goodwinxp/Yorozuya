#include <CUnmannedTraderSubClassFactoryDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderSubClassFactoryctor_CUnmannedTraderSubClassFactory2_ptr CUnmannedTraderSubClassFactoryctor_CUnmannedTraderSubClassFactory2_next(nullptr);
        Info::CUnmannedTraderSubClassFactoryctor_CUnmannedTraderSubClassFactory2_clbk CUnmannedTraderSubClassFactoryctor_CUnmannedTraderSubClassFactory2_user(nullptr);
        
        Info::CUnmannedTraderSubClassFactoryCreate4_ptr CUnmannedTraderSubClassFactoryCreate4_next(nullptr);
        Info::CUnmannedTraderSubClassFactoryCreate4_clbk CUnmannedTraderSubClassFactoryCreate4_user(nullptr);
        
        Info::CUnmannedTraderSubClassFactoryDestroy6_ptr CUnmannedTraderSubClassFactoryDestroy6_next(nullptr);
        Info::CUnmannedTraderSubClassFactoryDestroy6_clbk CUnmannedTraderSubClassFactoryDestroy6_user(nullptr);
        
        Info::CUnmannedTraderSubClassFactoryRegist8_ptr CUnmannedTraderSubClassFactoryRegist8_next(nullptr);
        Info::CUnmannedTraderSubClassFactoryRegist8_clbk CUnmannedTraderSubClassFactoryRegist8_user(nullptr);
        
        
        Info::CUnmannedTraderSubClassFactorydtor_CUnmannedTraderSubClassFactory10_ptr CUnmannedTraderSubClassFactorydtor_CUnmannedTraderSubClassFactory10_next(nullptr);
        Info::CUnmannedTraderSubClassFactorydtor_CUnmannedTraderSubClassFactory10_clbk CUnmannedTraderSubClassFactorydtor_CUnmannedTraderSubClassFactory10_user(nullptr);
        
        
        void CUnmannedTraderSubClassFactoryctor_CUnmannedTraderSubClassFactory2_wrapper(struct CUnmannedTraderSubClassFactory* _this)
        {
           CUnmannedTraderSubClassFactoryctor_CUnmannedTraderSubClassFactory2_user(_this, CUnmannedTraderSubClassFactoryctor_CUnmannedTraderSubClassFactory2_next);
        };
        struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassFactoryCreate4_wrapper(struct CUnmannedTraderSubClassFactory* _this, char* szType, unsigned int dwID)
        {
           return CUnmannedTraderSubClassFactoryCreate4_user(_this, szType, dwID, CUnmannedTraderSubClassFactoryCreate4_next);
        };
        void CUnmannedTraderSubClassFactoryDestroy6_wrapper(struct CUnmannedTraderSubClassFactory* _this)
        {
           CUnmannedTraderSubClassFactoryDestroy6_user(_this, CUnmannedTraderSubClassFactoryDestroy6_next);
        };
        bool CUnmannedTraderSubClassFactoryRegist8_wrapper(struct CUnmannedTraderSubClassFactory* _this, struct CUnmannedTraderSubClassInfo* pkType)
        {
           return CUnmannedTraderSubClassFactoryRegist8_user(_this, pkType, CUnmannedTraderSubClassFactoryRegist8_next);
        };
        
        void CUnmannedTraderSubClassFactorydtor_CUnmannedTraderSubClassFactory10_wrapper(struct CUnmannedTraderSubClassFactory* _this)
        {
           CUnmannedTraderSubClassFactorydtor_CUnmannedTraderSubClassFactory10_user(_this, CUnmannedTraderSubClassFactorydtor_CUnmannedTraderSubClassFactory10_next);
        };
        
        ::std::array<hook_record, 5> CUnmannedTraderSubClassFactory_functions = 
        {
            _hook_record {
                (LPVOID)0x1403851a0L,
                (LPVOID *)&CUnmannedTraderSubClassFactoryctor_CUnmannedTraderSubClassFactory2_user,
                (LPVOID *)&CUnmannedTraderSubClassFactoryctor_CUnmannedTraderSubClassFactory2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassFactoryctor_CUnmannedTraderSubClassFactory2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassFactory::*)())&CUnmannedTraderSubClassFactory::ctor_CUnmannedTraderSubClassFactory)
            },
            _hook_record {
                (LPVOID)0x1403856f0L,
                (LPVOID *)&CUnmannedTraderSubClassFactoryCreate4_user,
                (LPVOID *)&CUnmannedTraderSubClassFactoryCreate4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassFactoryCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderSubClassInfo*(CUnmannedTraderSubClassFactory::*)(char*, unsigned int))&CUnmannedTraderSubClassFactory::Create)
            },
            _hook_record {
                (LPVOID)0x1403858e0L,
                (LPVOID *)&CUnmannedTraderSubClassFactoryDestroy6_user,
                (LPVOID *)&CUnmannedTraderSubClassFactoryDestroy6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassFactoryDestroy6_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassFactory::*)())&CUnmannedTraderSubClassFactory::Destroy)
            },
            _hook_record {
                (LPVOID)0x1403854c0L,
                (LPVOID *)&CUnmannedTraderSubClassFactoryRegist8_user,
                (LPVOID *)&CUnmannedTraderSubClassFactoryRegist8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassFactoryRegist8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSubClassFactory::*)(struct CUnmannedTraderSubClassInfo*))&CUnmannedTraderSubClassFactory::Regist)
            },
            _hook_record {
                (LPVOID)0x140385440L,
                (LPVOID *)&CUnmannedTraderSubClassFactorydtor_CUnmannedTraderSubClassFactory10_user,
                (LPVOID *)&CUnmannedTraderSubClassFactorydtor_CUnmannedTraderSubClassFactory10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSubClassFactorydtor_CUnmannedTraderSubClassFactory10_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSubClassFactory::*)())&CUnmannedTraderSubClassFactory::dtor_CUnmannedTraderSubClassFactory)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
