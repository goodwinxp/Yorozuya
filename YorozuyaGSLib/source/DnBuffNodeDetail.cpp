#include <DnBuffNodeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::DnBuffNodector_DnBuffNode2_ptr DnBuffNodector_DnBuffNode2_next(nullptr);
        Info::DnBuffNodector_DnBuffNode2_clbk DnBuffNodector_DnBuffNode2_user(nullptr);
        
        Info::DnBuffNodeDnNodeClear4_ptr DnBuffNodeDnNodeClear4_next(nullptr);
        Info::DnBuffNodeDnNodeClear4_clbk DnBuffNodeDnNodeClear4_user(nullptr);
        
        Info::DnBuffNodeDnNodeClose6_ptr DnBuffNodeDnNodeClose6_next(nullptr);
        Info::DnBuffNodeDnNodeClose6_clbk DnBuffNodeDnNodeClose6_user(nullptr);
        
        Info::DnBuffNodeDnNodeOpen8_ptr DnBuffNodeDnNodeOpen8_next(nullptr);
        Info::DnBuffNodeDnNodeOpen8_clbk DnBuffNodeDnNodeOpen8_user(nullptr);
        
        Info::DnBuffNodeGetBuffIndex10_ptr DnBuffNodeGetBuffIndex10_next(nullptr);
        Info::DnBuffNodeGetBuffIndex10_clbk DnBuffNodeGetBuffIndex10_user(nullptr);
        
        
        Info::DnBuffNodedtor_DnBuffNode15_ptr DnBuffNodedtor_DnBuffNode15_next(nullptr);
        Info::DnBuffNodedtor_DnBuffNode15_clbk DnBuffNodedtor_DnBuffNode15_user(nullptr);
        
        
        void DnBuffNodector_DnBuffNode2_wrapper(struct DnBuffNode* _this)
        {
           DnBuffNodector_DnBuffNode2_user(_this, DnBuffNodector_DnBuffNode2_next);
        };
        void DnBuffNodeDnNodeClear4_wrapper(struct DnBuffNode* _this)
        {
           DnBuffNodeDnNodeClear4_user(_this, DnBuffNodeDnNodeClear4_next);
        };
        void DnBuffNodeDnNodeClose6_wrapper(struct DnBuffNode* _this)
        {
           DnBuffNodeDnNodeClose6_user(_this, DnBuffNodeDnNodeClose6_next);
        };
        void DnBuffNodeDnNodeOpen8_wrapper(struct DnBuffNode* _this, unsigned int dwBuffIndex)
        {
           DnBuffNodeDnNodeOpen8_user(_this, dwBuffIndex, DnBuffNodeDnNodeOpen8_next);
        };
        unsigned int DnBuffNodeGetBuffIndex10_wrapper(struct DnBuffNode* _this)
        {
           return DnBuffNodeGetBuffIndex10_user(_this, DnBuffNodeGetBuffIndex10_next);
        };
        
        void DnBuffNodedtor_DnBuffNode15_wrapper(struct DnBuffNode* _this)
        {
           DnBuffNodedtor_DnBuffNode15_user(_this, DnBuffNodedtor_DnBuffNode15_next);
        };
        
        ::std::array<hook_record, 6> DnBuffNode_functions = 
        {
            _hook_record {
                (LPVOID)0x1402ab2b0L,
                (LPVOID *)&DnBuffNodector_DnBuffNode2_user,
                (LPVOID *)&DnBuffNodector_DnBuffNode2_next,
                (LPVOID)cast_pointer_function(DnBuffNodector_DnBuffNode2_wrapper),
                (LPVOID)cast_pointer_function((void(DnBuffNode::*)())&DnBuffNode::ctor_DnBuffNode)
            },
            _hook_record {
                (LPVOID)0x1402ab310L,
                (LPVOID *)&DnBuffNodeDnNodeClear4_user,
                (LPVOID *)&DnBuffNodeDnNodeClear4_next,
                (LPVOID)cast_pointer_function(DnBuffNodeDnNodeClear4_wrapper),
                (LPVOID)cast_pointer_function((void(DnBuffNode::*)())&DnBuffNode::DnNodeClear)
            },
            _hook_record {
                (LPVOID)0x1402ab3b0L,
                (LPVOID *)&DnBuffNodeDnNodeClose6_user,
                (LPVOID *)&DnBuffNodeDnNodeClose6_next,
                (LPVOID)cast_pointer_function(DnBuffNodeDnNodeClose6_wrapper),
                (LPVOID)cast_pointer_function((void(DnBuffNode::*)())&DnBuffNode::DnNodeClose)
            },
            _hook_record {
                (LPVOID)0x1402ab340L,
                (LPVOID *)&DnBuffNodeDnNodeOpen8_user,
                (LPVOID *)&DnBuffNodeDnNodeOpen8_next,
                (LPVOID)cast_pointer_function(DnBuffNodeDnNodeOpen8_wrapper),
                (LPVOID)cast_pointer_function((void(DnBuffNode::*)(unsigned int))&DnBuffNode::DnNodeOpen)
            },
            _hook_record {
                (LPVOID)0x1402ab5c0L,
                (LPVOID *)&DnBuffNodeGetBuffIndex10_user,
                (LPVOID *)&DnBuffNodeGetBuffIndex10_next,
                (LPVOID)cast_pointer_function(DnBuffNodeGetBuffIndex10_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(DnBuffNode::*)())&DnBuffNode::GetBuffIndex)
            },
            _hook_record {
                (LPVOID)0x1402ab480L,
                (LPVOID *)&DnBuffNodedtor_DnBuffNode15_user,
                (LPVOID *)&DnBuffNodedtor_DnBuffNode15_next,
                (LPVOID)cast_pointer_function(DnBuffNodedtor_DnBuffNode15_wrapper),
                (LPVOID)cast_pointer_function((void(DnBuffNode::*)())&DnBuffNode::dtor_DnBuffNode)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
