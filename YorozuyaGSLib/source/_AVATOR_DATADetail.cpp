#include <_AVATOR_DATADetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_AVATOR_DATAInitData2_ptr _AVATOR_DATAInitData2_next(nullptr);
        Info::_AVATOR_DATAInitData2_clbk _AVATOR_DATAInitData2_user(nullptr);
        
        Info::_AVATOR_DATAPostUpdateInit4_ptr _AVATOR_DATAPostUpdateInit4_next(nullptr);
        Info::_AVATOR_DATAPostUpdateInit4_clbk _AVATOR_DATAPostUpdateInit4_user(nullptr);
        
        
        Info::_AVATOR_DATActor__AVATOR_DATA6_ptr _AVATOR_DATActor__AVATOR_DATA6_next(nullptr);
        Info::_AVATOR_DATActor__AVATOR_DATA6_clbk _AVATOR_DATActor__AVATOR_DATA6_user(nullptr);
        
        
        Info::_AVATOR_DATAdtor__AVATOR_DATA8_ptr _AVATOR_DATAdtor__AVATOR_DATA8_next(nullptr);
        Info::_AVATOR_DATAdtor__AVATOR_DATA8_clbk _AVATOR_DATAdtor__AVATOR_DATA8_user(nullptr);
        
        void _AVATOR_DATAInitData2_wrapper(struct _AVATOR_DATA* _this)
        {
           _AVATOR_DATAInitData2_user(_this, _AVATOR_DATAInitData2_next);
        };
        void _AVATOR_DATAPostUpdateInit4_wrapper(struct _AVATOR_DATA* _this)
        {
           _AVATOR_DATAPostUpdateInit4_user(_this, _AVATOR_DATAPostUpdateInit4_next);
        };
        
        void _AVATOR_DATActor__AVATOR_DATA6_wrapper(struct _AVATOR_DATA* _this)
        {
           _AVATOR_DATActor__AVATOR_DATA6_user(_this, _AVATOR_DATActor__AVATOR_DATA6_next);
        };
        
        void _AVATOR_DATAdtor__AVATOR_DATA8_wrapper(struct _AVATOR_DATA* _this)
        {
           _AVATOR_DATAdtor__AVATOR_DATA8_user(_this, _AVATOR_DATAdtor__AVATOR_DATA8_next);
        };
        
        ::std::array<hook_record, 4> _AVATOR_DATA_functions = 
        {
            _hook_record {
                (LPVOID)0x140077a00L,
                (LPVOID *)&_AVATOR_DATAInitData2_user,
                (LPVOID *)&_AVATOR_DATAInitData2_next,
                (LPVOID)cast_pointer_function(_AVATOR_DATAInitData2_wrapper),
                (LPVOID)cast_pointer_function((void(_AVATOR_DATA::*)())&_AVATOR_DATA::InitData)
            },
            _hook_record {
                (LPVOID)0x14011fc00L,
                (LPVOID *)&_AVATOR_DATAPostUpdateInit4_user,
                (LPVOID *)&_AVATOR_DATAPostUpdateInit4_next,
                (LPVOID)cast_pointer_function(_AVATOR_DATAPostUpdateInit4_wrapper),
                (LPVOID)cast_pointer_function((void(_AVATOR_DATA::*)())&_AVATOR_DATA::PostUpdateInit)
            },
            _hook_record {
                (LPVOID)0x140075130L,
                (LPVOID *)&_AVATOR_DATActor__AVATOR_DATA6_user,
                (LPVOID *)&_AVATOR_DATActor__AVATOR_DATA6_next,
                (LPVOID)cast_pointer_function(_AVATOR_DATActor__AVATOR_DATA6_wrapper),
                (LPVOID)cast_pointer_function((void(_AVATOR_DATA::*)())&_AVATOR_DATA::ctor__AVATOR_DATA)
            },
            _hook_record {
                (LPVOID)0x140078a90L,
                (LPVOID *)&_AVATOR_DATAdtor__AVATOR_DATA8_user,
                (LPVOID *)&_AVATOR_DATAdtor__AVATOR_DATA8_next,
                (LPVOID)cast_pointer_function(_AVATOR_DATAdtor__AVATOR_DATA8_wrapper),
                (LPVOID)cast_pointer_function((void(_AVATOR_DATA::*)())&_AVATOR_DATA::dtor__AVATOR_DATA)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
