#include <_qry_sheet_insertDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_sheet_insertctor__qry_sheet_insert2_ptr _qry_sheet_insertctor__qry_sheet_insert2_next(nullptr);
        Info::_qry_sheet_insertctor__qry_sheet_insert2_clbk _qry_sheet_insertctor__qry_sheet_insert2_user(nullptr);
        
        Info::_qry_sheet_insertsize4_ptr _qry_sheet_insertsize4_next(nullptr);
        Info::_qry_sheet_insertsize4_clbk _qry_sheet_insertsize4_user(nullptr);
        
        
        void _qry_sheet_insertctor__qry_sheet_insert2_wrapper(struct _qry_sheet_insert* _this)
        {
           _qry_sheet_insertctor__qry_sheet_insert2_user(_this, _qry_sheet_insertctor__qry_sheet_insert2_next);
        };
        int _qry_sheet_insertsize4_wrapper(struct _qry_sheet_insert* _this)
        {
           return _qry_sheet_insertsize4_user(_this, _qry_sheet_insertsize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_sheet_insert_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f820L,
                (LPVOID *)&_qry_sheet_insertctor__qry_sheet_insert2_user,
                (LPVOID *)&_qry_sheet_insertctor__qry_sheet_insert2_next,
                (LPVOID)cast_pointer_function(_qry_sheet_insertctor__qry_sheet_insert2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_sheet_insert::*)())&_qry_sheet_insert::ctor__qry_sheet_insert)
            },
            _hook_record {
                (LPVOID)0x14011f810L,
                (LPVOID *)&_qry_sheet_insertsize4_user,
                (LPVOID *)&_qry_sheet_insertsize4_next,
                (LPVOID)cast_pointer_function(_qry_sheet_insertsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_sheet_insert::*)())&_qry_sheet_insert::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
