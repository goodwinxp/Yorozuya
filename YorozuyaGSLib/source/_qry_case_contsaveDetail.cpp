#include <_qry_case_contsaveDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_contsavector__qry_case_contsave2_ptr _qry_case_contsavector__qry_case_contsave2_next(nullptr);
        Info::_qry_case_contsavector__qry_case_contsave2_clbk _qry_case_contsavector__qry_case_contsave2_user(nullptr);
        
        Info::_qry_case_contsavesize4_ptr _qry_case_contsavesize4_next(nullptr);
        Info::_qry_case_contsavesize4_clbk _qry_case_contsavesize4_user(nullptr);
        
        
        Info::_qry_case_contsavedtor__qry_case_contsave6_ptr _qry_case_contsavedtor__qry_case_contsave6_next(nullptr);
        Info::_qry_case_contsavedtor__qry_case_contsave6_clbk _qry_case_contsavedtor__qry_case_contsave6_user(nullptr);
        
        
        void _qry_case_contsavector__qry_case_contsave2_wrapper(struct _qry_case_contsave* _this)
        {
           _qry_case_contsavector__qry_case_contsave2_user(_this, _qry_case_contsavector__qry_case_contsave2_next);
        };
        int _qry_case_contsavesize4_wrapper(struct _qry_case_contsave* _this)
        {
           return _qry_case_contsavesize4_user(_this, _qry_case_contsavesize4_next);
        };
        
        void _qry_case_contsavedtor__qry_case_contsave6_wrapper(struct _qry_case_contsave* _this)
        {
           _qry_case_contsavedtor__qry_case_contsave6_user(_this, _qry_case_contsavedtor__qry_case_contsave6_next);
        };
        
        ::std::array<hook_record, 3> _qry_case_contsave_functions = 
        {
            _hook_record {
                (LPVOID)0x14011fd90L,
                (LPVOID *)&_qry_case_contsavector__qry_case_contsave2_user,
                (LPVOID *)&_qry_case_contsavector__qry_case_contsave2_next,
                (LPVOID)cast_pointer_function(_qry_case_contsavector__qry_case_contsave2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_contsave::*)())&_qry_case_contsave::ctor__qry_case_contsave)
            },
            _hook_record {
                (LPVOID)0x14011fd80L,
                (LPVOID *)&_qry_case_contsavesize4_user,
                (LPVOID *)&_qry_case_contsavesize4_next,
                (LPVOID)cast_pointer_function(_qry_case_contsavesize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_contsave::*)())&_qry_case_contsave::size)
            },
            _hook_record {
                (LPVOID)0x14011fe40L,
                (LPVOID *)&_qry_case_contsavedtor__qry_case_contsave6_user,
                (LPVOID *)&_qry_case_contsavedtor__qry_case_contsave6_next,
                (LPVOID)cast_pointer_function(_qry_case_contsavedtor__qry_case_contsave6_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_contsave::*)())&_qry_case_contsave::dtor__qry_case_contsave)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
