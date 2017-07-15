#include <_STAT_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_STAT_DB_BASEGetStatIndex2_ptr _STAT_DB_BASEGetStatIndex2_next(nullptr);
        Info::_STAT_DB_BASEGetStatIndex2_clbk _STAT_DB_BASEGetStatIndex2_user(nullptr);
        
        Info::_STAT_DB_BASEInit4_ptr _STAT_DB_BASEInit4_next(nullptr);
        Info::_STAT_DB_BASEInit4_clbk _STAT_DB_BASEInit4_user(nullptr);
        
        Info::_STAT_DB_BASEIsRangePerMastery6_ptr _STAT_DB_BASEIsRangePerMastery6_next(nullptr);
        Info::_STAT_DB_BASEIsRangePerMastery6_clbk _STAT_DB_BASEIsRangePerMastery6_user(nullptr);
        
        
        Info::_STAT_DB_BASEctor__STAT_DB_BASE8_ptr _STAT_DB_BASEctor__STAT_DB_BASE8_next(nullptr);
        Info::_STAT_DB_BASEctor__STAT_DB_BASE8_clbk _STAT_DB_BASEctor__STAT_DB_BASE8_user(nullptr);
        
        int _STAT_DB_BASEGetStatIndex2_wrapper(char byMasteryClass, char byIndex)
        {
           return _STAT_DB_BASEGetStatIndex2_user(byMasteryClass, byIndex, _STAT_DB_BASEGetStatIndex2_next);
        };
        void _STAT_DB_BASEInit4_wrapper(struct _STAT_DB_BASE* _this)
        {
           _STAT_DB_BASEInit4_user(_this, _STAT_DB_BASEInit4_next);
        };
        bool _STAT_DB_BASEIsRangePerMastery6_wrapper(char byMasteryClass, char byIndex)
        {
           return _STAT_DB_BASEIsRangePerMastery6_user(byMasteryClass, byIndex, _STAT_DB_BASEIsRangePerMastery6_next);
        };
        
        void _STAT_DB_BASEctor__STAT_DB_BASE8_wrapper(struct _STAT_DB_BASE* _this)
        {
           _STAT_DB_BASEctor__STAT_DB_BASE8_user(_this, _STAT_DB_BASEctor__STAT_DB_BASE8_next);
        };
        
        ::std::array<hook_record, 4> _STAT_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x14007c560L,
                (LPVOID *)&_STAT_DB_BASEGetStatIndex2_user,
                (LPVOID *)&_STAT_DB_BASEGetStatIndex2_next,
                (LPVOID)cast_pointer_function(_STAT_DB_BASEGetStatIndex2_wrapper),
                (LPVOID)cast_pointer_function((int(*)(char, char))&_STAT_DB_BASE::GetStatIndex)
            },
            _hook_record {
                (LPVOID)0x140074640L,
                (LPVOID *)&_STAT_DB_BASEInit4_user,
                (LPVOID *)&_STAT_DB_BASEInit4_next,
                (LPVOID)cast_pointer_function(_STAT_DB_BASEInit4_wrapper),
                (LPVOID)cast_pointer_function((void(_STAT_DB_BASE::*)())&_STAT_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x14007c660L,
                (LPVOID *)&_STAT_DB_BASEIsRangePerMastery6_user,
                (LPVOID *)&_STAT_DB_BASEIsRangePerMastery6_next,
                (LPVOID)cast_pointer_function(_STAT_DB_BASEIsRangePerMastery6_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(char, char))&_STAT_DB_BASE::IsRangePerMastery)
            },
            _hook_record {
                (LPVOID)0x1400745f0L,
                (LPVOID *)&_STAT_DB_BASEctor__STAT_DB_BASE8_user,
                (LPVOID *)&_STAT_DB_BASEctor__STAT_DB_BASE8_next,
                (LPVOID)cast_pointer_function(_STAT_DB_BASEctor__STAT_DB_BASE8_wrapper),
                (LPVOID)cast_pointer_function((void(_STAT_DB_BASE::*)())&_STAT_DB_BASE::ctor__STAT_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
