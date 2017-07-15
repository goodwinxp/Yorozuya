#include <AreaListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::AreaListctor_AreaList2_ptr AreaListctor_AreaList2_next(nullptr);
        Info::AreaListctor_AreaList2_clbk AreaListctor_AreaList2_user(nullptr);
        
        
        Info::AreaListctor_AreaList4_ptr AreaListctor_AreaList4_next(nullptr);
        Info::AreaListctor_AreaList4_clbk AreaListctor_AreaList4_user(nullptr);
        
        Info::AreaListExtractData6_ptr AreaListExtractData6_next(nullptr);
        Info::AreaListExtractData6_clbk AreaListExtractData6_user(nullptr);
        
        Info::AreaListPush8_ptr AreaListPush8_next(nullptr);
        Info::AreaListPush8_clbk AreaListPush8_user(nullptr);
        
        
        Info::AreaListdtor_AreaList12_ptr AreaListdtor_AreaList12_next(nullptr);
        Info::AreaListdtor_AreaList12_clbk AreaListdtor_AreaList12_user(nullptr);
        
        
        void AreaListctor_AreaList2_wrapper(struct AreaList* _this, struct AreaList* __that)
        {
           AreaListctor_AreaList2_user(_this, __that, AreaListctor_AreaList2_next);
        };
        
        void AreaListctor_AreaList4_wrapper(struct AreaList* _this)
        {
           AreaListctor_AreaList4_user(_this, AreaListctor_AreaList4_next);
        };
        void AreaListExtractData6_wrapper(struct AreaList* _this)
        {
           AreaListExtractData6_user(_this, AreaListExtractData6_next);
        };
        void AreaListPush8_wrapper(struct AreaList* _this, struct AreaData adata)
        {
           AreaListPush8_user(_this, adata, AreaListPush8_next);
        };
        
        void AreaListdtor_AreaList12_wrapper(struct AreaList* _this)
        {
           AreaListdtor_AreaList12_user(_this, AreaListdtor_AreaList12_next);
        };
        
        ::std::array<hook_record, 5> AreaList_functions = 
        {
            _hook_record {
                (LPVOID)0x14018ee90L,
                (LPVOID *)&AreaListctor_AreaList2_user,
                (LPVOID *)&AreaListctor_AreaList2_next,
                (LPVOID)cast_pointer_function(AreaListctor_AreaList2_wrapper),
                (LPVOID)cast_pointer_function((void(AreaList::*)(struct AreaList*))&AreaList::ctor_AreaList)
            },
            _hook_record {
                (LPVOID)0x14018b960L,
                (LPVOID *)&AreaListctor_AreaList4_user,
                (LPVOID *)&AreaListctor_AreaList4_next,
                (LPVOID)cast_pointer_function(AreaListctor_AreaList4_wrapper),
                (LPVOID)cast_pointer_function((void(AreaList::*)())&AreaList::ctor_AreaList)
            },
            _hook_record {
                (LPVOID)0x14018bba0L,
                (LPVOID *)&AreaListExtractData6_user,
                (LPVOID *)&AreaListExtractData6_next,
                (LPVOID)cast_pointer_function(AreaListExtractData6_wrapper),
                (LPVOID)cast_pointer_function((void(AreaList::*)())&AreaList::ExtractData)
            },
            _hook_record {
                (LPVOID)0x14018bad0L,
                (LPVOID *)&AreaListPush8_user,
                (LPVOID *)&AreaListPush8_next,
                (LPVOID)cast_pointer_function(AreaListPush8_wrapper),
                (LPVOID)cast_pointer_function((void(AreaList::*)(struct AreaData))&AreaList::Push)
            },
            _hook_record {
                (LPVOID)0x14018ba10L,
                (LPVOID *)&AreaListdtor_AreaList12_user,
                (LPVOID *)&AreaListdtor_AreaList12_next,
                (LPVOID)cast_pointer_function(AreaListdtor_AreaList12_wrapper),
                (LPVOID)cast_pointer_function((void(AreaList::*)())&AreaList::dtor_AreaList)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
