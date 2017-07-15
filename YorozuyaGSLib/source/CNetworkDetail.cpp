#include <CNetworkDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNetworkctor_CNetwork2_ptr CNetworkctor_CNetwork2_next(nullptr);
        Info::CNetworkctor_CNetwork2_clbk CNetworkctor_CNetwork2_user(nullptr);
        
        Info::CNetworkFreeDLL4_ptr CNetworkFreeDLL4_next(nullptr);
        Info::CNetworkFreeDLL4_clbk CNetworkFreeDLL4_user(nullptr);
        
        Info::CNetworkInitNetwork6_ptr CNetworkInitNetwork6_next(nullptr);
        Info::CNetworkInitNetwork6_clbk CNetworkInitNetwork6_user(nullptr);
        
        Info::CNetworkLoadDll8_ptr CNetworkLoadDll8_next(nullptr);
        Info::CNetworkLoadDll8_clbk CNetworkLoadDll8_user(nullptr);
        
        
        Info::CNetworkdtor_CNetwork13_ptr CNetworkdtor_CNetwork13_next(nullptr);
        Info::CNetworkdtor_CNetwork13_clbk CNetworkdtor_CNetwork13_user(nullptr);
        
        
        void CNetworkctor_CNetwork2_wrapper(struct CNetwork* _this)
        {
           CNetworkctor_CNetwork2_user(_this, CNetworkctor_CNetwork2_next);
        };
        void CNetworkFreeDLL4_wrapper(struct CNetwork* _this)
        {
           CNetworkFreeDLL4_user(_this, CNetworkFreeDLL4_next);
        };
        void CNetworkInitNetwork6_wrapper(struct CNetwork* _this)
        {
           CNetworkInitNetwork6_user(_this, CNetworkInitNetwork6_next);
        };
        bool CNetworkLoadDll8_wrapper(struct CNetwork* _this, char* dll_name)
        {
           return CNetworkLoadDll8_user(_this, dll_name, CNetworkLoadDll8_next);
        };
        
        void CNetworkdtor_CNetwork13_wrapper(struct CNetwork* _this)
        {
           CNetworkdtor_CNetwork13_user(_this, CNetworkdtor_CNetwork13_next);
        };
        
        ::std::array<hook_record, 5> CNetwork_functions = 
        {
            _hook_record {
                (LPVOID)0x140410a80L,
                (LPVOID *)&CNetworkctor_CNetwork2_user,
                (LPVOID *)&CNetworkctor_CNetwork2_next,
                (LPVOID)cast_pointer_function(CNetworkctor_CNetwork2_wrapper),
                (LPVOID)cast_pointer_function((void(CNetwork::*)())&CNetwork::ctor_CNetwork)
            },
            _hook_record {
                (LPVOID)0x140410eb0L,
                (LPVOID *)&CNetworkFreeDLL4_user,
                (LPVOID *)&CNetworkFreeDLL4_next,
                (LPVOID)cast_pointer_function(CNetworkFreeDLL4_wrapper),
                (LPVOID)cast_pointer_function((void(CNetwork::*)())&CNetwork::FreeDLL)
            },
            _hook_record {
                (LPVOID)0x140410f00L,
                (LPVOID *)&CNetworkInitNetwork6_user,
                (LPVOID *)&CNetworkInitNetwork6_next,
                (LPVOID)cast_pointer_function(CNetworkInitNetwork6_wrapper),
                (LPVOID)cast_pointer_function((void(CNetwork::*)())&CNetwork::InitNetwork)
            },
            _hook_record {
                (LPVOID)0x140410c60L,
                (LPVOID *)&CNetworkLoadDll8_user,
                (LPVOID *)&CNetworkLoadDll8_next,
                (LPVOID)cast_pointer_function(CNetworkLoadDll8_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetwork::*)(char*))&CNetwork::LoadDll)
            },
            _hook_record {
                (LPVOID)0x140410ab0L,
                (LPVOID *)&CNetworkdtor_CNetwork13_user,
                (LPVOID *)&CNetworkdtor_CNetwork13_next,
                (LPVOID)cast_pointer_function(CNetworkdtor_CNetwork13_wrapper),
                (LPVOID)cast_pointer_function((void(CNetwork::*)())&CNetwork::dtor_CNetwork)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
