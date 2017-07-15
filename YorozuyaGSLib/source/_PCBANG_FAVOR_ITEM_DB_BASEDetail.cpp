#include <_PCBANG_FAVOR_ITEM_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_PCBANG_FAVOR_ITEM_DB_BASEInit2_ptr _PCBANG_FAVOR_ITEM_DB_BASEInit2_next(nullptr);
        Info::_PCBANG_FAVOR_ITEM_DB_BASEInit2_clbk _PCBANG_FAVOR_ITEM_DB_BASEInit2_user(nullptr);
        
        Info::_PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_ptr _PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_next(nullptr);
        Info::_PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_clbk _PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_user(nullptr);
        
        Info::_PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_ptr _PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_next(nullptr);
        Info::_PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_clbk _PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_user(nullptr);
        
        void _PCBANG_FAVOR_ITEM_DB_BASEInit2_wrapper(struct _PCBANG_FAVOR_ITEM_DB_BASE* _this)
        {
           _PCBANG_FAVOR_ITEM_DB_BASEInit2_user(_this, _PCBANG_FAVOR_ITEM_DB_BASEInit2_next);
        };
        bool _PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_wrapper(struct _PCBANG_FAVOR_ITEM_DB_BASE* _this, struct _STORAGE_LIST::_db_con* Item)
        {
           return _PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_user(_this, Item, _PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_next);
        };
        bool _PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_wrapper(struct _PCBANG_FAVOR_ITEM_DB_BASE* _this, struct _STORAGE_LIST::_db_con* Item)
        {
           return _PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_user(_this, Item, _PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_next);
        };
        
        ::std::array<hook_record, 3> _PCBANG_FAVOR_ITEM_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140077df0L,
                (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEInit2_user,
                (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_PCBANG_FAVOR_ITEM_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_PCBANG_FAVOR_ITEM_DB_BASE::*)())&_PCBANG_FAVOR_ITEM_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x14040cb90L,
                (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_user,
                (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_next,
                (LPVOID)cast_pointer_function(_PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_wrapper),
                (LPVOID)cast_pointer_function((bool(_PCBANG_FAVOR_ITEM_DB_BASE::*)(struct _STORAGE_LIST::_db_con*))&_PCBANG_FAVOR_ITEM_DB_BASE::InsertItem)
            },
            _hook_record {
                (LPVOID)0x14040cc30L,
                (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_user,
                (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_next,
                (LPVOID)cast_pointer_function(_PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_wrapper),
                (LPVOID)cast_pointer_function((bool(_PCBANG_FAVOR_ITEM_DB_BASE::*)(struct _STORAGE_LIST::_db_con*))&_PCBANG_FAVOR_ITEM_DB_BASE::IsDeleteItem)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
