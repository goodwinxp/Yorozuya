#include <_qry_sheet_deleteDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_sheet_deletesize2_ptr _qry_sheet_deletesize2_next(nullptr);
        Info::_qry_sheet_deletesize2_clbk _qry_sheet_deletesize2_user(nullptr);
        
        int _qry_sheet_deletesize2_wrapper(struct _qry_sheet_delete* _this)
        {
           return _qry_sheet_deletesize2_user(_this, _qry_sheet_deletesize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_sheet_delete_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f890L,
                (LPVOID *)&_qry_sheet_deletesize2_user,
                (LPVOID *)&_qry_sheet_deletesize2_next,
                (LPVOID)cast_pointer_function(_qry_sheet_deletesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_sheet_delete::*)())&_qry_sheet_delete::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
