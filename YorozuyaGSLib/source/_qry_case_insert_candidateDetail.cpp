#include <_qry_case_insert_candidateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_insert_candidatector__qry_case_insert_candidate2_ptr _qry_case_insert_candidatector__qry_case_insert_candidate2_next(nullptr);
        Info::_qry_case_insert_candidatector__qry_case_insert_candidate2_clbk _qry_case_insert_candidatector__qry_case_insert_candidate2_user(nullptr);
        
        Info::_qry_case_insert_candidatesize4_ptr _qry_case_insert_candidatesize4_next(nullptr);
        Info::_qry_case_insert_candidatesize4_clbk _qry_case_insert_candidatesize4_user(nullptr);
        
        
        void _qry_case_insert_candidatector__qry_case_insert_candidate2_wrapper(struct _qry_case_insert_candidate* _this, char byR, uint16_t wIdx, unsigned int dwE, unsigned int dwS)
        {
           _qry_case_insert_candidatector__qry_case_insert_candidate2_user(_this, byR, wIdx, dwE, dwS, _qry_case_insert_candidatector__qry_case_insert_candidate2_next);
        };
        int _qry_case_insert_candidatesize4_wrapper(struct _qry_case_insert_candidate* _this)
        {
           return _qry_case_insert_candidatesize4_user(_this, _qry_case_insert_candidatesize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_insert_candidate_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b6400L,
                (LPVOID *)&_qry_case_insert_candidatector__qry_case_insert_candidate2_user,
                (LPVOID *)&_qry_case_insert_candidatector__qry_case_insert_candidate2_next,
                (LPVOID)cast_pointer_function(_qry_case_insert_candidatector__qry_case_insert_candidate2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_insert_candidate::*)(char, uint16_t, unsigned int, unsigned int))&_qry_case_insert_candidate::ctor__qry_case_insert_candidate)
            },
            _hook_record {
                (LPVOID)0x1402b6470L,
                (LPVOID *)&_qry_case_insert_candidatesize4_user,
                (LPVOID *)&_qry_case_insert_candidatesize4_next,
                (LPVOID)cast_pointer_function(_qry_case_insert_candidatesize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_insert_candidate::*)())&_qry_case_insert_candidate::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
