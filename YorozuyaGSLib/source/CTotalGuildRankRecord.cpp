#include <CTotalGuildRankRecord.hpp>


START_ATF_NAMESPACE
    CTotalGuildRankRecord::CTotalGuildRankRecord()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankRecord*);
        (org_ptr(0x1402c85d0L))(this);
    };
    void CTotalGuildRankRecord::ctor_CTotalGuildRankRecord()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankRecord*);
        (org_ptr(0x1402c85d0L))(this);
    };
    void CTotalGuildRankRecord::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankRecord*);
        (org_ptr(0x1402c8650L))(this);
    };
    CTotalGuildRankRecord::~CTotalGuildRankRecord()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankRecord*);
        (org_ptr(0x1402c8610L))(this);
    };
    void CTotalGuildRankRecord::dtor_CTotalGuildRankRecord()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankRecord*);
        (org_ptr(0x1402c8610L))(this);
    };
END_ATF_NAMESPACE
