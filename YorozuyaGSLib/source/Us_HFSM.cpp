#include <Us_HFSM.hpp>


START_ATF_NAMESPACE
    void Us_HFSM::AddLoopDelayTime(int nIndex, unsigned int dwAddDelay)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, int, unsigned int);
        (org_ptr(0x140162b90L))(this, nIndex, dwAddDelay);
    };
    void Us_HFSM::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*);
        (org_ptr(0x1401624d0L))(this);
    };
    unsigned int Us_HFSM::GetIndex(struct Us_FSM_Node* pNode)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct Us_HFSM*, struct Us_FSM_Node*);
        return (org_ptr(0x140162900L))(this, pNode);
    };
    struct Us_FSM_Node* Us_HFSM::GetNode(unsigned int dwIndex)
    {
        using org_ptr = struct Us_FSM_Node* (WINAPIV*)(struct Us_HFSM*, unsigned int);
        return (org_ptr(0x1401627d0L))(this, dwIndex);
    };
    void* Us_HFSM::GetObjectA()
    {
        using org_ptr = void* (WINAPIV*)(struct Us_HFSM*);
        return (org_ptr(0x140155440L))(this);
    };
    unsigned int Us_HFSM::GetState(unsigned int dwIndex)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct Us_HFSM*, unsigned int);
        return (org_ptr(0x140162830L))(this, dwIndex);
    };
    void Us_HFSM::Init()
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*);
        (org_ptr(0x140162530L))(this);
    };
    int Us_HFSM::Link(struct Us_FSM_Node* pParent, struct Us_FSM_Node* pChild)
    {
        using org_ptr = int (WINAPIV*)(struct Us_HFSM*, struct Us_FSM_Node*, struct Us_FSM_Node*);
        return (org_ptr(0x140162890L))(this, pParent, pChild);
    };
    void Us_HFSM::OnProcess(unsigned int dwLastTime)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int);
        (org_ptr(0x1401629a0L))(this, dwLastTime);
    };
    void Us_HFSM::SendExternMsg(struct Us_HFSM* pHFS, unsigned int dwMSG, void* lpParam, int nParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, int);
        (org_ptr(0x140162d30L))(pHFS, dwMSG, lpParam, nParam);
    };
    void Us_HFSM::SendMsg(struct Us_HFSM* pHFS, unsigned int dwFSMIndex, unsigned int dwMSG, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, unsigned int, void*);
        (org_ptr(0x140162c00L))(pHFS, dwFSMIndex, dwMSG, lpParam);
    };
    void Us_HFSM::SetLoopTime(int nIndex, unsigned int dwLoopTIme)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, int, unsigned int);
        (org_ptr(0x140162b20L))(this, nIndex, dwLoopTIme);
    };
    int Us_HFSM::SetMyData(struct UsStateTBL* pStateTBL, void* pObject)
    {
        using org_ptr = int (WINAPIV*)(struct Us_HFSM*, struct UsStateTBL*, void*);
        return (org_ptr(0x1401625e0L))(this, pStateTBL, pObject);
    };
    Us_HFSM::Us_HFSM()
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*);
        (org_ptr(0x1401622a0L))(this);
    };
    void Us_HFSM::ctor_Us_HFSM()
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*);
        (org_ptr(0x1401622a0L))(this);
    };
    Us_HFSM::~Us_HFSM()
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*);
        (org_ptr(0x1401623d0L))(this);
    };
    void Us_HFSM::dtor_Us_HFSM()
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*);
        (org_ptr(0x1401623d0L))(this);
    };
END_ATF_NAMESPACE
