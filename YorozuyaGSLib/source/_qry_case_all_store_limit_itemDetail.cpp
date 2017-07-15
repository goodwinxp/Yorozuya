#include <_qry_case_all_store_limit_itemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_all_store_limit_itemDataInit2_ptr _qry_case_all_store_limit_itemDataInit2_next(nullptr);
        Info::_qry_case_all_store_limit_itemDataInit2_clbk _qry_case_all_store_limit_itemDataInit2_user(nullptr);
        
        Info::_qry_case_all_store_limit_itemInit4_ptr _qry_case_all_store_limit_itemInit4_next(nullptr);
        Info::_qry_case_all_store_limit_itemInit4_clbk _qry_case_all_store_limit_itemInit4_user(nullptr);
        
        
        Info::_qry_case_all_store_limit_itemctor__qry_case_all_store_limit_item6_ptr _qry_case_all_store_limit_itemctor__qry_case_all_store_limit_item6_next(nullptr);
        Info::_qry_case_all_store_limit_itemctor__qry_case_all_store_limit_item6_clbk _qry_case_all_store_limit_itemctor__qry_case_all_store_limit_item6_user(nullptr);
        
        
        Info::_qry_case_all_store_limit_itemdtor__qry_case_all_store_limit_item8_ptr _qry_case_all_store_limit_itemdtor__qry_case_all_store_limit_item8_next(nullptr);
        Info::_qry_case_all_store_limit_itemdtor__qry_case_all_store_limit_item8_clbk _qry_case_all_store_limit_itemdtor__qry_case_all_store_limit_item8_user(nullptr);
        
        void _qry_case_all_store_limit_itemDataInit2_wrapper(struct _qry_case_all_store_limit_item* _this)
        {
           _qry_case_all_store_limit_itemDataInit2_user(_this, _qry_case_all_store_limit_itemDataInit2_next);
        };
        bool _qry_case_all_store_limit_itemInit4_wrapper(struct _qry_case_all_store_limit_item* _this, unsigned int dwStoreNum)
        {
           return _qry_case_all_store_limit_itemInit4_user(_this, dwStoreNum, _qry_case_all_store_limit_itemInit4_next);
        };
        
        void _qry_case_all_store_limit_itemctor__qry_case_all_store_limit_item6_wrapper(struct _qry_case_all_store_limit_item* _this)
        {
           _qry_case_all_store_limit_itemctor__qry_case_all_store_limit_item6_user(_this, _qry_case_all_store_limit_itemctor__qry_case_all_store_limit_item6_next);
        };
        
        void _qry_case_all_store_limit_itemdtor__qry_case_all_store_limit_item8_wrapper(struct _qry_case_all_store_limit_item* _this)
        {
           _qry_case_all_store_limit_itemdtor__qry_case_all_store_limit_item8_user(_this, _qry_case_all_store_limit_itemdtor__qry_case_all_store_limit_item8_next);
        };
        
        ::std::array<hook_record, 4> _qry_case_all_store_limit_item_functions = 
        {
            _hook_record {
                (LPVOID)0x14034bd30L,
                (LPVOID *)&_qry_case_all_store_limit_itemDataInit2_user,
                (LPVOID *)&_qry_case_all_store_limit_itemDataInit2_next,
                (LPVOID)cast_pointer_function(_qry_case_all_store_limit_itemDataInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_all_store_limit_item::*)())&_qry_case_all_store_limit_item::DataInit)
            },
            _hook_record {
                (LPVOID)0x14034bab0L,
                (LPVOID *)&_qry_case_all_store_limit_itemInit4_user,
                (LPVOID *)&_qry_case_all_store_limit_itemInit4_next,
                (LPVOID)cast_pointer_function(_qry_case_all_store_limit_itemInit4_wrapper),
                (LPVOID)cast_pointer_function((bool(_qry_case_all_store_limit_item::*)(unsigned int))&_qry_case_all_store_limit_item::Init)
            },
            _hook_record {
                (LPVOID)0x14034b800L,
                (LPVOID *)&_qry_case_all_store_limit_itemctor__qry_case_all_store_limit_item6_user,
                (LPVOID *)&_qry_case_all_store_limit_itemctor__qry_case_all_store_limit_item6_next,
                (LPVOID)cast_pointer_function(_qry_case_all_store_limit_itemctor__qry_case_all_store_limit_item6_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_all_store_limit_item::*)())&_qry_case_all_store_limit_item::ctor__qry_case_all_store_limit_item)
            },
            _hook_record {
                (LPVOID)0x14034b840L,
                (LPVOID *)&_qry_case_all_store_limit_itemdtor__qry_case_all_store_limit_item8_user,
                (LPVOID *)&_qry_case_all_store_limit_itemdtor__qry_case_all_store_limit_item8_next,
                (LPVOID)cast_pointer_function(_qry_case_all_store_limit_itemdtor__qry_case_all_store_limit_item8_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_all_store_limit_item::*)())&_qry_case_all_store_limit_item::dtor__qry_case_all_store_limit_item)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
