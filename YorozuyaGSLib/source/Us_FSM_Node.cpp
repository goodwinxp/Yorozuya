#include <Us_FSM_Node.hpp>


START_ATF_NAMESPACE
    unsigned int Us_FSM_Node::GetState()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct Us_FSM_Node*);
        return (org_ptr(0x140155500L))(this);
    };
    void Us_FSM_Node::Init()
    {
        using org_ptr = void (WINAPIV*)(struct Us_FSM_Node*);
        (org_ptr(0x1401636f0L))(this);
    };
    void Us_FSM_Node::SetLoopTime(unsigned int dwLoopTime)
    {
        using org_ptr = void (WINAPIV*)(struct Us_FSM_Node*, unsigned int);
        (org_ptr(0x1401637e0L))(this, dwLoopTime);
    };
    void Us_FSM_Node::SetParent(struct Us_FSM_Node* pParent)
    {
        using org_ptr = void (WINAPIV*)(struct Us_FSM_Node*, struct Us_FSM_Node*);
        (org_ptr(0x1401637c0L))(this, pParent);
    };
    void Us_FSM_Node::SetState(unsigned int dwState)
    {
        using org_ptr = void (WINAPIV*)(struct Us_FSM_Node*, unsigned int);
        (org_ptr(0x140163800L))(this, dwState);
    };
    Us_FSM_Node::Us_FSM_Node()
    {
        using org_ptr = void (WINAPIV*)(struct Us_FSM_Node*);
        (org_ptr(0x140163690L))(this);
    };
    void Us_FSM_Node::ctor_Us_FSM_Node()
    {
        using org_ptr = void (WINAPIV*)(struct Us_FSM_Node*);
        (org_ptr(0x140163690L))(this);
    };
    Us_FSM_Node::~Us_FSM_Node()
    {
        using org_ptr = void (WINAPIV*)(struct Us_FSM_Node*);
        (org_ptr(0x1401636e0L))(this);
    };
    void Us_FSM_Node::dtor_Us_FSM_Node()
    {
        using org_ptr = void (WINAPIV*)(struct Us_FSM_Node*);
        (org_ptr(0x1401636e0L))(this);
    };
END_ATF_NAMESPACE
