#include <CPcBangFavor.hpp>


START_ATF_NAMESPACE
    CPcBangFavor::CPcBangFavor()
    {
        using org_ptr = void (WINAPIV*)(struct CPcBangFavor*);
        (org_ptr(0x14040bb10L))(this);
    };
    void CPcBangFavor::ctor_CPcBangFavor()
    {
        using org_ptr = void (WINAPIV*)(struct CPcBangFavor*);
        (org_ptr(0x14040bb10L))(this);
    };
    unsigned int CPcBangFavor::ClassCodePasing(struct _AVATOR_DATA* pData, struct CPlayer* pOne)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPcBangFavor*, struct _AVATOR_DATA*, struct CPlayer*);
        return (org_ptr(0x14040bd90L))(this, pData, pOne);
    };
    int CPcBangFavor::Initialzie()
    {
        using org_ptr = int (WINAPIV*)(struct CPcBangFavor*);
        return (org_ptr(0x14040bca0L))(this);
    };
    struct CPcBangFavor* CPcBangFavor::Instance()
    {
        using org_ptr = struct CPcBangFavor* (WINAPIV*)();
        return (org_ptr(0x140079730L))();
    };
    int CPcBangFavor::IsEnable()
    {
        using org_ptr = int (WINAPIV*)(struct CPcBangFavor*);
        return (org_ptr(0x14040bc80L))(this);
    };
    int CPcBangFavor::LoadPcBangData()
    {
        using org_ptr = int (WINAPIV*)(struct CPcBangFavor*);
        return (org_ptr(0x14040bbc0L))(this);
    };
    void CPcBangFavor::PcBangDeleteItem(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CPcBangFavor*, struct CPlayer*);
        (org_ptr(0x14040c540L))(this, pOne);
    };
    bool CPcBangFavor::PcBangGiveItem(struct CPlayer* pOne, unsigned int dwRecIndex, char* bySeletItemIndex, int nSelectCount)
    {
        using org_ptr = bool (WINAPIV*)(struct CPcBangFavor*, struct CPlayer*, unsigned int, char*, int);
        return (org_ptr(0x14040bff0L))(this, pOne, dwRecIndex, bySeletItemIndex, nSelectCount);
    };
    CPcBangFavor::~CPcBangFavor()
    {
        using org_ptr = void (WINAPIV*)(struct CPcBangFavor*);
        (org_ptr(0x14040bb70L))(this);
    };
    void CPcBangFavor::dtor_CPcBangFavor()
    {
        using org_ptr = void (WINAPIV*)(struct CPcBangFavor*);
        (org_ptr(0x14040bb70L))(this);
    };
END_ATF_NAMESPACE
