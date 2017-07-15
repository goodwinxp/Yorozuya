#include <CTalkCrystalCombineManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CTalkCrystalCombineManagerctor_CTalkCrystalCombineManager2_ptr CTalkCrystalCombineManagerctor_CTalkCrystalCombineManager2_next(nullptr);
        Info::CTalkCrystalCombineManagerctor_CTalkCrystalCombineManager2_clbk CTalkCrystalCombineManagerctor_CTalkCrystalCombineManager2_user(nullptr);
        
        Info::CTalkCrystalCombineManagerCheckMixItem4_ptr CTalkCrystalCombineManagerCheckMixItem4_next(nullptr);
        Info::CTalkCrystalCombineManagerCheckMixItem4_clbk CTalkCrystalCombineManagerCheckMixItem4_user(nullptr);
        
        Info::CTalkCrystalCombineManagerCombinePreProcess6_ptr CTalkCrystalCombineManagerCombinePreProcess6_next(nullptr);
        Info::CTalkCrystalCombineManagerCombinePreProcess6_clbk CTalkCrystalCombineManagerCombinePreProcess6_user(nullptr);
        
        Info::CTalkCrystalCombineManagerCombineProcess8_ptr CTalkCrystalCombineManagerCombineProcess8_next(nullptr);
        Info::CTalkCrystalCombineManagerCombineProcess8_clbk CTalkCrystalCombineManagerCombineProcess8_user(nullptr);
        
        Info::CTalkCrystalCombineManagerDestory10_ptr CTalkCrystalCombineManagerDestory10_next(nullptr);
        Info::CTalkCrystalCombineManagerDestory10_clbk CTalkCrystalCombineManagerDestory10_user(nullptr);
        
        Info::CTalkCrystalCombineManagerDoit12_ptr CTalkCrystalCombineManagerDoit12_next(nullptr);
        Info::CTalkCrystalCombineManagerDoit12_clbk CTalkCrystalCombineManagerDoit12_user(nullptr);
        
        Info::CTalkCrystalCombineManagerGetMixNode14_ptr CTalkCrystalCombineManagerGetMixNode14_next(nullptr);
        Info::CTalkCrystalCombineManagerGetMixNode14_clbk CTalkCrystalCombineManagerGetMixNode14_user(nullptr);
        
        Info::CTalkCrystalCombineManagerInit16_ptr CTalkCrystalCombineManagerInit16_next(nullptr);
        Info::CTalkCrystalCombineManagerInit16_clbk CTalkCrystalCombineManagerInit16_user(nullptr);
        
        Info::CTalkCrystalCombineManagerInstance18_ptr CTalkCrystalCombineManagerInstance18_next(nullptr);
        Info::CTalkCrystalCombineManagerInstance18_clbk CTalkCrystalCombineManagerInstance18_user(nullptr);
        
        Info::CTalkCrystalCombineManagerMakeMixNode20_ptr CTalkCrystalCombineManagerMakeMixNode20_next(nullptr);
        Info::CTalkCrystalCombineManagerMakeMixNode20_clbk CTalkCrystalCombineManagerMakeMixNode20_user(nullptr);
        
        Info::CTalkCrystalCombineManagerPush22_ptr CTalkCrystalCombineManagerPush22_next(nullptr);
        Info::CTalkCrystalCombineManagerPush22_clbk CTalkCrystalCombineManagerPush22_user(nullptr);
        
        
        void CTalkCrystalCombineManagerctor_CTalkCrystalCombineManager2_wrapper(struct CTalkCrystalCombineManager* _this)
        {
           CTalkCrystalCombineManagerctor_CTalkCrystalCombineManager2_user(_this, CTalkCrystalCombineManagerctor_CTalkCrystalCombineManager2_next);
        };
        char CTalkCrystalCombineManagerCheckMixItem4_wrapper(struct CTalkCrystalCombineManager* _this, struct _STORAGE_LIST::_db_con* pItem, int* pMixIndex, char* pbyTableCode, uint16_t* pwItemIndex, int* pnNeedItemCount)
        {
           return CTalkCrystalCombineManagerCheckMixItem4_user(_this, pItem, pMixIndex, pbyTableCode, pwItemIndex, pnNeedItemCount, CTalkCrystalCombineManagerCheckMixItem4_next);
        };
        char CTalkCrystalCombineManagerCombinePreProcess6_wrapper(struct CTalkCrystalCombineManager* _this, struct CPlayer* pPlayer, char byExchangeNum, struct _talik_crystal_exchange_clzo::_list* pList)
        {
           return CTalkCrystalCombineManagerCombinePreProcess6_user(_this, pPlayer, byExchangeNum, pList, CTalkCrystalCombineManagerCombinePreProcess6_next);
        };
        char CTalkCrystalCombineManagerCombineProcess8_wrapper(struct CTalkCrystalCombineManager* _this)
        {
           return CTalkCrystalCombineManagerCombineProcess8_user(_this, CTalkCrystalCombineManagerCombineProcess8_next);
        };
        void CTalkCrystalCombineManagerDestory10_wrapper()
        {
           CTalkCrystalCombineManagerDestory10_user(CTalkCrystalCombineManagerDestory10_next);
        };
        bool CTalkCrystalCombineManagerDoit12_wrapper(struct CTalkCrystalCombineManager* _this, struct CPlayer* pPlayer, char byExchangeNum, struct _talik_crystal_exchange_clzo::_list* pList)
        {
           return CTalkCrystalCombineManagerDoit12_user(_this, pPlayer, byExchangeNum, pList, CTalkCrystalCombineManagerDoit12_next);
        };
        struct _talk_crystal_matrial_combine_node* CTalkCrystalCombineManagerGetMixNode14_wrapper(struct CTalkCrystalCombineManager* _this, int nMixIndex)
        {
           return CTalkCrystalCombineManagerGetMixNode14_user(_this, nMixIndex, CTalkCrystalCombineManagerGetMixNode14_next);
        };
        void CTalkCrystalCombineManagerInit16_wrapper(struct CTalkCrystalCombineManager* _this)
        {
           CTalkCrystalCombineManagerInit16_user(_this, CTalkCrystalCombineManagerInit16_next);
        };
        struct CTalkCrystalCombineManager* CTalkCrystalCombineManagerInstance18_wrapper()
        {
           return CTalkCrystalCombineManagerInstance18_user(CTalkCrystalCombineManagerInstance18_next);
        };
        struct _talk_crystal_matrial_combine_node* CTalkCrystalCombineManagerMakeMixNode20_wrapper(struct CTalkCrystalCombineManager* _this, int nMixIndex, int nNeedItemNum, char byTableCode, uint16_t wItemIndex)
        {
           return CTalkCrystalCombineManagerMakeMixNode20_user(_this, nMixIndex, nNeedItemNum, byTableCode, wItemIndex, CTalkCrystalCombineManagerMakeMixNode20_next);
        };
        char CTalkCrystalCombineManagerPush22_wrapper(struct CTalkCrystalCombineManager* _this, struct _STORAGE_LIST::_db_con* pItem, char byUseCount, char byClientIndex)
        {
           return CTalkCrystalCombineManagerPush22_user(_this, pItem, byUseCount, byClientIndex, CTalkCrystalCombineManagerPush22_next);
        };
        
        ::std::array<hook_record, 11> CTalkCrystalCombineManager_functions = 
        {
            _hook_record {
                (LPVOID)0x1404320b0L,
                (LPVOID *)&CTalkCrystalCombineManagerctor_CTalkCrystalCombineManager2_user,
                (LPVOID *)&CTalkCrystalCombineManagerctor_CTalkCrystalCombineManager2_next,
                (LPVOID)cast_pointer_function(CTalkCrystalCombineManagerctor_CTalkCrystalCombineManager2_wrapper),
                (LPVOID)cast_pointer_function((void(CTalkCrystalCombineManager::*)())&CTalkCrystalCombineManager::ctor_CTalkCrystalCombineManager)
            },
            _hook_record {
                (LPVOID)0x140431140L,
                (LPVOID *)&CTalkCrystalCombineManagerCheckMixItem4_user,
                (LPVOID *)&CTalkCrystalCombineManagerCheckMixItem4_next,
                (LPVOID)cast_pointer_function(CTalkCrystalCombineManagerCheckMixItem4_wrapper),
                (LPVOID)cast_pointer_function((char(CTalkCrystalCombineManager::*)(struct _STORAGE_LIST::_db_con*, int*, char*, uint16_t*, int*))&CTalkCrystalCombineManager::CheckMixItem)
            },
            _hook_record {
                (LPVOID)0x140430f40L,
                (LPVOID *)&CTalkCrystalCombineManagerCombinePreProcess6_user,
                (LPVOID *)&CTalkCrystalCombineManagerCombinePreProcess6_next,
                (LPVOID)cast_pointer_function(CTalkCrystalCombineManagerCombinePreProcess6_wrapper),
                (LPVOID)cast_pointer_function((char(CTalkCrystalCombineManager::*)(struct CPlayer*, char, struct _talik_crystal_exchange_clzo::_list*))&CTalkCrystalCombineManager::CombinePreProcess)
            },
            _hook_record {
                (LPVOID)0x140431450L,
                (LPVOID *)&CTalkCrystalCombineManagerCombineProcess8_user,
                (LPVOID *)&CTalkCrystalCombineManagerCombineProcess8_next,
                (LPVOID)cast_pointer_function(CTalkCrystalCombineManagerCombineProcess8_wrapper),
                (LPVOID)cast_pointer_function((char(CTalkCrystalCombineManager::*)())&CTalkCrystalCombineManager::CombineProcess)
            },
            _hook_record {
                (LPVOID)0x140430ce0L,
                (LPVOID *)&CTalkCrystalCombineManagerDestory10_user,
                (LPVOID *)&CTalkCrystalCombineManagerDestory10_next,
                (LPVOID)cast_pointer_function(CTalkCrystalCombineManagerDestory10_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CTalkCrystalCombineManager::Destory)
            },
            _hook_record {
                (LPVOID)0x1404315b0L,
                (LPVOID *)&CTalkCrystalCombineManagerDoit12_user,
                (LPVOID *)&CTalkCrystalCombineManagerDoit12_next,
                (LPVOID)cast_pointer_function(CTalkCrystalCombineManagerDoit12_wrapper),
                (LPVOID)cast_pointer_function((bool(CTalkCrystalCombineManager::*)(struct CPlayer*, char, struct _talik_crystal_exchange_clzo::_list*))&CTalkCrystalCombineManager::Doit)
            },
            _hook_record {
                (LPVOID)0x140430dc0L,
                (LPVOID *)&CTalkCrystalCombineManagerGetMixNode14_user,
                (LPVOID *)&CTalkCrystalCombineManagerGetMixNode14_next,
                (LPVOID)cast_pointer_function(CTalkCrystalCombineManagerGetMixNode14_wrapper),
                (LPVOID)cast_pointer_function((struct _talk_crystal_matrial_combine_node*(CTalkCrystalCombineManager::*)(int))&CTalkCrystalCombineManager::GetMixNode)
            },
            _hook_record {
                (LPVOID)0x140430d40L,
                (LPVOID *)&CTalkCrystalCombineManagerInit16_user,
                (LPVOID *)&CTalkCrystalCombineManagerInit16_next,
                (LPVOID)cast_pointer_function(CTalkCrystalCombineManagerInit16_wrapper),
                (LPVOID)cast_pointer_function((void(CTalkCrystalCombineManager::*)())&CTalkCrystalCombineManager::Init)
            },
            _hook_record {
                (LPVOID)0x140430c20L,
                (LPVOID *)&CTalkCrystalCombineManagerInstance18_user,
                (LPVOID *)&CTalkCrystalCombineManagerInstance18_next,
                (LPVOID)cast_pointer_function(CTalkCrystalCombineManagerInstance18_wrapper),
                (LPVOID)cast_pointer_function((struct CTalkCrystalCombineManager*(*)())&CTalkCrystalCombineManager::Instance)
            },
            _hook_record {
                (LPVOID)0x140430e60L,
                (LPVOID *)&CTalkCrystalCombineManagerMakeMixNode20_user,
                (LPVOID *)&CTalkCrystalCombineManagerMakeMixNode20_next,
                (LPVOID)cast_pointer_function(CTalkCrystalCombineManagerMakeMixNode20_wrapper),
                (LPVOID)cast_pointer_function((struct _talk_crystal_matrial_combine_node*(CTalkCrystalCombineManager::*)(int, int, char, uint16_t))&CTalkCrystalCombineManager::MakeMixNode)
            },
            _hook_record {
                (LPVOID)0x1404312e0L,
                (LPVOID *)&CTalkCrystalCombineManagerPush22_user,
                (LPVOID *)&CTalkCrystalCombineManagerPush22_next,
                (LPVOID)cast_pointer_function(CTalkCrystalCombineManagerPush22_wrapper),
                (LPVOID)cast_pointer_function((char(CTalkCrystalCombineManager::*)(struct _STORAGE_LIST::_db_con*, char, char))&CTalkCrystalCombineManager::Push)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
