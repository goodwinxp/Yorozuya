#include <_ChatStealTargetInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_ChatStealTargetInfoctor__ChatStealTargetInfo2_ptr _ChatStealTargetInfoctor__ChatStealTargetInfo2_next(nullptr);
        Info::_ChatStealTargetInfoctor__ChatStealTargetInfo2_clbk _ChatStealTargetInfoctor__ChatStealTargetInfo2_user(nullptr);
        
        
        void _ChatStealTargetInfoctor__ChatStealTargetInfo2_wrapper(struct _ChatStealTargetInfo* _this)
        {
           _ChatStealTargetInfoctor__ChatStealTargetInfo2_user(_this, _ChatStealTargetInfoctor__ChatStealTargetInfo2_next);
        };
        
        ::std::array<hook_record, 1> _ChatStealTargetInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x1403f8cf0L,
                (LPVOID *)&_ChatStealTargetInfoctor__ChatStealTargetInfo2_user,
                (LPVOID *)&_ChatStealTargetInfoctor__ChatStealTargetInfo2_next,
                (LPVOID)cast_pointer_function(_ChatStealTargetInfoctor__ChatStealTargetInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(_ChatStealTargetInfo::*)())&_ChatStealTargetInfo::ctor__ChatStealTargetInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
