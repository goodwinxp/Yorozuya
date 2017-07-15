#include <CBattleTournamentInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CBattleTournamentInfoctor_CBattleTournamentInfo2_ptr CBattleTournamentInfoctor_CBattleTournamentInfo2_next(nullptr);
        Info::CBattleTournamentInfoctor_CBattleTournamentInfo2_clbk CBattleTournamentInfoctor_CBattleTournamentInfo2_user(nullptr);
        
        Info::CBattleTournamentInfoGetWinnerGrade4_ptr CBattleTournamentInfoGetWinnerGrade4_next(nullptr);
        Info::CBattleTournamentInfoGetWinnerGrade4_clbk CBattleTournamentInfoGetWinnerGrade4_user(nullptr);
        
        Info::CBattleTournamentInfoInit6_ptr CBattleTournamentInfoInit6_next(nullptr);
        Info::CBattleTournamentInfoInit6_clbk CBattleTournamentInfoInit6_user(nullptr);
        
        Info::CBattleTournamentInfoSetLoad8_ptr CBattleTournamentInfoSetLoad8_next(nullptr);
        Info::CBattleTournamentInfoSetLoad8_clbk CBattleTournamentInfoSetLoad8_user(nullptr);
        
        Info::CBattleTournamentInfoSetWinnerInfo10_ptr CBattleTournamentInfoSetWinnerInfo10_next(nullptr);
        Info::CBattleTournamentInfoSetWinnerInfo10_clbk CBattleTournamentInfoSetWinnerInfo10_user(nullptr);
        
        
        Info::CBattleTournamentInfodtor_CBattleTournamentInfo12_ptr CBattleTournamentInfodtor_CBattleTournamentInfo12_next(nullptr);
        Info::CBattleTournamentInfodtor_CBattleTournamentInfo12_clbk CBattleTournamentInfodtor_CBattleTournamentInfo12_user(nullptr);
        
        
        void CBattleTournamentInfoctor_CBattleTournamentInfo2_wrapper(struct CBattleTournamentInfo* _this)
        {
           CBattleTournamentInfoctor_CBattleTournamentInfo2_user(_this, CBattleTournamentInfoctor_CBattleTournamentInfo2_next);
        };
        char CBattleTournamentInfoGetWinnerGrade4_wrapper(struct CBattleTournamentInfo* _this, unsigned int dwSerial, char* pwszCharName)
        {
           return CBattleTournamentInfoGetWinnerGrade4_user(_this, dwSerial, pwszCharName, CBattleTournamentInfoGetWinnerGrade4_next);
        };
        void CBattleTournamentInfoInit6_wrapper(struct CBattleTournamentInfo* _this)
        {
           CBattleTournamentInfoInit6_user(_this, CBattleTournamentInfoInit6_next);
        };
        void CBattleTournamentInfoSetLoad8_wrapper(struct CBattleTournamentInfo* _this, bool bLoad)
        {
           CBattleTournamentInfoSetLoad8_user(_this, bLoad, CBattleTournamentInfoSetLoad8_next);
        };
        bool CBattleTournamentInfoSetWinnerInfo10_wrapper(struct CBattleTournamentInfo* _this, unsigned int dwSerial, char* pwszCharName, char byGrade)
        {
           return CBattleTournamentInfoSetWinnerInfo10_user(_this, dwSerial, pwszCharName, byGrade, CBattleTournamentInfoSetWinnerInfo10_next);
        };
        
        void CBattleTournamentInfodtor_CBattleTournamentInfo12_wrapper(struct CBattleTournamentInfo* _this)
        {
           CBattleTournamentInfodtor_CBattleTournamentInfo12_user(_this, CBattleTournamentInfodtor_CBattleTournamentInfo12_next);
        };
        
        ::std::array<hook_record, 6> CBattleTournamentInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x1403fea40L,
                (LPVOID *)&CBattleTournamentInfoctor_CBattleTournamentInfo2_user,
                (LPVOID *)&CBattleTournamentInfoctor_CBattleTournamentInfo2_next,
                (LPVOID)cast_pointer_function(CBattleTournamentInfoctor_CBattleTournamentInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CBattleTournamentInfo::*)())&CBattleTournamentInfo::ctor_CBattleTournamentInfo)
            },
            _hook_record {
                (LPVOID)0x1403fec30L,
                (LPVOID *)&CBattleTournamentInfoGetWinnerGrade4_user,
                (LPVOID *)&CBattleTournamentInfoGetWinnerGrade4_next,
                (LPVOID)cast_pointer_function(CBattleTournamentInfoGetWinnerGrade4_wrapper),
                (LPVOID)cast_pointer_function((char(CBattleTournamentInfo::*)(unsigned int, char*))&CBattleTournamentInfo::GetWinnerGrade)
            },
            _hook_record {
                (LPVOID)0x1403feac0L,
                (LPVOID *)&CBattleTournamentInfoInit6_user,
                (LPVOID *)&CBattleTournamentInfoInit6_next,
                (LPVOID)cast_pointer_function(CBattleTournamentInfoInit6_wrapper),
                (LPVOID)cast_pointer_function((void(CBattleTournamentInfo::*)())&CBattleTournamentInfo::Init)
            },
            _hook_record {
                (LPVOID)0x1403feb50L,
                (LPVOID *)&CBattleTournamentInfoSetLoad8_user,
                (LPVOID *)&CBattleTournamentInfoSetLoad8_next,
                (LPVOID)cast_pointer_function(CBattleTournamentInfoSetLoad8_wrapper),
                (LPVOID)cast_pointer_function((void(CBattleTournamentInfo::*)(bool))&CBattleTournamentInfo::SetLoad)
            },
            _hook_record {
                (LPVOID)0x1403feb70L,
                (LPVOID *)&CBattleTournamentInfoSetWinnerInfo10_user,
                (LPVOID *)&CBattleTournamentInfoSetWinnerInfo10_next,
                (LPVOID)cast_pointer_function(CBattleTournamentInfoSetWinnerInfo10_wrapper),
                (LPVOID)cast_pointer_function((bool(CBattleTournamentInfo::*)(unsigned int, char*, char))&CBattleTournamentInfo::SetWinnerInfo)
            },
            _hook_record {
                (LPVOID)0x1403feab0L,
                (LPVOID *)&CBattleTournamentInfodtor_CBattleTournamentInfo12_user,
                (LPVOID *)&CBattleTournamentInfodtor_CBattleTournamentInfo12_next,
                (LPVOID)cast_pointer_function(CBattleTournamentInfodtor_CBattleTournamentInfo12_wrapper),
                (LPVOID)cast_pointer_function((void(CBattleTournamentInfo::*)())&CBattleTournamentInfo::dtor_CBattleTournamentInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
