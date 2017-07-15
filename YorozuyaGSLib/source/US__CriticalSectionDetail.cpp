#include <US__CriticalSectionDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace US
    {
        namespace Detail
        {
            
            Info::US__CriticalSectionctor_CriticalSection2_ptr US__CriticalSectionctor_CriticalSection2_next(nullptr);
            Info::US__CriticalSectionctor_CriticalSection2_clbk US__CriticalSectionctor_CriticalSection2_user(nullptr);
            
            Info::US__CriticalSectionLock4_ptr US__CriticalSectionLock4_next(nullptr);
            Info::US__CriticalSectionLock4_clbk US__CriticalSectionLock4_user(nullptr);
            
            Info::US__CriticalSectionUnLock6_ptr US__CriticalSectionUnLock6_next(nullptr);
            Info::US__CriticalSectionUnLock6_clbk US__CriticalSectionUnLock6_user(nullptr);
            
            
            Info::US__CriticalSectiondtor_CriticalSection8_ptr US__CriticalSectiondtor_CriticalSection8_next(nullptr);
            Info::US__CriticalSectiondtor_CriticalSection8_clbk US__CriticalSectiondtor_CriticalSection8_user(nullptr);
            
            
            void US__CriticalSectionctor_CriticalSection2_wrapper(struct US::CriticalSection* _this)
            {
               US__CriticalSectionctor_CriticalSection2_user(_this, US__CriticalSectionctor_CriticalSection2_next);
            };
            void US__CriticalSectionLock4_wrapper(struct US::CriticalSection* _this)
            {
               US__CriticalSectionLock4_user(_this, US__CriticalSectionLock4_next);
            };
            void US__CriticalSectionUnLock6_wrapper(struct US::CriticalSection* _this)
            {
               US__CriticalSectionUnLock6_user(_this, US__CriticalSectionUnLock6_next);
            };
            
            void US__CriticalSectiondtor_CriticalSection8_wrapper(struct US::CriticalSection* _this)
            {
               US__CriticalSectiondtor_CriticalSection8_user(_this, US__CriticalSectiondtor_CriticalSection8_next);
            };
            
            ::std::array<hook_record, 4> CriticalSection_functions = 
            {
                _hook_record {
                    (LPVOID)0x14041e0d0L,
                    (LPVOID *)&US__CriticalSectionctor_CriticalSection2_user,
                    (LPVOID *)&US__CriticalSectionctor_CriticalSection2_next,
                    (LPVOID)cast_pointer_function(US__CriticalSectionctor_CriticalSection2_wrapper),
                    (LPVOID)cast_pointer_function((void(US::CriticalSection::*)())&US::CriticalSection::ctor_CriticalSection)
                },
                _hook_record {
                    (LPVOID)0x14041e530L,
                    (LPVOID *)&US__CriticalSectionLock4_user,
                    (LPVOID *)&US__CriticalSectionLock4_next,
                    (LPVOID)cast_pointer_function(US__CriticalSectionLock4_wrapper),
                    (LPVOID)cast_pointer_function((void(US::CriticalSection::*)())&US::CriticalSection::Lock)
                },
                _hook_record {
                    (LPVOID)0x14041e630L,
                    (LPVOID *)&US__CriticalSectionUnLock6_user,
                    (LPVOID *)&US__CriticalSectionUnLock6_next,
                    (LPVOID)cast_pointer_function(US__CriticalSectionUnLock6_wrapper),
                    (LPVOID)cast_pointer_function((void(US::CriticalSection::*)())&US::CriticalSection::UnLock)
                },
                _hook_record {
                    (LPVOID)0x14041e120L,
                    (LPVOID *)&US__CriticalSectiondtor_CriticalSection8_user,
                    (LPVOID *)&US__CriticalSectiondtor_CriticalSection8_next,
                    (LPVOID)cast_pointer_function(US__CriticalSectiondtor_CriticalSection8_wrapper),
                    (LPVOID)cast_pointer_function((void(US::CriticalSection::*)())&US::CriticalSection::dtor_CriticalSection)
                },
            };
        }; // end namespace Detail
    }; // end namespace US
END_ATF_NAMESPACE
