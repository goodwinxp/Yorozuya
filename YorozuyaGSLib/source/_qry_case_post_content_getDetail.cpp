#include <_qry_case_post_content_getDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_post_content_getctor__qry_case_post_content_get2_ptr _qry_case_post_content_getctor__qry_case_post_content_get2_next(nullptr);
        Info::_qry_case_post_content_getctor__qry_case_post_content_get2_clbk _qry_case_post_content_getctor__qry_case_post_content_get2_user(nullptr);
        
        Info::_qry_case_post_content_getsize4_ptr _qry_case_post_content_getsize4_next(nullptr);
        Info::_qry_case_post_content_getsize4_clbk _qry_case_post_content_getsize4_user(nullptr);
        
        
        void _qry_case_post_content_getctor__qry_case_post_content_get2_wrapper(struct _qry_case_post_content_get* _this)
        {
           _qry_case_post_content_getctor__qry_case_post_content_get2_user(_this, _qry_case_post_content_getctor__qry_case_post_content_get2_next);
        };
        int _qry_case_post_content_getsize4_wrapper(struct _qry_case_post_content_get* _this)
        {
           return _qry_case_post_content_getsize4_user(_this, _qry_case_post_content_getsize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_post_content_get_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ca730L,
                (LPVOID *)&_qry_case_post_content_getctor__qry_case_post_content_get2_user,
                (LPVOID *)&_qry_case_post_content_getctor__qry_case_post_content_get2_next,
                (LPVOID)cast_pointer_function(_qry_case_post_content_getctor__qry_case_post_content_get2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_post_content_get::*)())&_qry_case_post_content_get::ctor__qry_case_post_content_get)
            },
            _hook_record {
                (LPVOID)0x1400ca780L,
                (LPVOID *)&_qry_case_post_content_getsize4_user,
                (LPVOID *)&_qry_case_post_content_getsize4_next,
                (LPVOID)cast_pointer_function(_qry_case_post_content_getsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_post_content_get::*)())&_qry_case_post_content_get::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
