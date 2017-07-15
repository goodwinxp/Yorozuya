#include <TournamentWinnerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::TournamentWinnerctor_TournamentWinner2_ptr TournamentWinnerctor_TournamentWinner2_next(nullptr);
        Info::TournamentWinnerctor_TournamentWinner2_clbk TournamentWinnerctor_TournamentWinner2_user(nullptr);
        
        
        void TournamentWinnerctor_TournamentWinner2_wrapper(struct TournamentWinner* _this)
        {
           TournamentWinnerctor_TournamentWinner2_user(_this, TournamentWinnerctor_TournamentWinner2_next);
        };
        
        ::std::array<hook_record, 1> TournamentWinner_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bf4d0L,
                (LPVOID *)&TournamentWinnerctor_TournamentWinner2_user,
                (LPVOID *)&TournamentWinnerctor_TournamentWinner2_next,
                (LPVOID)cast_pointer_function(TournamentWinnerctor_TournamentWinner2_wrapper),
                (LPVOID)cast_pointer_function((void(TournamentWinner::*)())&TournamentWinner::ctor_TournamentWinner)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
