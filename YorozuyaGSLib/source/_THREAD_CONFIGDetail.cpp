#include <_THREAD_CONFIGDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_THREAD_CONFIGctor__THREAD_CONFIG2_ptr _THREAD_CONFIGctor__THREAD_CONFIG2_next(nullptr);
        Info::_THREAD_CONFIGctor__THREAD_CONFIG2_clbk _THREAD_CONFIGctor__THREAD_CONFIG2_user(nullptr);
        
        
        void _THREAD_CONFIGctor__THREAD_CONFIG2_wrapper(struct _THREAD_CONFIG* _this)
        {
           _THREAD_CONFIGctor__THREAD_CONFIG2_user(_this, _THREAD_CONFIGctor__THREAD_CONFIG2_next);
        };
        
        ::std::array<hook_record, 1> _THREAD_CONFIG_functions = 
        {
            _hook_record {
                (LPVOID)0x14043ea90L,
                (LPVOID *)&_THREAD_CONFIGctor__THREAD_CONFIG2_user,
                (LPVOID *)&_THREAD_CONFIGctor__THREAD_CONFIG2_next,
                (LPVOID)cast_pointer_function(_THREAD_CONFIGctor__THREAD_CONFIG2_wrapper),
                (LPVOID)cast_pointer_function((void(_THREAD_CONFIG::*)())&_THREAD_CONFIG::ctor__THREAD_CONFIG)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
