#include <UsRefObjectDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::UsRefObjectDecRefCount2_ptr UsRefObjectDecRefCount2_next(nullptr);
        Info::UsRefObjectDecRefCount2_clbk UsRefObjectDecRefCount2_user(nullptr);
        
        Info::UsRefObjectIncRefCount4_ptr UsRefObjectIncRefCount4_next(nullptr);
        Info::UsRefObjectIncRefCount4_clbk UsRefObjectIncRefCount4_user(nullptr);
        
        
        Info::UsRefObjectctor_UsRefObject6_ptr UsRefObjectctor_UsRefObject6_next(nullptr);
        Info::UsRefObjectctor_UsRefObject6_clbk UsRefObjectctor_UsRefObject6_user(nullptr);
        
        
        Info::UsRefObjectdtor_UsRefObject11_ptr UsRefObjectdtor_UsRefObject11_next(nullptr);
        Info::UsRefObjectdtor_UsRefObject11_clbk UsRefObjectdtor_UsRefObject11_user(nullptr);
        
        void UsRefObjectDecRefCount2_wrapper(struct UsRefObject* _this)
        {
           UsRefObjectDecRefCount2_user(_this, UsRefObjectDecRefCount2_next);
        };
        void UsRefObjectIncRefCount4_wrapper(struct UsRefObject* _this)
        {
           UsRefObjectIncRefCount4_user(_this, UsRefObjectIncRefCount4_next);
        };
        
        void UsRefObjectctor_UsRefObject6_wrapper(struct UsRefObject* _this)
        {
           UsRefObjectctor_UsRefObject6_user(_this, UsRefObjectctor_UsRefObject6_next);
        };
        
        void UsRefObjectdtor_UsRefObject11_wrapper(struct UsRefObject* _this)
        {
           UsRefObjectdtor_UsRefObject11_user(_this, UsRefObjectdtor_UsRefObject11_next);
        };
        
        ::std::array<hook_record, 4> UsRefObject_functions = 
        {
            _hook_record {
                (LPVOID)0x14014cd40L,
                (LPVOID *)&UsRefObjectDecRefCount2_user,
                (LPVOID *)&UsRefObjectDecRefCount2_next,
                (LPVOID)cast_pointer_function(UsRefObjectDecRefCount2_wrapper),
                (LPVOID)cast_pointer_function((void(UsRefObject::*)())&UsRefObject::DecRefCount)
            },
            _hook_record {
                (LPVOID)0x14014cc40L,
                (LPVOID *)&UsRefObjectIncRefCount4_user,
                (LPVOID *)&UsRefObjectIncRefCount4_next,
                (LPVOID)cast_pointer_function(UsRefObjectIncRefCount4_wrapper),
                (LPVOID)cast_pointer_function((void(UsRefObject::*)())&UsRefObject::IncRefCount)
            },
            _hook_record {
                (LPVOID)0x1401633f0L,
                (LPVOID *)&UsRefObjectctor_UsRefObject6_user,
                (LPVOID *)&UsRefObjectctor_UsRefObject6_next,
                (LPVOID)cast_pointer_function(UsRefObjectctor_UsRefObject6_wrapper),
                (LPVOID)cast_pointer_function((void(UsRefObject::*)())&UsRefObject::ctor_UsRefObject)
            },
            _hook_record {
                (LPVOID)0x1401634b0L,
                (LPVOID *)&UsRefObjectdtor_UsRefObject11_user,
                (LPVOID *)&UsRefObjectdtor_UsRefObject11_next,
                (LPVOID)cast_pointer_function(UsRefObjectdtor_UsRefObject11_wrapper),
                (LPVOID)cast_pointer_function((void(UsRefObject::*)())&UsRefObject::dtor_UsRefObject)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
