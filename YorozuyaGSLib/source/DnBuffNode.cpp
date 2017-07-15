#include <DnBuffNode.hpp>


START_ATF_NAMESPACE
    DnBuffNode::DnBuffNode()
    {
        using org_ptr = void (WINAPIV*)(struct DnBuffNode*);
        (org_ptr(0x1402ab2b0L))(this);
    };
    void DnBuffNode::ctor_DnBuffNode()
    {
        using org_ptr = void (WINAPIV*)(struct DnBuffNode*);
        (org_ptr(0x1402ab2b0L))(this);
    };
    void DnBuffNode::DnNodeClear()
    {
        using org_ptr = void (WINAPIV*)(struct DnBuffNode*);
        (org_ptr(0x1402ab310L))(this);
    };
    void DnBuffNode::DnNodeClose()
    {
        using org_ptr = void (WINAPIV*)(struct DnBuffNode*);
        (org_ptr(0x1402ab3b0L))(this);
    };
    void DnBuffNode::DnNodeOpen(unsigned int dwBuffIndex)
    {
        using org_ptr = void (WINAPIV*)(struct DnBuffNode*, unsigned int);
        (org_ptr(0x1402ab340L))(this, dwBuffIndex);
    };
    unsigned int DnBuffNode::GetBuffIndex()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct DnBuffNode*);
        return (org_ptr(0x1402ab5c0L))(this);
    };
    DnBuffNode::~DnBuffNode()
    {
        using org_ptr = void (WINAPIV*)(struct DnBuffNode*);
        (org_ptr(0x1402ab480L))(this);
    };
    void DnBuffNode::dtor_DnBuffNode()
    {
        using org_ptr = void (WINAPIV*)(struct DnBuffNode*);
        (org_ptr(0x1402ab480L))(this);
    };
    
END_ATF_NAMESPACE
