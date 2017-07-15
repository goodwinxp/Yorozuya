#include <_qry_sheet_regedDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_sheet_regedctor__qry_sheet_reged2_ptr _qry_sheet_regedctor__qry_sheet_reged2_next(nullptr);
        Info::_qry_sheet_regedctor__qry_sheet_reged2_clbk _qry_sheet_regedctor__qry_sheet_reged2_user(nullptr);
        
        Info::_qry_sheet_regedsize4_ptr _qry_sheet_regedsize4_next(nullptr);
        Info::_qry_sheet_regedsize4_clbk _qry_sheet_regedsize4_user(nullptr);
        
        
        void _qry_sheet_regedctor__qry_sheet_reged2_wrapper(struct _qry_sheet_reged* _this)
        {
           _qry_sheet_regedctor__qry_sheet_reged2_user(_this, _qry_sheet_regedctor__qry_sheet_reged2_next);
        };
        int _qry_sheet_regedsize4_wrapper(struct _qry_sheet_reged* _this)
        {
           return _qry_sheet_regedsize4_user(_this, _qry_sheet_regedsize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_sheet_reged_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f550L,
                (LPVOID *)&_qry_sheet_regedctor__qry_sheet_reged2_user,
                (LPVOID *)&_qry_sheet_regedctor__qry_sheet_reged2_next,
                (LPVOID)cast_pointer_function(_qry_sheet_regedctor__qry_sheet_reged2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_sheet_reged::*)())&_qry_sheet_reged::ctor__qry_sheet_reged)
            },
            _hook_record {
                (LPVOID)0x14011f540L,
                (LPVOID *)&_qry_sheet_regedsize4_user,
                (LPVOID *)&_qry_sheet_regedsize4_next,
                (LPVOID)cast_pointer_function(_qry_sheet_regedsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_sheet_reged::*)())&_qry_sheet_reged::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
