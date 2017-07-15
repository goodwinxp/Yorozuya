#include <ElectProcessorDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::ElectProcessorDoit2_ptr ElectProcessorDoit2_next(nullptr);
        Info::ElectProcessorDoit2_clbk ElectProcessorDoit2_user(nullptr);
        
        
        Info::ElectProcessorctor_ElectProcessor4_ptr ElectProcessorctor_ElectProcessor4_next(nullptr);
        Info::ElectProcessorctor_ElectProcessor4_clbk ElectProcessorctor_ElectProcessor4_user(nullptr);
        
        Info::ElectProcessorGetProcessorType6_ptr ElectProcessorGetProcessorType6_next(nullptr);
        Info::ElectProcessorGetProcessorType6_clbk ElectProcessorGetProcessorType6_user(nullptr);
        
        Info::ElectProcessorInitialize8_ptr ElectProcessorInitialize8_next(nullptr);
        Info::ElectProcessorInitialize8_clbk ElectProcessorInitialize8_user(nullptr);
        
        
        Info::ElectProcessordtor_ElectProcessor13_ptr ElectProcessordtor_ElectProcessor13_next(nullptr);
        Info::ElectProcessordtor_ElectProcessor13_clbk ElectProcessordtor_ElectProcessor13_user(nullptr);
        
        int ElectProcessorDoit2_wrapper(struct ElectProcessor* _this, Cmd eCmd, struct CPlayer* pOne, char* pdata)
        {
           return ElectProcessorDoit2_user(_this, eCmd, pOne, pdata, ElectProcessorDoit2_next);
        };
        
        void ElectProcessorctor_ElectProcessor4_wrapper(struct ElectProcessor* _this, ElectProcessor::ProcessorType nProcessorType)
        {
           ElectProcessorctor_ElectProcessor4_user(_this, nProcessorType, ElectProcessorctor_ElectProcessor4_next);
        };
        ElectProcessor::ProcessorType ElectProcessorGetProcessorType6_wrapper(struct ElectProcessor* _this)
        {
           return ElectProcessorGetProcessorType6_user(_this, ElectProcessorGetProcessorType6_next);
        };
        bool ElectProcessorInitialize8_wrapper(struct ElectProcessor* _this)
        {
           return ElectProcessorInitialize8_user(_this, ElectProcessorInitialize8_next);
        };
        
        void ElectProcessordtor_ElectProcessor13_wrapper(struct ElectProcessor* _this)
        {
           ElectProcessordtor_ElectProcessor13_user(_this, ElectProcessordtor_ElectProcessor13_next);
        };
        
        ::std::array<hook_record, 5> ElectProcessor_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b7c20L,
                (LPVOID *)&ElectProcessorDoit2_user,
                (LPVOID *)&ElectProcessorDoit2_next,
                (LPVOID)cast_pointer_function(ElectProcessorDoit2_wrapper),
                (LPVOID)cast_pointer_function((int(ElectProcessor::*)(Cmd, struct CPlayer*, char*))&ElectProcessor::Doit)
            },
            _hook_record {
                (LPVOID)0x1402b7c40L,
                (LPVOID *)&ElectProcessorctor_ElectProcessor4_user,
                (LPVOID *)&ElectProcessorctor_ElectProcessor4_next,
                (LPVOID)cast_pointer_function(ElectProcessorctor_ElectProcessor4_wrapper),
                (LPVOID)cast_pointer_function((void(ElectProcessor::*)(ElectProcessor::ProcessorType))&ElectProcessor::ctor_ElectProcessor)
            },
            _hook_record {
                (LPVOID)0x1402bd3f0L,
                (LPVOID *)&ElectProcessorGetProcessorType6_user,
                (LPVOID *)&ElectProcessorGetProcessorType6_next,
                (LPVOID)cast_pointer_function(ElectProcessorGetProcessorType6_wrapper),
                (LPVOID)cast_pointer_function((ElectProcessor::ProcessorType(ElectProcessor::*)())&ElectProcessor::GetProcessorType)
            },
            _hook_record {
                (LPVOID)0x1402b7c00L,
                (LPVOID *)&ElectProcessorInitialize8_user,
                (LPVOID *)&ElectProcessorInitialize8_next,
                (LPVOID)cast_pointer_function(ElectProcessorInitialize8_wrapper),
                (LPVOID)cast_pointer_function((bool(ElectProcessor::*)())&ElectProcessor::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402b7ba0L,
                (LPVOID *)&ElectProcessordtor_ElectProcessor13_user,
                (LPVOID *)&ElectProcessordtor_ElectProcessor13_next,
                (LPVOID)cast_pointer_function(ElectProcessordtor_ElectProcessor13_wrapper),
                (LPVOID)cast_pointer_function((void(ElectProcessor::*)())&ElectProcessor::dtor_ElectProcessor)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
