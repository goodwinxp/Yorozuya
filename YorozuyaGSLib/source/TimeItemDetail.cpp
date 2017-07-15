#include <TimeItemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::TimeItemCheckGoods2_ptr TimeItemCheckGoods2_next(nullptr);
        Info::TimeItemCheckGoods2_clbk TimeItemCheckGoods2_user(nullptr);
        
        Info::TimeItemFindTimeRec4_ptr TimeItemFindTimeRec4_next(nullptr);
        Info::TimeItemFindTimeRec4_clbk TimeItemFindTimeRec4_user(nullptr);
        
        Info::TimeItemInit6_ptr TimeItemInit6_next(nullptr);
        Info::TimeItemInit6_clbk TimeItemInit6_user(nullptr);
        
        Info::TimeItemInstance8_ptr TimeItemInstance8_next(nullptr);
        Info::TimeItemInstance8_clbk TimeItemInstance8_user(nullptr);
        
        Info::TimeItemMakeLinkTable10_ptr TimeItemMakeLinkTable10_next(nullptr);
        Info::TimeItemMakeLinkTable10_clbk TimeItemMakeLinkTable10_user(nullptr);
        
        Info::TimeItemReadGoods12_ptr TimeItemReadGoods12_next(nullptr);
        Info::TimeItemReadGoods12_clbk TimeItemReadGoods12_user(nullptr);
        
        
        Info::TimeItemctor_TimeItem14_ptr TimeItemctor_TimeItem14_next(nullptr);
        Info::TimeItemctor_TimeItem14_clbk TimeItemctor_TimeItem14_user(nullptr);
        
        bool TimeItemCheckGoods2_wrapper(struct TimeItem* _this)
        {
           return TimeItemCheckGoods2_user(_this, TimeItemCheckGoods2_next);
        };
        struct _TimeItem_fld* TimeItemFindTimeRec4_wrapper(int nTbl, int nIdx)
        {
           return TimeItemFindTimeRec4_user(nTbl, nIdx, TimeItemFindTimeRec4_next);
        };
        bool TimeItemInit6_wrapper(struct TimeItem* _this)
        {
           return TimeItemInit6_user(_this, TimeItemInit6_next);
        };
        struct TimeItem* TimeItemInstance8_wrapper()
        {
           return TimeItemInstance8_user(TimeItemInstance8_next);
        };
        bool TimeItemMakeLinkTable10_wrapper(struct TimeItem* _this, char* szMsg, int nSize)
        {
           return TimeItemMakeLinkTable10_user(_this, szMsg, nSize, TimeItemMakeLinkTable10_next);
        };
        bool TimeItemReadGoods12_wrapper(struct TimeItem* _this)
        {
           return TimeItemReadGoods12_user(_this, TimeItemReadGoods12_next);
        };
        
        void TimeItemctor_TimeItem14_wrapper(struct TimeItem* _this)
        {
           TimeItemctor_TimeItem14_user(_this, TimeItemctor_TimeItem14_next);
        };
        
        ::std::array<hook_record, 7> TimeItem_functions = 
        {
            _hook_record {
                (LPVOID)0x14030e7d0L,
                (LPVOID *)&TimeItemCheckGoods2_user,
                (LPVOID *)&TimeItemCheckGoods2_next,
                (LPVOID)cast_pointer_function(TimeItemCheckGoods2_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeItem::*)())&TimeItem::CheckGoods)
            },
            _hook_record {
                (LPVOID)0x14030e510L,
                (LPVOID *)&TimeItemFindTimeRec4_user,
                (LPVOID *)&TimeItemFindTimeRec4_next,
                (LPVOID)cast_pointer_function(TimeItemFindTimeRec4_wrapper),
                (LPVOID)cast_pointer_function((struct _TimeItem_fld*(*)(int, int))&TimeItem::FindTimeRec)
            },
            _hook_record {
                (LPVOID)0x14030e160L,
                (LPVOID *)&TimeItemInit6_user,
                (LPVOID *)&TimeItemInit6_next,
                (LPVOID)cast_pointer_function(TimeItemInit6_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeItem::*)())&TimeItem::Init)
            },
            _hook_record {
                (LPVOID)0x14030e0a0L,
                (LPVOID *)&TimeItemInstance8_user,
                (LPVOID *)&TimeItemInstance8_next,
                (LPVOID)cast_pointer_function(TimeItemInstance8_wrapper),
                (LPVOID)cast_pointer_function((struct TimeItem*(*)())&TimeItem::Instance)
            },
            _hook_record {
                (LPVOID)0x14030e270L,
                (LPVOID *)&TimeItemMakeLinkTable10_user,
                (LPVOID *)&TimeItemMakeLinkTable10_next,
                (LPVOID)cast_pointer_function(TimeItemMakeLinkTable10_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeItem::*)(char*, int))&TimeItem::MakeLinkTable)
            },
            _hook_record {
                (LPVOID)0x14030e6b0L,
                (LPVOID *)&TimeItemReadGoods12_user,
                (LPVOID *)&TimeItemReadGoods12_next,
                (LPVOID)cast_pointer_function(TimeItemReadGoods12_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeItem::*)())&TimeItem::ReadGoods)
            },
            _hook_record {
                (LPVOID)0x14030f3e0L,
                (LPVOID *)&TimeItemctor_TimeItem14_user,
                (LPVOID *)&TimeItemctor_TimeItem14_next,
                (LPVOID)cast_pointer_function(TimeItemctor_TimeItem14_wrapper),
                (LPVOID)cast_pointer_function((void(TimeItem::*)())&TimeItem::ctor_TimeItem)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
