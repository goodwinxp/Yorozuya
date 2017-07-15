#include <_qry_case_rank_racerank_guildrankDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_rank_racerank_guildrankClearRetParam2_ptr _qry_case_rank_racerank_guildrankClearRetParam2_next(nullptr);
        Info::_qry_case_rank_racerank_guildrankClearRetParam2_clbk _qry_case_rank_racerank_guildrankClearRetParam2_user(nullptr);
        
        
        Info::_qry_case_rank_racerank_guildrankctor__qry_case_rank_racerank_guildrank4_ptr _qry_case_rank_racerank_guildrankctor__qry_case_rank_racerank_guildrank4_next(nullptr);
        Info::_qry_case_rank_racerank_guildrankctor__qry_case_rank_racerank_guildrank4_clbk _qry_case_rank_racerank_guildrankctor__qry_case_rank_racerank_guildrank4_user(nullptr);
        
        void _qry_case_rank_racerank_guildrankClearRetParam2_wrapper(struct _qry_case_rank_racerank_guildrank* _this)
        {
           _qry_case_rank_racerank_guildrankClearRetParam2_user(_this, _qry_case_rank_racerank_guildrankClearRetParam2_next);
        };
        
        void _qry_case_rank_racerank_guildrankctor__qry_case_rank_racerank_guildrank4_wrapper(struct _qry_case_rank_racerank_guildrank* _this)
        {
           _qry_case_rank_racerank_guildrankctor__qry_case_rank_racerank_guildrank4_user(_this, _qry_case_rank_racerank_guildrankctor__qry_case_rank_racerank_guildrank4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_rank_racerank_guildrank_functions = 
        {
            _hook_record {
                (LPVOID)0x1403443f0L,
                (LPVOID *)&_qry_case_rank_racerank_guildrankClearRetParam2_user,
                (LPVOID *)&_qry_case_rank_racerank_guildrankClearRetParam2_next,
                (LPVOID)cast_pointer_function(_qry_case_rank_racerank_guildrankClearRetParam2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_rank_racerank_guildrank::*)())&_qry_case_rank_racerank_guildrank::ClearRetParam)
            },
            _hook_record {
                (LPVOID)0x1403447a0L,
                (LPVOID *)&_qry_case_rank_racerank_guildrankctor__qry_case_rank_racerank_guildrank4_user,
                (LPVOID *)&_qry_case_rank_racerank_guildrankctor__qry_case_rank_racerank_guildrank4_next,
                (LPVOID)cast_pointer_function(_qry_case_rank_racerank_guildrankctor__qry_case_rank_racerank_guildrank4_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_rank_racerank_guildrank::*)())&_qry_case_rank_racerank_guildrank::ctor__qry_case_rank_racerank_guildrank)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
