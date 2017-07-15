#include <CPostStorageDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CPostStorageAddNewPost2_ptr CPostStorageAddNewPost2_next(nullptr);
        Info::CPostStorageAddNewPost2_clbk CPostStorageAddNewPost2_user(nullptr);
        
        Info::CPostStorageAddPostTitleData4_ptr CPostStorageAddPostTitleData4_next(nullptr);
        Info::CPostStorageAddPostTitleData4_clbk CPostStorageAddPostTitleData4_user(nullptr);
        
        Info::CPostStorageAddPostTitleDataByStorageIndex6_ptr CPostStorageAddPostTitleDataByStorageIndex6_next(nullptr);
        Info::CPostStorageAddPostTitleDataByStorageIndex6_clbk CPostStorageAddPostTitleDataByStorageIndex6_user(nullptr);
        
        
        Info::CPostStoragector_CPostStorage8_ptr CPostStoragector_CPostStorage8_next(nullptr);
        Info::CPostStoragector_CPostStorage8_clbk CPostStoragector_CPostStorage8_user(nullptr);
        
        Info::CPostStorageDelPostData10_ptr CPostStorageDelPostData10_next(nullptr);
        Info::CPostStorageDelPostData10_clbk CPostStorageDelPostData10_user(nullptr);
        
        Info::CPostStorageGetPostDataFromInx12_ptr CPostStorageGetPostDataFromInx12_next(nullptr);
        Info::CPostStorageGetPostDataFromInx12_clbk CPostStorageGetPostDataFromInx12_user(nullptr);
        
        Info::CPostStorageGetPostDataFromSerial14_ptr CPostStorageGetPostDataFromSerial14_next(nullptr);
        Info::CPostStorageGetPostDataFromSerial14_clbk CPostStorageGetPostDataFromSerial14_user(nullptr);
        
        Info::CPostStorageGetSize16_ptr CPostStorageGetSize16_next(nullptr);
        Info::CPostStorageGetSize16_clbk CPostStorageGetSize16_user(nullptr);
        
        Info::CPostStorageInit18_ptr CPostStorageInit18_next(nullptr);
        Info::CPostStorageInit18_clbk CPostStorageInit18_user(nullptr);
        
        Info::CPostStorageIsContentLoad20_ptr CPostStorageIsContentLoad20_next(nullptr);
        Info::CPostStorageIsContentLoad20_clbk CPostStorageIsContentLoad20_user(nullptr);
        
        Info::CPostStorageSetPostContent22_ptr CPostStorageSetPostContent22_next(nullptr);
        Info::CPostStorageSetPostContent22_clbk CPostStorageSetPostContent22_user(nullptr);
        
        
        Info::CPostStoragedtor_CPostStorage24_ptr CPostStoragedtor_CPostStorage24_next(nullptr);
        Info::CPostStoragedtor_CPostStorage24_clbk CPostStoragedtor_CPostStorage24_user(nullptr);
        
        int CPostStorageAddNewPost2_wrapper(struct CPostStorage* _this, unsigned int dwSenderSerial, char* wszSendName, char* wszRecvName, char* wszTitle, char* wszContent, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, unsigned int dwPSSerial, char byState, int* nNumber, uint64_t lnUID)
        {
           return CPostStorageAddNewPost2_user(_this, dwSenderSerial, wszSendName, wszRecvName, wszTitle, wszContent, Key, dwDur, dwUpt, dwGold, dwPSSerial, byState, nNumber, lnUID, CPostStorageAddNewPost2_next);
        };
        int CPostStorageAddPostTitleData4_wrapper(struct CPostStorage* _this, int nIndex, unsigned int dwSerial, char byState, char* wszSendName, char* wszTitle, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, uint64_t lnUID)
        {
           return CPostStorageAddPostTitleData4_user(_this, nIndex, dwSerial, byState, wszSendName, wszTitle, Key, dwDur, dwUpt, dwGold, lnUID, CPostStorageAddPostTitleData4_next);
        };
        bool CPostStorageAddPostTitleDataByStorageIndex6_wrapper(struct CPostStorage* _this, int nStorageIndex, int nNumber, unsigned int dwSerial, char byState, char* wszSendName, char* wszTitle, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, uint64_t lnUID)
        {
           return CPostStorageAddPostTitleDataByStorageIndex6_user(_this, nStorageIndex, nNumber, dwSerial, byState, wszSendName, wszTitle, Key, dwDur, dwUpt, dwGold, lnUID, CPostStorageAddPostTitleDataByStorageIndex6_next);
        };
        
        void CPostStoragector_CPostStorage8_wrapper(struct CPostStorage* _this)
        {
           CPostStoragector_CPostStorage8_user(_this, CPostStoragector_CPostStorage8_next);
        };
        void CPostStorageDelPostData10_wrapper(struct CPostStorage* _this, unsigned int dwIndex)
        {
           CPostStorageDelPostData10_user(_this, dwIndex, CPostStorageDelPostData10_next);
        };
        struct CPostData* CPostStorageGetPostDataFromInx12_wrapper(struct CPostStorage* _this, int nIndex)
        {
           return CPostStorageGetPostDataFromInx12_user(_this, nIndex, CPostStorageGetPostDataFromInx12_next);
        };
        struct CPostData* CPostStorageGetPostDataFromSerial14_wrapper(struct CPostStorage* _this, unsigned int dwPostSerial)
        {
           return CPostStorageGetPostDataFromSerial14_user(_this, dwPostSerial, CPostStorageGetPostDataFromSerial14_next);
        };
        int CPostStorageGetSize16_wrapper(struct CPostStorage* _this)
        {
           return CPostStorageGetSize16_user(_this, CPostStorageGetSize16_next);
        };
        void CPostStorageInit18_wrapper(struct CPostStorage* _this)
        {
           CPostStorageInit18_user(_this, CPostStorageInit18_next);
        };
        bool CPostStorageIsContentLoad20_wrapper(struct CPostStorage* _this, unsigned int dwIndex)
        {
           return CPostStorageIsContentLoad20_user(_this, dwIndex, CPostStorageIsContentLoad20_next);
        };
        int CPostStorageSetPostContent22_wrapper(struct CPostStorage* _this, unsigned int dwSerial, char* wszContent)
        {
           return CPostStorageSetPostContent22_user(_this, dwSerial, wszContent, CPostStorageSetPostContent22_next);
        };
        
        void CPostStoragedtor_CPostStorage24_wrapper(struct CPostStorage* _this)
        {
           CPostStoragedtor_CPostStorage24_user(_this, CPostStoragedtor_CPostStorage24_next);
        };
        
        ::std::array<hook_record, 12> CPostStorage_functions = 
        {
            _hook_record {
                (LPVOID)0x140322fd0L,
                (LPVOID *)&CPostStorageAddNewPost2_user,
                (LPVOID *)&CPostStorageAddNewPost2_next,
                (LPVOID)cast_pointer_function(CPostStorageAddNewPost2_wrapper),
                (LPVOID)cast_pointer_function((int(CPostStorage::*)(unsigned int, char*, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, unsigned int, char, int*, uint64_t))&CPostStorage::AddNewPost)
            },
            _hook_record {
                (LPVOID)0x140323350L,
                (LPVOID *)&CPostStorageAddPostTitleData4_user,
                (LPVOID *)&CPostStorageAddPostTitleData4_next,
                (LPVOID)cast_pointer_function(CPostStorageAddPostTitleData4_wrapper),
                (LPVOID)cast_pointer_function((int(CPostStorage::*)(int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t))&CPostStorage::AddPostTitleData)
            },
            _hook_record {
                (LPVOID)0x140323200L,
                (LPVOID *)&CPostStorageAddPostTitleDataByStorageIndex6_user,
                (LPVOID *)&CPostStorageAddPostTitleDataByStorageIndex6_next,
                (LPVOID)cast_pointer_function(CPostStorageAddPostTitleDataByStorageIndex6_wrapper),
                (LPVOID)cast_pointer_function((bool(CPostStorage::*)(int, int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t))&CPostStorage::AddPostTitleDataByStorageIndex)
            },
            _hook_record {
                (LPVOID)0x140322e20L,
                (LPVOID *)&CPostStoragector_CPostStorage8_user,
                (LPVOID *)&CPostStoragector_CPostStorage8_next,
                (LPVOID)cast_pointer_function(CPostStoragector_CPostStorage8_wrapper),
                (LPVOID)cast_pointer_function((void(CPostStorage::*)())&CPostStorage::ctor_CPostStorage)
            },
            _hook_record {
                (LPVOID)0x1403236b0L,
                (LPVOID *)&CPostStorageDelPostData10_user,
                (LPVOID *)&CPostStorageDelPostData10_next,
                (LPVOID)cast_pointer_function(CPostStorageDelPostData10_wrapper),
                (LPVOID)cast_pointer_function((void(CPostStorage::*)(unsigned int))&CPostStorage::DelPostData)
            },
            _hook_record {
                (LPVOID)0x1403235c0L,
                (LPVOID *)&CPostStorageGetPostDataFromInx12_user,
                (LPVOID *)&CPostStorageGetPostDataFromInx12_next,
                (LPVOID)cast_pointer_function(CPostStorageGetPostDataFromInx12_wrapper),
                (LPVOID)cast_pointer_function((struct CPostData*(CPostStorage::*)(int))&CPostStorage::GetPostDataFromInx)
            },
            _hook_record {
                (LPVOID)0x140323620L,
                (LPVOID *)&CPostStorageGetPostDataFromSerial14_user,
                (LPVOID *)&CPostStorageGetPostDataFromSerial14_next,
                (LPVOID)cast_pointer_function(CPostStorageGetPostDataFromSerial14_wrapper),
                (LPVOID)cast_pointer_function((struct CPostData*(CPostStorage::*)(unsigned int))&CPostStorage::GetPostDataFromSerial)
            },
            _hook_record {
                (LPVOID)0x140322f20L,
                (LPVOID *)&CPostStorageGetSize16_user,
                (LPVOID *)&CPostStorageGetSize16_next,
                (LPVOID)cast_pointer_function(CPostStorageGetSize16_wrapper),
                (LPVOID)cast_pointer_function((int(CPostStorage::*)())&CPostStorage::GetSize)
            },
            _hook_record {
                (LPVOID)0x140322f40L,
                (LPVOID *)&CPostStorageInit18_user,
                (LPVOID *)&CPostStorageInit18_next,
                (LPVOID)cast_pointer_function(CPostStorageInit18_wrapper),
                (LPVOID)cast_pointer_function((void(CPostStorage::*)())&CPostStorage::Init)
            },
            _hook_record {
                (LPVOID)0x140323730L,
                (LPVOID *)&CPostStorageIsContentLoad20_user,
                (LPVOID *)&CPostStorageIsContentLoad20_next,
                (LPVOID)cast_pointer_function(CPostStorageIsContentLoad20_wrapper),
                (LPVOID)cast_pointer_function((bool(CPostStorage::*)(unsigned int))&CPostStorage::IsContentLoad)
            },
            _hook_record {
                (LPVOID)0x140323510L,
                (LPVOID *)&CPostStorageSetPostContent22_user,
                (LPVOID *)&CPostStorageSetPostContent22_next,
                (LPVOID)cast_pointer_function(CPostStorageSetPostContent22_wrapper),
                (LPVOID)cast_pointer_function((int(CPostStorage::*)(unsigned int, char*))&CPostStorage::SetPostContent)
            },
            _hook_record {
                (LPVOID)0x140322ed0L,
                (LPVOID *)&CPostStoragedtor_CPostStorage24_user,
                (LPVOID *)&CPostStoragedtor_CPostStorage24_next,
                (LPVOID)cast_pointer_function(CPostStoragedtor_CPostStorage24_wrapper),
                (LPVOID)cast_pointer_function((void(CPostStorage::*)())&CPostStorage::dtor_CPostStorage)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
