#include <CSizeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CSizector_CSize1_ptr CSizector_CSize1_next(nullptr);
        Info::CSizector_CSize1_clbk CSizector_CSize1_user(nullptr);
        
        
        Info::CSizector_CSize2_ptr CSizector_CSize2_next(nullptr);
        Info::CSizector_CSize2_clbk CSizector_CSize2_user(nullptr);
        
        
        Info::CSizector_CSize3_ptr CSizector_CSize3_next(nullptr);
        Info::CSizector_CSize3_clbk CSizector_CSize3_user(nullptr);
        
        
        Info::CSizector_CSize4_ptr CSizector_CSize4_next(nullptr);
        Info::CSizector_CSize4_clbk CSizector_CSize4_user(nullptr);
        
        
        Info::CSizector_CSize5_ptr CSizector_CSize5_next(nullptr);
        Info::CSizector_CSize5_clbk CSizector_CSize5_user(nullptr);
        
        Info::CSizeSetSize6_ptr CSizeSetSize6_next(nullptr);
        Info::CSizeSetSize6_clbk CSizeSetSize6_user(nullptr);
        
        
        void CSizector_CSize1_wrapper(struct CSize* _this, int initCX, int initCY)
        {
           CSizector_CSize1_user(_this, initCX, initCY, CSizector_CSize1_next);
        };
        
        void CSizector_CSize2_wrapper(struct CSize* _this, struct tagPOINT initPt)
        {
           CSizector_CSize2_user(_this, initPt, CSizector_CSize2_next);
        };
        
        void CSizector_CSize3_wrapper(struct CSize* _this, struct tagSIZE initSize)
        {
           CSizector_CSize3_user(_this, initSize, CSizector_CSize3_next);
        };
        
        void CSizector_CSize4_wrapper(struct CSize* _this, unsigned int dwSize)
        {
           CSizector_CSize4_user(_this, dwSize, CSizector_CSize4_next);
        };
        
        void CSizector_CSize5_wrapper(struct CSize* _this)
        {
           CSizector_CSize5_user(_this, CSizector_CSize5_next);
        };
        void CSizeSetSize6_wrapper(struct CSize* _this, int CX, int CY)
        {
           CSizeSetSize6_user(_this, CX, CY, CSizeSetSize6_next);
        };
        
        ::std::array<hook_record, 6> CSize_functions = 
        {
            _hook_record {
                (LPVOID)0x1406705f0L,
                (LPVOID *)&CSizector_CSize1_user,
                (LPVOID *)&CSizector_CSize1_next,
                (LPVOID)cast_pointer_function(CSizector_CSize1_wrapper),
                (LPVOID)cast_pointer_function((void(CSize::*)(int, int))&CSize::ctor_CSize)
            },
            _hook_record {
                (LPVOID)0x140670660L,
                (LPVOID *)&CSizector_CSize2_user,
                (LPVOID *)&CSizector_CSize2_next,
                (LPVOID)cast_pointer_function(CSizector_CSize2_wrapper),
                (LPVOID)cast_pointer_function((void(CSize::*)(struct tagPOINT))&CSize::ctor_CSize)
            },
            _hook_record {
                (LPVOID)0x140670630L,
                (LPVOID *)&CSizector_CSize3_user,
                (LPVOID *)&CSizector_CSize3_next,
                (LPVOID)cast_pointer_function(CSizector_CSize3_wrapper),
                (LPVOID)cast_pointer_function((void(CSize::*)(struct tagSIZE))&CSize::ctor_CSize)
            },
            _hook_record {
                (LPVOID)0x140670690L,
                (LPVOID *)&CSizector_CSize4_user,
                (LPVOID *)&CSizector_CSize4_next,
                (LPVOID)cast_pointer_function(CSizector_CSize4_wrapper),
                (LPVOID)cast_pointer_function((void(CSize::*)(unsigned int))&CSize::ctor_CSize)
            },
            _hook_record {
                (LPVOID)0x1406705d0L,
                (LPVOID *)&CSizector_CSize5_user,
                (LPVOID *)&CSizector_CSize5_next,
                (LPVOID)cast_pointer_function(CSizector_CSize5_wrapper),
                (LPVOID)cast_pointer_function((void(CSize::*)())&CSize::ctor_CSize)
            },
            _hook_record {
                (LPVOID)0x1406707f0L,
                (LPVOID *)&CSizeSetSize6_user,
                (LPVOID *)&CSizeSetSize6_next,
                (LPVOID)cast_pointer_function(CSizeSetSize6_wrapper),
                (LPVOID)cast_pointer_function((void(CSize::*)(int, int))&CSize::SetSize)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
