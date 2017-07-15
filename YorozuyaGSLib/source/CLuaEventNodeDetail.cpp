#include <CLuaEventNodeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CLuaEventNodector_CLuaEventNode2_ptr CLuaEventNodector_CLuaEventNode2_next(nullptr);
        Info::CLuaEventNodector_CLuaEventNode2_clbk CLuaEventNodector_CLuaEventNode2_user(nullptr);
        
        Info::CLuaEventNodeGetCallFunName4_ptr CLuaEventNodeGetCallFunName4_next(nullptr);
        Info::CLuaEventNodeGetCallFunName4_clbk CLuaEventNodeGetCallFunName4_user(nullptr);
        
        Info::CLuaEventNodeGetName6_ptr CLuaEventNodeGetName6_next(nullptr);
        Info::CLuaEventNodeGetName6_clbk CLuaEventNodeGetName6_user(nullptr);
        
        Info::CLuaEventNodeGetNextLoopTime8_ptr CLuaEventNodeGetNextLoopTime8_next(nullptr);
        Info::CLuaEventNodeGetNextLoopTime8_clbk CLuaEventNodeGetNextLoopTime8_user(nullptr);
        
        Info::CLuaEventNodeGetScript10_ptr CLuaEventNodeGetScript10_next(nullptr);
        Info::CLuaEventNodeGetScript10_clbk CLuaEventNodeGetScript10_user(nullptr);
        
        Info::CLuaEventNodeGetTimeTerm12_ptr CLuaEventNodeGetTimeTerm12_next(nullptr);
        Info::CLuaEventNodeGetTimeTerm12_clbk CLuaEventNodeGetTimeTerm12_user(nullptr);
        
        Info::CLuaEventNodeInit14_ptr CLuaEventNodeInit14_next(nullptr);
        Info::CLuaEventNodeInit14_clbk CLuaEventNodeInit14_user(nullptr);
        
        Info::CLuaEventNodeIsCallFun16_ptr CLuaEventNodeIsCallFun16_next(nullptr);
        Info::CLuaEventNodeIsCallFun16_clbk CLuaEventNodeIsCallFun16_user(nullptr);
        
        Info::CLuaEventNodeSetCallFun18_ptr CLuaEventNodeSetCallFun18_next(nullptr);
        Info::CLuaEventNodeSetCallFun18_clbk CLuaEventNodeSetCallFun18_user(nullptr);
        
        Info::CLuaEventNodeSetName20_ptr CLuaEventNodeSetName20_next(nullptr);
        Info::CLuaEventNodeSetName20_clbk CLuaEventNodeSetName20_user(nullptr);
        
        Info::CLuaEventNodeSetNextLoopTime22_ptr CLuaEventNodeSetNextLoopTime22_next(nullptr);
        Info::CLuaEventNodeSetNextLoopTime22_clbk CLuaEventNodeSetNextLoopTime22_user(nullptr);
        
        Info::CLuaEventNodeSetScript24_ptr CLuaEventNodeSetScript24_next(nullptr);
        Info::CLuaEventNodeSetScript24_clbk CLuaEventNodeSetScript24_user(nullptr);
        
        
        Info::CLuaEventNodedtor_CLuaEventNode28_ptr CLuaEventNodedtor_CLuaEventNode28_next(nullptr);
        Info::CLuaEventNodedtor_CLuaEventNode28_clbk CLuaEventNodedtor_CLuaEventNode28_user(nullptr);
        
        
        void CLuaEventNodector_CLuaEventNode2_wrapper(struct CLuaEventNode* _this)
        {
           CLuaEventNodector_CLuaEventNode2_user(_this, CLuaEventNodector_CLuaEventNode2_next);
        };
        char* CLuaEventNodeGetCallFunName4_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeGetCallFunName4_user(_this, CLuaEventNodeGetCallFunName4_next);
        };
        char* CLuaEventNodeGetName6_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeGetName6_user(_this, CLuaEventNodeGetName6_next);
        };
        unsigned int CLuaEventNodeGetNextLoopTime8_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeGetNextLoopTime8_user(_this, CLuaEventNodeGetNextLoopTime8_next);
        };
        struct CLuaScript* CLuaEventNodeGetScript10_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeGetScript10_user(_this, CLuaEventNodeGetScript10_next);
        };
        unsigned int CLuaEventNodeGetTimeTerm12_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeGetTimeTerm12_user(_this, CLuaEventNodeGetTimeTerm12_next);
        };
        void CLuaEventNodeInit14_wrapper(struct CLuaEventNode* _this)
        {
           CLuaEventNodeInit14_user(_this, CLuaEventNodeInit14_next);
        };
        bool CLuaEventNodeIsCallFun16_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeIsCallFun16_user(_this, CLuaEventNodeIsCallFun16_next);
        };
        void CLuaEventNodeSetCallFun18_wrapper(struct CLuaEventNode* _this, char* strCallFunName, unsigned int dwTime)
        {
           CLuaEventNodeSetCallFun18_user(_this, strCallFunName, dwTime, CLuaEventNodeSetCallFun18_next);
        };
        void CLuaEventNodeSetName20_wrapper(struct CLuaEventNode* _this, char* strName)
        {
           CLuaEventNodeSetName20_user(_this, strName, CLuaEventNodeSetName20_next);
        };
        void CLuaEventNodeSetNextLoopTime22_wrapper(struct CLuaEventNode* _this, unsigned int dwNextLoopTime)
        {
           CLuaEventNodeSetNextLoopTime22_user(_this, dwNextLoopTime, CLuaEventNodeSetNextLoopTime22_next);
        };
        void CLuaEventNodeSetScript24_wrapper(struct CLuaEventNode* _this, struct CLuaScript* pParentScript)
        {
           CLuaEventNodeSetScript24_user(_this, pParentScript, CLuaEventNodeSetScript24_next);
        };
        
        void CLuaEventNodedtor_CLuaEventNode28_wrapper(struct CLuaEventNode* _this)
        {
           CLuaEventNodedtor_CLuaEventNode28_user(_this, CLuaEventNodedtor_CLuaEventNode28_next);
        };
        
        ::std::array<hook_record, 13> CLuaEventNode_functions = 
        {
            _hook_record {
                (LPVOID)0x1404043d0L,
                (LPVOID *)&CLuaEventNodector_CLuaEventNode2_user,
                (LPVOID *)&CLuaEventNodector_CLuaEventNode2_next,
                (LPVOID)cast_pointer_function(CLuaEventNodector_CLuaEventNode2_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaEventNode::*)())&CLuaEventNode::ctor_CLuaEventNode)
            },
            _hook_record {
                (LPVOID)0x140403b60L,
                (LPVOID *)&CLuaEventNodeGetCallFunName4_user,
                (LPVOID *)&CLuaEventNodeGetCallFunName4_next,
                (LPVOID)cast_pointer_function(CLuaEventNodeGetCallFunName4_wrapper),
                (LPVOID)cast_pointer_function((char*(CLuaEventNode::*)())&CLuaEventNode::GetCallFunName)
            },
            _hook_record {
                (LPVOID)0x140403ae0L,
                (LPVOID *)&CLuaEventNodeGetName6_user,
                (LPVOID *)&CLuaEventNodeGetName6_next,
                (LPVOID)cast_pointer_function(CLuaEventNodeGetName6_wrapper),
                (LPVOID)cast_pointer_function((char*(CLuaEventNode::*)())&CLuaEventNode::GetName)
            },
            _hook_record {
                (LPVOID)0x140403bb0L,
                (LPVOID *)&CLuaEventNodeGetNextLoopTime8_user,
                (LPVOID *)&CLuaEventNodeGetNextLoopTime8_next,
                (LPVOID)cast_pointer_function(CLuaEventNodeGetNextLoopTime8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CLuaEventNode::*)())&CLuaEventNode::GetNextLoopTime)
            },
            _hook_record {
                (LPVOID)0x140403b40L,
                (LPVOID *)&CLuaEventNodeGetScript10_user,
                (LPVOID *)&CLuaEventNodeGetScript10_next,
                (LPVOID)cast_pointer_function(CLuaEventNodeGetScript10_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaScript*(CLuaEventNode::*)())&CLuaEventNode::GetScript)
            },
            _hook_record {
                (LPVOID)0x140403b90L,
                (LPVOID *)&CLuaEventNodeGetTimeTerm12_user,
                (LPVOID *)&CLuaEventNodeGetTimeTerm12_next,
                (LPVOID)cast_pointer_function(CLuaEventNodeGetTimeTerm12_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CLuaEventNode::*)())&CLuaEventNode::GetTimeTerm)
            },
            _hook_record {
                (LPVOID)0x140403af0L,
                (LPVOID *)&CLuaEventNodeInit14_user,
                (LPVOID *)&CLuaEventNodeInit14_next,
                (LPVOID)cast_pointer_function(CLuaEventNodeInit14_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaEventNode::*)())&CLuaEventNode::Init)
            },
            _hook_record {
                (LPVOID)0x140403b20L,
                (LPVOID *)&CLuaEventNodeIsCallFun16_user,
                (LPVOID *)&CLuaEventNodeIsCallFun16_next,
                (LPVOID)cast_pointer_function(CLuaEventNodeIsCallFun16_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaEventNode::*)())&CLuaEventNode::IsCallFun)
            },
            _hook_record {
                (LPVOID)0x1404033c0L,
                (LPVOID *)&CLuaEventNodeSetCallFun18_user,
                (LPVOID *)&CLuaEventNodeSetCallFun18_next,
                (LPVOID)cast_pointer_function(CLuaEventNodeSetCallFun18_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaEventNode::*)(char*, unsigned int))&CLuaEventNode::SetCallFun)
            },
            _hook_record {
                (LPVOID)0x140406730L,
                (LPVOID *)&CLuaEventNodeSetName20_user,
                (LPVOID *)&CLuaEventNodeSetName20_next,
                (LPVOID)cast_pointer_function(CLuaEventNodeSetName20_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaEventNode::*)(char*))&CLuaEventNode::SetName)
            },
            _hook_record {
                (LPVOID)0x140403bd0L,
                (LPVOID *)&CLuaEventNodeSetNextLoopTime22_user,
                (LPVOID *)&CLuaEventNodeSetNextLoopTime22_next,
                (LPVOID)cast_pointer_function(CLuaEventNodeSetNextLoopTime22_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaEventNode::*)(unsigned int))&CLuaEventNode::SetNextLoopTime)
            },
            _hook_record {
                (LPVOID)0x140403470L,
                (LPVOID *)&CLuaEventNodeSetScript24_user,
                (LPVOID *)&CLuaEventNodeSetScript24_next,
                (LPVOID)cast_pointer_function(CLuaEventNodeSetScript24_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaEventNode::*)(struct CLuaScript*))&CLuaEventNode::SetScript)
            },
            _hook_record {
                (LPVOID)0x140404160L,
                (LPVOID *)&CLuaEventNodedtor_CLuaEventNode28_user,
                (LPVOID *)&CLuaEventNodedtor_CLuaEventNode28_next,
                (LPVOID)cast_pointer_function(CLuaEventNodedtor_CLuaEventNode28_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaEventNode::*)())&CLuaEventNode::dtor_CLuaEventNode)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
