#include <CHolyScheduleDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CHolyScheduleDatactor_CHolyScheduleData2_ptr CHolyScheduleDatactor_CHolyScheduleData2_next(nullptr);
        Info::CHolyScheduleDatactor_CHolyScheduleData2_clbk CHolyScheduleDatactor_CHolyScheduleData2_user(nullptr);
        
        Info::CHolyScheduleDataGetIndex4_ptr CHolyScheduleDataGetIndex4_next(nullptr);
        Info::CHolyScheduleDataGetIndex4_clbk CHolyScheduleDataGetIndex4_user(nullptr);
        
        Info::CHolyScheduleDataGetTotalSceduleTerm6_ptr CHolyScheduleDataGetTotalSceduleTerm6_next(nullptr);
        Info::CHolyScheduleDataGetTotalSceduleTerm6_clbk CHolyScheduleDataGetTotalSceduleTerm6_user(nullptr);
        
        Info::CHolyScheduleDataInit8_ptr CHolyScheduleDataInit8_next(nullptr);
        Info::CHolyScheduleDataInit8_clbk CHolyScheduleDataInit8_user(nullptr);
        
        
        Info::CHolyScheduleDatadtor_CHolyScheduleData10_ptr CHolyScheduleDatadtor_CHolyScheduleData10_next(nullptr);
        Info::CHolyScheduleDatadtor_CHolyScheduleData10_clbk CHolyScheduleDatadtor_CHolyScheduleData10_user(nullptr);
        
        
        void CHolyScheduleDatactor_CHolyScheduleData2_wrapper(struct CHolyScheduleData* _this)
        {
           CHolyScheduleDatactor_CHolyScheduleData2_user(_this, CHolyScheduleDatactor_CHolyScheduleData2_next);
        };
        struct CHolyScheduleData::__HolyScheduleNode* CHolyScheduleDataGetIndex4_wrapper(struct CHolyScheduleData* _this, int nNumOfTime)
        {
           return CHolyScheduleDataGetIndex4_user(_this, nNumOfTime, CHolyScheduleDataGetIndex4_next);
        };
        unsigned int CHolyScheduleDataGetTotalSceduleTerm6_wrapper(struct CHolyScheduleData* _this, int nNumOfTime)
        {
           return CHolyScheduleDataGetTotalSceduleTerm6_user(_this, nNumOfTime, CHolyScheduleDataGetTotalSceduleTerm6_next);
        };
        void CHolyScheduleDataInit8_wrapper(struct CHolyScheduleData* _this)
        {
           CHolyScheduleDataInit8_user(_this, CHolyScheduleDataInit8_next);
        };
        
        void CHolyScheduleDatadtor_CHolyScheduleData10_wrapper(struct CHolyScheduleData* _this)
        {
           CHolyScheduleDatadtor_CHolyScheduleData10_user(_this, CHolyScheduleDatadtor_CHolyScheduleData10_next);
        };
        
        ::std::array<hook_record, 5> CHolyScheduleData_functions = 
        {
            _hook_record {
                (LPVOID)0x140284100L,
                (LPVOID *)&CHolyScheduleDatactor_CHolyScheduleData2_user,
                (LPVOID *)&CHolyScheduleDatactor_CHolyScheduleData2_next,
                (LPVOID)cast_pointer_function(CHolyScheduleDatactor_CHolyScheduleData2_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyScheduleData::*)())&CHolyScheduleData::ctor_CHolyScheduleData)
            },
            _hook_record {
                (LPVOID)0x1402842f0L,
                (LPVOID *)&CHolyScheduleDataGetIndex4_user,
                (LPVOID *)&CHolyScheduleDataGetIndex4_next,
                (LPVOID)cast_pointer_function(CHolyScheduleDataGetIndex4_wrapper),
                (LPVOID)cast_pointer_function((struct CHolyScheduleData::__HolyScheduleNode*(CHolyScheduleData::*)(int))&CHolyScheduleData::GetIndex)
            },
            _hook_record {
                (LPVOID)0x140284610L,
                (LPVOID *)&CHolyScheduleDataGetTotalSceduleTerm6_user,
                (LPVOID *)&CHolyScheduleDataGetTotalSceduleTerm6_next,
                (LPVOID)cast_pointer_function(CHolyScheduleDataGetTotalSceduleTerm6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CHolyScheduleData::*)(int))&CHolyScheduleData::GetTotalSceduleTerm)
            },
            _hook_record {
                (LPVOID)0x1402841a0L,
                (LPVOID *)&CHolyScheduleDataInit8_user,
                (LPVOID *)&CHolyScheduleDataInit8_next,
                (LPVOID)cast_pointer_function(CHolyScheduleDataInit8_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyScheduleData::*)())&CHolyScheduleData::Init)
            },
            _hook_record {
                (LPVOID)0x140284160L,
                (LPVOID *)&CHolyScheduleDatadtor_CHolyScheduleData10_user,
                (LPVOID *)&CHolyScheduleDatadtor_CHolyScheduleData10_next,
                (LPVOID)cast_pointer_function(CHolyScheduleDatadtor_CHolyScheduleData10_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyScheduleData::*)())&CHolyScheduleData::dtor_CHolyScheduleData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
