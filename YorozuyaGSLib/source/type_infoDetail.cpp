#include <common/ATFCore.hpp>
#include <type_infoDetail.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::type_info_name_internal_method1_ptr type_info_name_internal_method1_next(nullptr);
        Info::type_info_name_internal_method1_clbk type_info_name_internal_method1_user(nullptr);
        
        
        Info::type_infoctor_type_info4_ptr type_infoctor_type_info4_next(nullptr);
        Info::type_infoctor_type_info4_clbk type_infoctor_type_info4_user(nullptr);
        
        
        Info::type_infodtor_type_info5_ptr type_infodtor_type_info5_next(nullptr);
        Info::type_infodtor_type_info5_clbk type_infodtor_type_info5_user(nullptr);
        
        char* type_info_name_internal_method1_wrapper(struct type_info* _this, struct __type_info_node* arg_0)
        {
           return type_info_name_internal_method1_user(_this, arg_0, type_info_name_internal_method1_next);
        };
        
        void type_infoctor_type_info4_wrapper(struct type_info* _this, struct type_info* rhs)
        {
           type_infoctor_type_info4_user(_this, rhs, type_infoctor_type_info4_next);
        };
        
        void type_infodtor_type_info5_wrapper(void* arg_0)
        {
           type_infodtor_type_info5_user(arg_0, type_infodtor_type_info5_next);
        };
        
        ::std::array<hook_record, 3> type_info_functions = 
        {
            _hook_record {
                (LPVOID)0x1404de224L,
                (LPVOID *)&type_info_name_internal_method1_user,
                (LPVOID *)&type_info_name_internal_method1_next,
                (LPVOID)cast_pointer_function(type_info_name_internal_method1_wrapper),
                (LPVOID)cast_pointer_function((char*(type_info::*)(struct __type_info_node*))&type_info::_name_internal_method)
            },
            _hook_record {
                (LPVOID)0x1404dc920L,
                (LPVOID *)&type_infoctor_type_info4_user,
                (LPVOID *)&type_infoctor_type_info4_next,
                (LPVOID)cast_pointer_function(type_infoctor_type_info4_wrapper),
                (LPVOID)cast_pointer_function((void(type_info::*)(struct type_info*))&type_info::ctor_type_info)
            },
            _hook_record {
                (LPVOID)0x1404decf4L,
                (LPVOID *)&type_infodtor_type_info5_user,
                (LPVOID *)&type_infodtor_type_info5_next,
                (LPVOID)cast_pointer_function(type_infodtor_type_info5_wrapper),
                (LPVOID)cast_pointer_function((void(type_info::*)())&type_info::dtor_type_info)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
