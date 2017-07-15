#include <GuildCreateEventInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::GuildCreateEventInfoApplyModifiedGuildEventInfo2_ptr GuildCreateEventInfoApplyModifiedGuildEventInfo2_next(nullptr);
        Info::GuildCreateEventInfoApplyModifiedGuildEventInfo2_clbk GuildCreateEventInfoApplyModifiedGuildEventInfo2_user(nullptr);
        
        Info::GuildCreateEventInfoCheckEventDate4_ptr GuildCreateEventInfoCheckEventDate4_next(nullptr);
        Info::GuildCreateEventInfoCheckEventDate4_clbk GuildCreateEventInfoCheckEventDate4_user(nullptr);
        
        Info::GuildCreateEventInfoGetEmblemDalant6_ptr GuildCreateEventInfoGetEmblemDalant6_next(nullptr);
        Info::GuildCreateEventInfoGetEmblemDalant6_clbk GuildCreateEventInfoGetEmblemDalant6_user(nullptr);
        
        Info::GuildCreateEventInfoGetEstConsumeDalant8_ptr GuildCreateEventInfoGetEstConsumeDalant8_next(nullptr);
        Info::GuildCreateEventInfoGetEstConsumeDalant8_clbk GuildCreateEventInfoGetEstConsumeDalant8_user(nullptr);
        
        
        Info::GuildCreateEventInfoctor_GuildCreateEventInfo10_ptr GuildCreateEventInfoctor_GuildCreateEventInfo10_next(nullptr);
        Info::GuildCreateEventInfoctor_GuildCreateEventInfo10_clbk GuildCreateEventInfoctor_GuildCreateEventInfo10_user(nullptr);
        
        Info::GuildCreateEventInfoInit12_ptr GuildCreateEventInfoInit12_next(nullptr);
        Info::GuildCreateEventInfoInit12_clbk GuildCreateEventInfoInit12_user(nullptr);
        
        Info::GuildCreateEventInfoLoop14_ptr GuildCreateEventInfoLoop14_next(nullptr);
        Info::GuildCreateEventInfoLoop14_clbk GuildCreateEventInfoLoop14_user(nullptr);
        
        Info::GuildCreateEventInfoReadEventInfo16_ptr GuildCreateEventInfoReadEventInfo16_next(nullptr);
        Info::GuildCreateEventInfoReadEventInfo16_clbk GuildCreateEventInfoReadEventInfo16_user(nullptr);
        
        Info::GuildCreateEventInfoSetConsumeDalantFree18_ptr GuildCreateEventInfoSetConsumeDalantFree18_next(nullptr);
        Info::GuildCreateEventInfoSetConsumeDalantFree18_clbk GuildCreateEventInfoSetConsumeDalantFree18_user(nullptr);
        
        
        Info::GuildCreateEventInfodtor_GuildCreateEventInfo20_ptr GuildCreateEventInfodtor_GuildCreateEventInfo20_next(nullptr);
        Info::GuildCreateEventInfodtor_GuildCreateEventInfo20_clbk GuildCreateEventInfodtor_GuildCreateEventInfo20_user(nullptr);
        
        bool GuildCreateEventInfoApplyModifiedGuildEventInfo2_wrapper(struct GuildCreateEventInfo* _this)
        {
           return GuildCreateEventInfoApplyModifiedGuildEventInfo2_user(_this, GuildCreateEventInfoApplyModifiedGuildEventInfo2_next);
        };
        bool GuildCreateEventInfoCheckEventDate4_wrapper(struct GuildCreateEventInfo* _this)
        {
           return GuildCreateEventInfoCheckEventDate4_user(_this, GuildCreateEventInfoCheckEventDate4_next);
        };
        unsigned int GuildCreateEventInfoGetEmblemDalant6_wrapper(struct GuildCreateEventInfo* _this)
        {
           return GuildCreateEventInfoGetEmblemDalant6_user(_this, GuildCreateEventInfoGetEmblemDalant6_next);
        };
        unsigned int GuildCreateEventInfoGetEstConsumeDalant8_wrapper(struct GuildCreateEventInfo* _this)
        {
           return GuildCreateEventInfoGetEstConsumeDalant8_user(_this, GuildCreateEventInfoGetEstConsumeDalant8_next);
        };
        
        void GuildCreateEventInfoctor_GuildCreateEventInfo10_wrapper(struct GuildCreateEventInfo* _this)
        {
           GuildCreateEventInfoctor_GuildCreateEventInfo10_user(_this, GuildCreateEventInfoctor_GuildCreateEventInfo10_next);
        };
        void GuildCreateEventInfoInit12_wrapper(struct GuildCreateEventInfo* _this)
        {
           GuildCreateEventInfoInit12_user(_this, GuildCreateEventInfoInit12_next);
        };
        void GuildCreateEventInfoLoop14_wrapper(struct GuildCreateEventInfo* _this)
        {
           GuildCreateEventInfoLoop14_user(_this, GuildCreateEventInfoLoop14_next);
        };
        void GuildCreateEventInfoReadEventInfo16_wrapper(struct GuildCreateEventInfo* _this)
        {
           GuildCreateEventInfoReadEventInfo16_user(_this, GuildCreateEventInfoReadEventInfo16_next);
        };
        void GuildCreateEventInfoSetConsumeDalantFree18_wrapper(struct GuildCreateEventInfo* _this, bool bEnable)
        {
           GuildCreateEventInfoSetConsumeDalantFree18_user(_this, bEnable, GuildCreateEventInfoSetConsumeDalantFree18_next);
        };
        
        void GuildCreateEventInfodtor_GuildCreateEventInfo20_wrapper(struct GuildCreateEventInfo* _this)
        {
           GuildCreateEventInfodtor_GuildCreateEventInfo20_user(_this, GuildCreateEventInfodtor_GuildCreateEventInfo20_next);
        };
        
        ::std::array<hook_record, 10> GuildCreateEventInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x14025a630L,
                (LPVOID *)&GuildCreateEventInfoApplyModifiedGuildEventInfo2_user,
                (LPVOID *)&GuildCreateEventInfoApplyModifiedGuildEventInfo2_next,
                (LPVOID)cast_pointer_function(GuildCreateEventInfoApplyModifiedGuildEventInfo2_wrapper),
                (LPVOID)cast_pointer_function((bool(GuildCreateEventInfo::*)())&GuildCreateEventInfo::ApplyModifiedGuildEventInfo)
            },
            _hook_record {
                (LPVOID)0x14025a730L,
                (LPVOID *)&GuildCreateEventInfoCheckEventDate4_user,
                (LPVOID *)&GuildCreateEventInfoCheckEventDate4_next,
                (LPVOID)cast_pointer_function(GuildCreateEventInfoCheckEventDate4_wrapper),
                (LPVOID)cast_pointer_function((bool(GuildCreateEventInfo::*)())&GuildCreateEventInfo::CheckEventDate)
            },
            _hook_record {
                (LPVOID)0x14025d640L,
                (LPVOID *)&GuildCreateEventInfoGetEmblemDalant6_user,
                (LPVOID *)&GuildCreateEventInfoGetEmblemDalant6_next,
                (LPVOID)cast_pointer_function(GuildCreateEventInfoGetEmblemDalant6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(GuildCreateEventInfo::*)())&GuildCreateEventInfo::GetEmblemDalant)
            },
            _hook_record {
                (LPVOID)0x1400ad130L,
                (LPVOID *)&GuildCreateEventInfoGetEstConsumeDalant8_user,
                (LPVOID *)&GuildCreateEventInfoGetEstConsumeDalant8_next,
                (LPVOID)cast_pointer_function(GuildCreateEventInfoGetEstConsumeDalant8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(GuildCreateEventInfo::*)())&GuildCreateEventInfo::GetEstConsumeDalant)
            },
            _hook_record {
                (LPVOID)0x140202f60L,
                (LPVOID *)&GuildCreateEventInfoctor_GuildCreateEventInfo10_user,
                (LPVOID *)&GuildCreateEventInfoctor_GuildCreateEventInfo10_next,
                (LPVOID)cast_pointer_function(GuildCreateEventInfoctor_GuildCreateEventInfo10_wrapper),
                (LPVOID)cast_pointer_function((void(GuildCreateEventInfo::*)())&GuildCreateEventInfo::ctor_GuildCreateEventInfo)
            },
            _hook_record {
                (LPVOID)0x14025a310L,
                (LPVOID *)&GuildCreateEventInfoInit12_user,
                (LPVOID *)&GuildCreateEventInfoInit12_next,
                (LPVOID)cast_pointer_function(GuildCreateEventInfoInit12_wrapper),
                (LPVOID)cast_pointer_function((void(GuildCreateEventInfo::*)())&GuildCreateEventInfo::Init)
            },
            _hook_record {
                (LPVOID)0x14025a3f0L,
                (LPVOID *)&GuildCreateEventInfoLoop14_user,
                (LPVOID *)&GuildCreateEventInfoLoop14_next,
                (LPVOID)cast_pointer_function(GuildCreateEventInfoLoop14_wrapper),
                (LPVOID)cast_pointer_function((void(GuildCreateEventInfo::*)())&GuildCreateEventInfo::Loop)
            },
            _hook_record {
                (LPVOID)0x14025a4f0L,
                (LPVOID *)&GuildCreateEventInfoReadEventInfo16_user,
                (LPVOID *)&GuildCreateEventInfoReadEventInfo16_next,
                (LPVOID)cast_pointer_function(GuildCreateEventInfoReadEventInfo16_wrapper),
                (LPVOID)cast_pointer_function((void(GuildCreateEventInfo::*)())&GuildCreateEventInfo::ReadEventInfo)
            },
            _hook_record {
                (LPVOID)0x14025a6e0L,
                (LPVOID *)&GuildCreateEventInfoSetConsumeDalantFree18_user,
                (LPVOID *)&GuildCreateEventInfoSetConsumeDalantFree18_next,
                (LPVOID)cast_pointer_function(GuildCreateEventInfoSetConsumeDalantFree18_wrapper),
                (LPVOID)cast_pointer_function((void(GuildCreateEventInfo::*)(bool))&GuildCreateEventInfo::SetConsumeDalantFree)
            },
            _hook_record {
                (LPVOID)0x140202fb0L,
                (LPVOID *)&GuildCreateEventInfodtor_GuildCreateEventInfo20_user,
                (LPVOID *)&GuildCreateEventInfodtor_GuildCreateEventInfo20_next,
                (LPVOID)cast_pointer_function(GuildCreateEventInfodtor_GuildCreateEventInfo20_wrapper),
                (LPVOID)cast_pointer_function((void(GuildCreateEventInfo::*)())&GuildCreateEventInfo::dtor_GuildCreateEventInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
