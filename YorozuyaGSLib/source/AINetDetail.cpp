#include <AINetDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::AINetctor_AINet2_ptr AINetctor_AINet2_next(nullptr);
        Info::AINetctor_AINet2_clbk AINetctor_AINet2_user(nullptr);
        
        
        Info::AINetdtor_AINet7_ptr AINetdtor_AINet7_next(nullptr);
        Info::AINetdtor_AINet7_clbk AINetdtor_AINet7_user(nullptr);
        
        
        void AINetctor_AINet2_wrapper(struct AINet* _this, char* pstrAgent, unsigned int dwAccessType, char* pstrProxyName, char* pstrProxyBypass, unsigned int dwFlags)
        {
           AINetctor_AINet2_user(_this, pstrAgent, dwAccessType, pstrProxyName, pstrProxyBypass, dwFlags, AINetctor_AINet2_next);
        };
        
        void AINetdtor_AINet7_wrapper(struct AINet* _this)
        {
           AINetdtor_AINet7_user(_this, AINetdtor_AINet7_next);
        };
        
        ::std::array<hook_record, 2> AINet_functions = 
        {
            _hook_record {
                (LPVOID)0x140432290L,
                (LPVOID *)&AINetctor_AINet2_user,
                (LPVOID *)&AINetctor_AINet2_next,
                (LPVOID)cast_pointer_function(AINetctor_AINet2_wrapper),
                (LPVOID)cast_pointer_function((void(AINet::*)(char*, unsigned int, char*, char*, unsigned int))&AINet::ctor_AINet)
            },
            _hook_record {
                (LPVOID)0x140432310L,
                (LPVOID *)&AINetdtor_AINet7_user,
                (LPVOID *)&AINetdtor_AINet7_next,
                (LPVOID)cast_pointer_function(AINetdtor_AINet7_wrapper),
                (LPVOID)cast_pointer_function((void(AINet::*)())&AINet::dtor_AINet)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
