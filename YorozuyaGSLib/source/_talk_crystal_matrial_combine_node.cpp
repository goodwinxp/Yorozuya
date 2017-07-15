#include <_talk_crystal_matrial_combine_node.hpp>


START_ATF_NAMESPACE
    void _talk_crystal_matrial_combine_node::Consume(int nConsumeCount)
    {
        using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node*, int);
        (org_ptr(0x140430a90L))(this, nConsumeCount);
    };
    int _talk_crystal_matrial_combine_node::GetMixNeedNum()
    {
        using org_ptr = int (WINAPIV*)(struct _talk_crystal_matrial_combine_node*);
        return (org_ptr(0x1404321f0L))(this);
    };
    int _talk_crystal_matrial_combine_node::GetRequiredSlotCount()
    {
        using org_ptr = int (WINAPIV*)(struct _talk_crystal_matrial_combine_node*);
        return (org_ptr(0x140432210L))(this);
    };
    void _talk_crystal_matrial_combine_node::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node*);
        (org_ptr(0x1404307f0L))(this);
    };
    void _talk_crystal_matrial_combine_node::Make(int nMakeCount)
    {
        using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node*, int);
        (org_ptr(0x140430b70L))(this, nMakeCount);
    };
    bool _talk_crystal_matrial_combine_node::Push(_STORAGE_LIST::_db_con* pItem, char byUseCount, char byClientIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct _talk_crystal_matrial_combine_node*, _STORAGE_LIST::_db_con*, char, char);
        return (org_ptr(0x1404309c0L))(this, pItem, byUseCount, byClientIndex);
    };
    bool _talk_crystal_matrial_combine_node::Set(int nMixIndex, int nNeedItemNum, char byTableCode, uint16_t wItemIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct _talk_crystal_matrial_combine_node*, int, int, char, uint16_t);
        return (org_ptr(0x1404308f0L))(this, nMixIndex, nNeedItemNum, byTableCode, wItemIndex);
    };
    _talk_crystal_matrial_combine_node::_talk_crystal_matrial_combine_node()
    {
        using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node*);
        (org_ptr(0x140432110L))(this);
    };
    void _talk_crystal_matrial_combine_node::ctor__talk_crystal_matrial_combine_node()
    {
        using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node*);
        (org_ptr(0x140432110L))(this);
    };
    void _talk_crystal_matrial_combine_node::_matrialinfo::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node::_matrialinfo*);
        (org_ptr(0x140432070L))(this);
    };
    _talk_crystal_matrial_combine_node::_matrialinfo::_matrialinfo()
    {
        using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node::_matrialinfo*);
        (org_ptr(0x1404321a0L))(this);
    };
    void _talk_crystal_matrial_combine_node::_matrialinfo::ctor__matrialinfo()
    {
        using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node::_matrialinfo*);
        (org_ptr(0x1404321a0L))(this);
    };
END_ATF_NAMESPACE
