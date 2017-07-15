#include <UsStateTBL.hpp>


START_ATF_NAMESPACE
    int UsStateTBL::Add(char byHFSMIndex, char byCurrState, char byEvent_IN, char byNextState_OUT, void (WINAPIV* pEvnetFun)(struct Us_HFSM*, unsigned int, void*))
    {
        using org_ptr = int (WINAPIV*)(struct UsStateTBL*, char, char, char, char, void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*));
        return (org_ptr(0x140161ea0L))(this, byHFSMIndex, byCurrState, byEvent_IN, byNextState_OUT, pEvnetFun);
    };
    void UsStateTBL::Alloc(char byHFSMSize, char byStateSize, char byMessageSize)
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL*, char, char, char);
        (org_ptr(0x140161bc0L))(this, byHFSMSize, byStateSize, byMessageSize);
    };
    void UsStateTBL::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL*);
        (org_ptr(0x140162040L))(this);
    };
    char UsStateTBL::GetHSFMSize()
    {
        using org_ptr = char (WINAPIV*)(struct UsStateTBL*);
        return (org_ptr(0x140163670L))(this);
    };
    struct UsStateTBL::_TBLData* UsStateTBL::GetTransState(char byState, char byMessage)
    {
        using org_ptr = struct UsStateTBL::_TBLData* (WINAPIV*)(struct UsStateTBL*, char, char);
        return (org_ptr(0x140162230L))(this, byState, byMessage);
    };
    void UsStateTBL::OnMsgProc(struct Us_HFSM* pHFS, unsigned int dwFSMIndex, unsigned int dwMSG, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, unsigned int, void*);
        (org_ptr(0x140162de0L))(pHFS, dwFSMIndex, dwMSG, lpParam);
    };
    void UsStateTBL::SetCallFunction(void (WINAPIV* pFun)(struct Us_HFSM*, unsigned int, unsigned int, void*))
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL*, void (WINAPIV*)(struct Us_HFSM*, unsigned int, unsigned int, void*));
        (org_ptr(0x140161b30L))(this, pFun);
    };
    void UsStateTBL::SetExternCallFunction(void (WINAPIV* pExternFun)(struct Us_HFSM*, unsigned int, void*, int))
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL*, void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, int));
        (org_ptr(0x140161b90L))(this, pExternFun);
    };
    int UsStateTBL::SetHFSM(struct Us_HFSM* pHFSM, void* pObject)
    {
        using org_ptr = int (WINAPIV*)(struct UsStateTBL*, struct Us_HFSM*, void*);
        return (org_ptr(0x140162180L))(this, pHFSM, pObject);
    };
    void UsStateTBL::SetHFSMNode(int nNodeIndex, unsigned int dwStartState, unsigned int dwLoopTime, int ParentData, int bUsed)
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL*, int, unsigned int, unsigned int, int, int);
        (org_ptr(0x140161fb0L))(this, nNodeIndex, dwStartState, dwLoopTime, ParentData, bUsed);
    };
    void UsStateTBL::SetInitFunction(int (WINAPIV* pInitFun)(struct UsStateTBL*, struct Us_HFSM*))
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL*, int (WINAPIV*)(struct UsStateTBL*, struct Us_HFSM*));
        (org_ptr(0x140161b60L))(this, pInitFun);
    };
    UsStateTBL::UsStateTBL()
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL*);
        (org_ptr(0x1401619f0L))(this);
    };
    void UsStateTBL::ctor_UsStateTBL()
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL*);
        (org_ptr(0x1401619f0L))(this);
    };
    UsStateTBL::~UsStateTBL()
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL*);
        (org_ptr(0x140161aa0L))(this);
    };
    void UsStateTBL::dtor_UsStateTBL()
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL*);
        (org_ptr(0x140161aa0L))(this);
    };
    void UsStateTBL::_TBLData::Init()
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL::_TBLData*);
        (org_ptr(0x140163640L))(this);
    };
    UsStateTBL::_TBLData::_TBLData()
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL::_TBLData*);
        (org_ptr(0x1401635f0L))(this);
    };
    void UsStateTBL::_TBLData::ctor__TBLData()
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL::_TBLData*);
        (org_ptr(0x1401635f0L))(this);
    };
    void UsStateTBL::_HFSM_Node_Info::Init()
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL::_HFSM_Node_Info*);
        (org_ptr(0x1401635a0L))(this);
    };
    UsStateTBL::_HFSM_Node_Info::_HFSM_Node_Info()
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL::_HFSM_Node_Info*);
        (org_ptr(0x140163550L))(this);
    };
    void UsStateTBL::_HFSM_Node_Info::ctor__HFSM_Node_Info()
    {
        using org_ptr = void (WINAPIV*)(struct UsStateTBL::_HFSM_Node_Info*);
        (org_ptr(0x140163550L))(this);
    };
END_ATF_NAMESPACE
