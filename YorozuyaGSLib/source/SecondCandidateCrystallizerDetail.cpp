#include <SecondCandidateCrystallizerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::SecondCandidateCrystallizerDoit2_ptr SecondCandidateCrystallizerDoit2_next(nullptr);
        Info::SecondCandidateCrystallizerDoit2_clbk SecondCandidateCrystallizerDoit2_user(nullptr);
        
        Info::SecondCandidateCrystallizerInitialize4_ptr SecondCandidateCrystallizerInitialize4_next(nullptr);
        Info::SecondCandidateCrystallizerInitialize4_clbk SecondCandidateCrystallizerInitialize4_user(nullptr);
        
        
        Info::SecondCandidateCrystallizerctor_SecondCandidateCrystallizer6_ptr SecondCandidateCrystallizerctor_SecondCandidateCrystallizer6_next(nullptr);
        Info::SecondCandidateCrystallizerctor_SecondCandidateCrystallizer6_clbk SecondCandidateCrystallizerctor_SecondCandidateCrystallizer6_user(nullptr);
        
        
        Info::SecondCandidateCrystallizerdtor_SecondCandidateCrystallizer11_ptr SecondCandidateCrystallizerdtor_SecondCandidateCrystallizer11_next(nullptr);
        Info::SecondCandidateCrystallizerdtor_SecondCandidateCrystallizer11_clbk SecondCandidateCrystallizerdtor_SecondCandidateCrystallizer11_user(nullptr);
        
        int SecondCandidateCrystallizerDoit2_wrapper(struct SecondCandidateCrystallizer* _this, Cmd eCmd, struct CPlayer* pOne, char* pdata)
        {
           return SecondCandidateCrystallizerDoit2_user(_this, eCmd, pOne, pdata, SecondCandidateCrystallizerDoit2_next);
        };
        bool SecondCandidateCrystallizerInitialize4_wrapper(struct SecondCandidateCrystallizer* _this)
        {
           return SecondCandidateCrystallizerInitialize4_user(_this, SecondCandidateCrystallizerInitialize4_next);
        };
        
        void SecondCandidateCrystallizerctor_SecondCandidateCrystallizer6_wrapper(struct SecondCandidateCrystallizer* _this)
        {
           SecondCandidateCrystallizerctor_SecondCandidateCrystallizer6_user(_this, SecondCandidateCrystallizerctor_SecondCandidateCrystallizer6_next);
        };
        
        void SecondCandidateCrystallizerdtor_SecondCandidateCrystallizer11_wrapper(struct SecondCandidateCrystallizer* _this)
        {
           SecondCandidateCrystallizerdtor_SecondCandidateCrystallizer11_user(_this, SecondCandidateCrystallizerdtor_SecondCandidateCrystallizer11_next);
        };
        
        ::std::array<hook_record, 4> SecondCandidateCrystallizer_functions = 
        {
            _hook_record {
                (LPVOID)0x1402be6c0L,
                (LPVOID *)&SecondCandidateCrystallizerDoit2_user,
                (LPVOID *)&SecondCandidateCrystallizerDoit2_next,
                (LPVOID)cast_pointer_function(SecondCandidateCrystallizerDoit2_wrapper),
                (LPVOID)cast_pointer_function((int(SecondCandidateCrystallizer::*)(Cmd, struct CPlayer*, char*))&SecondCandidateCrystallizer::Doit)
            },
            _hook_record {
                (LPVOID)0x1402be590L,
                (LPVOID *)&SecondCandidateCrystallizerInitialize4_user,
                (LPVOID *)&SecondCandidateCrystallizerInitialize4_next,
                (LPVOID)cast_pointer_function(SecondCandidateCrystallizerInitialize4_wrapper),
                (LPVOID)cast_pointer_function((bool(SecondCandidateCrystallizer::*)())&SecondCandidateCrystallizer::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402be530L,
                (LPVOID *)&SecondCandidateCrystallizerctor_SecondCandidateCrystallizer6_user,
                (LPVOID *)&SecondCandidateCrystallizerctor_SecondCandidateCrystallizer6_next,
                (LPVOID)cast_pointer_function(SecondCandidateCrystallizerctor_SecondCandidateCrystallizer6_wrapper),
                (LPVOID)cast_pointer_function((void(SecondCandidateCrystallizer::*)())&SecondCandidateCrystallizer::ctor_SecondCandidateCrystallizer)
            },
            _hook_record {
                (LPVOID)0x1402be820L,
                (LPVOID *)&SecondCandidateCrystallizerdtor_SecondCandidateCrystallizer11_user,
                (LPVOID *)&SecondCandidateCrystallizerdtor_SecondCandidateCrystallizer11_next,
                (LPVOID)cast_pointer_function(SecondCandidateCrystallizerdtor_SecondCandidateCrystallizer11_wrapper),
                (LPVOID)cast_pointer_function((void(SecondCandidateCrystallizer::*)())&SecondCandidateCrystallizer::dtor_SecondCandidateCrystallizer)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
