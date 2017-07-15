#include <Us_HFSMDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::Us_HFSMAddLoopDelayTime2_ptr Us_HFSMAddLoopDelayTime2_next(nullptr);
        Info::Us_HFSMAddLoopDelayTime2_clbk Us_HFSMAddLoopDelayTime2_user(nullptr);
        
        Info::Us_HFSMCleanUp4_ptr Us_HFSMCleanUp4_next(nullptr);
        Info::Us_HFSMCleanUp4_clbk Us_HFSMCleanUp4_user(nullptr);
        
        Info::Us_HFSMGetIndex6_ptr Us_HFSMGetIndex6_next(nullptr);
        Info::Us_HFSMGetIndex6_clbk Us_HFSMGetIndex6_user(nullptr);
        
        Info::Us_HFSMGetNode8_ptr Us_HFSMGetNode8_next(nullptr);
        Info::Us_HFSMGetNode8_clbk Us_HFSMGetNode8_user(nullptr);
        
        Info::Us_HFSMGetObjectA10_ptr Us_HFSMGetObjectA10_next(nullptr);
        Info::Us_HFSMGetObjectA10_clbk Us_HFSMGetObjectA10_user(nullptr);
        
        Info::Us_HFSMGetState12_ptr Us_HFSMGetState12_next(nullptr);
        Info::Us_HFSMGetState12_clbk Us_HFSMGetState12_user(nullptr);
        
        Info::Us_HFSMInit14_ptr Us_HFSMInit14_next(nullptr);
        Info::Us_HFSMInit14_clbk Us_HFSMInit14_user(nullptr);
        
        Info::Us_HFSMLink16_ptr Us_HFSMLink16_next(nullptr);
        Info::Us_HFSMLink16_clbk Us_HFSMLink16_user(nullptr);
        
        Info::Us_HFSMOnProcess18_ptr Us_HFSMOnProcess18_next(nullptr);
        Info::Us_HFSMOnProcess18_clbk Us_HFSMOnProcess18_user(nullptr);
        
        Info::Us_HFSMSendExternMsg20_ptr Us_HFSMSendExternMsg20_next(nullptr);
        Info::Us_HFSMSendExternMsg20_clbk Us_HFSMSendExternMsg20_user(nullptr);
        
        Info::Us_HFSMSendMsg22_ptr Us_HFSMSendMsg22_next(nullptr);
        Info::Us_HFSMSendMsg22_clbk Us_HFSMSendMsg22_user(nullptr);
        
        Info::Us_HFSMSetLoopTime24_ptr Us_HFSMSetLoopTime24_next(nullptr);
        Info::Us_HFSMSetLoopTime24_clbk Us_HFSMSetLoopTime24_user(nullptr);
        
        Info::Us_HFSMSetMyData26_ptr Us_HFSMSetMyData26_next(nullptr);
        Info::Us_HFSMSetMyData26_clbk Us_HFSMSetMyData26_user(nullptr);
        
        
        Info::Us_HFSMctor_Us_HFSM28_ptr Us_HFSMctor_Us_HFSM28_next(nullptr);
        Info::Us_HFSMctor_Us_HFSM28_clbk Us_HFSMctor_Us_HFSM28_user(nullptr);
        
        
        Info::Us_HFSMdtor_Us_HFSM33_ptr Us_HFSMdtor_Us_HFSM33_next(nullptr);
        Info::Us_HFSMdtor_Us_HFSM33_clbk Us_HFSMdtor_Us_HFSM33_user(nullptr);
        
        void Us_HFSMAddLoopDelayTime2_wrapper(struct Us_HFSM* _this, int nIndex, unsigned int dwAddDelay)
        {
           Us_HFSMAddLoopDelayTime2_user(_this, nIndex, dwAddDelay, Us_HFSMAddLoopDelayTime2_next);
        };
        void Us_HFSMCleanUp4_wrapper(struct Us_HFSM* _this)
        {
           Us_HFSMCleanUp4_user(_this, Us_HFSMCleanUp4_next);
        };
        unsigned int Us_HFSMGetIndex6_wrapper(struct Us_HFSM* _this, struct Us_FSM_Node* pNode)
        {
           return Us_HFSMGetIndex6_user(_this, pNode, Us_HFSMGetIndex6_next);
        };
        struct Us_FSM_Node* Us_HFSMGetNode8_wrapper(struct Us_HFSM* _this, unsigned int dwIndex)
        {
           return Us_HFSMGetNode8_user(_this, dwIndex, Us_HFSMGetNode8_next);
        };
        void* Us_HFSMGetObjectA10_wrapper(struct Us_HFSM* _this)
        {
           return Us_HFSMGetObjectA10_user(_this, Us_HFSMGetObjectA10_next);
        };
        unsigned int Us_HFSMGetState12_wrapper(struct Us_HFSM* _this, unsigned int dwIndex)
        {
           return Us_HFSMGetState12_user(_this, dwIndex, Us_HFSMGetState12_next);
        };
        void Us_HFSMInit14_wrapper(struct Us_HFSM* _this)
        {
           Us_HFSMInit14_user(_this, Us_HFSMInit14_next);
        };
        int Us_HFSMLink16_wrapper(struct Us_HFSM* _this, struct Us_FSM_Node* pParent, struct Us_FSM_Node* pChild)
        {
           return Us_HFSMLink16_user(_this, pParent, pChild, Us_HFSMLink16_next);
        };
        void Us_HFSMOnProcess18_wrapper(struct Us_HFSM* _this, unsigned int dwLastTime)
        {
           Us_HFSMOnProcess18_user(_this, dwLastTime, Us_HFSMOnProcess18_next);
        };
        void Us_HFSMSendExternMsg20_wrapper(struct Us_HFSM* pHFS, unsigned int dwMSG, void* lpParam, int nParam)
        {
           Us_HFSMSendExternMsg20_user(pHFS, dwMSG, lpParam, nParam, Us_HFSMSendExternMsg20_next);
        };
        void Us_HFSMSendMsg22_wrapper(struct Us_HFSM* pHFS, unsigned int dwFSMIndex, unsigned int dwMSG, void* lpParam)
        {
           Us_HFSMSendMsg22_user(pHFS, dwFSMIndex, dwMSG, lpParam, Us_HFSMSendMsg22_next);
        };
        void Us_HFSMSetLoopTime24_wrapper(struct Us_HFSM* _this, int nIndex, unsigned int dwLoopTIme)
        {
           Us_HFSMSetLoopTime24_user(_this, nIndex, dwLoopTIme, Us_HFSMSetLoopTime24_next);
        };
        int Us_HFSMSetMyData26_wrapper(struct Us_HFSM* _this, struct UsStateTBL* pStateTBL, void* pObject)
        {
           return Us_HFSMSetMyData26_user(_this, pStateTBL, pObject, Us_HFSMSetMyData26_next);
        };
        
        void Us_HFSMctor_Us_HFSM28_wrapper(struct Us_HFSM* _this)
        {
           Us_HFSMctor_Us_HFSM28_user(_this, Us_HFSMctor_Us_HFSM28_next);
        };
        
        void Us_HFSMdtor_Us_HFSM33_wrapper(struct Us_HFSM* _this)
        {
           Us_HFSMdtor_Us_HFSM33_user(_this, Us_HFSMdtor_Us_HFSM33_next);
        };
        
        ::std::array<hook_record, 15> Us_HFSM_functions = 
        {
            _hook_record {
                (LPVOID)0x140162b90L,
                (LPVOID *)&Us_HFSMAddLoopDelayTime2_user,
                (LPVOID *)&Us_HFSMAddLoopDelayTime2_next,
                (LPVOID)cast_pointer_function(Us_HFSMAddLoopDelayTime2_wrapper),
                (LPVOID)cast_pointer_function((void(Us_HFSM::*)(int, unsigned int))&Us_HFSM::AddLoopDelayTime)
            },
            _hook_record {
                (LPVOID)0x1401624d0L,
                (LPVOID *)&Us_HFSMCleanUp4_user,
                (LPVOID *)&Us_HFSMCleanUp4_next,
                (LPVOID)cast_pointer_function(Us_HFSMCleanUp4_wrapper),
                (LPVOID)cast_pointer_function((void(Us_HFSM::*)())&Us_HFSM::CleanUp)
            },
            _hook_record {
                (LPVOID)0x140162900L,
                (LPVOID *)&Us_HFSMGetIndex6_user,
                (LPVOID *)&Us_HFSMGetIndex6_next,
                (LPVOID)cast_pointer_function(Us_HFSMGetIndex6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(Us_HFSM::*)(struct Us_FSM_Node*))&Us_HFSM::GetIndex)
            },
            _hook_record {
                (LPVOID)0x1401627d0L,
                (LPVOID *)&Us_HFSMGetNode8_user,
                (LPVOID *)&Us_HFSMGetNode8_next,
                (LPVOID)cast_pointer_function(Us_HFSMGetNode8_wrapper),
                (LPVOID)cast_pointer_function((struct Us_FSM_Node*(Us_HFSM::*)(unsigned int))&Us_HFSM::GetNode)
            },
            _hook_record {
                (LPVOID)0x140155440L,
                (LPVOID *)&Us_HFSMGetObjectA10_user,
                (LPVOID *)&Us_HFSMGetObjectA10_next,
                (LPVOID)cast_pointer_function(Us_HFSMGetObjectA10_wrapper),
                (LPVOID)cast_pointer_function((void*(Us_HFSM::*)())&Us_HFSM::GetObjectA)
            },
            _hook_record {
                (LPVOID)0x140162830L,
                (LPVOID *)&Us_HFSMGetState12_user,
                (LPVOID *)&Us_HFSMGetState12_next,
                (LPVOID)cast_pointer_function(Us_HFSMGetState12_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(Us_HFSM::*)(unsigned int))&Us_HFSM::GetState)
            },
            _hook_record {
                (LPVOID)0x140162530L,
                (LPVOID *)&Us_HFSMInit14_user,
                (LPVOID *)&Us_HFSMInit14_next,
                (LPVOID)cast_pointer_function(Us_HFSMInit14_wrapper),
                (LPVOID)cast_pointer_function((void(Us_HFSM::*)())&Us_HFSM::Init)
            },
            _hook_record {
                (LPVOID)0x140162890L,
                (LPVOID *)&Us_HFSMLink16_user,
                (LPVOID *)&Us_HFSMLink16_next,
                (LPVOID)cast_pointer_function(Us_HFSMLink16_wrapper),
                (LPVOID)cast_pointer_function((int(Us_HFSM::*)(struct Us_FSM_Node*, struct Us_FSM_Node*))&Us_HFSM::Link)
            },
            _hook_record {
                (LPVOID)0x1401629a0L,
                (LPVOID *)&Us_HFSMOnProcess18_user,
                (LPVOID *)&Us_HFSMOnProcess18_next,
                (LPVOID)cast_pointer_function(Us_HFSMOnProcess18_wrapper),
                (LPVOID)cast_pointer_function((void(Us_HFSM::*)(unsigned int))&Us_HFSM::OnProcess)
            },
            _hook_record {
                (LPVOID)0x140162d30L,
                (LPVOID *)&Us_HFSMSendExternMsg20_user,
                (LPVOID *)&Us_HFSMSendExternMsg20_next,
                (LPVOID)cast_pointer_function(Us_HFSMSendExternMsg20_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*, int))&Us_HFSM::SendExternMsg)
            },
            _hook_record {
                (LPVOID)0x140162c00L,
                (LPVOID *)&Us_HFSMSendMsg22_user,
                (LPVOID *)&Us_HFSMSendMsg22_next,
                (LPVOID)cast_pointer_function(Us_HFSMSendMsg22_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, unsigned int, void*))&Us_HFSM::SendMsg)
            },
            _hook_record {
                (LPVOID)0x140162b20L,
                (LPVOID *)&Us_HFSMSetLoopTime24_user,
                (LPVOID *)&Us_HFSMSetLoopTime24_next,
                (LPVOID)cast_pointer_function(Us_HFSMSetLoopTime24_wrapper),
                (LPVOID)cast_pointer_function((void(Us_HFSM::*)(int, unsigned int))&Us_HFSM::SetLoopTime)
            },
            _hook_record {
                (LPVOID)0x1401625e0L,
                (LPVOID *)&Us_HFSMSetMyData26_user,
                (LPVOID *)&Us_HFSMSetMyData26_next,
                (LPVOID)cast_pointer_function(Us_HFSMSetMyData26_wrapper),
                (LPVOID)cast_pointer_function((int(Us_HFSM::*)(struct UsStateTBL*, void*))&Us_HFSM::SetMyData)
            },
            _hook_record {
                (LPVOID)0x1401622a0L,
                (LPVOID *)&Us_HFSMctor_Us_HFSM28_user,
                (LPVOID *)&Us_HFSMctor_Us_HFSM28_next,
                (LPVOID)cast_pointer_function(Us_HFSMctor_Us_HFSM28_wrapper),
                (LPVOID)cast_pointer_function((void(Us_HFSM::*)())&Us_HFSM::ctor_Us_HFSM)
            },
            _hook_record {
                (LPVOID)0x1401623d0L,
                (LPVOID *)&Us_HFSMdtor_Us_HFSM33_user,
                (LPVOID *)&Us_HFSMdtor_Us_HFSM33_next,
                (LPVOID)cast_pointer_function(Us_HFSMdtor_Us_HFSM33_wrapper),
                (LPVOID)cast_pointer_function((void(Us_HFSM::*)())&Us_HFSM::dtor_Us_HFSM)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
