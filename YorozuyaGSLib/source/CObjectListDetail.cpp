#include <CObjectListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CObjectListctor_CObjectList2_ptr CObjectListctor_CObjectList2_next(nullptr);
        Info::CObjectListctor_CObjectList2_clbk CObjectListctor_CObjectList2_user(nullptr);
        
        Info::CObjectListCopyItem4_ptr CObjectListCopyItem4_next(nullptr);
        Info::CObjectListCopyItem4_clbk CObjectListCopyItem4_user(nullptr);
        
        Info::CObjectListDeleteItem6_ptr CObjectListDeleteItem6_next(nullptr);
        Info::CObjectListDeleteItem6_clbk CObjectListDeleteItem6_user(nullptr);
        
        Info::CObjectListGetSize8_ptr CObjectListGetSize8_next(nullptr);
        Info::CObjectListGetSize8_clbk CObjectListGetSize8_user(nullptr);
        
        Info::CObjectListInitList10_ptr CObjectListInitList10_next(nullptr);
        Info::CObjectListInitList10_clbk CObjectListInitList10_user(nullptr);
        
        Info::CObjectListPushItem12_ptr CObjectListPushItem12_next(nullptr);
        Info::CObjectListPushItem12_clbk CObjectListPushItem12_user(nullptr);
        
        
        Info::CObjectListdtor_CObjectList16_ptr CObjectListdtor_CObjectList16_next(nullptr);
        Info::CObjectListdtor_CObjectList16_clbk CObjectListdtor_CObjectList16_user(nullptr);
        
        
        void CObjectListctor_CObjectList2_wrapper(struct CObjectList* _this)
        {
           CObjectListctor_CObjectList2_user(_this, CObjectListctor_CObjectList2_next);
        };
        struct CGameObject* CObjectListCopyItem4_wrapper(struct CObjectList* _this, unsigned int dwIndex)
        {
           return CObjectListCopyItem4_user(_this, dwIndex, CObjectListCopyItem4_next);
        };
        bool CObjectListDeleteItem6_wrapper(struct CObjectList* _this, struct _object_list_point* pItem)
        {
           return CObjectListDeleteItem6_user(_this, pItem, CObjectListDeleteItem6_next);
        };
        int CObjectListGetSize8_wrapper(struct CObjectList* _this)
        {
           return CObjectListGetSize8_user(_this, CObjectListGetSize8_next);
        };
        void CObjectListInitList10_wrapper(struct CObjectList* _this)
        {
           CObjectListInitList10_user(_this, CObjectListInitList10_next);
        };
        bool CObjectListPushItem12_wrapper(struct CObjectList* _this, struct _object_list_point* pItem)
        {
           return CObjectListPushItem12_user(_this, pItem, CObjectListPushItem12_next);
        };
        
        void CObjectListdtor_CObjectList16_wrapper(struct CObjectList* _this)
        {
           CObjectListdtor_CObjectList16_user(_this, CObjectListdtor_CObjectList16_next);
        };
        
        ::std::array<hook_record, 7> CObjectList_functions = 
        {
            _hook_record {
                (LPVOID)0x140188d20L,
                (LPVOID *)&CObjectListctor_CObjectList2_user,
                (LPVOID *)&CObjectListctor_CObjectList2_next,
                (LPVOID)cast_pointer_function(CObjectListctor_CObjectList2_wrapper),
                (LPVOID)cast_pointer_function((void(CObjectList::*)())&CObjectList::ctor_CObjectList)
            },
            _hook_record {
                (LPVOID)0x14026f150L,
                (LPVOID *)&CObjectListCopyItem4_user,
                (LPVOID *)&CObjectListCopyItem4_next,
                (LPVOID)cast_pointer_function(CObjectListCopyItem4_wrapper),
                (LPVOID)cast_pointer_function((struct CGameObject*(CObjectList::*)(unsigned int))&CObjectList::CopyItem)
            },
            _hook_record {
                (LPVOID)0x140189d20L,
                (LPVOID *)&CObjectListDeleteItem6_user,
                (LPVOID *)&CObjectListDeleteItem6_next,
                (LPVOID)cast_pointer_function(CObjectListDeleteItem6_wrapper),
                (LPVOID)cast_pointer_function((bool(CObjectList::*)(struct _object_list_point*))&CObjectList::DeleteItem)
            },
            _hook_record {
                (LPVOID)0x14026f1e0L,
                (LPVOID *)&CObjectListGetSize8_user,
                (LPVOID *)&CObjectListGetSize8_next,
                (LPVOID)cast_pointer_function(CObjectListGetSize8_wrapper),
                (LPVOID)cast_pointer_function((int(CObjectList::*)())&CObjectList::GetSize)
            },
            _hook_record {
                (LPVOID)0x140188db0L,
                (LPVOID *)&CObjectListInitList10_user,
                (LPVOID *)&CObjectListInitList10_next,
                (LPVOID)cast_pointer_function(CObjectListInitList10_wrapper),
                (LPVOID)cast_pointer_function((void(CObjectList::*)())&CObjectList::InitList)
            },
            _hook_record {
                (LPVOID)0x140189c30L,
                (LPVOID *)&CObjectListPushItem12_user,
                (LPVOID *)&CObjectListPushItem12_next,
                (LPVOID)cast_pointer_function(CObjectListPushItem12_wrapper),
                (LPVOID)cast_pointer_function((bool(CObjectList::*)(struct _object_list_point*))&CObjectList::PushItem)
            },
            _hook_record {
                (LPVOID)0x140027b80L,
                (LPVOID *)&CObjectListdtor_CObjectList16_user,
                (LPVOID *)&CObjectListdtor_CObjectList16_next,
                (LPVOID)cast_pointer_function(CObjectListdtor_CObjectList16_wrapper),
                (LPVOID)cast_pointer_function((void(CObjectList::*)())&CObjectList::dtor_CObjectList)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
