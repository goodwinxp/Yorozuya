#include <ULIDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::ULILink1_ptr ULILink1_next(nullptr);
        Info::ULILink1_clbk ULILink1_user(nullptr);
        
        
        Info::ULIctor_ULI2_ptr ULIctor_ULI2_next(nullptr);
        Info::ULIctor_ULI2_clbk ULIctor_ULI2_user(nullptr);
        
        Info::ULIUnlink3_ptr ULIUnlink3_next(nullptr);
        Info::ULIUnlink3_clbk ULIUnlink3_user(nullptr);
        
        
        Info::ULIdtor_ULI7_ptr ULIdtor_ULI7_next(nullptr);
        Info::ULIdtor_ULI7_clbk ULIdtor_ULI7_user(nullptr);
        
        void ULILink1_wrapper(struct ULI* _this)
        {
           ULILink1_user(_this, ULILink1_next);
        };
        
        void ULIctor_ULI2_wrapper(struct ULI* _this, struct ImgDelayDescr* pidd_)
        {
           ULIctor_ULI2_user(_this, pidd_, ULIctor_ULI2_next);
        };
        void ULIUnlink3_wrapper(struct ULI* _this)
        {
           ULIUnlink3_user(_this, ULIUnlink3_next);
        };
        
        void ULIdtor_ULI7_wrapper(struct ULI* _this)
        {
           ULIdtor_ULI7_user(_this, ULIdtor_ULI7_next);
        };
        
        ::std::array<hook_record, 4> ULI_functions = 
        {
            _hook_record {
                (LPVOID)0x1406764dcL,
                (LPVOID *)&ULILink1_user,
                (LPVOID *)&ULILink1_next,
                (LPVOID)cast_pointer_function(ULILink1_wrapper),
                (LPVOID)cast_pointer_function((void(ULI::*)())&ULI::Link)
            },
            _hook_record {
                (LPVOID)0x1406765b0L,
                (LPVOID *)&ULIctor_ULI2_user,
                (LPVOID *)&ULIctor_ULI2_next,
                (LPVOID)cast_pointer_function(ULIctor_ULI2_wrapper),
                (LPVOID)cast_pointer_function((void(ULI::*)(struct ImgDelayDescr*))&ULI::ctor_ULI)
            },
            _hook_record {
                (LPVOID)0x1406764acL,
                (LPVOID *)&ULIUnlink3_user,
                (LPVOID *)&ULIUnlink3_next,
                (LPVOID)cast_pointer_function(ULIUnlink3_wrapper),
                (LPVOID)cast_pointer_function((void(ULI::*)())&ULI::Unlink)
            },
            _hook_record {
                (LPVOID)0x1406765ccL,
                (LPVOID *)&ULIdtor_ULI7_user,
                (LPVOID *)&ULIdtor_ULI7_next,
                (LPVOID)cast_pointer_function(ULIdtor_ULI7_wrapper),
                (LPVOID)cast_pointer_function((void(ULI::*)())&ULI::dtor_ULI)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
