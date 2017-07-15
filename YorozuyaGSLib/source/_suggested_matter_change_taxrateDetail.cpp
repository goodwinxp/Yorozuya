#include <_suggested_matter_change_taxrateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_suggested_matter_change_taxratector__suggested_matter_change_taxrate2_ptr _suggested_matter_change_taxratector__suggested_matter_change_taxrate2_next(nullptr);
        Info::_suggested_matter_change_taxratector__suggested_matter_change_taxrate2_clbk _suggested_matter_change_taxratector__suggested_matter_change_taxrate2_user(nullptr);
        
        Info::_suggested_matter_change_taxrateinit4_ptr _suggested_matter_change_taxrateinit4_next(nullptr);
        Info::_suggested_matter_change_taxrateinit4_clbk _suggested_matter_change_taxrateinit4_user(nullptr);
        
        
        void _suggested_matter_change_taxratector__suggested_matter_change_taxrate2_wrapper(struct _suggested_matter_change_taxrate* _this)
        {
           _suggested_matter_change_taxratector__suggested_matter_change_taxrate2_user(_this, _suggested_matter_change_taxratector__suggested_matter_change_taxrate2_next);
        };
        void _suggested_matter_change_taxrateinit4_wrapper(struct _suggested_matter_change_taxrate* _this)
        {
           _suggested_matter_change_taxrateinit4_user(_this, _suggested_matter_change_taxrateinit4_next);
        };
        
        ::std::array<hook_record, 2> _suggested_matter_change_taxrate_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d97c0L,
                (LPVOID *)&_suggested_matter_change_taxratector__suggested_matter_change_taxrate2_user,
                (LPVOID *)&_suggested_matter_change_taxratector__suggested_matter_change_taxrate2_next,
                (LPVOID)cast_pointer_function(_suggested_matter_change_taxratector__suggested_matter_change_taxrate2_wrapper),
                (LPVOID)cast_pointer_function((void(_suggested_matter_change_taxrate::*)())&_suggested_matter_change_taxrate::ctor__suggested_matter_change_taxrate)
            },
            _hook_record {
                (LPVOID)0x1402d9810L,
                (LPVOID *)&_suggested_matter_change_taxrateinit4_user,
                (LPVOID *)&_suggested_matter_change_taxrateinit4_next,
                (LPVOID)cast_pointer_function(_suggested_matter_change_taxrateinit4_wrapper),
                (LPVOID)cast_pointer_function((void(_suggested_matter_change_taxrate::*)())&_suggested_matter_change_taxrate::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
