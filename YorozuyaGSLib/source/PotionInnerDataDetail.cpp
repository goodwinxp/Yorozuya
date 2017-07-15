#include <PotionInnerDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::PotionInnerDataInit2_ptr PotionInnerDataInit2_next(nullptr);
        Info::PotionInnerDataInit2_clbk PotionInnerDataInit2_user(nullptr);
        
        
        Info::PotionInnerDatactor_PotionInnerData4_ptr PotionInnerDatactor_PotionInnerData4_next(nullptr);
        Info::PotionInnerDatactor_PotionInnerData4_clbk PotionInnerDatactor_PotionInnerData4_user(nullptr);
        
        
        Info::PotionInnerDatadtor_PotionInnerData6_ptr PotionInnerDatadtor_PotionInnerData6_next(nullptr);
        Info::PotionInnerDatadtor_PotionInnerData6_clbk PotionInnerDatadtor_PotionInnerData6_user(nullptr);
        
        void PotionInnerDataInit2_wrapper(struct PotionInnerData* _this)
        {
           PotionInnerDataInit2_user(_this, PotionInnerDataInit2_next);
        };
        
        void PotionInnerDatactor_PotionInnerData4_wrapper(struct PotionInnerData* _this)
        {
           PotionInnerDatactor_PotionInnerData4_user(_this, PotionInnerDatactor_PotionInnerData4_next);
        };
        
        void PotionInnerDatadtor_PotionInnerData6_wrapper(struct PotionInnerData* _this)
        {
           PotionInnerDatadtor_PotionInnerData6_user(_this, PotionInnerDatadtor_PotionInnerData6_next);
        };
        
        ::std::array<hook_record, 3> PotionInnerData_functions = 
        {
            _hook_record {
                (LPVOID)0x1403a1280L,
                (LPVOID *)&PotionInnerDataInit2_user,
                (LPVOID *)&PotionInnerDataInit2_next,
                (LPVOID)cast_pointer_function(PotionInnerDataInit2_wrapper),
                (LPVOID)cast_pointer_function((void(PotionInnerData::*)())&PotionInnerData::Init)
            },
            _hook_record {
                (LPVOID)0x1403a1220L,
                (LPVOID *)&PotionInnerDatactor_PotionInnerData4_user,
                (LPVOID *)&PotionInnerDatactor_PotionInnerData4_next,
                (LPVOID)cast_pointer_function(PotionInnerDatactor_PotionInnerData4_wrapper),
                (LPVOID)cast_pointer_function((void(PotionInnerData::*)())&PotionInnerData::ctor_PotionInnerData)
            },
            _hook_record {
                (LPVOID)0x1403a1270L,
                (LPVOID *)&PotionInnerDatadtor_PotionInnerData6_user,
                (LPVOID *)&PotionInnerDatadtor_PotionInnerData6_next,
                (LPVOID)cast_pointer_function(PotionInnerDatadtor_PotionInnerData6_wrapper),
                (LPVOID)cast_pointer_function((void(PotionInnerData::*)())&PotionInnerData::dtor_PotionInnerData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
