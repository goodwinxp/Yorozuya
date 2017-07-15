#include <_qry_sheet_loadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_sheet_loadctor__qry_sheet_load2_ptr _qry_sheet_loadctor__qry_sheet_load2_next(nullptr);
        Info::_qry_sheet_loadctor__qry_sheet_load2_clbk _qry_sheet_loadctor__qry_sheet_load2_user(nullptr);
        
        Info::_qry_sheet_loadsize4_ptr _qry_sheet_loadsize4_next(nullptr);
        Info::_qry_sheet_loadsize4_clbk _qry_sheet_loadsize4_user(nullptr);
        
        
        Info::_qry_sheet_loaddtor__qry_sheet_load6_ptr _qry_sheet_loaddtor__qry_sheet_load6_next(nullptr);
        Info::_qry_sheet_loaddtor__qry_sheet_load6_clbk _qry_sheet_loaddtor__qry_sheet_load6_user(nullptr);
        
        
        void _qry_sheet_loadctor__qry_sheet_load2_wrapper(struct _qry_sheet_load* _this)
        {
           _qry_sheet_loadctor__qry_sheet_load2_user(_this, _qry_sheet_loadctor__qry_sheet_load2_next);
        };
        int _qry_sheet_loadsize4_wrapper(struct _qry_sheet_load* _this)
        {
           return _qry_sheet_loadsize4_user(_this, _qry_sheet_loadsize4_next);
        };
        
        void _qry_sheet_loaddtor__qry_sheet_load6_wrapper(struct _qry_sheet_load* _this)
        {
           _qry_sheet_loaddtor__qry_sheet_load6_user(_this, _qry_sheet_loaddtor__qry_sheet_load6_next);
        };
        
        ::std::array<hook_record, 3> _qry_sheet_load_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f8e0L,
                (LPVOID *)&_qry_sheet_loadctor__qry_sheet_load2_user,
                (LPVOID *)&_qry_sheet_loadctor__qry_sheet_load2_next,
                (LPVOID)cast_pointer_function(_qry_sheet_loadctor__qry_sheet_load2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_sheet_load::*)())&_qry_sheet_load::ctor__qry_sheet_load)
            },
            _hook_record {
                (LPVOID)0x14011f9c0L,
                (LPVOID *)&_qry_sheet_loadsize4_user,
                (LPVOID *)&_qry_sheet_loadsize4_next,
                (LPVOID)cast_pointer_function(_qry_sheet_loadsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_sheet_load::*)())&_qry_sheet_load::size)
            },
            _hook_record {
                (LPVOID)0x14011f9d0L,
                (LPVOID *)&_qry_sheet_loaddtor__qry_sheet_load6_user,
                (LPVOID *)&_qry_sheet_loaddtor__qry_sheet_load6_next,
                (LPVOID)cast_pointer_function(_qry_sheet_loaddtor__qry_sheet_load6_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_sheet_load::*)())&_qry_sheet_load::dtor__qry_sheet_load)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
