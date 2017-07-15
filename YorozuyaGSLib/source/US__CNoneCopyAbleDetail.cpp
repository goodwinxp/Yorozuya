#include <US__CNoneCopyAbleDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace US
    {
        namespace Detail
        {
            
            Info::US__CNoneCopyAblector_CNoneCopyAble2_ptr US__CNoneCopyAblector_CNoneCopyAble2_next(nullptr);
            Info::US__CNoneCopyAblector_CNoneCopyAble2_clbk US__CNoneCopyAblector_CNoneCopyAble2_user(nullptr);
            
            
            Info::US__CNoneCopyAbledtor_CNoneCopyAble4_ptr US__CNoneCopyAbledtor_CNoneCopyAble4_next(nullptr);
            Info::US__CNoneCopyAbledtor_CNoneCopyAble4_clbk US__CNoneCopyAbledtor_CNoneCopyAble4_user(nullptr);
            
            
            void US__CNoneCopyAblector_CNoneCopyAble2_wrapper(struct US::CNoneCopyAble* _this)
            {
               US__CNoneCopyAblector_CNoneCopyAble2_user(_this, US__CNoneCopyAblector_CNoneCopyAble2_next);
            };
            
            void US__CNoneCopyAbledtor_CNoneCopyAble4_wrapper(struct US::CNoneCopyAble* _this)
            {
               US__CNoneCopyAbledtor_CNoneCopyAble4_user(_this, US__CNoneCopyAbledtor_CNoneCopyAble4_next);
            };
            
            ::std::array<hook_record, 2> CNoneCopyAble_functions = 
            {
                _hook_record {
                    (LPVOID)0x14041d6d0L,
                    (LPVOID *)&US__CNoneCopyAblector_CNoneCopyAble2_user,
                    (LPVOID *)&US__CNoneCopyAblector_CNoneCopyAble2_next,
                    (LPVOID)cast_pointer_function(US__CNoneCopyAblector_CNoneCopyAble2_wrapper),
                    (LPVOID)cast_pointer_function((void(US::CNoneCopyAble::*)())&US::CNoneCopyAble::ctor_CNoneCopyAble)
                },
                _hook_record {
                    (LPVOID)0x14041d760L,
                    (LPVOID *)&US__CNoneCopyAbledtor_CNoneCopyAble4_user,
                    (LPVOID *)&US__CNoneCopyAbledtor_CNoneCopyAble4_next,
                    (LPVOID)cast_pointer_function(US__CNoneCopyAbledtor_CNoneCopyAble4_wrapper),
                    (LPVOID)cast_pointer_function((void(US::CNoneCopyAble::*)())&US::CNoneCopyAble::dtor_CNoneCopyAble)
                },
            };
        }; // end namespace Detail
    }; // end namespace US
END_ATF_NAMESPACE
