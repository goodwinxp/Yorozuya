#include <_res_dummyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_res_dummyGetDelay2_ptr _res_dummyGetDelay2_next(nullptr);
        Info::_res_dummyGetDelay2_clbk _res_dummyGetDelay2_user(nullptr);
        
        Info::_res_dummyGetQualityGrade4_ptr _res_dummyGetQualityGrade4_next(nullptr);
        Info::_res_dummyGetQualityGrade4_clbk _res_dummyGetQualityGrade4_user(nullptr);
        
        Info::_res_dummySetDummy6_ptr _res_dummySetDummy6_next(nullptr);
        Info::_res_dummySetDummy6_clbk _res_dummySetDummy6_user(nullptr);
        
        Info::_res_dummySetRangeGrade8_ptr _res_dummySetRangeGrade8_next(nullptr);
        Info::_res_dummySetRangeGrade8_clbk _res_dummySetRangeGrade8_user(nullptr);
        
        
        Info::_res_dummyctor__res_dummy10_ptr _res_dummyctor__res_dummy10_next(nullptr);
        Info::_res_dummyctor__res_dummy10_clbk _res_dummyctor__res_dummy10_user(nullptr);
        
        int _res_dummyGetDelay2_wrapper(struct _res_dummy* _this, char bySector, bool bIsPcbang)
        {
           return _res_dummyGetDelay2_user(_this, bySector, bIsPcbang, _res_dummyGetDelay2_next);
        };
        char _res_dummyGetQualityGrade4_wrapper(struct _res_dummy* _this)
        {
           return _res_dummyGetQualityGrade4_user(_this, _res_dummyGetQualityGrade4_next);
        };
        bool _res_dummySetDummy6_wrapper(struct _res_dummy* _this, struct _dummy_position* pDumPos, char byQualityGrade)
        {
           return _res_dummySetDummy6_user(_this, pDumPos, byQualityGrade, _res_dummySetDummy6_next);
        };
        void _res_dummySetRangeGrade8_wrapper(struct _res_dummy* _this)
        {
           _res_dummySetRangeGrade8_user(_this, _res_dummySetRangeGrade8_next);
        };
        
        void _res_dummyctor__res_dummy10_wrapper(struct _res_dummy* _this)
        {
           _res_dummyctor__res_dummy10_user(_this, _res_dummyctor__res_dummy10_next);
        };
        
        ::std::array<hook_record, 5> _res_dummy_functions = 
        {
            _hook_record {
                (LPVOID)0x1400d3c70L,
                (LPVOID *)&_res_dummyGetDelay2_user,
                (LPVOID *)&_res_dummyGetDelay2_next,
                (LPVOID)cast_pointer_function(_res_dummyGetDelay2_wrapper),
                (LPVOID)cast_pointer_function((int(_res_dummy::*)(char, bool))&_res_dummy::GetDelay)
            },
            _hook_record {
                (LPVOID)0x1400d3db0L,
                (LPVOID *)&_res_dummyGetQualityGrade4_user,
                (LPVOID *)&_res_dummyGetQualityGrade4_next,
                (LPVOID)cast_pointer_function(_res_dummyGetQualityGrade4_wrapper),
                (LPVOID)cast_pointer_function((char(_res_dummy::*)())&_res_dummy::GetQualityGrade)
            },
            _hook_record {
                (LPVOID)0x140189540L,
                (LPVOID *)&_res_dummySetDummy6_user,
                (LPVOID *)&_res_dummySetDummy6_next,
                (LPVOID)cast_pointer_function(_res_dummySetDummy6_wrapper),
                (LPVOID)cast_pointer_function((bool(_res_dummy::*)(struct _dummy_position*, char))&_res_dummy::SetDummy)
            },
            _hook_record {
                (LPVOID)0x140189000L,
                (LPVOID *)&_res_dummySetRangeGrade8_user,
                (LPVOID *)&_res_dummySetRangeGrade8_next,
                (LPVOID)cast_pointer_function(_res_dummySetRangeGrade8_wrapper),
                (LPVOID)cast_pointer_function((void(_res_dummy::*)())&_res_dummy::SetRangeGrade)
            },
            _hook_record {
                (LPVOID)0x1401894b0L,
                (LPVOID *)&_res_dummyctor__res_dummy10_user,
                (LPVOID *)&_res_dummyctor__res_dummy10_next,
                (LPVOID)cast_pointer_function(_res_dummyctor__res_dummy10_wrapper),
                (LPVOID)cast_pointer_function((void(_res_dummy::*)())&_res_dummy::ctor__res_dummy)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
