#include <CTermDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CTermctor_CTerm2_ptr CTermctor_CTerm2_next(nullptr);
        Info::CTermctor_CTerm2_clbk CTermctor_CTerm2_user(nullptr);
        
        Info::CTermGetTerm4_ptr CTermGetTerm4_next(nullptr);
        Info::CTermGetTerm4_clbk CTermGetTerm4_user(nullptr);
        
        
        void CTermctor_CTerm2_wrapper(struct CTerm* _this)
        {
           CTermctor_CTerm2_user(_this, CTermctor_CTerm2_next);
        };
        unsigned int CTermGetTerm4_wrapper(struct CTerm* _this)
        {
           return CTermGetTerm4_user(_this, CTermGetTerm4_next);
        };
        
        ::std::array<hook_record, 2> CTerm_functions = 
        {
            _hook_record {
                (LPVOID)0x1404390a0L,
                (LPVOID *)&CTermctor_CTerm2_user,
                (LPVOID *)&CTermctor_CTerm2_next,
                (LPVOID)cast_pointer_function(CTermctor_CTerm2_wrapper),
                (LPVOID)cast_pointer_function((void(CTerm::*)())&CTerm::ctor_CTerm)
            },
            _hook_record {
                (LPVOID)0x1404390f0L,
                (LPVOID *)&CTermGetTerm4_user,
                (LPVOID *)&CTermGetTerm4_next,
                (LPVOID)cast_pointer_function(CTermGetTerm4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CTerm::*)())&CTerm::GetTerm)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
