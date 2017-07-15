#include <_NameChangeBuddyInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_NameChangeBuddyInfoInit2_ptr _NameChangeBuddyInfoInit2_next(nullptr);
        Info::_NameChangeBuddyInfoInit2_clbk _NameChangeBuddyInfoInit2_user(nullptr);
        
        
        Info::_NameChangeBuddyInfoctor__NameChangeBuddyInfo4_ptr _NameChangeBuddyInfoctor__NameChangeBuddyInfo4_next(nullptr);
        Info::_NameChangeBuddyInfoctor__NameChangeBuddyInfo4_clbk _NameChangeBuddyInfoctor__NameChangeBuddyInfo4_user(nullptr);
        
        void _NameChangeBuddyInfoInit2_wrapper(struct _NameChangeBuddyInfo* _this)
        {
           _NameChangeBuddyInfoInit2_user(_this, _NameChangeBuddyInfoInit2_next);
        };
        
        void _NameChangeBuddyInfoctor__NameChangeBuddyInfo4_wrapper(struct _NameChangeBuddyInfo* _this)
        {
           _NameChangeBuddyInfoctor__NameChangeBuddyInfo4_user(_this, _NameChangeBuddyInfoctor__NameChangeBuddyInfo4_next);
        };
        
        ::std::array<hook_record, 2> _NameChangeBuddyInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x140073e70L,
                (LPVOID *)&_NameChangeBuddyInfoInit2_user,
                (LPVOID *)&_NameChangeBuddyInfoInit2_next,
                (LPVOID)cast_pointer_function(_NameChangeBuddyInfoInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_NameChangeBuddyInfo::*)())&_NameChangeBuddyInfo::Init)
            },
            _hook_record {
                (LPVOID)0x140073e20L,
                (LPVOID *)&_NameChangeBuddyInfoctor__NameChangeBuddyInfo4_user,
                (LPVOID *)&_NameChangeBuddyInfoctor__NameChangeBuddyInfo4_next,
                (LPVOID)cast_pointer_function(_NameChangeBuddyInfoctor__NameChangeBuddyInfo4_wrapper),
                (LPVOID)cast_pointer_function((void(_NameChangeBuddyInfo::*)())&_NameChangeBuddyInfo::ctor__NameChangeBuddyInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
