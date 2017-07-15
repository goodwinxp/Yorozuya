#include <_qry_case_unmandtrader_re_registsingleitemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_unmandtrader_re_registsingleitemctor__qry_case_unmandtrader_re_registsingleitem2_ptr _qry_case_unmandtrader_re_registsingleitemctor__qry_case_unmandtrader_re_registsingleitem2_next(nullptr);
        Info::_qry_case_unmandtrader_re_registsingleitemctor__qry_case_unmandtrader_re_registsingleitem2_clbk _qry_case_unmandtrader_re_registsingleitemctor__qry_case_unmandtrader_re_registsingleitem2_user(nullptr);
        
        Info::_qry_case_unmandtrader_re_registsingleitemsize4_ptr _qry_case_unmandtrader_re_registsingleitemsize4_next(nullptr);
        Info::_qry_case_unmandtrader_re_registsingleitemsize4_clbk _qry_case_unmandtrader_re_registsingleitemsize4_user(nullptr);
        
        
        void _qry_case_unmandtrader_re_registsingleitemctor__qry_case_unmandtrader_re_registsingleitem2_wrapper(struct _qry_case_unmandtrader_re_registsingleitem* _this)
        {
           _qry_case_unmandtrader_re_registsingleitemctor__qry_case_unmandtrader_re_registsingleitem2_user(_this, _qry_case_unmandtrader_re_registsingleitemctor__qry_case_unmandtrader_re_registsingleitem2_next);
        };
        int _qry_case_unmandtrader_re_registsingleitemsize4_wrapper(struct _qry_case_unmandtrader_re_registsingleitem* _this)
        {
           return _qry_case_unmandtrader_re_registsingleitemsize4_user(_this, _qry_case_unmandtrader_re_registsingleitemsize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_unmandtrader_re_registsingleitem_functions = 
        {
            _hook_record {
                (LPVOID)0x14035f7d0L,
                (LPVOID *)&_qry_case_unmandtrader_re_registsingleitemctor__qry_case_unmandtrader_re_registsingleitem2_user,
                (LPVOID *)&_qry_case_unmandtrader_re_registsingleitemctor__qry_case_unmandtrader_re_registsingleitem2_next,
                (LPVOID)cast_pointer_function(_qry_case_unmandtrader_re_registsingleitemctor__qry_case_unmandtrader_re_registsingleitem2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_unmandtrader_re_registsingleitem::*)())&_qry_case_unmandtrader_re_registsingleitem::ctor__qry_case_unmandtrader_re_registsingleitem)
            },
            _hook_record {
                (LPVOID)0x14035f7f0L,
                (LPVOID *)&_qry_case_unmandtrader_re_registsingleitemsize4_user,
                (LPVOID *)&_qry_case_unmandtrader_re_registsingleitemsize4_next,
                (LPVOID)cast_pointer_function(_qry_case_unmandtrader_re_registsingleitemsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_unmandtrader_re_registsingleitem::*)())&_qry_case_unmandtrader_re_registsingleitem::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
