#include <TournamentWinner.hpp>


START_ATF_NAMESPACE
    TournamentWinner::TournamentWinner()
    {
        using org_ptr = void (WINAPIV*)(struct TournamentWinner*);
        (org_ptr(0x1401bf4d0L))(this);
    };
    void TournamentWinner::ctor_TournamentWinner()
    {
        using org_ptr = void (WINAPIV*)(struct TournamentWinner*);
        (org_ptr(0x1401bf4d0L))(this);
    };
END_ATF_NAMESPACE
