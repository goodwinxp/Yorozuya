#include <INI_SectionDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::INI_SectionGetKey2_ptr INI_SectionGetKey2_next(nullptr);
        Info::INI_SectionGetKey2_clbk INI_SectionGetKey2_user(nullptr);
        
        
        Info::INI_Sectionctor_INI_Section4_ptr INI_Sectionctor_INI_Section4_next(nullptr);
        Info::INI_Sectionctor_INI_Section4_clbk INI_Sectionctor_INI_Section4_user(nullptr);
        
        
        Info::INI_Sectiondtor_INI_Section8_ptr INI_Sectiondtor_INI_Section8_next(nullptr);
        Info::INI_Sectiondtor_INI_Section8_clbk INI_Sectiondtor_INI_Section8_user(nullptr);
        
        struct INI_Key* INI_SectionGetKey2_wrapper(struct INI_Section* _this, char* strKey)
        {
           return INI_SectionGetKey2_user(_this, strKey, INI_SectionGetKey2_next);
        };
        
        void INI_Sectionctor_INI_Section4_wrapper(struct INI_Section* _this)
        {
           INI_Sectionctor_INI_Section4_user(_this, INI_Sectionctor_INI_Section4_next);
        };
        
        void INI_Sectiondtor_INI_Section8_wrapper(struct INI_Section* _this)
        {
           INI_Sectiondtor_INI_Section8_user(_this, INI_Sectiondtor_INI_Section8_next);
        };
        
        ::std::array<hook_record, 3> INI_Section_functions = 
        {
            _hook_record {
                (LPVOID)0x14046c270L,
                (LPVOID *)&INI_SectionGetKey2_user,
                (LPVOID *)&INI_SectionGetKey2_next,
                (LPVOID)cast_pointer_function(INI_SectionGetKey2_wrapper),
                (LPVOID)cast_pointer_function((struct INI_Key*(INI_Section::*)(char*))&INI_Section::GetKey)
            },
            _hook_record {
                (LPVOID)0x140470050L,
                (LPVOID *)&INI_Sectionctor_INI_Section4_user,
                (LPVOID *)&INI_Sectionctor_INI_Section4_next,
                (LPVOID)cast_pointer_function(INI_Sectionctor_INI_Section4_wrapper),
                (LPVOID)cast_pointer_function((void(INI_Section::*)())&INI_Section::ctor_INI_Section)
            },
            _hook_record {
                (LPVOID)0x14046fc50L,
                (LPVOID *)&INI_Sectiondtor_INI_Section8_user,
                (LPVOID *)&INI_Sectiondtor_INI_Section8_next,
                (LPVOID)cast_pointer_function(INI_Sectiondtor_INI_Section8_wrapper),
                (LPVOID)cast_pointer_function((void(INI_Section::*)())&INI_Section::dtor_INI_Section)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
