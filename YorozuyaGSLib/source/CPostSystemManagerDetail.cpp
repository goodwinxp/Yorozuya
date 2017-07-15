#include <CPostSystemManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CPostSystemManagerctor_CPostSystemManager2_ptr CPostSystemManagerctor_CPostSystemManager2_next(nullptr);
        Info::CPostSystemManagerctor_CPostSystemManager2_clbk CPostSystemManagerctor_CPostSystemManager2_user(nullptr);
        
        Info::CPostSystemManagerCheckRegister4_ptr CPostSystemManagerCheckRegister4_next(nullptr);
        Info::CPostSystemManagerCheckRegister4_clbk CPostSystemManagerCheckRegister4_user(nullptr);
        
        Info::CPostSystemManagerCompletePostReceiverCheck6_ptr CPostSystemManagerCompletePostReceiverCheck6_next(nullptr);
        Info::CPostSystemManagerCompletePostReceiverCheck6_clbk CPostSystemManagerCompletePostReceiverCheck6_user(nullptr);
        
        Info::CPostSystemManagerCompleteRegist8_ptr CPostSystemManagerCompleteRegist8_next(nullptr);
        Info::CPostSystemManagerCompleteRegist8_clbk CPostSystemManagerCompleteRegist8_user(nullptr);
        
        Info::CPostSystemManagerCompleteSend10_ptr CPostSystemManagerCompleteSend10_next(nullptr);
        Info::CPostSystemManagerCompleteSend10_clbk CPostSystemManagerCompleteSend10_user(nullptr);
        
        Info::CPostSystemManagerDestroy12_ptr CPostSystemManagerDestroy12_next(nullptr);
        Info::CPostSystemManagerDestroy12_clbk CPostSystemManagerDestroy12_user(nullptr);
        
        Info::CPostSystemManagerInit14_ptr CPostSystemManagerInit14_next(nullptr);
        Info::CPostSystemManagerInit14_clbk CPostSystemManagerInit14_user(nullptr);
        
        Info::CPostSystemManagerInitLogger16_ptr CPostSystemManagerInitLogger16_next(nullptr);
        Info::CPostSystemManagerInitLogger16_clbk CPostSystemManagerInitLogger16_user(nullptr);
        
        Info::CPostSystemManagerInsertDefaultPSRecord18_ptr CPostSystemManagerInsertDefaultPSRecord18_next(nullptr);
        Info::CPostSystemManagerInsertDefaultPSRecord18_clbk CPostSystemManagerInsertDefaultPSRecord18_user(nullptr);
        
        Info::CPostSystemManagerInstace20_ptr CPostSystemManagerInstace20_next(nullptr);
        Info::CPostSystemManagerInstace20_clbk CPostSystemManagerInstace20_user(nullptr);
        
        Info::CPostSystemManagerLoad22_ptr CPostSystemManagerLoad22_next(nullptr);
        Info::CPostSystemManagerLoad22_clbk CPostSystemManagerLoad22_user(nullptr);
        
        Info::CPostSystemManagerLog24_ptr CPostSystemManagerLog24_next(nullptr);
        Info::CPostSystemManagerLog24_clbk CPostSystemManagerLog24_user(nullptr);
        
        Info::CPostSystemManagerLog26_ptr CPostSystemManagerLog26_next(nullptr);
        Info::CPostSystemManagerLog26_clbk CPostSystemManagerLog26_user(nullptr);
        
        Info::CPostSystemManagerLoop28_ptr CPostSystemManagerLoop28_next(nullptr);
        Info::CPostSystemManagerLoop28_clbk CPostSystemManagerLoop28_user(nullptr);
        
        Info::CPostSystemManagerPostReceiverCheck30_ptr CPostSystemManagerPostReceiverCheck30_next(nullptr);
        Info::CPostSystemManagerPostReceiverCheck30_clbk CPostSystemManagerPostReceiverCheck30_user(nullptr);
        
        Info::CPostSystemManagerPostRegistryLoad32_ptr CPostSystemManagerPostRegistryLoad32_next(nullptr);
        Info::CPostSystemManagerPostRegistryLoad32_clbk CPostSystemManagerPostRegistryLoad32_user(nullptr);
        
        Info::CPostSystemManagerPostSend34_ptr CPostSystemManagerPostSend34_next(nullptr);
        Info::CPostSystemManagerPostSend34_clbk CPostSystemManagerPostSend34_user(nullptr);
        
        Info::CPostSystemManagerPostSendRequest36_ptr CPostSystemManagerPostSendRequest36_next(nullptr);
        Info::CPostSystemManagerPostSendRequest36_clbk CPostSystemManagerPostSendRequest36_user(nullptr);
        
        Info::CPostSystemManagerSetNextWriteTime38_ptr CPostSystemManagerSetNextWriteTime38_next(nullptr);
        Info::CPostSystemManagerSetNextWriteTime38_clbk CPostSystemManagerSetNextWriteTime38_user(nullptr);
        
        Info::CPostSystemManagerUpdateDisappearOwnerRecord40_ptr CPostSystemManagerUpdateDisappearOwnerRecord40_next(nullptr);
        Info::CPostSystemManagerUpdateDisappearOwnerRecord40_clbk CPostSystemManagerUpdateDisappearOwnerRecord40_user(nullptr);
        
        Info::CPostSystemManagerUpdateRegist42_ptr CPostSystemManagerUpdateRegist42_next(nullptr);
        Info::CPostSystemManagerUpdateRegist42_clbk CPostSystemManagerUpdateRegist42_user(nullptr);
        
        
        Info::CPostSystemManagerdtor_CPostSystemManager46_ptr CPostSystemManagerdtor_CPostSystemManager46_next(nullptr);
        Info::CPostSystemManagerdtor_CPostSystemManager46_clbk CPostSystemManagerdtor_CPostSystemManager46_user(nullptr);
        
        
        void CPostSystemManagerctor_CPostSystemManager2_wrapper(struct CPostSystemManager* _this)
        {
           CPostSystemManagerctor_CPostSystemManager2_user(_this, CPostSystemManagerctor_CPostSystemManager2_next);
        };
        char CPostSystemManagerCheckRegister4_wrapper(struct CPostSystemManager* _this, struct CPlayer* pOne, struct _STORAGE_POS_INDIV* pItemInfo, unsigned int dwGold, struct _STORAGE_LIST::_db_con** pItem)
        {
           return CPostSystemManagerCheckRegister4_user(_this, pOne, pItemInfo, dwGold, pItem, CPostSystemManagerCheckRegister4_next);
        };
        void CPostSystemManagerCompletePostReceiverCheck6_wrapper(struct CPostSystemManager* _this, char* pData)
        {
           CPostSystemManagerCompletePostReceiverCheck6_user(_this, pData, CPostSystemManagerCompletePostReceiverCheck6_next);
        };
        void CPostSystemManagerCompleteRegist8_wrapper(struct CPostSystemManager* _this, char* pData)
        {
           CPostSystemManagerCompleteRegist8_user(_this, pData, CPostSystemManagerCompleteRegist8_next);
        };
        void CPostSystemManagerCompleteSend10_wrapper(struct CPostSystemManager* _this, char* pData)
        {
           CPostSystemManagerCompleteSend10_user(_this, pData, CPostSystemManagerCompleteSend10_next);
        };
        void CPostSystemManagerDestroy12_wrapper()
        {
           CPostSystemManagerDestroy12_user(CPostSystemManagerDestroy12_next);
        };
        bool CPostSystemManagerInit14_wrapper(struct CPostSystemManager* _this)
        {
           return CPostSystemManagerInit14_user(_this, CPostSystemManagerInit14_next);
        };
        bool CPostSystemManagerInitLogger16_wrapper(struct CPostSystemManager* _this)
        {
           return CPostSystemManagerInitLogger16_user(_this, CPostSystemManagerInitLogger16_next);
        };
        bool CPostSystemManagerInsertDefaultPSRecord18_wrapper(struct CPostSystemManager* _this)
        {
           return CPostSystemManagerInsertDefaultPSRecord18_user(_this, CPostSystemManagerInsertDefaultPSRecord18_next);
        };
        struct CPostSystemManager* CPostSystemManagerInstace20_wrapper()
        {
           return CPostSystemManagerInstace20_user(CPostSystemManagerInstace20_next);
        };
        bool CPostSystemManagerLoad22_wrapper(struct CPostSystemManager* _this)
        {
           return CPostSystemManagerLoad22_user(_this, CPostSystemManagerLoad22_next);
        };
        void CPostSystemManagerLog24_wrapper(struct CPostSystemManager* _this, char* fmt)
        {
           CPostSystemManagerLog24_user(_this, fmt, CPostSystemManagerLog24_next);
        };
        void CPostSystemManagerLog26_wrapper(struct CPostSystemManager* _this, wchar_t* fmt)
        {
           CPostSystemManagerLog26_user(_this, fmt, CPostSystemManagerLog26_next);
        };
        void CPostSystemManagerLoop28_wrapper(struct CPostSystemManager* _this)
        {
           CPostSystemManagerLoop28_user(_this, CPostSystemManagerLoop28_next);
        };
        char CPostSystemManagerPostReceiverCheck30_wrapper(struct CPostSystemManager* _this, char* pData)
        {
           return CPostSystemManagerPostReceiverCheck30_user(_this, pData, CPostSystemManagerPostReceiverCheck30_next);
        };
        bool CPostSystemManagerPostRegistryLoad32_wrapper(struct CPostSystemManager* _this)
        {
           return CPostSystemManagerPostRegistryLoad32_user(_this, CPostSystemManagerPostRegistryLoad32_next);
        };
        char CPostSystemManagerPostSend34_wrapper(struct CPostSystemManager* _this, char* pData)
        {
           return CPostSystemManagerPostSend34_user(_this, pData, CPostSystemManagerPostSend34_next);
        };
        bool CPostSystemManagerPostSendRequest36_wrapper(struct CPostSystemManager* _this, struct CPlayer* pOne, char* wszRecvName, char* wszTitle, char* wszContent, struct _STORAGE_POS_INDIV* pItemInfo, unsigned int dwGold, char byRace)
        {
           return CPostSystemManagerPostSendRequest36_user(_this, pOne, wszRecvName, wszTitle, wszContent, pItemInfo, dwGold, byRace, CPostSystemManagerPostSendRequest36_next);
        };
        void CPostSystemManagerSetNextWriteTime38_wrapper(struct CPostSystemManager* _this)
        {
           CPostSystemManagerSetNextWriteTime38_user(_this, CPostSystemManagerSetNextWriteTime38_next);
        };
        bool CPostSystemManagerUpdateDisappearOwnerRecord40_wrapper(struct CPostSystemManager* _this)
        {
           return CPostSystemManagerUpdateDisappearOwnerRecord40_user(_this, CPostSystemManagerUpdateDisappearOwnerRecord40_next);
        };
        char CPostSystemManagerUpdateRegist42_wrapper(struct CPostSystemManager* _this, char* pData)
        {
           return CPostSystemManagerUpdateRegist42_user(_this, pData, CPostSystemManagerUpdateRegist42_next);
        };
        
        void CPostSystemManagerdtor_CPostSystemManager46_wrapper(struct CPostSystemManager* _this)
        {
           CPostSystemManagerdtor_CPostSystemManager46_user(_this, CPostSystemManagerdtor_CPostSystemManager46_next);
        };
        
        ::std::array<hook_record, 22> CPostSystemManager_functions = 
        {
            _hook_record {
                (LPVOID)0x140324080L,
                (LPVOID *)&CPostSystemManagerctor_CPostSystemManager2_user,
                (LPVOID *)&CPostSystemManagerctor_CPostSystemManager2_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerctor_CPostSystemManager2_wrapper),
                (LPVOID)cast_pointer_function((void(CPostSystemManager::*)())&CPostSystemManager::ctor_CPostSystemManager)
            },
            _hook_record {
                (LPVOID)0x140325a50L,
                (LPVOID *)&CPostSystemManagerCheckRegister4_user,
                (LPVOID *)&CPostSystemManagerCheckRegister4_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerCheckRegister4_wrapper),
                (LPVOID)cast_pointer_function((char(CPostSystemManager::*)(struct CPlayer*, struct _STORAGE_POS_INDIV*, unsigned int, struct _STORAGE_LIST::_db_con**))&CPostSystemManager::CheckRegister)
            },
            _hook_record {
                (LPVOID)0x1403267d0L,
                (LPVOID *)&CPostSystemManagerCompletePostReceiverCheck6_user,
                (LPVOID *)&CPostSystemManagerCompletePostReceiverCheck6_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerCompletePostReceiverCheck6_wrapper),
                (LPVOID)cast_pointer_function((void(CPostSystemManager::*)(char*))&CPostSystemManager::CompletePostReceiverCheck)
            },
            _hook_record {
                (LPVOID)0x140325db0L,
                (LPVOID *)&CPostSystemManagerCompleteRegist8_user,
                (LPVOID *)&CPostSystemManagerCompleteRegist8_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerCompleteRegist8_wrapper),
                (LPVOID)cast_pointer_function((void(CPostSystemManager::*)(char*))&CPostSystemManager::CompleteRegist)
            },
            _hook_record {
                (LPVOID)0x1403261a0L,
                (LPVOID *)&CPostSystemManagerCompleteSend10_user,
                (LPVOID *)&CPostSystemManagerCompleteSend10_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerCompleteSend10_wrapper),
                (LPVOID)cast_pointer_function((void(CPostSystemManager::*)(char*))&CPostSystemManager::CompleteSend)
            },
            _hook_record {
                (LPVOID)0x140326f00L,
                (LPVOID *)&CPostSystemManagerDestroy12_user,
                (LPVOID *)&CPostSystemManagerDestroy12_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerDestroy12_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CPostSystemManager::Destroy)
            },
            _hook_record {
                (LPVOID)0x140324430L,
                (LPVOID *)&CPostSystemManagerInit14_user,
                (LPVOID *)&CPostSystemManagerInit14_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerInit14_wrapper),
                (LPVOID)cast_pointer_function((bool(CPostSystemManager::*)())&CPostSystemManager::Init)
            },
            _hook_record {
                (LPVOID)0x1403245f0L,
                (LPVOID *)&CPostSystemManagerInitLogger16_user,
                (LPVOID *)&CPostSystemManagerInitLogger16_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerInitLogger16_wrapper),
                (LPVOID)cast_pointer_function((bool(CPostSystemManager::*)())&CPostSystemManager::InitLogger)
            },
            _hook_record {
                (LPVOID)0x140325190L,
                (LPVOID *)&CPostSystemManagerInsertDefaultPSRecord18_user,
                (LPVOID *)&CPostSystemManagerInsertDefaultPSRecord18_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerInsertDefaultPSRecord18_wrapper),
                (LPVOID)cast_pointer_function((bool(CPostSystemManager::*)())&CPostSystemManager::InsertDefaultPSRecord)
            },
            _hook_record {
                (LPVOID)0x140326e40L,
                (LPVOID *)&CPostSystemManagerInstace20_user,
                (LPVOID *)&CPostSystemManagerInstace20_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerInstace20_wrapper),
                (LPVOID)cast_pointer_function((struct CPostSystemManager*(*)())&CPostSystemManager::Instace)
            },
            _hook_record {
                (LPVOID)0x1403248a0L,
                (LPVOID *)&CPostSystemManagerLoad22_user,
                (LPVOID *)&CPostSystemManagerLoad22_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerLoad22_wrapper),
                (LPVOID)cast_pointer_function((bool(CPostSystemManager::*)())&CPostSystemManager::Load)
            },
            _hook_record {
                (LPVOID)0x140324780L,
                (LPVOID *)&CPostSystemManagerLog24_user,
                (LPVOID *)&CPostSystemManagerLog24_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerLog24_wrapper),
                (LPVOID)cast_pointer_function((void(CPostSystemManager::*)(char*))&CPostSystemManager::Log)
            },
            _hook_record {
                (LPVOID)0x140324810L,
                (LPVOID *)&CPostSystemManagerLog26_user,
                (LPVOID *)&CPostSystemManagerLog26_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerLog26_wrapper),
                (LPVOID)cast_pointer_function((void(CPostSystemManager::*)(wchar_t*))&CPostSystemManager::Log)
            },
            _hook_record {
                (LPVOID)0x140324910L,
                (LPVOID *)&CPostSystemManagerLoop28_user,
                (LPVOID *)&CPostSystemManagerLoop28_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerLoop28_wrapper),
                (LPVOID)cast_pointer_function((void(CPostSystemManager::*)())&CPostSystemManager::Loop)
            },
            _hook_record {
                (LPVOID)0x140326520L,
                (LPVOID *)&CPostSystemManagerPostReceiverCheck30_user,
                (LPVOID *)&CPostSystemManagerPostReceiverCheck30_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerPostReceiverCheck30_wrapper),
                (LPVOID)cast_pointer_function((char(CPostSystemManager::*)(char*))&CPostSystemManager::PostReceiverCheck)
            },
            _hook_record {
                (LPVOID)0x140324f30L,
                (LPVOID *)&CPostSystemManagerPostRegistryLoad32_user,
                (LPVOID *)&CPostSystemManagerPostRegistryLoad32_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerPostRegistryLoad32_wrapper),
                (LPVOID)cast_pointer_function((bool(CPostSystemManager::*)())&CPostSystemManager::PostRegistryLoad)
            },
            _hook_record {
                (LPVOID)0x140325ef0L,
                (LPVOID *)&CPostSystemManagerPostSend34_user,
                (LPVOID *)&CPostSystemManagerPostSend34_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerPostSend34_wrapper),
                (LPVOID)cast_pointer_function((char(CPostSystemManager::*)(char*))&CPostSystemManager::PostSend)
            },
            _hook_record {
                (LPVOID)0x1403252a0L,
                (LPVOID *)&CPostSystemManagerPostSendRequest36_user,
                (LPVOID *)&CPostSystemManagerPostSendRequest36_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerPostSendRequest36_wrapper),
                (LPVOID)cast_pointer_function((bool(CPostSystemManager::*)(struct CPlayer*, char*, char*, char*, struct _STORAGE_POS_INDIV*, unsigned int, char))&CPostSystemManager::PostSendRequest)
            },
            _hook_record {
                (LPVOID)0x140326f80L,
                (LPVOID *)&CPostSystemManagerSetNextWriteTime38_user,
                (LPVOID *)&CPostSystemManagerSetNextWriteTime38_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerSetNextWriteTime38_wrapper),
                (LPVOID)cast_pointer_function((void(CPostSystemManager::*)())&CPostSystemManager::SetNextWriteTime)
            },
            _hook_record {
                (LPVOID)0x140325240L,
                (LPVOID *)&CPostSystemManagerUpdateDisappearOwnerRecord40_user,
                (LPVOID *)&CPostSystemManagerUpdateDisappearOwnerRecord40_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerUpdateDisappearOwnerRecord40_wrapper),
                (LPVOID)cast_pointer_function((bool(CPostSystemManager::*)())&CPostSystemManager::UpdateDisappearOwnerRecord)
            },
            _hook_record {
                (LPVOID)0x140325c20L,
                (LPVOID *)&CPostSystemManagerUpdateRegist42_user,
                (LPVOID *)&CPostSystemManagerUpdateRegist42_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerUpdateRegist42_wrapper),
                (LPVOID)cast_pointer_function((char(CPostSystemManager::*)(char*))&CPostSystemManager::UpdateRegist)
            },
            _hook_record {
                (LPVOID)0x140324210L,
                (LPVOID *)&CPostSystemManagerdtor_CPostSystemManager46_user,
                (LPVOID *)&CPostSystemManagerdtor_CPostSystemManager46_next,
                (LPVOID)cast_pointer_function(CPostSystemManagerdtor_CPostSystemManager46_wrapper),
                (LPVOID)cast_pointer_function((void(CPostSystemManager::*)())&CPostSystemManager::dtor_CPostSystemManager)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
