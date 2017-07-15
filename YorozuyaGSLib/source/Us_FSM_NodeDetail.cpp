#include <Us_FSM_NodeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::Us_FSM_NodeGetState2_ptr Us_FSM_NodeGetState2_next(nullptr);
        Info::Us_FSM_NodeGetState2_clbk Us_FSM_NodeGetState2_user(nullptr);
        
        Info::Us_FSM_NodeInit4_ptr Us_FSM_NodeInit4_next(nullptr);
        Info::Us_FSM_NodeInit4_clbk Us_FSM_NodeInit4_user(nullptr);
        
        Info::Us_FSM_NodeSetLoopTime6_ptr Us_FSM_NodeSetLoopTime6_next(nullptr);
        Info::Us_FSM_NodeSetLoopTime6_clbk Us_FSM_NodeSetLoopTime6_user(nullptr);
        
        Info::Us_FSM_NodeSetParent8_ptr Us_FSM_NodeSetParent8_next(nullptr);
        Info::Us_FSM_NodeSetParent8_clbk Us_FSM_NodeSetParent8_user(nullptr);
        
        Info::Us_FSM_NodeSetState10_ptr Us_FSM_NodeSetState10_next(nullptr);
        Info::Us_FSM_NodeSetState10_clbk Us_FSM_NodeSetState10_user(nullptr);
        
        
        Info::Us_FSM_Nodector_Us_FSM_Node12_ptr Us_FSM_Nodector_Us_FSM_Node12_next(nullptr);
        Info::Us_FSM_Nodector_Us_FSM_Node12_clbk Us_FSM_Nodector_Us_FSM_Node12_user(nullptr);
        
        
        Info::Us_FSM_Nodedtor_Us_FSM_Node14_ptr Us_FSM_Nodedtor_Us_FSM_Node14_next(nullptr);
        Info::Us_FSM_Nodedtor_Us_FSM_Node14_clbk Us_FSM_Nodedtor_Us_FSM_Node14_user(nullptr);
        
        unsigned int Us_FSM_NodeGetState2_wrapper(struct Us_FSM_Node* _this)
        {
           return Us_FSM_NodeGetState2_user(_this, Us_FSM_NodeGetState2_next);
        };
        void Us_FSM_NodeInit4_wrapper(struct Us_FSM_Node* _this)
        {
           Us_FSM_NodeInit4_user(_this, Us_FSM_NodeInit4_next);
        };
        void Us_FSM_NodeSetLoopTime6_wrapper(struct Us_FSM_Node* _this, unsigned int dwLoopTime)
        {
           Us_FSM_NodeSetLoopTime6_user(_this, dwLoopTime, Us_FSM_NodeSetLoopTime6_next);
        };
        void Us_FSM_NodeSetParent8_wrapper(struct Us_FSM_Node* _this, struct Us_FSM_Node* pParent)
        {
           Us_FSM_NodeSetParent8_user(_this, pParent, Us_FSM_NodeSetParent8_next);
        };
        void Us_FSM_NodeSetState10_wrapper(struct Us_FSM_Node* _this, unsigned int dwState)
        {
           Us_FSM_NodeSetState10_user(_this, dwState, Us_FSM_NodeSetState10_next);
        };
        
        void Us_FSM_Nodector_Us_FSM_Node12_wrapper(struct Us_FSM_Node* _this)
        {
           Us_FSM_Nodector_Us_FSM_Node12_user(_this, Us_FSM_Nodector_Us_FSM_Node12_next);
        };
        
        void Us_FSM_Nodedtor_Us_FSM_Node14_wrapper(struct Us_FSM_Node* _this)
        {
           Us_FSM_Nodedtor_Us_FSM_Node14_user(_this, Us_FSM_Nodedtor_Us_FSM_Node14_next);
        };
        
        ::std::array<hook_record, 7> Us_FSM_Node_functions = 
        {
            _hook_record {
                (LPVOID)0x140155500L,
                (LPVOID *)&Us_FSM_NodeGetState2_user,
                (LPVOID *)&Us_FSM_NodeGetState2_next,
                (LPVOID)cast_pointer_function(Us_FSM_NodeGetState2_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(Us_FSM_Node::*)())&Us_FSM_Node::GetState)
            },
            _hook_record {
                (LPVOID)0x1401636f0L,
                (LPVOID *)&Us_FSM_NodeInit4_user,
                (LPVOID *)&Us_FSM_NodeInit4_next,
                (LPVOID)cast_pointer_function(Us_FSM_NodeInit4_wrapper),
                (LPVOID)cast_pointer_function((void(Us_FSM_Node::*)())&Us_FSM_Node::Init)
            },
            _hook_record {
                (LPVOID)0x1401637e0L,
                (LPVOID *)&Us_FSM_NodeSetLoopTime6_user,
                (LPVOID *)&Us_FSM_NodeSetLoopTime6_next,
                (LPVOID)cast_pointer_function(Us_FSM_NodeSetLoopTime6_wrapper),
                (LPVOID)cast_pointer_function((void(Us_FSM_Node::*)(unsigned int))&Us_FSM_Node::SetLoopTime)
            },
            _hook_record {
                (LPVOID)0x1401637c0L,
                (LPVOID *)&Us_FSM_NodeSetParent8_user,
                (LPVOID *)&Us_FSM_NodeSetParent8_next,
                (LPVOID)cast_pointer_function(Us_FSM_NodeSetParent8_wrapper),
                (LPVOID)cast_pointer_function((void(Us_FSM_Node::*)(struct Us_FSM_Node*))&Us_FSM_Node::SetParent)
            },
            _hook_record {
                (LPVOID)0x140163800L,
                (LPVOID *)&Us_FSM_NodeSetState10_user,
                (LPVOID *)&Us_FSM_NodeSetState10_next,
                (LPVOID)cast_pointer_function(Us_FSM_NodeSetState10_wrapper),
                (LPVOID)cast_pointer_function((void(Us_FSM_Node::*)(unsigned int))&Us_FSM_Node::SetState)
            },
            _hook_record {
                (LPVOID)0x140163690L,
                (LPVOID *)&Us_FSM_Nodector_Us_FSM_Node12_user,
                (LPVOID *)&Us_FSM_Nodector_Us_FSM_Node12_next,
                (LPVOID)cast_pointer_function(Us_FSM_Nodector_Us_FSM_Node12_wrapper),
                (LPVOID)cast_pointer_function((void(Us_FSM_Node::*)())&Us_FSM_Node::ctor_Us_FSM_Node)
            },
            _hook_record {
                (LPVOID)0x1401636e0L,
                (LPVOID *)&Us_FSM_Nodedtor_Us_FSM_Node14_user,
                (LPVOID *)&Us_FSM_Nodedtor_Us_FSM_Node14_next,
                (LPVOID)cast_pointer_function(Us_FSM_Nodedtor_Us_FSM_Node14_wrapper),
                (LPVOID)cast_pointer_function((void(Us_FSM_Node::*)())&Us_FSM_Node::dtor_Us_FSM_Node)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
