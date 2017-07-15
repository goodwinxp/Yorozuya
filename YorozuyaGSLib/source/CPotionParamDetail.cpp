#include <CPotionParamDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CPotionParamctor_CPotionParam2_ptr CPotionParamctor_CPotionParam2_next(nullptr);
        Info::CPotionParamctor_CPotionParam2_clbk CPotionParamctor_CPotionParam2_user(nullptr);
        
        Info::CPotionParamInit4_ptr CPotionParamInit4_next(nullptr);
        Info::CPotionParamInit4_clbk CPotionParamInit4_user(nullptr);
        
        Info::CPotionParamIsUsableActDelay6_ptr CPotionParamIsUsableActDelay6_next(nullptr);
        Info::CPotionParamIsUsableActDelay6_clbk CPotionParamIsUsableActDelay6_user(nullptr);
        
        Info::CPotionParamSetPotionActDelay8_ptr CPotionParamSetPotionActDelay8_next(nullptr);
        Info::CPotionParamSetPotionActDelay8_clbk CPotionParamSetPotionActDelay8_user(nullptr);
        
        
        Info::CPotionParamdtor_CPotionParam10_ptr CPotionParamdtor_CPotionParam10_next(nullptr);
        Info::CPotionParamdtor_CPotionParam10_clbk CPotionParamdtor_CPotionParam10_user(nullptr);
        
        
        void CPotionParamctor_CPotionParam2_wrapper(struct CPotionParam* _this)
        {
           CPotionParamctor_CPotionParam2_user(_this, CPotionParamctor_CPotionParam2_next);
        };
        void CPotionParamInit4_wrapper(struct CPotionParam* _this, struct CPlayer* pMaster)
        {
           CPotionParamInit4_user(_this, pMaster, CPotionParamInit4_next);
        };
        bool CPotionParamIsUsableActDelay6_wrapper(struct CPotionParam* _this, char byPotionClass, unsigned int dwCurrTime)
        {
           return CPotionParamIsUsableActDelay6_user(_this, byPotionClass, dwCurrTime, CPotionParamIsUsableActDelay6_next);
        };
        void CPotionParamSetPotionActDelay8_wrapper(struct CPotionParam* _this, char byPotionClass, unsigned int dwCurrTime, unsigned int dwActDelay)
        {
           CPotionParamSetPotionActDelay8_user(_this, byPotionClass, dwCurrTime, dwActDelay, CPotionParamSetPotionActDelay8_next);
        };
        
        void CPotionParamdtor_CPotionParam10_wrapper(struct CPotionParam* _this)
        {
           CPotionParamdtor_CPotionParam10_user(_this, CPotionParamdtor_CPotionParam10_next);
        };
        
        ::std::array<hook_record, 5> CPotionParam_functions = 
        {
            _hook_record {
                (LPVOID)0x1400729f0L,
                (LPVOID *)&CPotionParamctor_CPotionParam2_user,
                (LPVOID *)&CPotionParamctor_CPotionParam2_next,
                (LPVOID)cast_pointer_function(CPotionParamctor_CPotionParam2_wrapper),
                (LPVOID)cast_pointer_function((void(CPotionParam::*)())&CPotionParam::ctor_CPotionParam)
            },
            _hook_record {
                (LPVOID)0x140078c90L,
                (LPVOID *)&CPotionParamInit4_user,
                (LPVOID *)&CPotionParamInit4_next,
                (LPVOID)cast_pointer_function(CPotionParamInit4_wrapper),
                (LPVOID)cast_pointer_function((void(CPotionParam::*)(struct CPlayer*))&CPotionParam::Init)
            },
            _hook_record {
                (LPVOID)0x1403a1030L,
                (LPVOID *)&CPotionParamIsUsableActDelay6_user,
                (LPVOID *)&CPotionParamIsUsableActDelay6_next,
                (LPVOID)cast_pointer_function(CPotionParamIsUsableActDelay6_wrapper),
                (LPVOID)cast_pointer_function((bool(CPotionParam::*)(char, unsigned int))&CPotionParam::IsUsableActDelay)
            },
            _hook_record {
                (LPVOID)0x1400750b0L,
                (LPVOID *)&CPotionParamSetPotionActDelay8_user,
                (LPVOID *)&CPotionParamSetPotionActDelay8_next,
                (LPVOID)cast_pointer_function(CPotionParamSetPotionActDelay8_wrapper),
                (LPVOID)cast_pointer_function((void(CPotionParam::*)(char, unsigned int, unsigned int))&CPotionParam::SetPotionActDelay)
            },
            _hook_record {
                (LPVOID)0x140072b30L,
                (LPVOID *)&CPotionParamdtor_CPotionParam10_user,
                (LPVOID *)&CPotionParamdtor_CPotionParam10_next,
                (LPVOID)cast_pointer_function(CPotionParamdtor_CPotionParam10_wrapper),
                (LPVOID)cast_pointer_function((void(CPotionParam::*)())&CPotionParam::dtor_CPotionParam)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
