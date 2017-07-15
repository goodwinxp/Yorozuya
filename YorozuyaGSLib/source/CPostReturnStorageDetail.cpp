#include <CPostReturnStorageDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CPostReturnStorageAddReturnPost2_ptr CPostReturnStorageAddReturnPost2_next(nullptr);
        Info::CPostReturnStorageAddReturnPost2_clbk CPostReturnStorageAddReturnPost2_user(nullptr);
        
        
        Info::CPostReturnStoragector_CPostReturnStorage4_ptr CPostReturnStoragector_CPostReturnStorage4_next(nullptr);
        Info::CPostReturnStoragector_CPostReturnStorage4_clbk CPostReturnStoragector_CPostReturnStorage4_user(nullptr);
        
        Info::CPostReturnStorageDelPostData6_ptr CPostReturnStorageDelPostData6_next(nullptr);
        Info::CPostReturnStorageDelPostData6_clbk CPostReturnStorageDelPostData6_user(nullptr);
        
        Info::CPostReturnStorageGetPostDataFromInx8_ptr CPostReturnStorageGetPostDataFromInx8_next(nullptr);
        Info::CPostReturnStorageGetPostDataFromInx8_clbk CPostReturnStorageGetPostDataFromInx8_user(nullptr);
        
        Info::CPostReturnStorageGetPostDataFromSerial10_ptr CPostReturnStorageGetPostDataFromSerial10_next(nullptr);
        Info::CPostReturnStorageGetPostDataFromSerial10_clbk CPostReturnStorageGetPostDataFromSerial10_user(nullptr);
        
        Info::CPostReturnStorageGetReturnPostInx12_ptr CPostReturnStorageGetReturnPostInx12_next(nullptr);
        Info::CPostReturnStorageGetReturnPostInx12_clbk CPostReturnStorageGetReturnPostInx12_user(nullptr);
        
        Info::CPostReturnStorageGetSize14_ptr CPostReturnStorageGetSize14_next(nullptr);
        Info::CPostReturnStorageGetSize14_clbk CPostReturnStorageGetSize14_user(nullptr);
        
        Info::CPostReturnStorageInit16_ptr CPostReturnStorageInit16_next(nullptr);
        Info::CPostReturnStorageInit16_clbk CPostReturnStorageInit16_user(nullptr);
        
        
        Info::CPostReturnStoragedtor_CPostReturnStorage18_ptr CPostReturnStoragedtor_CPostReturnStorage18_next(nullptr);
        Info::CPostReturnStoragedtor_CPostReturnStorage18_clbk CPostReturnStoragedtor_CPostReturnStorage18_user(nullptr);
        
        struct CPostData* CPostReturnStorageAddReturnPost2_wrapper(struct CPostReturnStorage* _this, char byErrCode, unsigned int dwPostSerial, char byState, char* wszRecvName, char* wszTitle, char* wszContent, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, uint64_t lnUID)
        {
           return CPostReturnStorageAddReturnPost2_user(_this, byErrCode, dwPostSerial, byState, wszRecvName, wszTitle, wszContent, Key, dwDur, dwUpt, dwGold, lnUID, CPostReturnStorageAddReturnPost2_next);
        };
        
        void CPostReturnStoragector_CPostReturnStorage4_wrapper(struct CPostReturnStorage* _this)
        {
           CPostReturnStoragector_CPostReturnStorage4_user(_this, CPostReturnStoragector_CPostReturnStorage4_next);
        };
        void CPostReturnStorageDelPostData6_wrapper(struct CPostReturnStorage* _this, unsigned int dwPostSerial)
        {
           CPostReturnStorageDelPostData6_user(_this, dwPostSerial, CPostReturnStorageDelPostData6_next);
        };
        struct CPostData* CPostReturnStorageGetPostDataFromInx8_wrapper(struct CPostReturnStorage* _this, int nIndex)
        {
           return CPostReturnStorageGetPostDataFromInx8_user(_this, nIndex, CPostReturnStorageGetPostDataFromInx8_next);
        };
        struct CPostData* CPostReturnStorageGetPostDataFromSerial10_wrapper(struct CPostReturnStorage* _this, unsigned int dwPostSerial)
        {
           return CPostReturnStorageGetPostDataFromSerial10_user(_this, dwPostSerial, CPostReturnStorageGetPostDataFromSerial10_next);
        };
        int CPostReturnStorageGetReturnPostInx12_wrapper(struct CPostReturnStorage* _this)
        {
           return CPostReturnStorageGetReturnPostInx12_user(_this, CPostReturnStorageGetReturnPostInx12_next);
        };
        int CPostReturnStorageGetSize14_wrapper(struct CPostReturnStorage* _this)
        {
           return CPostReturnStorageGetSize14_user(_this, CPostReturnStorageGetSize14_next);
        };
        void CPostReturnStorageInit16_wrapper(struct CPostReturnStorage* _this)
        {
           CPostReturnStorageInit16_user(_this, CPostReturnStorageInit16_next);
        };
        
        void CPostReturnStoragedtor_CPostReturnStorage18_wrapper(struct CPostReturnStorage* _this)
        {
           CPostReturnStoragedtor_CPostReturnStorage18_user(_this, CPostReturnStoragedtor_CPostReturnStorage18_next);
        };
        
        ::std::array<hook_record, 9> CPostReturnStorage_functions = 
        {
            _hook_record {
                (LPVOID)0x1403238f0L,
                (LPVOID *)&CPostReturnStorageAddReturnPost2_user,
                (LPVOID *)&CPostReturnStorageAddReturnPost2_next,
                (LPVOID)cast_pointer_function(CPostReturnStorageAddReturnPost2_wrapper),
                (LPVOID)cast_pointer_function((struct CPostData*(CPostReturnStorage::*)(char, unsigned int, char, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t))&CPostReturnStorage::AddReturnPost)
            },
            _hook_record {
                (LPVOID)0x140323770L,
                (LPVOID *)&CPostReturnStoragector_CPostReturnStorage4_user,
                (LPVOID *)&CPostReturnStoragector_CPostReturnStorage4_next,
                (LPVOID)cast_pointer_function(CPostReturnStoragector_CPostReturnStorage4_wrapper),
                (LPVOID)cast_pointer_function((void(CPostReturnStorage::*)())&CPostReturnStorage::ctor_CPostReturnStorage)
            },
            _hook_record {
                (LPVOID)0x140323be0L,
                (LPVOID *)&CPostReturnStorageDelPostData6_user,
                (LPVOID *)&CPostReturnStorageDelPostData6_next,
                (LPVOID)cast_pointer_function(CPostReturnStorageDelPostData6_wrapper),
                (LPVOID)cast_pointer_function((void(CPostReturnStorage::*)(unsigned int))&CPostReturnStorage::DelPostData)
            },
            _hook_record {
                (LPVOID)0x140323b10L,
                (LPVOID *)&CPostReturnStorageGetPostDataFromInx8_user,
                (LPVOID *)&CPostReturnStorageGetPostDataFromInx8_next,
                (LPVOID)cast_pointer_function(CPostReturnStorageGetPostDataFromInx8_wrapper),
                (LPVOID)cast_pointer_function((struct CPostData*(CPostReturnStorage::*)(int))&CPostReturnStorage::GetPostDataFromInx)
            },
            _hook_record {
                (LPVOID)0x140323b50L,
                (LPVOID *)&CPostReturnStorageGetPostDataFromSerial10_user,
                (LPVOID *)&CPostReturnStorageGetPostDataFromSerial10_next,
                (LPVOID)cast_pointer_function(CPostReturnStorageGetPostDataFromSerial10_wrapper),
                (LPVOID)cast_pointer_function((struct CPostData*(CPostReturnStorage::*)(unsigned int))&CPostReturnStorage::GetPostDataFromSerial)
            },
            _hook_record {
                (LPVOID)0x140323a90L,
                (LPVOID *)&CPostReturnStorageGetReturnPostInx12_user,
                (LPVOID *)&CPostReturnStorageGetReturnPostInx12_next,
                (LPVOID)cast_pointer_function(CPostReturnStorageGetReturnPostInx12_wrapper),
                (LPVOID)cast_pointer_function((int(CPostReturnStorage::*)())&CPostReturnStorage::GetReturnPostInx)
            },
            _hook_record {
                (LPVOID)0x140323a70L,
                (LPVOID *)&CPostReturnStorageGetSize14_user,
                (LPVOID *)&CPostReturnStorageGetSize14_next,
                (LPVOID)cast_pointer_function(CPostReturnStorageGetSize14_wrapper),
                (LPVOID)cast_pointer_function((int(CPostReturnStorage::*)())&CPostReturnStorage::GetSize)
            },
            _hook_record {
                (LPVOID)0x140323870L,
                (LPVOID *)&CPostReturnStorageInit16_user,
                (LPVOID *)&CPostReturnStorageInit16_next,
                (LPVOID)cast_pointer_function(CPostReturnStorageInit16_wrapper),
                (LPVOID)cast_pointer_function((void(CPostReturnStorage::*)())&CPostReturnStorage::Init)
            },
            _hook_record {
                (LPVOID)0x140323820L,
                (LPVOID *)&CPostReturnStoragedtor_CPostReturnStorage18_user,
                (LPVOID *)&CPostReturnStoragedtor_CPostReturnStorage18_next,
                (LPVOID)cast_pointer_function(CPostReturnStoragedtor_CPostReturnStorage18_wrapper),
                (LPVOID)cast_pointer_function((void(CPostReturnStorage::*)())&CPostReturnStorage::dtor_CPostReturnStorage)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
