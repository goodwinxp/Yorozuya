#include <CNotifyNotifyRaceLeaderSownerUTaxrateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNotifyNotifyRaceLeaderSownerUTaxratector_CNotifyNotifyRaceLeaderSownerUTaxrate2_ptr CNotifyNotifyRaceLeaderSownerUTaxratector_CNotifyNotifyRaceLeaderSownerUTaxrate2_next(nullptr);
        Info::CNotifyNotifyRaceLeaderSownerUTaxratector_CNotifyNotifyRaceLeaderSownerUTaxrate2_clbk CNotifyNotifyRaceLeaderSownerUTaxratector_CNotifyNotifyRaceLeaderSownerUTaxrate2_user(nullptr);
        
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateInit4_ptr CNotifyNotifyRaceLeaderSownerUTaxrateInit4_next(nullptr);
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateInit4_clbk CNotifyNotifyRaceLeaderSownerUTaxrateInit4_user(nullptr);
        
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateNotify6_ptr CNotifyNotifyRaceLeaderSownerUTaxrateNotify6_next(nullptr);
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateNotify6_clbk CNotifyNotifyRaceLeaderSownerUTaxrateNotify6_user(nullptr);
        
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateNotify8_ptr CNotifyNotifyRaceLeaderSownerUTaxrateNotify8_next(nullptr);
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateNotify8_clbk CNotifyNotifyRaceLeaderSownerUTaxrateNotify8_user(nullptr);
        
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateUpdateRaceLeader10_ptr CNotifyNotifyRaceLeaderSownerUTaxrateUpdateRaceLeader10_next(nullptr);
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateUpdateRaceLeader10_clbk CNotifyNotifyRaceLeaderSownerUTaxrateUpdateRaceLeader10_user(nullptr);
        
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateUpdateSettlementOwner12_ptr CNotifyNotifyRaceLeaderSownerUTaxrateUpdateSettlementOwner12_next(nullptr);
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateUpdateSettlementOwner12_clbk CNotifyNotifyRaceLeaderSownerUTaxrateUpdateSettlementOwner12_user(nullptr);
        
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateUpdateTaxRate14_ptr CNotifyNotifyRaceLeaderSownerUTaxrateUpdateTaxRate14_next(nullptr);
        Info::CNotifyNotifyRaceLeaderSownerUTaxrateUpdateTaxRate14_clbk CNotifyNotifyRaceLeaderSownerUTaxrateUpdateTaxRate14_user(nullptr);
        
        
        void CNotifyNotifyRaceLeaderSownerUTaxratector_CNotifyNotifyRaceLeaderSownerUTaxrate2_wrapper(struct CNotifyNotifyRaceLeaderSownerUTaxrate* _this)
        {
           CNotifyNotifyRaceLeaderSownerUTaxratector_CNotifyNotifyRaceLeaderSownerUTaxrate2_user(_this, CNotifyNotifyRaceLeaderSownerUTaxratector_CNotifyNotifyRaceLeaderSownerUTaxrate2_next);
        };
        void CNotifyNotifyRaceLeaderSownerUTaxrateInit4_wrapper(struct CNotifyNotifyRaceLeaderSownerUTaxrate* _this)
        {
           CNotifyNotifyRaceLeaderSownerUTaxrateInit4_user(_this, CNotifyNotifyRaceLeaderSownerUTaxrateInit4_next);
        };
        void CNotifyNotifyRaceLeaderSownerUTaxrateNotify6_wrapper(struct CNotifyNotifyRaceLeaderSownerUTaxrate* _this, char byRace)
        {
           CNotifyNotifyRaceLeaderSownerUTaxrateNotify6_user(_this, byRace, CNotifyNotifyRaceLeaderSownerUTaxrateNotify6_next);
        };
        void CNotifyNotifyRaceLeaderSownerUTaxrateNotify8_wrapper(struct CNotifyNotifyRaceLeaderSownerUTaxrate* _this, char byRace, uint16_t wIndex)
        {
           CNotifyNotifyRaceLeaderSownerUTaxrateNotify8_user(_this, byRace, wIndex, CNotifyNotifyRaceLeaderSownerUTaxrateNotify8_next);
        };
        void CNotifyNotifyRaceLeaderSownerUTaxrateUpdateRaceLeader10_wrapper(struct CNotifyNotifyRaceLeaderSownerUTaxrate* _this, char byRace, char byNth, char* wszLeaderName)
        {
           CNotifyNotifyRaceLeaderSownerUTaxrateUpdateRaceLeader10_user(_this, byRace, byNth, wszLeaderName, CNotifyNotifyRaceLeaderSownerUTaxrateUpdateRaceLeader10_next);
        };
        void CNotifyNotifyRaceLeaderSownerUTaxrateUpdateSettlementOwner12_wrapper(struct CNotifyNotifyRaceLeaderSownerUTaxrate* _this, char byRace, unsigned int dw1ThGuildSerial, unsigned int dw2ThGuildSerial)
        {
           CNotifyNotifyRaceLeaderSownerUTaxrateUpdateSettlementOwner12_user(_this, byRace, dw1ThGuildSerial, dw2ThGuildSerial, CNotifyNotifyRaceLeaderSownerUTaxrateUpdateSettlementOwner12_next);
        };
        void CNotifyNotifyRaceLeaderSownerUTaxrateUpdateTaxRate14_wrapper(struct CNotifyNotifyRaceLeaderSownerUTaxrate* _this, char byRace, char byTaxRate)
        {
           CNotifyNotifyRaceLeaderSownerUTaxrateUpdateTaxRate14_user(_this, byRace, byTaxRate, CNotifyNotifyRaceLeaderSownerUTaxrateUpdateTaxRate14_next);
        };
        
        ::std::array<hook_record, 7> CNotifyNotifyRaceLeaderSownerUTaxrate_functions = 
        {
            _hook_record {
                (LPVOID)0x1401219a0L,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxratector_CNotifyNotifyRaceLeaderSownerUTaxrate2_user,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxratector_CNotifyNotifyRaceLeaderSownerUTaxrate2_next,
                (LPVOID)cast_pointer_function(CNotifyNotifyRaceLeaderSownerUTaxratector_CNotifyNotifyRaceLeaderSownerUTaxrate2_wrapper),
                (LPVOID)cast_pointer_function((void(CNotifyNotifyRaceLeaderSownerUTaxrate::*)())&CNotifyNotifyRaceLeaderSownerUTaxrate::ctor_CNotifyNotifyRaceLeaderSownerUTaxrate)
            },
            _hook_record {
                (LPVOID)0x1401219c0L,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateInit4_user,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateInit4_next,
                (LPVOID)cast_pointer_function(CNotifyNotifyRaceLeaderSownerUTaxrateInit4_wrapper),
                (LPVOID)cast_pointer_function((void(CNotifyNotifyRaceLeaderSownerUTaxrate::*)())&CNotifyNotifyRaceLeaderSownerUTaxrate::Init)
            },
            _hook_record {
                (LPVOID)0x140121ef0L,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateNotify6_user,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateNotify6_next,
                (LPVOID)cast_pointer_function(CNotifyNotifyRaceLeaderSownerUTaxrateNotify6_wrapper),
                (LPVOID)cast_pointer_function((void(CNotifyNotifyRaceLeaderSownerUTaxrate::*)(char))&CNotifyNotifyRaceLeaderSownerUTaxrate::Notify)
            },
            _hook_record {
                (LPVOID)0x140122030L,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateNotify8_user,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateNotify8_next,
                (LPVOID)cast_pointer_function(CNotifyNotifyRaceLeaderSownerUTaxrateNotify8_wrapper),
                (LPVOID)cast_pointer_function((void(CNotifyNotifyRaceLeaderSownerUTaxrate::*)(char, uint16_t))&CNotifyNotifyRaceLeaderSownerUTaxrate::Notify)
            },
            _hook_record {
                (LPVOID)0x140121b60L,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateUpdateRaceLeader10_user,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateUpdateRaceLeader10_next,
                (LPVOID)cast_pointer_function(CNotifyNotifyRaceLeaderSownerUTaxrateUpdateRaceLeader10_wrapper),
                (LPVOID)cast_pointer_function((void(CNotifyNotifyRaceLeaderSownerUTaxrate::*)(char, char, char*))&CNotifyNotifyRaceLeaderSownerUTaxrate::UpdateRaceLeader)
            },
            _hook_record {
                (LPVOID)0x140121c00L,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateUpdateSettlementOwner12_user,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateUpdateSettlementOwner12_next,
                (LPVOID)cast_pointer_function(CNotifyNotifyRaceLeaderSownerUTaxrateUpdateSettlementOwner12_wrapper),
                (LPVOID)cast_pointer_function((void(CNotifyNotifyRaceLeaderSownerUTaxrate::*)(char, unsigned int, unsigned int))&CNotifyNotifyRaceLeaderSownerUTaxrate::UpdateSettlementOwner)
            },
            _hook_record {
                (LPVOID)0x140121eb0L,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateUpdateTaxRate14_user,
                (LPVOID *)&CNotifyNotifyRaceLeaderSownerUTaxrateUpdateTaxRate14_next,
                (LPVOID)cast_pointer_function(CNotifyNotifyRaceLeaderSownerUTaxrateUpdateTaxRate14_wrapper),
                (LPVOID)cast_pointer_function((void(CNotifyNotifyRaceLeaderSownerUTaxrate::*)(char, char))&CNotifyNotifyRaceLeaderSownerUTaxrate::UpdateTaxRate)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
