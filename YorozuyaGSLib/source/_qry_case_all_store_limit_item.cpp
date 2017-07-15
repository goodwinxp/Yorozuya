#include <_qry_case_all_store_limit_item.hpp>


START_ATF_NAMESPACE
    void _qry_case_all_store_limit_item::DataInit()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_all_store_limit_item*);
        (org_ptr(0x14034bd30L))(this);
    };
    bool _qry_case_all_store_limit_item::Init(unsigned int dwStoreNum)
    {
        using org_ptr = bool (WINAPIV*)(struct _qry_case_all_store_limit_item*, unsigned int);
        return (org_ptr(0x14034bab0L))(this, dwStoreNum);
    };
    _qry_case_all_store_limit_item::_qry_case_all_store_limit_item()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_all_store_limit_item*);
        (org_ptr(0x14034b800L))(this);
    };
    void _qry_case_all_store_limit_item::ctor__qry_case_all_store_limit_item()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_all_store_limit_item*);
        (org_ptr(0x14034b800L))(this);
    };
    _qry_case_all_store_limit_item::~_qry_case_all_store_limit_item()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_all_store_limit_item*);
        (org_ptr(0x14034b840L))(this);
    };
    void _qry_case_all_store_limit_item::dtor__qry_case_all_store_limit_item()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_all_store_limit_item*);
        (org_ptr(0x14034b840L))(this);
    };
    _qry_case_all_store_limit_item::__list::__list()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_all_store_limit_item::__list*);
        (org_ptr(0x14034bc20L))(this);
    };
    void _qry_case_all_store_limit_item::__list::ctor___list()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_all_store_limit_item::__list*);
        (org_ptr(0x14034bc20L))(this);
    };
    void _qry_case_all_store_limit_item::__list::init()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_all_store_limit_item::__list*);
        (org_ptr(0x14034bca0L))(this);
    };
END_ATF_NAMESPACE
