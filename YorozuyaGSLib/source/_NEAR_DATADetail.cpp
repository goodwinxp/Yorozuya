#include <_NEAR_DATADetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_NEAR_DATAInit2_ptr _NEAR_DATAInit2_next(nullptr);
        Info::_NEAR_DATAInit2_clbk _NEAR_DATAInit2_user(nullptr);
        
        
        Info::_NEAR_DATActor__NEAR_DATA4_ptr _NEAR_DATActor__NEAR_DATA4_next(nullptr);
        Info::_NEAR_DATActor__NEAR_DATA4_clbk _NEAR_DATActor__NEAR_DATA4_user(nullptr);
        
        void _NEAR_DATAInit2_wrapper(struct _NEAR_DATA* _this)
        {
           _NEAR_DATAInit2_user(_this, _NEAR_DATAInit2_next);
        };
        
        void _NEAR_DATActor__NEAR_DATA4_wrapper(struct _NEAR_DATA* _this)
        {
           _NEAR_DATActor__NEAR_DATA4_user(_this, _NEAR_DATActor__NEAR_DATA4_next);
        };
        
        ::std::array<hook_record, 2> _NEAR_DATA_functions = 
        {
            _hook_record {
                (LPVOID)0x140155570L,
                (LPVOID *)&_NEAR_DATAInit2_user,
                (LPVOID *)&_NEAR_DATAInit2_next,
                (LPVOID)cast_pointer_function(_NEAR_DATAInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_NEAR_DATA::*)())&_NEAR_DATA::Init)
            },
            _hook_record {
                (LPVOID)0x140155520L,
                (LPVOID *)&_NEAR_DATActor__NEAR_DATA4_user,
                (LPVOID *)&_NEAR_DATActor__NEAR_DATA4_next,
                (LPVOID)cast_pointer_function(_NEAR_DATActor__NEAR_DATA4_wrapper),
                (LPVOID)cast_pointer_function((void(_NEAR_DATA::*)())&_NEAR_DATA::ctor__NEAR_DATA)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
