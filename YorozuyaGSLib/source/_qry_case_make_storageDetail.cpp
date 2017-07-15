#include <_qry_case_make_storageDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_make_storagector__qry_case_make_storage2_ptr _qry_case_make_storagector__qry_case_make_storage2_next(nullptr);
        Info::_qry_case_make_storagector__qry_case_make_storage2_clbk _qry_case_make_storagector__qry_case_make_storage2_user(nullptr);
        
        Info::_qry_case_make_storagesize4_ptr _qry_case_make_storagesize4_next(nullptr);
        Info::_qry_case_make_storagesize4_clbk _qry_case_make_storagesize4_user(nullptr);
        
        
        void _qry_case_make_storagector__qry_case_make_storage2_wrapper(struct _qry_case_make_storage* _this)
        {
           _qry_case_make_storagector__qry_case_make_storage2_user(_this, _qry_case_make_storagector__qry_case_make_storage2_next);
        };
        int _qry_case_make_storagesize4_wrapper(struct _qry_case_make_storage* _this)
        {
           return _qry_case_make_storagesize4_user(_this, _qry_case_make_storagesize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_make_storage_functions = 
        {
            _hook_record {
                (LPVOID)0x1402e1c10L,
                (LPVOID *)&_qry_case_make_storagector__qry_case_make_storage2_user,
                (LPVOID *)&_qry_case_make_storagector__qry_case_make_storage2_next,
                (LPVOID)cast_pointer_function(_qry_case_make_storagector__qry_case_make_storage2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_make_storage::*)())&_qry_case_make_storage::ctor__qry_case_make_storage)
            },
            _hook_record {
                (LPVOID)0x1402e1c30L,
                (LPVOID *)&_qry_case_make_storagesize4_user,
                (LPVOID *)&_qry_case_make_storagesize4_next,
                (LPVOID)cast_pointer_function(_qry_case_make_storagesize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_make_storage::*)())&_qry_case_make_storage::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
