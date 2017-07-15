#include <CGdiObjectDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CGdiObjectDeleteObject1_ptr CGdiObjectDeleteObject1_next(nullptr);
        Info::CGdiObjectDeleteObject1_clbk CGdiObjectDeleteObject1_user(nullptr);
        
        int64_t CGdiObjectDeleteObject1_wrapper(struct CGdiObject* _this)
        {
           return CGdiObjectDeleteObject1_user(_this, CGdiObjectDeleteObject1_next);
        };
        
        ::std::array<hook_record, 1> CGdiObject_functions = 
        {
            _hook_record {
                (LPVOID)0x1404dc3fcL,
                (LPVOID *)&CGdiObjectDeleteObject1_user,
                (LPVOID *)&CGdiObjectDeleteObject1_next,
                (LPVOID)cast_pointer_function(CGdiObjectDeleteObject1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CGdiObject::*)())&CGdiObject::DeleteObject)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
