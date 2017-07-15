#include <_party_member_info_updDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_party_member_info_updctor__party_member_info_upd2_ptr _party_member_info_updctor__party_member_info_upd2_next(nullptr);
        Info::_party_member_info_updctor__party_member_info_upd2_clbk _party_member_info_updctor__party_member_info_upd2_user(nullptr);
        
        Info::_party_member_info_updsize4_ptr _party_member_info_updsize4_next(nullptr);
        Info::_party_member_info_updsize4_clbk _party_member_info_updsize4_user(nullptr);
        
        
        void _party_member_info_updctor__party_member_info_upd2_wrapper(struct _party_member_info_upd* _this)
        {
           _party_member_info_updctor__party_member_info_upd2_user(_this, _party_member_info_updctor__party_member_info_upd2_next);
        };
        int _party_member_info_updsize4_wrapper(struct _party_member_info_upd* _this)
        {
           return _party_member_info_updsize4_user(_this, _party_member_info_updsize4_next);
        };
        
        ::std::array<hook_record, 2> _party_member_info_upd_functions = 
        {
            _hook_record {
                (LPVOID)0x1400efb50L,
                (LPVOID *)&_party_member_info_updctor__party_member_info_upd2_user,
                (LPVOID *)&_party_member_info_updctor__party_member_info_upd2_next,
                (LPVOID)cast_pointer_function(_party_member_info_updctor__party_member_info_upd2_wrapper),
                (LPVOID)cast_pointer_function((void(_party_member_info_upd::*)())&_party_member_info_upd::ctor__party_member_info_upd)
            },
            _hook_record {
                (LPVOID)0x1400efb70L,
                (LPVOID *)&_party_member_info_updsize4_user,
                (LPVOID *)&_party_member_info_updsize4_next,
                (LPVOID)cast_pointer_function(_party_member_info_updsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_party_member_info_upd::*)())&_party_member_info_upd::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
