#include <CReturnGateCreateParamDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CReturnGateCreateParamctor_CReturnGateCreateParam2_ptr CReturnGateCreateParamctor_CReturnGateCreateParam2_next(nullptr);
        Info::CReturnGateCreateParamctor_CReturnGateCreateParam2_clbk CReturnGateCreateParamctor_CReturnGateCreateParam2_user(nullptr);
        
        Info::CReturnGateCreateParamGetOwner4_ptr CReturnGateCreateParamGetOwner4_next(nullptr);
        Info::CReturnGateCreateParamGetOwner4_clbk CReturnGateCreateParamGetOwner4_user(nullptr);
        
        
        Info::CReturnGateCreateParamdtor_CReturnGateCreateParam6_ptr CReturnGateCreateParamdtor_CReturnGateCreateParam6_next(nullptr);
        Info::CReturnGateCreateParamdtor_CReturnGateCreateParam6_clbk CReturnGateCreateParamdtor_CReturnGateCreateParam6_user(nullptr);
        
        
        void CReturnGateCreateParamctor_CReturnGateCreateParam2_wrapper(struct CReturnGateCreateParam* _this, struct CPlayer* pkOwner)
        {
           CReturnGateCreateParamctor_CReturnGateCreateParam2_user(_this, pkOwner, CReturnGateCreateParamctor_CReturnGateCreateParam2_next);
        };
        struct CPlayer* CReturnGateCreateParamGetOwner4_wrapper(struct CReturnGateCreateParam* _this)
        {
           return CReturnGateCreateParamGetOwner4_user(_this, CReturnGateCreateParamGetOwner4_next);
        };
        
        void CReturnGateCreateParamdtor_CReturnGateCreateParam6_wrapper(struct CReturnGateCreateParam* _this)
        {
           CReturnGateCreateParamdtor_CReturnGateCreateParam6_user(_this, CReturnGateCreateParamdtor_CReturnGateCreateParam6_next);
        };
        
        ::std::array<hook_record, 3> CReturnGateCreateParam_functions = 
        {
            _hook_record {
                (LPVOID)0x1401684e0L,
                (LPVOID *)&CReturnGateCreateParamctor_CReturnGateCreateParam2_user,
                (LPVOID *)&CReturnGateCreateParamctor_CReturnGateCreateParam2_next,
                (LPVOID)cast_pointer_function(CReturnGateCreateParamctor_CReturnGateCreateParam2_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGateCreateParam::*)(struct CPlayer*))&CReturnGateCreateParam::ctor_CReturnGateCreateParam)
            },
            _hook_record {
                (LPVOID)0x1401692d0L,
                (LPVOID *)&CReturnGateCreateParamGetOwner4_user,
                (LPVOID *)&CReturnGateCreateParamGetOwner4_next,
                (LPVOID)cast_pointer_function(CReturnGateCreateParamGetOwner4_wrapper),
                (LPVOID)cast_pointer_function((struct CPlayer*(CReturnGateCreateParam::*)())&CReturnGateCreateParam::GetOwner)
            },
            _hook_record {
                (LPVOID)0x140251510L,
                (LPVOID *)&CReturnGateCreateParamdtor_CReturnGateCreateParam6_user,
                (LPVOID *)&CReturnGateCreateParamdtor_CReturnGateCreateParam6_next,
                (LPVOID)cast_pointer_function(CReturnGateCreateParamdtor_CReturnGateCreateParam6_wrapper),
                (LPVOID)cast_pointer_function((void(CReturnGateCreateParam::*)())&CReturnGateCreateParam::dtor_CReturnGateCreateParam)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
