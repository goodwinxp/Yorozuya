#include <CGameStatisticsDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CGameStatisticsctor_CGameStatistics2_ptr CGameStatisticsctor_CGameStatistics2_next(nullptr);
        Info::CGameStatisticsctor_CGameStatistics2_clbk CGameStatisticsctor_CGameStatistics2_user(nullptr);
        
        Info::CGameStatisticsConvertDay4_ptr CGameStatisticsConvertDay4_next(nullptr);
        Info::CGameStatisticsConvertDay4_clbk CGameStatisticsConvertDay4_user(nullptr);
        
        Info::CGameStatisticsCurWriteData6_ptr CGameStatisticsCurWriteData6_next(nullptr);
        Info::CGameStatisticsCurWriteData6_clbk CGameStatisticsCurWriteData6_user(nullptr);
        
        Info::CGameStatisticsInit8_ptr CGameStatisticsInit8_next(nullptr);
        Info::CGameStatisticsInit8_clbk CGameStatisticsInit8_user(nullptr);
        
        Info::CGameStatisticsWriteDayData10_ptr CGameStatisticsWriteDayData10_next(nullptr);
        Info::CGameStatisticsWriteDayData10_clbk CGameStatisticsWriteDayData10_user(nullptr);
        
        
        Info::CGameStatisticsdtor_CGameStatistics15_ptr CGameStatisticsdtor_CGameStatistics15_next(nullptr);
        Info::CGameStatisticsdtor_CGameStatistics15_clbk CGameStatisticsdtor_CGameStatistics15_user(nullptr);
        
        
        void CGameStatisticsctor_CGameStatistics2_wrapper(struct CGameStatistics* _this)
        {
           CGameStatisticsctor_CGameStatistics2_user(_this, CGameStatisticsctor_CGameStatistics2_next);
        };
        void CGameStatisticsConvertDay4_wrapper(struct CGameStatistics* _this, char* pszWorldName)
        {
           CGameStatisticsConvertDay4_user(_this, pszWorldName, CGameStatisticsConvertDay4_next);
        };
        struct CGameStatistics::_DAY* CGameStatisticsCurWriteData6_wrapper(struct CGameStatistics* _this)
        {
           return CGameStatisticsCurWriteData6_user(_this, CGameStatisticsCurWriteData6_next);
        };
        void CGameStatisticsInit8_wrapper(struct CGameStatistics* _this)
        {
           CGameStatisticsInit8_user(_this, CGameStatisticsInit8_next);
        };
        void CGameStatisticsWriteDayData10_wrapper(struct CGameStatistics* _this, char* pszWorldName)
        {
           CGameStatisticsWriteDayData10_user(_this, pszWorldName, CGameStatisticsWriteDayData10_next);
        };
        
        void CGameStatisticsdtor_CGameStatistics15_wrapper(struct CGameStatistics* _this)
        {
           CGameStatisticsdtor_CGameStatistics15_user(_this, CGameStatisticsdtor_CGameStatistics15_next);
        };
        
        ::std::array<hook_record, 6> CGameStatistics_functions = 
        {
            _hook_record {
                (LPVOID)0x1402325c0L,
                (LPVOID *)&CGameStatisticsctor_CGameStatistics2_user,
                (LPVOID *)&CGameStatisticsctor_CGameStatistics2_next,
                (LPVOID)cast_pointer_function(CGameStatisticsctor_CGameStatistics2_wrapper),
                (LPVOID)cast_pointer_function((void(CGameStatistics::*)())&CGameStatistics::ctor_CGameStatistics)
            },
            _hook_record {
                (LPVOID)0x1402326d0L,
                (LPVOID *)&CGameStatisticsConvertDay4_user,
                (LPVOID *)&CGameStatisticsConvertDay4_next,
                (LPVOID)cast_pointer_function(CGameStatisticsConvertDay4_wrapper),
                (LPVOID)cast_pointer_function((void(CGameStatistics::*)(char*))&CGameStatistics::ConvertDay)
            },
            _hook_record {
                (LPVOID)0x1402326b0L,
                (LPVOID *)&CGameStatisticsCurWriteData6_user,
                (LPVOID *)&CGameStatisticsCurWriteData6_next,
                (LPVOID)cast_pointer_function(CGameStatisticsCurWriteData6_wrapper),
                (LPVOID)cast_pointer_function((struct CGameStatistics::_DAY*(CGameStatistics::*)())&CGameStatistics::CurWriteData)
            },
            _hook_record {
                (LPVOID)0x140232670L,
                (LPVOID *)&CGameStatisticsInit8_user,
                (LPVOID *)&CGameStatisticsInit8_next,
                (LPVOID)cast_pointer_function(CGameStatisticsInit8_wrapper),
                (LPVOID)cast_pointer_function((void(CGameStatistics::*)())&CGameStatistics::Init)
            },
            _hook_record {
                (LPVOID)0x140232730L,
                (LPVOID *)&CGameStatisticsWriteDayData10_user,
                (LPVOID *)&CGameStatisticsWriteDayData10_next,
                (LPVOID)cast_pointer_function(CGameStatisticsWriteDayData10_wrapper),
                (LPVOID)cast_pointer_function((void(CGameStatistics::*)(char*))&CGameStatistics::WriteDayData)
            },
            _hook_record {
                (LPVOID)0x140232650L,
                (LPVOID *)&CGameStatisticsdtor_CGameStatistics15_user,
                (LPVOID *)&CGameStatisticsdtor_CGameStatistics15_next,
                (LPVOID)cast_pointer_function(CGameStatisticsdtor_CGameStatistics15_wrapper),
                (LPVOID)cast_pointer_function((void(CGameStatistics::*)())&CGameStatistics::dtor_CGameStatistics)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
