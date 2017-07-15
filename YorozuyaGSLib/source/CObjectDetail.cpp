#include <CObjectDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CObjectIsKindOf1_ptr CObjectIsKindOf1_next(nullptr);
        Info::CObjectIsKindOf1_clbk CObjectIsKindOf1_user(nullptr);
        
        Info::CObjectSerialize2_ptr CObjectSerialize2_next(nullptr);
        Info::CObjectSerialize2_clbk CObjectSerialize2_user(nullptr);
        
        int64_t CObjectIsKindOf1_wrapper(struct CObject* _this, struct CRuntimeClass* arg_0)
        {
           return CObjectIsKindOf1_user(_this, arg_0, CObjectIsKindOf1_next);
        };
        void CObjectSerialize2_wrapper(struct CObject* _this, struct CArchive* arg_0)
        {
           CObjectSerialize2_user(_this, arg_0, CObjectSerialize2_next);
        };
        
        ::std::array<hook_record, 2> CObject_functions = 
        {
            _hook_record {
                (LPVOID)0x1404dc210L,
                (LPVOID *)&CObjectIsKindOf1_user,
                (LPVOID *)&CObjectIsKindOf1_next,
                (LPVOID)cast_pointer_function(CObjectIsKindOf1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CObject::*)(struct CRuntimeClass*))&CObject::IsKindOf)
            },
            _hook_record {
                (LPVOID)0x1404dbb8cL,
                (LPVOID *)&CObjectSerialize2_user,
                (LPVOID *)&CObjectSerialize2_next,
                (LPVOID)cast_pointer_function(CObjectSerialize2_wrapper),
                (LPVOID)cast_pointer_function((void(CObject::*)(struct CArchive*))&CObject::Serialize)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
