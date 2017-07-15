#include <_suggested_matterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_suggested_matterClear2_ptr _suggested_matterClear2_next(nullptr);
        Info::_suggested_matterClear2_clbk _suggested_matterClear2_user(nullptr);
        
        Info::_suggested_matterIsVotable4_ptr _suggested_matterIsVotable4_next(nullptr);
        Info::_suggested_matterIsVotable4_clbk _suggested_matterIsVotable4_user(nullptr);
        
        
        Info::_suggested_matterctor__suggested_matter6_ptr _suggested_matterctor__suggested_matter6_next(nullptr);
        Info::_suggested_matterctor__suggested_matter6_clbk _suggested_matterctor__suggested_matter6_user(nullptr);
        
        void _suggested_matterClear2_wrapper(struct _suggested_matter* _this)
        {
           _suggested_matterClear2_user(_this, _suggested_matterClear2_next);
        };
        bool _suggested_matterIsVotable4_wrapper(struct _suggested_matter* _this, unsigned int dwSerial)
        {
           return _suggested_matterIsVotable4_user(_this, dwSerial, _suggested_matterIsVotable4_next);
        };
        
        void _suggested_matterctor__suggested_matter6_wrapper(struct _suggested_matter* _this)
        {
           _suggested_matterctor__suggested_matter6_user(_this, _suggested_matterctor__suggested_matter6_next);
        };
        
        ::std::array<hook_record, 3> _suggested_matter_functions = 
        {
            _hook_record {
                (LPVOID)0x14025cfe0L,
                (LPVOID *)&_suggested_matterClear2_user,
                (LPVOID *)&_suggested_matterClear2_next,
                (LPVOID)cast_pointer_function(_suggested_matterClear2_wrapper),
                (LPVOID)cast_pointer_function((void(_suggested_matter::*)())&_suggested_matter::Clear)
            },
            _hook_record {
                (LPVOID)0x1400ad200L,
                (LPVOID *)&_suggested_matterIsVotable4_user,
                (LPVOID *)&_suggested_matterIsVotable4_next,
                (LPVOID)cast_pointer_function(_suggested_matterIsVotable4_wrapper),
                (LPVOID)cast_pointer_function((bool(_suggested_matter::*)(unsigned int))&_suggested_matter::IsVotable)
            },
            _hook_record {
                (LPVOID)0x14025cf90L,
                (LPVOID *)&_suggested_matterctor__suggested_matter6_user,
                (LPVOID *)&_suggested_matterctor__suggested_matter6_next,
                (LPVOID)cast_pointer_function(_suggested_matterctor__suggested_matter6_wrapper),
                (LPVOID)cast_pointer_function((void(_suggested_matter::*)())&_suggested_matter::ctor__suggested_matter)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
