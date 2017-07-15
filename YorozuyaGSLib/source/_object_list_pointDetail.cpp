#include <_object_list_pointDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_object_list_pointInitLink2_ptr _object_list_pointInitLink2_next(nullptr);
        Info::_object_list_pointInitLink2_clbk _object_list_pointInitLink2_user(nullptr);
        
        Info::_object_list_pointSetPoint4_ptr _object_list_pointSetPoint4_next(nullptr);
        Info::_object_list_pointSetPoint4_clbk _object_list_pointSetPoint4_user(nullptr);
        
        
        Info::_object_list_pointctor__object_list_point6_ptr _object_list_pointctor__object_list_point6_next(nullptr);
        Info::_object_list_pointctor__object_list_point6_clbk _object_list_pointctor__object_list_point6_user(nullptr);
        
        void _object_list_pointInitLink2_wrapper(struct _object_list_point* _this)
        {
           _object_list_pointInitLink2_user(_this, _object_list_pointInitLink2_next);
        };
        void _object_list_pointSetPoint4_wrapper(struct _object_list_point* _this, struct CGameObject* pItem)
        {
           _object_list_pointSetPoint4_user(_this, pItem, _object_list_pointSetPoint4_next);
        };
        
        void _object_list_pointctor__object_list_point6_wrapper(struct _object_list_point* _this)
        {
           _object_list_pointctor__object_list_point6_user(_this, _object_list_pointctor__object_list_point6_next);
        };
        
        ::std::array<hook_record, 3> _object_list_point_functions = 
        {
            _hook_record {
                (LPVOID)0x14017d5a0L,
                (LPVOID *)&_object_list_pointInitLink2_user,
                (LPVOID *)&_object_list_pointInitLink2_next,
                (LPVOID)cast_pointer_function(_object_list_pointInitLink2_wrapper),
                (LPVOID)cast_pointer_function((void(_object_list_point::*)())&_object_list_point::InitLink)
            },
            _hook_record {
                (LPVOID)0x14017d640L,
                (LPVOID *)&_object_list_pointSetPoint4_user,
                (LPVOID *)&_object_list_pointSetPoint4_next,
                (LPVOID)cast_pointer_function(_object_list_pointSetPoint4_wrapper),
                (LPVOID)cast_pointer_function((void(_object_list_point::*)(struct CGameObject*))&_object_list_point::SetPoint)
            },
            _hook_record {
                (LPVOID)0x14017d540L,
                (LPVOID *)&_object_list_pointctor__object_list_point6_user,
                (LPVOID *)&_object_list_pointctor__object_list_point6_next,
                (LPVOID)cast_pointer_function(_object_list_pointctor__object_list_point6_wrapper),
                (LPVOID)cast_pointer_function((void(_object_list_point::*)())&_object_list_point::ctor__object_list_point)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
