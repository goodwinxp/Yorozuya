#include <CUnmannedTraderSchedulerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderSchedulerctor_CUnmannedTraderScheduler2_ptr CUnmannedTraderSchedulerctor_CUnmannedTraderScheduler2_next(nullptr);
        Info::CUnmannedTraderSchedulerctor_CUnmannedTraderScheduler2_clbk CUnmannedTraderSchedulerctor_CUnmannedTraderScheduler2_user(nullptr);
        
        Info::CUnmannedTraderSchedulerCheatPushLoad4_ptr CUnmannedTraderSchedulerCheatPushLoad4_next(nullptr);
        Info::CUnmannedTraderSchedulerCheatPushLoad4_clbk CUnmannedTraderSchedulerCheatPushLoad4_user(nullptr);
        
        Info::CUnmannedTraderSchedulerClearAll6_ptr CUnmannedTraderSchedulerClearAll6_next(nullptr);
        Info::CUnmannedTraderSchedulerClearAll6_clbk CUnmannedTraderSchedulerClearAll6_user(nullptr);
        
        Info::CUnmannedTraderSchedulerCompleteClear8_ptr CUnmannedTraderSchedulerCompleteClear8_next(nullptr);
        Info::CUnmannedTraderSchedulerCompleteClear8_clbk CUnmannedTraderSchedulerCompleteClear8_user(nullptr);
        
        Info::CUnmannedTraderSchedulerDestroy10_ptr CUnmannedTraderSchedulerDestroy10_next(nullptr);
        Info::CUnmannedTraderSchedulerDestroy10_clbk CUnmannedTraderSchedulerDestroy10_user(nullptr);
        
        Info::CUnmannedTraderSchedulerDoDayChangedWork12_ptr CUnmannedTraderSchedulerDoDayChangedWork12_next(nullptr);
        Info::CUnmannedTraderSchedulerDoDayChangedWork12_clbk CUnmannedTraderSchedulerDoDayChangedWork12_user(nullptr);
        
        Info::CUnmannedTraderSchedulerFindItem14_ptr CUnmannedTraderSchedulerFindItem14_next(nullptr);
        Info::CUnmannedTraderSchedulerFindItem14_clbk CUnmannedTraderSchedulerFindItem14_user(nullptr);
        
        Info::CUnmannedTraderSchedulerFindWaitItem16_ptr CUnmannedTraderSchedulerFindWaitItem16_next(nullptr);
        Info::CUnmannedTraderSchedulerFindWaitItem16_clbk CUnmannedTraderSchedulerFindWaitItem16_user(nullptr);
        
        Info::CUnmannedTraderSchedulerInit18_ptr CUnmannedTraderSchedulerInit18_next(nullptr);
        Info::CUnmannedTraderSchedulerInit18_clbk CUnmannedTraderSchedulerInit18_user(nullptr);
        
        Info::CUnmannedTraderSchedulerInstance20_ptr CUnmannedTraderSchedulerInstance20_next(nullptr);
        Info::CUnmannedTraderSchedulerInstance20_clbk CUnmannedTraderSchedulerInstance20_user(nullptr);
        
        Info::CUnmannedTraderSchedulerLoad22_ptr CUnmannedTraderSchedulerLoad22_next(nullptr);
        Info::CUnmannedTraderSchedulerLoad22_clbk CUnmannedTraderSchedulerLoad22_user(nullptr);
        
        Info::CUnmannedTraderSchedulerLog24_ptr CUnmannedTraderSchedulerLog24_next(nullptr);
        Info::CUnmannedTraderSchedulerLog24_clbk CUnmannedTraderSchedulerLog24_user(nullptr);
        
        Info::CUnmannedTraderSchedulerLoop26_ptr CUnmannedTraderSchedulerLoop26_next(nullptr);
        Info::CUnmannedTraderSchedulerLoop26_clbk CUnmannedTraderSchedulerLoop26_user(nullptr);
        
        Info::CUnmannedTraderSchedulerPushLoad28_ptr CUnmannedTraderSchedulerPushLoad28_next(nullptr);
        Info::CUnmannedTraderSchedulerPushLoad28_clbk CUnmannedTraderSchedulerPushLoad28_user(nullptr);
        
        Info::CUnmannedTraderSchedulerSetLogger30_ptr CUnmannedTraderSchedulerSetLogger30_next(nullptr);
        Info::CUnmannedTraderSchedulerSetLogger30_clbk CUnmannedTraderSchedulerSetLogger30_user(nullptr);
        
        Info::CUnmannedTraderSchedulerUpdate32_ptr CUnmannedTraderSchedulerUpdate32_next(nullptr);
        Info::CUnmannedTraderSchedulerUpdate32_clbk CUnmannedTraderSchedulerUpdate32_user(nullptr);
        
        
        Info::CUnmannedTraderSchedulerdtor_CUnmannedTraderScheduler36_ptr CUnmannedTraderSchedulerdtor_CUnmannedTraderScheduler36_next(nullptr);
        Info::CUnmannedTraderSchedulerdtor_CUnmannedTraderScheduler36_clbk CUnmannedTraderSchedulerdtor_CUnmannedTraderScheduler36_user(nullptr);
        
        
        void CUnmannedTraderSchedulerctor_CUnmannedTraderScheduler2_wrapper(struct CUnmannedTraderScheduler* _this)
        {
           CUnmannedTraderSchedulerctor_CUnmannedTraderScheduler2_user(_this, CUnmannedTraderSchedulerctor_CUnmannedTraderScheduler2_next);
        };
        void CUnmannedTraderSchedulerCheatPushLoad4_wrapper(struct CUnmannedTraderScheduler* _this)
        {
           CUnmannedTraderSchedulerCheatPushLoad4_user(_this, CUnmannedTraderSchedulerCheatPushLoad4_next);
        };
        void CUnmannedTraderSchedulerClearAll6_wrapper(struct CUnmannedTraderScheduler* _this)
        {
           CUnmannedTraderSchedulerClearAll6_user(_this, CUnmannedTraderSchedulerClearAll6_next);
        };
        void CUnmannedTraderSchedulerCompleteClear8_wrapper(struct CUnmannedTraderScheduler* _this, char byDBQueryRet, char byProcRet, char byType, unsigned int dwRegistSerial)
        {
           CUnmannedTraderSchedulerCompleteClear8_user(_this, byDBQueryRet, byProcRet, byType, dwRegistSerial, CUnmannedTraderSchedulerCompleteClear8_next);
        };
        void CUnmannedTraderSchedulerDestroy10_wrapper()
        {
           CUnmannedTraderSchedulerDestroy10_user(CUnmannedTraderSchedulerDestroy10_next);
        };
        void CUnmannedTraderSchedulerDoDayChangedWork12_wrapper(struct CUnmannedTraderScheduler* _this)
        {
           CUnmannedTraderSchedulerDoDayChangedWork12_user(_this, CUnmannedTraderSchedulerDoDayChangedWork12_next);
        };
        struct std::_Vector_iterator<CUnmannedTraderSchedule,std::allocator<CUnmannedTraderSchedule> >* CUnmannedTraderSchedulerFindItem14_wrapper(struct CUnmannedTraderScheduler* _this, struct std::_Vector_iterator<CUnmannedTraderSchedule,std::allocator<CUnmannedTraderSchedule> >* result, char byType, unsigned int dwRegistSerial)
        {
           return CUnmannedTraderSchedulerFindItem14_user(_this, result, byType, dwRegistSerial, CUnmannedTraderSchedulerFindItem14_next);
        };
        bool CUnmannedTraderSchedulerFindWaitItem16_wrapper(struct CUnmannedTraderScheduler* _this)
        {
           return CUnmannedTraderSchedulerFindWaitItem16_user(_this, CUnmannedTraderSchedulerFindWaitItem16_next);
        };
        bool CUnmannedTraderSchedulerInit18_wrapper(struct CUnmannedTraderScheduler* _this)
        {
           return CUnmannedTraderSchedulerInit18_user(_this, CUnmannedTraderSchedulerInit18_next);
        };
        struct CUnmannedTraderScheduler* CUnmannedTraderSchedulerInstance20_wrapper()
        {
           return CUnmannedTraderSchedulerInstance20_user(CUnmannedTraderSchedulerInstance20_next);
        };
        bool CUnmannedTraderSchedulerLoad22_wrapper(struct CUnmannedTraderScheduler* _this)
        {
           return CUnmannedTraderSchedulerLoad22_user(_this, CUnmannedTraderSchedulerLoad22_next);
        };
        void CUnmannedTraderSchedulerLog24_wrapper(struct CUnmannedTraderScheduler* _this, char* fmt)
        {
           CUnmannedTraderSchedulerLog24_user(_this, fmt, CUnmannedTraderSchedulerLog24_next);
        };
        void CUnmannedTraderSchedulerLoop26_wrapper(struct CUnmannedTraderScheduler* _this)
        {
           CUnmannedTraderSchedulerLoop26_user(_this, CUnmannedTraderSchedulerLoop26_next);
        };
        void CUnmannedTraderSchedulerPushLoad28_wrapper(struct CUnmannedTraderScheduler* _this)
        {
           CUnmannedTraderSchedulerPushLoad28_user(_this, CUnmannedTraderSchedulerPushLoad28_next);
        };
        void CUnmannedTraderSchedulerSetLogger30_wrapper(struct CUnmannedTraderScheduler* _this, struct CLogFile* pkLogger)
        {
           CUnmannedTraderSchedulerSetLogger30_user(_this, pkLogger, CUnmannedTraderSchedulerSetLogger30_next);
        };
        void CUnmannedTraderSchedulerUpdate32_wrapper(struct CUnmannedTraderScheduler* _this, struct _unmannedtrader_reserved_schedule_info* pkInfo)
        {
           CUnmannedTraderSchedulerUpdate32_user(_this, pkInfo, CUnmannedTraderSchedulerUpdate32_next);
        };
        
        void CUnmannedTraderSchedulerdtor_CUnmannedTraderScheduler36_wrapper(struct CUnmannedTraderScheduler* _this)
        {
           CUnmannedTraderSchedulerdtor_CUnmannedTraderScheduler36_user(_this, CUnmannedTraderSchedulerdtor_CUnmannedTraderScheduler36_next);
        };
        
        ::std::array<hook_record, 17> CUnmannedTraderScheduler_functions = 
        {
            _hook_record {
                (LPVOID)0x140393120L,
                (LPVOID *)&CUnmannedTraderSchedulerctor_CUnmannedTraderScheduler2_user,
                (LPVOID *)&CUnmannedTraderSchedulerctor_CUnmannedTraderScheduler2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerctor_CUnmannedTraderScheduler2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderScheduler::*)())&CUnmannedTraderScheduler::ctor_CUnmannedTraderScheduler)
            },
            _hook_record {
                (LPVOID)0x140351a10L,
                (LPVOID *)&CUnmannedTraderSchedulerCheatPushLoad4_user,
                (LPVOID *)&CUnmannedTraderSchedulerCheatPushLoad4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerCheatPushLoad4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderScheduler::*)())&CUnmannedTraderScheduler::CheatPushLoad)
            },
            _hook_record {
                (LPVOID)0x140351a60L,
                (LPVOID *)&CUnmannedTraderSchedulerClearAll6_user,
                (LPVOID *)&CUnmannedTraderSchedulerClearAll6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerClearAll6_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderScheduler::*)())&CUnmannedTraderScheduler::ClearAll)
            },
            _hook_record {
                (LPVOID)0x140393b60L,
                (LPVOID *)&CUnmannedTraderSchedulerCompleteClear8_user,
                (LPVOID *)&CUnmannedTraderSchedulerCompleteClear8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerCompleteClear8_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderScheduler::*)(char, char, char, unsigned int))&CUnmannedTraderScheduler::CompleteClear)
            },
            _hook_record {
                (LPVOID)0x140393330L,
                (LPVOID *)&CUnmannedTraderSchedulerDestroy10_user,
                (LPVOID *)&CUnmannedTraderSchedulerDestroy10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerDestroy10_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CUnmannedTraderScheduler::Destroy)
            },
            _hook_record {
                (LPVOID)0x140393f00L,
                (LPVOID *)&CUnmannedTraderSchedulerDoDayChangedWork12_user,
                (LPVOID *)&CUnmannedTraderSchedulerDoDayChangedWork12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerDoDayChangedWork12_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderScheduler::*)())&CUnmannedTraderScheduler::DoDayChangedWork)
            },
            _hook_record {
                (LPVOID)0x1403947e0L,
                (LPVOID *)&CUnmannedTraderSchedulerFindItem14_user,
                (LPVOID *)&CUnmannedTraderSchedulerFindItem14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerFindItem14_wrapper),
                (LPVOID)cast_pointer_function((struct std::_Vector_iterator<CUnmannedTraderSchedule,std::allocator<CUnmannedTraderSchedule> >*(CUnmannedTraderScheduler::*)(struct std::_Vector_iterator<CUnmannedTraderSchedule,std::allocator<CUnmannedTraderSchedule> >*, char, unsigned int))&CUnmannedTraderScheduler::FindItem)
            },
            _hook_record {
                (LPVOID)0x140393da0L,
                (LPVOID *)&CUnmannedTraderSchedulerFindWaitItem16_user,
                (LPVOID *)&CUnmannedTraderSchedulerFindWaitItem16_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerFindWaitItem16_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderScheduler::*)())&CUnmannedTraderScheduler::FindWaitItem)
            },
            _hook_record {
                (LPVOID)0x1403933b0L,
                (LPVOID *)&CUnmannedTraderSchedulerInit18_user,
                (LPVOID *)&CUnmannedTraderSchedulerInit18_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerInit18_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderScheduler::*)())&CUnmannedTraderScheduler::Init)
            },
            _hook_record {
                (LPVOID)0x140393270L,
                (LPVOID *)&CUnmannedTraderSchedulerInstance20_user,
                (LPVOID *)&CUnmannedTraderSchedulerInstance20_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerInstance20_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderScheduler*(*)())&CUnmannedTraderScheduler::Instance)
            },
            _hook_record {
                (LPVOID)0x1403935e0L,
                (LPVOID *)&CUnmannedTraderSchedulerLoad22_user,
                (LPVOID *)&CUnmannedTraderSchedulerLoad22_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerLoad22_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderScheduler::*)())&CUnmannedTraderScheduler::Load)
            },
            _hook_record {
                (LPVOID)0x140393d10L,
                (LPVOID *)&CUnmannedTraderSchedulerLog24_user,
                (LPVOID *)&CUnmannedTraderSchedulerLog24_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerLog24_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderScheduler::*)(char*))&CUnmannedTraderScheduler::Log)
            },
            _hook_record {
                (LPVOID)0x1403938c0L,
                (LPVOID *)&CUnmannedTraderSchedulerLoop26_user,
                (LPVOID *)&CUnmannedTraderSchedulerLoop26_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerLoop26_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderScheduler::*)())&CUnmannedTraderScheduler::Loop)
            },
            _hook_record {
                (LPVOID)0x140394020L,
                (LPVOID *)&CUnmannedTraderSchedulerPushLoad28_user,
                (LPVOID *)&CUnmannedTraderSchedulerPushLoad28_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerPushLoad28_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderScheduler::*)())&CUnmannedTraderScheduler::PushLoad)
            },
            _hook_record {
                (LPVOID)0x140351950L,
                (LPVOID *)&CUnmannedTraderSchedulerSetLogger30_user,
                (LPVOID *)&CUnmannedTraderSchedulerSetLogger30_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerSetLogger30_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderScheduler::*)(struct CLogFile*))&CUnmannedTraderScheduler::SetLogger)
            },
            _hook_record {
                (LPVOID)0x1403936b0L,
                (LPVOID *)&CUnmannedTraderSchedulerUpdate32_user,
                (LPVOID *)&CUnmannedTraderSchedulerUpdate32_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerUpdate32_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderScheduler::*)(struct _unmannedtrader_reserved_schedule_info*))&CUnmannedTraderScheduler::Update)
            },
            _hook_record {
                (LPVOID)0x1403931d0L,
                (LPVOID *)&CUnmannedTraderSchedulerdtor_CUnmannedTraderScheduler36_user,
                (LPVOID *)&CUnmannedTraderSchedulerdtor_CUnmannedTraderScheduler36_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulerdtor_CUnmannedTraderScheduler36_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderScheduler::*)())&CUnmannedTraderScheduler::dtor_CUnmannedTraderScheduler)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
