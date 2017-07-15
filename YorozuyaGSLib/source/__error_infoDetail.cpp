#include <__error_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::__error_infoSetFileName2_ptr __error_infoSetFileName2_next(nullptr);
        Info::__error_infoSetFileName2_clbk __error_infoSetFileName2_user(nullptr);
        
        Info::__error_infoSetQuestTitle4_ptr __error_infoSetQuestTitle4_next(nullptr);
        Info::__error_infoSetQuestTitle4_clbk __error_infoSetQuestTitle4_user(nullptr);
        
        
        Info::__error_infoctor___error_info6_ptr __error_infoctor___error_info6_next(nullptr);
        Info::__error_infoctor___error_info6_clbk __error_infoctor___error_info6_user(nullptr);
        
        Info::__error_infoinit8_ptr __error_infoinit8_next(nullptr);
        Info::__error_infoinit8_clbk __error_infoinit8_user(nullptr);
        
        void __error_infoSetFileName2_wrapper(struct __error_info* _this, char* pszFileName)
        {
           __error_infoSetFileName2_user(_this, pszFileName, __error_infoSetFileName2_next);
        };
        void __error_infoSetQuestTitle4_wrapper(struct __error_info* _this, char* pszTitle)
        {
           __error_infoSetQuestTitle4_user(_this, pszTitle, __error_infoSetQuestTitle4_next);
        };
        
        void __error_infoctor___error_info6_wrapper(struct __error_info* _this)
        {
           __error_infoctor___error_info6_user(_this, __error_infoctor___error_info6_next);
        };
        void __error_infoinit8_wrapper(struct __error_info* _this)
        {
           __error_infoinit8_user(_this, __error_infoinit8_next);
        };
        
        ::std::array<hook_record, 4> __error_info_functions = 
        {
            _hook_record {
                (LPVOID)0x140272310L,
                (LPVOID *)&__error_infoSetFileName2_user,
                (LPVOID *)&__error_infoSetFileName2_next,
                (LPVOID)cast_pointer_function(__error_infoSetFileName2_wrapper),
                (LPVOID)cast_pointer_function((void(__error_info::*)(char*))&__error_info::SetFileName)
            },
            _hook_record {
                (LPVOID)0x140272360L,
                (LPVOID *)&__error_infoSetQuestTitle4_user,
                (LPVOID *)&__error_infoSetQuestTitle4_next,
                (LPVOID)cast_pointer_function(__error_infoSetQuestTitle4_wrapper),
                (LPVOID)cast_pointer_function((void(__error_info::*)(char*))&__error_info::SetQuestTitle)
            },
            _hook_record {
                (LPVOID)0x140271c30L,
                (LPVOID *)&__error_infoctor___error_info6_user,
                (LPVOID *)&__error_infoctor___error_info6_next,
                (LPVOID)cast_pointer_function(__error_infoctor___error_info6_wrapper),
                (LPVOID)cast_pointer_function((void(__error_info::*)())&__error_info::ctor___error_info)
            },
            _hook_record {
                (LPVOID)0x140271c80L,
                (LPVOID *)&__error_infoinit8_user,
                (LPVOID *)&__error_infoinit8_next,
                (LPVOID)cast_pointer_function(__error_infoinit8_wrapper),
                (LPVOID)cast_pointer_function((void(__error_info::*)())&__error_info::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
