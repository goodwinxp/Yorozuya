#include <_SYN_DATADetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_SYN_DATActor__SYN_DATA2_ptr _SYN_DATActor__SYN_DATA2_next(nullptr);
        Info::_SYN_DATActor__SYN_DATA2_clbk _SYN_DATActor__SYN_DATA2_user(nullptr);
        
        
        Info::_SYN_DATAdtor__SYN_DATA6_ptr _SYN_DATAdtor__SYN_DATA6_next(nullptr);
        Info::_SYN_DATAdtor__SYN_DATA6_clbk _SYN_DATAdtor__SYN_DATA6_user(nullptr);
        
        
        void _SYN_DATActor__SYN_DATA2_wrapper(struct _SYN_DATA* _this)
        {
           _SYN_DATActor__SYN_DATA2_user(_this, _SYN_DATActor__SYN_DATA2_next);
        };
        
        void _SYN_DATAdtor__SYN_DATA6_wrapper(struct _SYN_DATA* _this)
        {
           _SYN_DATAdtor__SYN_DATA6_user(_this, _SYN_DATAdtor__SYN_DATA6_next);
        };
        
        ::std::array<hook_record, 2> _SYN_DATA_functions = 
        {
            _hook_record {
                (LPVOID)0x14043ed10L,
                (LPVOID *)&_SYN_DATActor__SYN_DATA2_user,
                (LPVOID *)&_SYN_DATActor__SYN_DATA2_next,
                (LPVOID)cast_pointer_function(_SYN_DATActor__SYN_DATA2_wrapper),
                (LPVOID)cast_pointer_function((void(_SYN_DATA::*)())&_SYN_DATA::ctor__SYN_DATA)
            },
            _hook_record {
                (LPVOID)0x14043ecb0L,
                (LPVOID *)&_SYN_DATAdtor__SYN_DATA6_user,
                (LPVOID *)&_SYN_DATAdtor__SYN_DATA6_next,
                (LPVOID)cast_pointer_function(_SYN_DATAdtor__SYN_DATA6_wrapper),
                (LPVOID)cast_pointer_function((void(_SYN_DATA::*)())&_SYN_DATA::dtor__SYN_DATA)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
