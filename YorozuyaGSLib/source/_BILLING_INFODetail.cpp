#include <_BILLING_INFODetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_BILLING_INFOIsPcBangType2_ptr _BILLING_INFOIsPcBangType2_next(nullptr);
        Info::_BILLING_INFOIsPcBangType2_clbk _BILLING_INFOIsPcBangType2_user(nullptr);
        
        
        Info::_BILLING_INFOctor__BILLING_INFO4_ptr _BILLING_INFOctor__BILLING_INFO4_next(nullptr);
        Info::_BILLING_INFOctor__BILLING_INFO4_clbk _BILLING_INFOctor__BILLING_INFO4_user(nullptr);
        
        bool _BILLING_INFOIsPcBangType2_wrapper(struct _BILLING_INFO* _this)
        {
           return _BILLING_INFOIsPcBangType2_user(_this, _BILLING_INFOIsPcBangType2_next);
        };
        
        void _BILLING_INFOctor__BILLING_INFO4_wrapper(struct _BILLING_INFO* _this)
        {
           _BILLING_INFOctor__BILLING_INFO4_user(_this, _BILLING_INFOctor__BILLING_INFO4_next);
        };
        
        ::std::array<hook_record, 2> _BILLING_INFO_functions = 
        {
            _hook_record {
                (LPVOID)0x1400d3c50L,
                (LPVOID *)&_BILLING_INFOIsPcBangType2_user,
                (LPVOID *)&_BILLING_INFOIsPcBangType2_next,
                (LPVOID)cast_pointer_function(_BILLING_INFOIsPcBangType2_wrapper),
                (LPVOID)cast_pointer_function((bool(_BILLING_INFO::*)())&_BILLING_INFO::IsPcBangType)
            },
            _hook_record {
                (LPVOID)0x14011f000L,
                (LPVOID *)&_BILLING_INFOctor__BILLING_INFO4_user,
                (LPVOID *)&_BILLING_INFOctor__BILLING_INFO4_next,
                (LPVOID)cast_pointer_function(_BILLING_INFOctor__BILLING_INFO4_wrapper),
                (LPVOID)cast_pointer_function((void(_BILLING_INFO::*)())&_BILLING_INFO::ctor__BILLING_INFO)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
