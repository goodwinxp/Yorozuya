#include <UsStateTBLDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::UsStateTBLAdd2_ptr UsStateTBLAdd2_next(nullptr);
        Info::UsStateTBLAdd2_clbk UsStateTBLAdd2_user(nullptr);
        
        Info::UsStateTBLAlloc4_ptr UsStateTBLAlloc4_next(nullptr);
        Info::UsStateTBLAlloc4_clbk UsStateTBLAlloc4_user(nullptr);
        
        Info::UsStateTBLCleanUp6_ptr UsStateTBLCleanUp6_next(nullptr);
        Info::UsStateTBLCleanUp6_clbk UsStateTBLCleanUp6_user(nullptr);
        
        Info::UsStateTBLGetHSFMSize8_ptr UsStateTBLGetHSFMSize8_next(nullptr);
        Info::UsStateTBLGetHSFMSize8_clbk UsStateTBLGetHSFMSize8_user(nullptr);
        
        Info::UsStateTBLGetTransState10_ptr UsStateTBLGetTransState10_next(nullptr);
        Info::UsStateTBLGetTransState10_clbk UsStateTBLGetTransState10_user(nullptr);
        
        Info::UsStateTBLOnMsgProc12_ptr UsStateTBLOnMsgProc12_next(nullptr);
        Info::UsStateTBLOnMsgProc12_clbk UsStateTBLOnMsgProc12_user(nullptr);
        
        Info::UsStateTBLSetCallFunction14_ptr UsStateTBLSetCallFunction14_next(nullptr);
        Info::UsStateTBLSetCallFunction14_clbk UsStateTBLSetCallFunction14_user(nullptr);
        
        Info::UsStateTBLSetExternCallFunction16_ptr UsStateTBLSetExternCallFunction16_next(nullptr);
        Info::UsStateTBLSetExternCallFunction16_clbk UsStateTBLSetExternCallFunction16_user(nullptr);
        
        Info::UsStateTBLSetHFSM18_ptr UsStateTBLSetHFSM18_next(nullptr);
        Info::UsStateTBLSetHFSM18_clbk UsStateTBLSetHFSM18_user(nullptr);
        
        Info::UsStateTBLSetHFSMNode20_ptr UsStateTBLSetHFSMNode20_next(nullptr);
        Info::UsStateTBLSetHFSMNode20_clbk UsStateTBLSetHFSMNode20_user(nullptr);
        
        Info::UsStateTBLSetInitFunction22_ptr UsStateTBLSetInitFunction22_next(nullptr);
        Info::UsStateTBLSetInitFunction22_clbk UsStateTBLSetInitFunction22_user(nullptr);
        
        
        Info::UsStateTBLctor_UsStateTBL24_ptr UsStateTBLctor_UsStateTBL24_next(nullptr);
        Info::UsStateTBLctor_UsStateTBL24_clbk UsStateTBLctor_UsStateTBL24_user(nullptr);
        
        
        Info::UsStateTBLdtor_UsStateTBL29_ptr UsStateTBLdtor_UsStateTBL29_next(nullptr);
        Info::UsStateTBLdtor_UsStateTBL29_clbk UsStateTBLdtor_UsStateTBL29_user(nullptr);
        
        int UsStateTBLAdd2_wrapper(struct UsStateTBL* _this, char byHFSMIndex, char byCurrState, char byEvent_IN, char byNextState_OUT, void (WINAPIV* pEvnetFun)(struct Us_HFSM*, unsigned int, void*))
        {
           return UsStateTBLAdd2_user(_this, byHFSMIndex, byCurrState, byEvent_IN, byNextState_OUT, pEvnetFun, UsStateTBLAdd2_next);
        };
        void UsStateTBLAlloc4_wrapper(struct UsStateTBL* _this, char byHFSMSize, char byStateSize, char byMessageSize)
        {
           UsStateTBLAlloc4_user(_this, byHFSMSize, byStateSize, byMessageSize, UsStateTBLAlloc4_next);
        };
        void UsStateTBLCleanUp6_wrapper(struct UsStateTBL* _this)
        {
           UsStateTBLCleanUp6_user(_this, UsStateTBLCleanUp6_next);
        };
        char UsStateTBLGetHSFMSize8_wrapper(struct UsStateTBL* _this)
        {
           return UsStateTBLGetHSFMSize8_user(_this, UsStateTBLGetHSFMSize8_next);
        };
        struct UsStateTBL::_TBLData* UsStateTBLGetTransState10_wrapper(struct UsStateTBL* _this, char byState, char byMessage)
        {
           return UsStateTBLGetTransState10_user(_this, byState, byMessage, UsStateTBLGetTransState10_next);
        };
        void UsStateTBLOnMsgProc12_wrapper(struct Us_HFSM* pHFS, unsigned int dwFSMIndex, unsigned int dwMSG, void* lpParam)
        {
           UsStateTBLOnMsgProc12_user(pHFS, dwFSMIndex, dwMSG, lpParam, UsStateTBLOnMsgProc12_next);
        };
        void UsStateTBLSetCallFunction14_wrapper(struct UsStateTBL* _this, void (WINAPIV* pFun)(struct Us_HFSM*, unsigned int, unsigned int, void*))
        {
           UsStateTBLSetCallFunction14_user(_this, pFun, UsStateTBLSetCallFunction14_next);
        };
        void UsStateTBLSetExternCallFunction16_wrapper(struct UsStateTBL* _this, void (WINAPIV* pExternFun)(struct Us_HFSM*, unsigned int, void*, int))
        {
           UsStateTBLSetExternCallFunction16_user(_this, pExternFun, UsStateTBLSetExternCallFunction16_next);
        };
        int UsStateTBLSetHFSM18_wrapper(struct UsStateTBL* _this, struct Us_HFSM* pHFSM, void* pObject)
        {
           return UsStateTBLSetHFSM18_user(_this, pHFSM, pObject, UsStateTBLSetHFSM18_next);
        };
        void UsStateTBLSetHFSMNode20_wrapper(struct UsStateTBL* _this, int nNodeIndex, unsigned int dwStartState, unsigned int dwLoopTime, int ParentData, int bUsed)
        {
           UsStateTBLSetHFSMNode20_user(_this, nNodeIndex, dwStartState, dwLoopTime, ParentData, bUsed, UsStateTBLSetHFSMNode20_next);
        };
        void UsStateTBLSetInitFunction22_wrapper(struct UsStateTBL* _this, int (WINAPIV* pInitFun)(struct UsStateTBL*, struct Us_HFSM*))
        {
           UsStateTBLSetInitFunction22_user(_this, pInitFun, UsStateTBLSetInitFunction22_next);
        };
        
        void UsStateTBLctor_UsStateTBL24_wrapper(struct UsStateTBL* _this)
        {
           UsStateTBLctor_UsStateTBL24_user(_this, UsStateTBLctor_UsStateTBL24_next);
        };
        
        void UsStateTBLdtor_UsStateTBL29_wrapper(struct UsStateTBL* _this)
        {
           UsStateTBLdtor_UsStateTBL29_user(_this, UsStateTBLdtor_UsStateTBL29_next);
        };
        
        ::std::array<hook_record, 13> UsStateTBL_functions = 
        {
            _hook_record {
                (LPVOID)0x140161ea0L,
                (LPVOID *)&UsStateTBLAdd2_user,
                (LPVOID *)&UsStateTBLAdd2_next,
                (LPVOID)cast_pointer_function(UsStateTBLAdd2_wrapper),
                (LPVOID)cast_pointer_function((int(UsStateTBL::*)(char, char, char, char, void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*)))&UsStateTBL::Add)
            },
            _hook_record {
                (LPVOID)0x140161bc0L,
                (LPVOID *)&UsStateTBLAlloc4_user,
                (LPVOID *)&UsStateTBLAlloc4_next,
                (LPVOID)cast_pointer_function(UsStateTBLAlloc4_wrapper),
                (LPVOID)cast_pointer_function((void(UsStateTBL::*)(char, char, char))&UsStateTBL::Alloc)
            },
            _hook_record {
                (LPVOID)0x140162040L,
                (LPVOID *)&UsStateTBLCleanUp6_user,
                (LPVOID *)&UsStateTBLCleanUp6_next,
                (LPVOID)cast_pointer_function(UsStateTBLCleanUp6_wrapper),
                (LPVOID)cast_pointer_function((void(UsStateTBL::*)())&UsStateTBL::CleanUp)
            },
            _hook_record {
                (LPVOID)0x140163670L,
                (LPVOID *)&UsStateTBLGetHSFMSize8_user,
                (LPVOID *)&UsStateTBLGetHSFMSize8_next,
                (LPVOID)cast_pointer_function(UsStateTBLGetHSFMSize8_wrapper),
                (LPVOID)cast_pointer_function((char(UsStateTBL::*)())&UsStateTBL::GetHSFMSize)
            },
            _hook_record {
                (LPVOID)0x140162230L,
                (LPVOID *)&UsStateTBLGetTransState10_user,
                (LPVOID *)&UsStateTBLGetTransState10_next,
                (LPVOID)cast_pointer_function(UsStateTBLGetTransState10_wrapper),
                (LPVOID)cast_pointer_function((struct UsStateTBL::_TBLData*(UsStateTBL::*)(char, char))&UsStateTBL::GetTransState)
            },
            _hook_record {
                (LPVOID)0x140162de0L,
                (LPVOID *)&UsStateTBLOnMsgProc12_user,
                (LPVOID *)&UsStateTBLOnMsgProc12_next,
                (LPVOID)cast_pointer_function(UsStateTBLOnMsgProc12_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, unsigned int, void*))&UsStateTBL::OnMsgProc)
            },
            _hook_record {
                (LPVOID)0x140161b30L,
                (LPVOID *)&UsStateTBLSetCallFunction14_user,
                (LPVOID *)&UsStateTBLSetCallFunction14_next,
                (LPVOID)cast_pointer_function(UsStateTBLSetCallFunction14_wrapper),
                (LPVOID)cast_pointer_function((void(UsStateTBL::*)(void (WINAPIV*)(struct Us_HFSM*, unsigned int, unsigned int, void*)))&UsStateTBL::SetCallFunction)
            },
            _hook_record {
                (LPVOID)0x140161b90L,
                (LPVOID *)&UsStateTBLSetExternCallFunction16_user,
                (LPVOID *)&UsStateTBLSetExternCallFunction16_next,
                (LPVOID)cast_pointer_function(UsStateTBLSetExternCallFunction16_wrapper),
                (LPVOID)cast_pointer_function((void(UsStateTBL::*)(void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, int)))&UsStateTBL::SetExternCallFunction)
            },
            _hook_record {
                (LPVOID)0x140162180L,
                (LPVOID *)&UsStateTBLSetHFSM18_user,
                (LPVOID *)&UsStateTBLSetHFSM18_next,
                (LPVOID)cast_pointer_function(UsStateTBLSetHFSM18_wrapper),
                (LPVOID)cast_pointer_function((int(UsStateTBL::*)(struct Us_HFSM*, void*))&UsStateTBL::SetHFSM)
            },
            _hook_record {
                (LPVOID)0x140161fb0L,
                (LPVOID *)&UsStateTBLSetHFSMNode20_user,
                (LPVOID *)&UsStateTBLSetHFSMNode20_next,
                (LPVOID)cast_pointer_function(UsStateTBLSetHFSMNode20_wrapper),
                (LPVOID)cast_pointer_function((void(UsStateTBL::*)(int, unsigned int, unsigned int, int, int))&UsStateTBL::SetHFSMNode)
            },
            _hook_record {
                (LPVOID)0x140161b60L,
                (LPVOID *)&UsStateTBLSetInitFunction22_user,
                (LPVOID *)&UsStateTBLSetInitFunction22_next,
                (LPVOID)cast_pointer_function(UsStateTBLSetInitFunction22_wrapper),
                (LPVOID)cast_pointer_function((void(UsStateTBL::*)(int (WINAPIV*)(struct UsStateTBL*, struct Us_HFSM*)))&UsStateTBL::SetInitFunction)
            },
            _hook_record {
                (LPVOID)0x1401619f0L,
                (LPVOID *)&UsStateTBLctor_UsStateTBL24_user,
                (LPVOID *)&UsStateTBLctor_UsStateTBL24_next,
                (LPVOID)cast_pointer_function(UsStateTBLctor_UsStateTBL24_wrapper),
                (LPVOID)cast_pointer_function((void(UsStateTBL::*)())&UsStateTBL::ctor_UsStateTBL)
            },
            _hook_record {
                (LPVOID)0x140161aa0L,
                (LPVOID *)&UsStateTBLdtor_UsStateTBL29_user,
                (LPVOID *)&UsStateTBLdtor_UsStateTBL29_next,
                (LPVOID)cast_pointer_function(UsStateTBLdtor_UsStateTBL29_wrapper),
                (LPVOID)cast_pointer_function((void(UsStateTBL::*)())&UsStateTBL::dtor_UsStateTBL)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
