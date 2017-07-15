#include <CMapItemStoreListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMapItemStoreListctor_CMapItemStoreList2_ptr CMapItemStoreListctor_CMapItemStoreList2_next(nullptr);
        Info::CMapItemStoreListctor_CMapItemStoreList2_clbk CMapItemStoreListctor_CMapItemStoreList2_user(nullptr);
        
        Info::CMapItemStoreListCopyItemStoreData4_ptr CMapItemStoreListCopyItemStoreData4_next(nullptr);
        Info::CMapItemStoreListCopyItemStoreData4_clbk CMapItemStoreListCopyItemStoreData4_user(nullptr);
        
        Info::CMapItemStoreListCreateStores6_ptr CMapItemStoreListCreateStores6_next(nullptr);
        Info::CMapItemStoreListCreateStores6_clbk CMapItemStoreListCreateStores6_user(nullptr);
        
        Info::CMapItemStoreListGetItemStoreFromRecIndex8_ptr CMapItemStoreListGetItemStoreFromRecIndex8_next(nullptr);
        Info::CMapItemStoreListGetItemStoreFromRecIndex8_clbk CMapItemStoreListGetItemStoreFromRecIndex8_user(nullptr);
        
        Info::CMapItemStoreListSetItemStores10_ptr CMapItemStoreListSetItemStores10_next(nullptr);
        Info::CMapItemStoreListSetItemStores10_clbk CMapItemStoreListSetItemStores10_user(nullptr);
        
        Info::CMapItemStoreListSetTypeNSerial12_ptr CMapItemStoreListSetTypeNSerial12_next(nullptr);
        Info::CMapItemStoreListSetTypeNSerial12_clbk CMapItemStoreListSetTypeNSerial12_user(nullptr);
        
        
        Info::CMapItemStoreListdtor_CMapItemStoreList16_ptr CMapItemStoreListdtor_CMapItemStoreList16_next(nullptr);
        Info::CMapItemStoreListdtor_CMapItemStoreList16_clbk CMapItemStoreListdtor_CMapItemStoreList16_user(nullptr);
        
        
        void CMapItemStoreListctor_CMapItemStoreList2_wrapper(struct CMapItemStoreList* _this)
        {
           CMapItemStoreListctor_CMapItemStoreList2_user(_this, CMapItemStoreListctor_CMapItemStoreList2_next);
        };
        bool CMapItemStoreListCopyItemStoreData4_wrapper(struct CMapItemStoreList* _this, struct CMapItemStoreList* pDest)
        {
           return CMapItemStoreListCopyItemStoreData4_user(_this, pDest, CMapItemStoreListCopyItemStoreData4_next);
        };
        bool CMapItemStoreListCreateStores6_wrapper(struct CMapItemStoreList* _this, struct CMapData* pMap)
        {
           return CMapItemStoreListCreateStores6_user(_this, pMap, CMapItemStoreListCreateStores6_next);
        };
        struct CItemStore* CMapItemStoreListGetItemStoreFromRecIndex8_wrapper(struct CMapItemStoreList* _this, unsigned int dwRecIndex)
        {
           return CMapItemStoreListGetItemStoreFromRecIndex8_user(_this, dwRecIndex, CMapItemStoreListGetItemStoreFromRecIndex8_next);
        };
        bool CMapItemStoreListSetItemStores10_wrapper(struct CMapItemStoreList* _this, struct CMapData* pMap)
        {
           return CMapItemStoreListSetItemStores10_user(_this, pMap, CMapItemStoreListSetItemStores10_next);
        };
        void CMapItemStoreListSetTypeNSerial12_wrapper(struct CMapItemStoreList* _this, char byType, int nSerial)
        {
           CMapItemStoreListSetTypeNSerial12_user(_this, byType, nSerial, CMapItemStoreListSetTypeNSerial12_next);
        };
        
        void CMapItemStoreListdtor_CMapItemStoreList16_wrapper(struct CMapItemStoreList* _this)
        {
           CMapItemStoreListdtor_CMapItemStoreList16_user(_this, CMapItemStoreListdtor_CMapItemStoreList16_next);
        };
        
        ::std::array<hook_record, 7> CMapItemStoreList_functions = 
        {
            _hook_record {
                (LPVOID)0x14034be20L,
                (LPVOID *)&CMapItemStoreListctor_CMapItemStoreList2_user,
                (LPVOID *)&CMapItemStoreListctor_CMapItemStoreList2_next,
                (LPVOID)cast_pointer_function(CMapItemStoreListctor_CMapItemStoreList2_wrapper),
                (LPVOID)cast_pointer_function((void(CMapItemStoreList::*)())&CMapItemStoreList::ctor_CMapItemStoreList)
            },
            _hook_record {
                (LPVOID)0x14034c210L,
                (LPVOID *)&CMapItemStoreListCopyItemStoreData4_user,
                (LPVOID *)&CMapItemStoreListCopyItemStoreData4_next,
                (LPVOID)cast_pointer_function(CMapItemStoreListCopyItemStoreData4_wrapper),
                (LPVOID)cast_pointer_function((bool(CMapItemStoreList::*)(struct CMapItemStoreList*))&CMapItemStoreList::CopyItemStoreData)
            },
            _hook_record {
                (LPVOID)0x14034bf40L,
                (LPVOID *)&CMapItemStoreListCreateStores6_user,
                (LPVOID *)&CMapItemStoreListCreateStores6_next,
                (LPVOID)cast_pointer_function(CMapItemStoreListCreateStores6_wrapper),
                (LPVOID)cast_pointer_function((bool(CMapItemStoreList::*)(struct CMapData*))&CMapItemStoreList::CreateStores)
            },
            _hook_record {
                (LPVOID)0x14034c0a0L,
                (LPVOID *)&CMapItemStoreListGetItemStoreFromRecIndex8_user,
                (LPVOID *)&CMapItemStoreListGetItemStoreFromRecIndex8_next,
                (LPVOID)cast_pointer_function(CMapItemStoreListGetItemStoreFromRecIndex8_wrapper),
                (LPVOID)cast_pointer_function((struct CItemStore*(CMapItemStoreList::*)(unsigned int))&CMapItemStoreList::GetItemStoreFromRecIndex)
            },
            _hook_record {
                (LPVOID)0x14034c130L,
                (LPVOID *)&CMapItemStoreListSetItemStores10_user,
                (LPVOID *)&CMapItemStoreListSetItemStores10_next,
                (LPVOID)cast_pointer_function(CMapItemStoreListSetItemStores10_wrapper),
                (LPVOID)cast_pointer_function((bool(CMapItemStoreList::*)(struct CMapData*))&CMapItemStoreList::SetItemStores)
            },
            _hook_record {
                (LPVOID)0x14034bf00L,
                (LPVOID *)&CMapItemStoreListSetTypeNSerial12_user,
                (LPVOID *)&CMapItemStoreListSetTypeNSerial12_next,
                (LPVOID)cast_pointer_function(CMapItemStoreListSetTypeNSerial12_wrapper),
                (LPVOID)cast_pointer_function((void(CMapItemStoreList::*)(char, int))&CMapItemStoreList::SetTypeNSerial)
            },
            _hook_record {
                (LPVOID)0x14034be70L,
                (LPVOID *)&CMapItemStoreListdtor_CMapItemStoreList16_user,
                (LPVOID *)&CMapItemStoreListdtor_CMapItemStoreList16_next,
                (LPVOID)cast_pointer_function(CMapItemStoreListdtor_CMapItemStoreList16_wrapper),
                (LPVOID)cast_pointer_function((void(CMapItemStoreList::*)())&CMapItemStoreList::dtor_CMapItemStoreList)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
