#include <_qry_case_character_renameDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_character_renamector__qry_case_character_rename2_ptr _qry_case_character_renamector__qry_case_character_rename2_next(nullptr);
        Info::_qry_case_character_renamector__qry_case_character_rename2_clbk _qry_case_character_renamector__qry_case_character_rename2_user(nullptr);
        
        Info::_qry_case_character_renamesize4_ptr _qry_case_character_renamesize4_next(nullptr);
        Info::_qry_case_character_renamesize4_clbk _qry_case_character_renamesize4_user(nullptr);
        
        
        void _qry_case_character_renamector__qry_case_character_rename2_wrapper(struct _qry_case_character_rename* _this)
        {
           _qry_case_character_renamector__qry_case_character_rename2_user(_this, _qry_case_character_renamector__qry_case_character_rename2_next);
        };
        int _qry_case_character_renamesize4_wrapper(struct _qry_case_character_rename* _this)
        {
           return _qry_case_character_renamesize4_user(_this, _qry_case_character_renamesize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_character_rename_functions = 
        {
            _hook_record {
                (LPVOID)0x1400b85b0L,
                (LPVOID *)&_qry_case_character_renamector__qry_case_character_rename2_user,
                (LPVOID *)&_qry_case_character_renamector__qry_case_character_rename2_next,
                (LPVOID)cast_pointer_function(_qry_case_character_renamector__qry_case_character_rename2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_character_rename::*)())&_qry_case_character_rename::ctor__qry_case_character_rename)
            },
            _hook_record {
                (LPVOID)0x1400b8600L,
                (LPVOID *)&_qry_case_character_renamesize4_user,
                (LPVOID *)&_qry_case_character_renamesize4_next,
                (LPVOID)cast_pointer_function(_qry_case_character_renamesize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_character_rename::*)())&_qry_case_character_rename::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
