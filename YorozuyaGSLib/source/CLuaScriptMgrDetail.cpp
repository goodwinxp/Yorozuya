#include <CLuaScriptMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CLuaScriptMgrAttachLuaScript2_ptr CLuaScriptMgrAttachLuaScript2_next(nullptr);
        Info::CLuaScriptMgrAttachLuaScript2_clbk CLuaScriptMgrAttachLuaScript2_user(nullptr);
        
        
        Info::CLuaScriptMgrctor_CLuaScriptMgr4_ptr CLuaScriptMgrctor_CLuaScriptMgr4_next(nullptr);
        Info::CLuaScriptMgrctor_CLuaScriptMgr4_clbk CLuaScriptMgrctor_CLuaScriptMgr4_user(nullptr);
        
        Info::CLuaScriptMgrDestroy6_ptr CLuaScriptMgrDestroy6_next(nullptr);
        Info::CLuaScriptMgrDestroy6_clbk CLuaScriptMgrDestroy6_user(nullptr);
        
        Info::CLuaScriptMgrDetackLuaScript8_ptr CLuaScriptMgrDetackLuaScript8_next(nullptr);
        Info::CLuaScriptMgrDetackLuaScript8_clbk CLuaScriptMgrDetackLuaScript8_user(nullptr);
        
        Info::CLuaScriptMgrGetErrorLogFile10_ptr CLuaScriptMgrGetErrorLogFile10_next(nullptr);
        Info::CLuaScriptMgrGetErrorLogFile10_clbk CLuaScriptMgrGetErrorLogFile10_user(nullptr);
        
        Info::CLuaScriptMgrGetStateLogFile12_ptr CLuaScriptMgrGetStateLogFile12_next(nullptr);
        Info::CLuaScriptMgrGetStateLogFile12_clbk CLuaScriptMgrGetStateLogFile12_user(nullptr);
        
        Info::CLuaScriptMgrInitSDM14_ptr CLuaScriptMgrInitSDM14_next(nullptr);
        Info::CLuaScriptMgrInitSDM14_clbk CLuaScriptMgrInitSDM14_user(nullptr);
        
        Info::CLuaScriptMgrInstance16_ptr CLuaScriptMgrInstance16_next(nullptr);
        Info::CLuaScriptMgrInstance16_clbk CLuaScriptMgrInstance16_user(nullptr);
        
        Info::CLuaScriptMgrLogStack18_ptr CLuaScriptMgrLogStack18_next(nullptr);
        Info::CLuaScriptMgrLogStack18_clbk CLuaScriptMgrLogStack18_user(nullptr);
        
        Info::CLuaScriptMgrLoop20_ptr CLuaScriptMgrLoop20_next(nullptr);
        Info::CLuaScriptMgrLoop20_clbk CLuaScriptMgrLoop20_user(nullptr);
        
        Info::CLuaScriptMgrNewCommandEx22_ptr CLuaScriptMgrNewCommandEx22_next(nullptr);
        Info::CLuaScriptMgrNewCommandEx22_clbk CLuaScriptMgrNewCommandEx22_user(nullptr);
        
        Info::CLuaScriptMgrNewScript24_ptr CLuaScriptMgrNewScript24_next(nullptr);
        Info::CLuaScriptMgrNewScript24_clbk CLuaScriptMgrNewScript24_user(nullptr);
        
        Info::CLuaScriptMgrRemoveCommandEx26_ptr CLuaScriptMgrRemoveCommandEx26_next(nullptr);
        Info::CLuaScriptMgrRemoveCommandEx26_clbk CLuaScriptMgrRemoveCommandEx26_user(nullptr);
        
        Info::CLuaScriptMgrRemoveScript28_ptr CLuaScriptMgrRemoveScript28_next(nullptr);
        Info::CLuaScriptMgrRemoveScript28_clbk CLuaScriptMgrRemoveScript28_user(nullptr);
        
        Info::CLuaScriptMgrSearchScript30_ptr CLuaScriptMgrSearchScript30_next(nullptr);
        Info::CLuaScriptMgrSearchScript30_clbk CLuaScriptMgrSearchScript30_user(nullptr);
        
        Info::CLuaScriptMgrSearchScriptFromLuaState32_ptr CLuaScriptMgrSearchScriptFromLuaState32_next(nullptr);
        Info::CLuaScriptMgrSearchScriptFromLuaState32_clbk CLuaScriptMgrSearchScriptFromLuaState32_user(nullptr);
        
        Info::CLuaScriptMgr_Regist_Novus34_ptr CLuaScriptMgr_Regist_Novus34_next(nullptr);
        Info::CLuaScriptMgr_Regist_Novus34_clbk CLuaScriptMgr_Regist_Novus34_user(nullptr);
        
        
        Info::CLuaScriptMgrdtor_CLuaScriptMgr38_ptr CLuaScriptMgrdtor_CLuaScriptMgr38_next(nullptr);
        Info::CLuaScriptMgrdtor_CLuaScriptMgr38_clbk CLuaScriptMgrdtor_CLuaScriptMgr38_user(nullptr);
        
        bool CLuaScriptMgrAttachLuaScript2_wrapper(struct CLuaScriptMgr* _this, struct CLuaScript* pScript, struct CLuaCommand* pAttachCommand)
        {
           return CLuaScriptMgrAttachLuaScript2_user(_this, pScript, pAttachCommand, CLuaScriptMgrAttachLuaScript2_next);
        };
        
        void CLuaScriptMgrctor_CLuaScriptMgr4_wrapper(struct CLuaScriptMgr* _this)
        {
           CLuaScriptMgrctor_CLuaScriptMgr4_user(_this, CLuaScriptMgrctor_CLuaScriptMgr4_next);
        };
        void CLuaScriptMgrDestroy6_wrapper()
        {
           CLuaScriptMgrDestroy6_user(CLuaScriptMgrDestroy6_next);
        };
        bool CLuaScriptMgrDetackLuaScript8_wrapper(struct CLuaScriptMgr* _this, struct CLuaScript* pScript)
        {
           return CLuaScriptMgrDetackLuaScript8_user(_this, pScript, CLuaScriptMgrDetackLuaScript8_next);
        };
        struct CLogFile* CLuaScriptMgrGetErrorLogFile10_wrapper(struct CLuaScriptMgr* _this)
        {
           return CLuaScriptMgrGetErrorLogFile10_user(_this, CLuaScriptMgrGetErrorLogFile10_next);
        };
        struct CLogFile* CLuaScriptMgrGetStateLogFile12_wrapper(struct CLuaScriptMgr* _this)
        {
           return CLuaScriptMgrGetStateLogFile12_user(_this, CLuaScriptMgrGetStateLogFile12_next);
        };
        bool CLuaScriptMgrInitSDM14_wrapper(struct CLuaScriptMgr* _this)
        {
           return CLuaScriptMgrInitSDM14_user(_this, CLuaScriptMgrInitSDM14_next);
        };
        struct CLuaScriptMgr* CLuaScriptMgrInstance16_wrapper()
        {
           return CLuaScriptMgrInstance16_user(CLuaScriptMgrInstance16_next);
        };
        void CLuaScriptMgrLogStack18_wrapper(struct CLuaScriptMgr* _this, struct CLuaScript* pScript)
        {
           CLuaScriptMgrLogStack18_user(_this, pScript, CLuaScriptMgrLogStack18_next);
        };
        void CLuaScriptMgrLoop20_wrapper(struct CLuaScriptMgr* _this)
        {
           CLuaScriptMgrLoop20_user(_this, CLuaScriptMgrLoop20_next);
        };
        struct CLuaCommandEx* CLuaScriptMgrNewCommandEx22_wrapper(struct CLuaScriptMgr* _this)
        {
           return CLuaScriptMgrNewCommandEx22_user(_this, CLuaScriptMgrNewCommandEx22_next);
        };
        struct CLuaScript* CLuaScriptMgrNewScript24_wrapper(struct CLuaScriptMgr* _this)
        {
           return CLuaScriptMgrNewScript24_user(_this, CLuaScriptMgrNewScript24_next);
        };
        void CLuaScriptMgrRemoveCommandEx26_wrapper(struct CLuaScriptMgr* _this, struct CLuaCommandEx* pCommand)
        {
           CLuaScriptMgrRemoveCommandEx26_user(_this, pCommand, CLuaScriptMgrRemoveCommandEx26_next);
        };
        void CLuaScriptMgrRemoveScript28_wrapper(struct CLuaScriptMgr* _this, struct CLuaScript* pScript)
        {
           CLuaScriptMgrRemoveScript28_user(_this, pScript, CLuaScriptMgrRemoveScript28_next);
        };
        struct CLuaScript* CLuaScriptMgrSearchScript30_wrapper(struct CLuaScriptMgr* _this, char* strFileName)
        {
           return CLuaScriptMgrSearchScript30_user(_this, strFileName, CLuaScriptMgrSearchScript30_next);
        };
        struct CLuaScript* CLuaScriptMgrSearchScriptFromLuaState32_wrapper(struct CLuaScriptMgr* _this, lua_State* state)
        {
           return CLuaScriptMgrSearchScriptFromLuaState32_user(_this, state, CLuaScriptMgrSearchScriptFromLuaState32_next);
        };
        bool CLuaScriptMgr_Regist_Novus34_wrapper(struct CLuaScriptMgr* _this)
        {
           return CLuaScriptMgr_Regist_Novus34_user(_this, CLuaScriptMgr_Regist_Novus34_next);
        };
        
        void CLuaScriptMgrdtor_CLuaScriptMgr38_wrapper(struct CLuaScriptMgr* _this)
        {
           CLuaScriptMgrdtor_CLuaScriptMgr38_user(_this, CLuaScriptMgrdtor_CLuaScriptMgr38_next);
        };
        
        ::std::array<hook_record, 18> CLuaScriptMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x1403ffc00L,
                (LPVOID *)&CLuaScriptMgrAttachLuaScript2_user,
                (LPVOID *)&CLuaScriptMgrAttachLuaScript2_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrAttachLuaScript2_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaScriptMgr::*)(struct CLuaScript*, struct CLuaCommand*))&CLuaScriptMgr::AttachLuaScript)
            },
            _hook_record {
                (LPVOID)0x1403ff2f0L,
                (LPVOID *)&CLuaScriptMgrctor_CLuaScriptMgr4_user,
                (LPVOID *)&CLuaScriptMgrctor_CLuaScriptMgr4_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrctor_CLuaScriptMgr4_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaScriptMgr::*)())&CLuaScriptMgr::ctor_CLuaScriptMgr)
            },
            _hook_record {
                (LPVOID)0x140203460L,
                (LPVOID *)&CLuaScriptMgrDestroy6_user,
                (LPVOID *)&CLuaScriptMgrDestroy6_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrDestroy6_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CLuaScriptMgr::Destroy)
            },
            _hook_record {
                (LPVOID)0x1403ffe90L,
                (LPVOID *)&CLuaScriptMgrDetackLuaScript8_user,
                (LPVOID *)&CLuaScriptMgrDetackLuaScript8_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrDetackLuaScript8_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaScriptMgr::*)(struct CLuaScript*))&CLuaScriptMgr::DetackLuaScript)
            },
            _hook_record {
                (LPVOID)0x140400f90L,
                (LPVOID *)&CLuaScriptMgrGetErrorLogFile10_user,
                (LPVOID *)&CLuaScriptMgrGetErrorLogFile10_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrGetErrorLogFile10_wrapper),
                (LPVOID)cast_pointer_function((struct CLogFile*(CLuaScriptMgr::*)())&CLuaScriptMgr::GetErrorLogFile)
            },
            _hook_record {
                (LPVOID)0x140400ff0L,
                (LPVOID *)&CLuaScriptMgrGetStateLogFile12_user,
                (LPVOID *)&CLuaScriptMgrGetStateLogFile12_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrGetStateLogFile12_wrapper),
                (LPVOID)cast_pointer_function((struct CLogFile*(CLuaScriptMgr::*)())&CLuaScriptMgr::GetStateLogFile)
            },
            _hook_record {
                (LPVOID)0x1403ff5a0L,
                (LPVOID *)&CLuaScriptMgrInitSDM14_user,
                (LPVOID *)&CLuaScriptMgrInitSDM14_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrInitSDM14_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaScriptMgr::*)())&CLuaScriptMgr::InitSDM)
            },
            _hook_record {
                (LPVOID)0x140203740L,
                (LPVOID *)&CLuaScriptMgrInstance16_user,
                (LPVOID *)&CLuaScriptMgrInstance16_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrInstance16_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaScriptMgr*(*)())&CLuaScriptMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x140400430L,
                (LPVOID *)&CLuaScriptMgrLogStack18_user,
                (LPVOID *)&CLuaScriptMgrLogStack18_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrLogStack18_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaScriptMgr::*)(struct CLuaScript*))&CLuaScriptMgr::LogStack)
            },
            _hook_record {
                (LPVOID)0x140400050L,
                (LPVOID *)&CLuaScriptMgrLoop20_user,
                (LPVOID *)&CLuaScriptMgrLoop20_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrLoop20_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaScriptMgr::*)())&CLuaScriptMgr::Loop)
            },
            _hook_record {
                (LPVOID)0x1403ff7e0L,
                (LPVOID *)&CLuaScriptMgrNewCommandEx22_user,
                (LPVOID *)&CLuaScriptMgrNewCommandEx22_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrNewCommandEx22_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaCommandEx*(CLuaScriptMgr::*)())&CLuaScriptMgr::NewCommandEx)
            },
            _hook_record {
                (LPVOID)0x1403ff900L,
                (LPVOID *)&CLuaScriptMgrNewScript24_user,
                (LPVOID *)&CLuaScriptMgrNewScript24_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrNewScript24_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaScript*(CLuaScriptMgr::*)())&CLuaScriptMgr::NewScript)
            },
            _hook_record {
                (LPVOID)0x1403ff880L,
                (LPVOID *)&CLuaScriptMgrRemoveCommandEx26_user,
                (LPVOID *)&CLuaScriptMgrRemoveCommandEx26_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrRemoveCommandEx26_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaScriptMgr::*)(struct CLuaCommandEx*))&CLuaScriptMgr::RemoveCommandEx)
            },
            _hook_record {
                (LPVOID)0x1403ff9a0L,
                (LPVOID *)&CLuaScriptMgrRemoveScript28_user,
                (LPVOID *)&CLuaScriptMgrRemoveScript28_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrRemoveScript28_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaScriptMgr::*)(struct CLuaScript*))&CLuaScriptMgr::RemoveScript)
            },
            _hook_record {
                (LPVOID)0x1403ffa30L,
                (LPVOID *)&CLuaScriptMgrSearchScript30_user,
                (LPVOID *)&CLuaScriptMgrSearchScript30_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrSearchScript30_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaScript*(CLuaScriptMgr::*)(char*))&CLuaScriptMgr::SearchScript)
            },
            _hook_record {
                (LPVOID)0x1403ffb10L,
                (LPVOID *)&CLuaScriptMgrSearchScriptFromLuaState32_user,
                (LPVOID *)&CLuaScriptMgrSearchScriptFromLuaState32_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrSearchScriptFromLuaState32_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaScript*(CLuaScriptMgr::*)(lua_State*))&CLuaScriptMgr::SearchScriptFromLuaState)
            },
            _hook_record {
                (LPVOID)0x140406360L,
                (LPVOID *)&CLuaScriptMgr_Regist_Novus34_user,
                (LPVOID *)&CLuaScriptMgr_Regist_Novus34_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgr_Regist_Novus34_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaScriptMgr::*)())&CLuaScriptMgr::_Regist_Novus)
            },
            _hook_record {
                (LPVOID)0x1403ff470L,
                (LPVOID *)&CLuaScriptMgrdtor_CLuaScriptMgr38_user,
                (LPVOID *)&CLuaScriptMgrdtor_CLuaScriptMgr38_next,
                (LPVOID)cast_pointer_function(CLuaScriptMgrdtor_CLuaScriptMgr38_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaScriptMgr::*)())&CLuaScriptMgr::dtor_CLuaScriptMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
