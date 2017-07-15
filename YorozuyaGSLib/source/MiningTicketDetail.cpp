#include <MiningTicketDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::MiningTicketAuthLastCriTicket2_ptr MiningTicketAuthLastCriTicket2_next(nullptr);
        Info::MiningTicketAuthLastCriTicket2_clbk MiningTicketAuthLastCriTicket2_user(nullptr);
        
        Info::MiningTicketAuthLastMentalTicket4_ptr MiningTicketAuthLastMentalTicket4_next(nullptr);
        Info::MiningTicketAuthLastMentalTicket4_clbk MiningTicketAuthLastMentalTicket4_user(nullptr);
        
        Info::MiningTicketGetLastCriTicket6_ptr MiningTicketGetLastCriTicket6_next(nullptr);
        Info::MiningTicketGetLastCriTicket6_clbk MiningTicketGetLastCriTicket6_user(nullptr);
        
        Info::MiningTicketGetLastMentalTicket8_ptr MiningTicketGetLastMentalTicket8_next(nullptr);
        Info::MiningTicketGetLastMentalTicket8_clbk MiningTicketGetLastMentalTicket8_user(nullptr);
        
        Info::MiningTicketInit10_ptr MiningTicketInit10_next(nullptr);
        Info::MiningTicketInit10_clbk MiningTicketInit10_user(nullptr);
        
        
        Info::MiningTicketctor_MiningTicket12_ptr MiningTicketctor_MiningTicket12_next(nullptr);
        Info::MiningTicketctor_MiningTicket12_clbk MiningTicketctor_MiningTicket12_user(nullptr);
        
        Info::MiningTicketSetLastCriTicket14_ptr MiningTicketSetLastCriTicket14_next(nullptr);
        Info::MiningTicketSetLastCriTicket14_clbk MiningTicketSetLastCriTicket14_user(nullptr);
        
        Info::MiningTicketSetLastCriTicket16_ptr MiningTicketSetLastCriTicket16_next(nullptr);
        Info::MiningTicketSetLastCriTicket16_clbk MiningTicketSetLastCriTicket16_user(nullptr);
        
        Info::MiningTicketSetLastMentalTicket18_ptr MiningTicketSetLastMentalTicket18_next(nullptr);
        Info::MiningTicketSetLastMentalTicket18_clbk MiningTicketSetLastMentalTicket18_user(nullptr);
        
        Info::MiningTicketSetLastMentalTicket20_ptr MiningTicketSetLastMentalTicket20_next(nullptr);
        Info::MiningTicketSetLastMentalTicket20_clbk MiningTicketSetLastMentalTicket20_user(nullptr);
        
        int MiningTicketAuthLastCriTicket2_wrapper(struct MiningTicket* _this, uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
        {
           return MiningTicketAuthLastCriTicket2_user(_this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime, MiningTicketAuthLastCriTicket2_next);
        };
        int MiningTicketAuthLastMentalTicket4_wrapper(struct MiningTicket* _this, uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
        {
           return MiningTicketAuthLastMentalTicket4_user(_this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime, MiningTicketAuthLastMentalTicket4_next);
        };
        unsigned int MiningTicketGetLastCriTicket6_wrapper(struct MiningTicket* _this)
        {
           return MiningTicketGetLastCriTicket6_user(_this, MiningTicketGetLastCriTicket6_next);
        };
        unsigned int MiningTicketGetLastMentalTicket8_wrapper(struct MiningTicket* _this)
        {
           return MiningTicketGetLastMentalTicket8_user(_this, MiningTicketGetLastMentalTicket8_next);
        };
        void MiningTicketInit10_wrapper(struct MiningTicket* _this)
        {
           MiningTicketInit10_user(_this, MiningTicketInit10_next);
        };
        
        void MiningTicketctor_MiningTicket12_wrapper(struct MiningTicket* _this)
        {
           MiningTicketctor_MiningTicket12_user(_this, MiningTicketctor_MiningTicket12_next);
        };
        void MiningTicketSetLastCriTicket14_wrapper(struct MiningTicket* _this, unsigned int uiCriTicket)
        {
           MiningTicketSetLastCriTicket14_user(_this, uiCriTicket, MiningTicketSetLastCriTicket14_next);
        };
        void MiningTicketSetLastCriTicket16_wrapper(struct MiningTicket* _this, uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
        {
           MiningTicketSetLastCriTicket16_user(_this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime, MiningTicketSetLastCriTicket16_next);
        };
        void MiningTicketSetLastMentalTicket18_wrapper(struct MiningTicket* _this, unsigned int uiMentalTicket)
        {
           MiningTicketSetLastMentalTicket18_user(_this, uiMentalTicket, MiningTicketSetLastMentalTicket18_next);
        };
        void MiningTicketSetLastMentalTicket20_wrapper(struct MiningTicket* _this, uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
        {
           MiningTicketSetLastMentalTicket20_user(_this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime, MiningTicketSetLastMentalTicket20_next);
        };
        
        ::std::array<hook_record, 10> MiningTicket_functions = 
        {
            _hook_record {
                (LPVOID)0x1400d01d0L,
                (LPVOID *)&MiningTicketAuthLastCriTicket2_user,
                (LPVOID *)&MiningTicketAuthLastCriTicket2_next,
                (LPVOID)cast_pointer_function(MiningTicketAuthLastCriTicket2_wrapper),
                (LPVOID)cast_pointer_function((int(MiningTicket::*)(uint16_t, char, char, char, char))&MiningTicket::AuthLastCriTicket)
            },
            _hook_record {
                (LPVOID)0x1400cfdb0L,
                (LPVOID *)&MiningTicketAuthLastMentalTicket4_user,
                (LPVOID *)&MiningTicketAuthLastMentalTicket4_next,
                (LPVOID)cast_pointer_function(MiningTicketAuthLastMentalTicket4_wrapper),
                (LPVOID)cast_pointer_function((int(MiningTicket::*)(uint16_t, char, char, char, char))&MiningTicket::AuthLastMentalTicket)
            },
            _hook_record {
                (LPVOID)0x1400d0000L,
                (LPVOID *)&MiningTicketGetLastCriTicket6_user,
                (LPVOID *)&MiningTicketGetLastCriTicket6_next,
                (LPVOID)cast_pointer_function(MiningTicketGetLastCriTicket6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(MiningTicket::*)())&MiningTicket::GetLastCriTicket)
            },
            _hook_record {
                (LPVOID)0x1400d0120L,
                (LPVOID *)&MiningTicketGetLastMentalTicket8_user,
                (LPVOID *)&MiningTicketGetLastMentalTicket8_next,
                (LPVOID)cast_pointer_function(MiningTicketGetLastMentalTicket8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(MiningTicket::*)())&MiningTicket::GetLastMentalTicket)
            },
            _hook_record {
                (LPVOID)0x140073b60L,
                (LPVOID *)&MiningTicketInit10_user,
                (LPVOID *)&MiningTicketInit10_next,
                (LPVOID)cast_pointer_function(MiningTicketInit10_wrapper),
                (LPVOID)cast_pointer_function((void(MiningTicket::*)())&MiningTicket::Init)
            },
            _hook_record {
                (LPVOID)0x140073b10L,
                (LPVOID *)&MiningTicketctor_MiningTicket12_user,
                (LPVOID *)&MiningTicketctor_MiningTicket12_next,
                (LPVOID)cast_pointer_function(MiningTicketctor_MiningTicket12_wrapper),
                (LPVOID)cast_pointer_function((void(MiningTicket::*)())&MiningTicket::ctor_MiningTicket)
            },
            _hook_record {
                (LPVOID)0x140078e90L,
                (LPVOID *)&MiningTicketSetLastCriTicket14_user,
                (LPVOID *)&MiningTicketSetLastCriTicket14_next,
                (LPVOID)cast_pointer_function(MiningTicketSetLastCriTicket14_wrapper),
                (LPVOID)cast_pointer_function((void(MiningTicket::*)(unsigned int))&MiningTicket::SetLastCriTicket)
            },
            _hook_record {
                (LPVOID)0x1400cff00L,
                (LPVOID *)&MiningTicketSetLastCriTicket16_user,
                (LPVOID *)&MiningTicketSetLastCriTicket16_next,
                (LPVOID)cast_pointer_function(MiningTicketSetLastCriTicket16_wrapper),
                (LPVOID)cast_pointer_function((void(MiningTicket::*)(uint16_t, char, char, char, char))&MiningTicket::SetLastCriTicket)
            },
            _hook_record {
                (LPVOID)0x140078eb0L,
                (LPVOID *)&MiningTicketSetLastMentalTicket18_user,
                (LPVOID *)&MiningTicketSetLastMentalTicket18_next,
                (LPVOID)cast_pointer_function(MiningTicketSetLastMentalTicket18_wrapper),
                (LPVOID)cast_pointer_function((void(MiningTicket::*)(unsigned int))&MiningTicket::SetLastMentalTicket)
            },
            _hook_record {
                (LPVOID)0x1400d0020L,
                (LPVOID *)&MiningTicketSetLastMentalTicket20_user,
                (LPVOID *)&MiningTicketSetLastMentalTicket20_next,
                (LPVOID)cast_pointer_function(MiningTicketSetLastMentalTicket20_wrapper),
                (LPVOID)cast_pointer_function((void(MiningTicket::*)(uint16_t, char, char, char, char))&MiningTicket::SetLastMentalTicket)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
