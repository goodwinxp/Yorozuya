#include <CGoldenBoxItemMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CGoldenBoxItemMgrBoxItemDataCopy2_ptr CGoldenBoxItemMgrBoxItemDataCopy2_next(nullptr);
        Info::CGoldenBoxItemMgrBoxItemDataCopy2_clbk CGoldenBoxItemMgrBoxItemDataCopy2_user(nullptr);
        
        Info::CGoldenBoxItemMgrBoxItemOpen4_ptr CGoldenBoxItemMgrBoxItemOpen4_next(nullptr);
        Info::CGoldenBoxItemMgrBoxItemOpen4_clbk CGoldenBoxItemMgrBoxItemOpen4_user(nullptr);
        
        Info::CGoldenBoxItemMgrBoxItemOpenEffectType6_ptr CGoldenBoxItemMgrBoxItemOpenEffectType6_next(nullptr);
        Info::CGoldenBoxItemMgrBoxItemOpenEffectType6_clbk CGoldenBoxItemMgrBoxItemOpenEffectType6_user(nullptr);
        
        
        Info::CGoldenBoxItemMgrctor_CGoldenBoxItemMgr8_ptr CGoldenBoxItemMgrctor_CGoldenBoxItemMgr8_next(nullptr);
        Info::CGoldenBoxItemMgrctor_CGoldenBoxItemMgr8_clbk CGoldenBoxItemMgrctor_CGoldenBoxItemMgr8_user(nullptr);
        
        Info::CGoldenBoxItemMgrCheck_Event_Status10_ptr CGoldenBoxItemMgrCheck_Event_Status10_next(nullptr);
        Info::CGoldenBoxItemMgrCheck_Event_Status10_clbk CGoldenBoxItemMgrCheck_Event_Status10_user(nullptr);
        
        Info::CGoldenBoxItemMgrCheck_Loaded_Event_Status12_ptr CGoldenBoxItemMgrCheck_Loaded_Event_Status12_next(nullptr);
        Info::CGoldenBoxItemMgrCheck_Loaded_Event_Status12_clbk CGoldenBoxItemMgrCheck_Loaded_Event_Status12_user(nullptr);
        
        Info::CGoldenBoxItemMgrGetGodBoxItemInfoPtr14_ptr CGoldenBoxItemMgrGetGodBoxItemInfoPtr14_next(nullptr);
        Info::CGoldenBoxItemMgrGetGodBoxItemInfoPtr14_clbk CGoldenBoxItemMgrGetGodBoxItemInfoPtr14_user(nullptr);
        
        Info::CGoldenBoxItemMgrGetGoldBoxItemIndex16_ptr CGoldenBoxItemMgrGetGoldBoxItemIndex16_next(nullptr);
        Info::CGoldenBoxItemMgrGetGoldBoxItemIndex16_clbk CGoldenBoxItemMgrGetGoldBoxItemIndex16_user(nullptr);
        
        Info::CGoldenBoxItemMgrGetGoldBoxItemPtr18_ptr CGoldenBoxItemMgrGetGoldBoxItemPtr18_next(nullptr);
        Info::CGoldenBoxItemMgrGetGoldBoxItemPtr18_clbk CGoldenBoxItemMgrGetGoldBoxItemPtr18_user(nullptr);
        
        Info::CGoldenBoxItemMgrGetLoopCount20_ptr CGoldenBoxItemMgrGetLoopCount20_next(nullptr);
        Info::CGoldenBoxItemMgrGetLoopCount20_clbk CGoldenBoxItemMgrGetLoopCount20_user(nullptr);
        
        Info::CGoldenBoxItemMgrGetOreItemTotalCnt22_ptr CGoldenBoxItemMgrGetOreItemTotalCnt22_next(nullptr);
        Info::CGoldenBoxItemMgrGetOreItemTotalCnt22_clbk CGoldenBoxItemMgrGetOreItemTotalCnt22_user(nullptr);
        
        Info::CGoldenBoxItemMgrGetStarterBoxCode24_ptr CGoldenBoxItemMgrGetStarterBoxCode24_next(nullptr);
        Info::CGoldenBoxItemMgrGetStarterBoxCode24_clbk CGoldenBoxItemMgrGetStarterBoxCode24_user(nullptr);
        
        Info::CGoldenBoxItemMgrGet_BoxItem_Count26_ptr CGoldenBoxItemMgrGet_BoxItem_Count26_next(nullptr);
        Info::CGoldenBoxItemMgrGet_BoxItem_Count26_clbk CGoldenBoxItemMgrGet_BoxItem_Count26_user(nullptr);
        
        Info::CGoldenBoxItemMgrGet_Box_Count28_ptr CGoldenBoxItemMgrGet_Box_Count28_next(nullptr);
        Info::CGoldenBoxItemMgrGet_Box_Count28_clbk CGoldenBoxItemMgrGet_Box_Count28_user(nullptr);
        
        Info::CGoldenBoxItemMgrGet_Event_Status30_ptr CGoldenBoxItemMgrGet_Event_Status30_next(nullptr);
        Info::CGoldenBoxItemMgrGet_Event_Status30_clbk CGoldenBoxItemMgrGet_Event_Status30_user(nullptr);
        
        Info::CGoldenBoxItemMgrGet_StarterBox_Count32_ptr CGoldenBoxItemMgrGet_StarterBox_Count32_next(nullptr);
        Info::CGoldenBoxItemMgrGet_StarterBox_Count32_clbk CGoldenBoxItemMgrGet_StarterBox_Count32_user(nullptr);
        
        Info::CGoldenBoxItemMgrInitialize34_ptr CGoldenBoxItemMgrInitialize34_next(nullptr);
        Info::CGoldenBoxItemMgrInitialize34_clbk CGoldenBoxItemMgrInitialize34_user(nullptr);
        
        Info::CGoldenBoxItemMgrInstance36_ptr CGoldenBoxItemMgrInstance36_next(nullptr);
        Info::CGoldenBoxItemMgrInstance36_clbk CGoldenBoxItemMgrInstance36_user(nullptr);
        
        Info::CGoldenBoxItemMgrIsBuyRaceBossGoldBox38_ptr CGoldenBoxItemMgrIsBuyRaceBossGoldBox38_next(nullptr);
        Info::CGoldenBoxItemMgrIsBuyRaceBossGoldBox38_clbk CGoldenBoxItemMgrIsBuyRaceBossGoldBox38_user(nullptr);
        
        Info::CGoldenBoxItemMgrLoad_Event_INI40_ptr CGoldenBoxItemMgrLoad_Event_INI40_next(nullptr);
        Info::CGoldenBoxItemMgrLoad_Event_INI40_clbk CGoldenBoxItemMgrLoad_Event_INI40_user(nullptr);
        
        Info::CGoldenBoxItemMgrLoad_Golden_Box_Item_Event42_ptr CGoldenBoxItemMgrLoad_Golden_Box_Item_Event42_next(nullptr);
        Info::CGoldenBoxItemMgrLoad_Golden_Box_Item_Event42_clbk CGoldenBoxItemMgrLoad_Golden_Box_Item_Event42_user(nullptr);
        
        Info::CGoldenBoxItemMgrLoop_Event44_ptr CGoldenBoxItemMgrLoop_Event44_next(nullptr);
        Info::CGoldenBoxItemMgrLoop_Event44_clbk CGoldenBoxItemMgrLoop_Event44_user(nullptr);
        
        Info::CGoldenBoxItemMgrPushDQSUpdate46_ptr CGoldenBoxItemMgrPushDQSUpdate46_next(nullptr);
        Info::CGoldenBoxItemMgrPushDQSUpdate46_clbk CGoldenBoxItemMgrPushDQSUpdate46_user(nullptr);
        
        Info::CGoldenBoxItemMgrRateCheck48_ptr CGoldenBoxItemMgrRateCheck48_next(nullptr);
        Info::CGoldenBoxItemMgrRateCheck48_clbk CGoldenBoxItemMgrRateCheck48_user(nullptr);
        
        Info::CGoldenBoxItemMgrSendMsg_RaceChat50_ptr CGoldenBoxItemMgrSendMsg_RaceChat50_next(nullptr);
        Info::CGoldenBoxItemMgrSendMsg_RaceChat50_clbk CGoldenBoxItemMgrSendMsg_RaceChat50_user(nullptr);
        
        Info::CGoldenBoxItemMgrSetDBSerial52_ptr CGoldenBoxItemMgrSetDBSerial52_next(nullptr);
        Info::CGoldenBoxItemMgrSetDBSerial52_clbk CGoldenBoxItemMgrSetDBSerial52_user(nullptr);
        
        Info::CGoldenBoxItemMgrSetGoldBoxItemIndex54_ptr CGoldenBoxItemMgrSetGoldBoxItemIndex54_next(nullptr);
        Info::CGoldenBoxItemMgrSetGoldBoxItemIndex54_clbk CGoldenBoxItemMgrSetGoldBoxItemIndex54_user(nullptr);
        
        Info::CGoldenBoxItemMgrSet_BoxItem_Count56_ptr CGoldenBoxItemMgrSet_BoxItem_Count56_next(nullptr);
        Info::CGoldenBoxItemMgrSet_BoxItem_Count56_clbk CGoldenBoxItemMgrSet_BoxItem_Count56_user(nullptr);
        
        Info::CGoldenBoxItemMgrSet_Box_Count58_ptr CGoldenBoxItemMgrSet_Box_Count58_next(nullptr);
        Info::CGoldenBoxItemMgrSet_Box_Count58_clbk CGoldenBoxItemMgrSet_Box_Count58_user(nullptr);
        
        Info::CGoldenBoxItemMgrSet_DCK60_ptr CGoldenBoxItemMgrSet_DCK60_next(nullptr);
        Info::CGoldenBoxItemMgrSet_DCK60_clbk CGoldenBoxItemMgrSet_DCK60_user(nullptr);
        
        Info::CGoldenBoxItemMgrSet_Event_Status62_ptr CGoldenBoxItemMgrSet_Event_Status62_next(nullptr);
        Info::CGoldenBoxItemMgrSet_Event_Status62_clbk CGoldenBoxItemMgrSet_Event_Status62_user(nullptr);
        
        Info::CGoldenBoxItemMgrSet_FromINIToStruct64_ptr CGoldenBoxItemMgrSet_FromINIToStruct64_next(nullptr);
        Info::CGoldenBoxItemMgrSet_FromINIToStruct64_clbk CGoldenBoxItemMgrSet_FromINIToStruct64_user(nullptr);
        
        Info::CGoldenBoxItemMgrSet_FromStruct66_ptr CGoldenBoxItemMgrSet_FromStruct66_next(nullptr);
        Info::CGoldenBoxItemMgrSet_FromStruct66_clbk CGoldenBoxItemMgrSet_FromStruct66_user(nullptr);
        
        Info::CGoldenBoxItemMgrSet_StarterBox_Count68_ptr CGoldenBoxItemMgrSet_StarterBox_Count68_next(nullptr);
        Info::CGoldenBoxItemMgrSet_StarterBox_Count68_clbk CGoldenBoxItemMgrSet_StarterBox_Count68_user(nullptr);
        
        Info::CGoldenBoxItemMgrSet_ToStruct70_ptr CGoldenBoxItemMgrSet_ToStruct70_next(nullptr);
        Info::CGoldenBoxItemMgrSet_ToStruct70_clbk CGoldenBoxItemMgrSet_ToStruct70_user(nullptr);
        
        Info::CGoldenBoxItemMgrStarterBox_InsertToInven72_ptr CGoldenBoxItemMgrStarterBox_InsertToInven72_next(nullptr);
        Info::CGoldenBoxItemMgrStarterBox_InsertToInven72_clbk CGoldenBoxItemMgrStarterBox_InsertToInven72_user(nullptr);
        
        Info::CGoldenBoxItemMgrSynchINIANDDB74_ptr CGoldenBoxItemMgrSynchINIANDDB74_next(nullptr);
        Info::CGoldenBoxItemMgrSynchINIANDDB74_clbk CGoldenBoxItemMgrSynchINIANDDB74_user(nullptr);
        
        Info::CGoldenBoxItemMgrWriteEventCouponLog76_ptr CGoldenBoxItemMgrWriteEventCouponLog76_next(nullptr);
        Info::CGoldenBoxItemMgrWriteEventCouponLog76_clbk CGoldenBoxItemMgrWriteEventCouponLog76_user(nullptr);
        
        Info::CGoldenBoxItemMgrWriteGetGoldBarLog78_ptr CGoldenBoxItemMgrWriteGetGoldBarLog78_next(nullptr);
        Info::CGoldenBoxItemMgrWriteGetGoldBarLog78_clbk CGoldenBoxItemMgrWriteGetGoldBarLog78_user(nullptr);
        
        Info::CGoldenBoxItemMgr_init_loggers80_ptr CGoldenBoxItemMgr_init_loggers80_next(nullptr);
        Info::CGoldenBoxItemMgr_init_loggers80_clbk CGoldenBoxItemMgr_init_loggers80_user(nullptr);
        
        Info::CGoldenBoxItemMgr_insert_to_inven82_ptr CGoldenBoxItemMgr_insert_to_inven82_next(nullptr);
        Info::CGoldenBoxItemMgr_insert_to_inven82_clbk CGoldenBoxItemMgr_insert_to_inven82_user(nullptr);
        
        
        Info::CGoldenBoxItemMgrdtor_CGoldenBoxItemMgr84_ptr CGoldenBoxItemMgrdtor_CGoldenBoxItemMgr84_next(nullptr);
        Info::CGoldenBoxItemMgrdtor_CGoldenBoxItemMgr84_clbk CGoldenBoxItemMgrdtor_CGoldenBoxItemMgr84_user(nullptr);
        
        void CGoldenBoxItemMgrBoxItemDataCopy2_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           CGoldenBoxItemMgrBoxItemDataCopy2_user(_this, CGoldenBoxItemMgrBoxItemDataCopy2_next);
        };
        struct _ItemExchange_fld::_output* CGoldenBoxItemMgrBoxItemOpen4_wrapper(struct CGoldenBoxItemMgr* _this, char byIndex)
        {
           return CGoldenBoxItemMgrBoxItemOpen4_user(_this, byIndex, CGoldenBoxItemMgrBoxItemOpen4_next);
        };
        void CGoldenBoxItemMgrBoxItemOpenEffectType6_wrapper(struct CGoldenBoxItemMgr* _this, char* szUseItem, char* szNewItem, char* pbyType, bool* bCircle)
        {
           CGoldenBoxItemMgrBoxItemOpenEffectType6_user(_this, szUseItem, szNewItem, pbyType, bCircle, CGoldenBoxItemMgrBoxItemOpenEffectType6_next);
        };
        
        void CGoldenBoxItemMgrctor_CGoldenBoxItemMgr8_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           CGoldenBoxItemMgrctor_CGoldenBoxItemMgr8_user(_this, CGoldenBoxItemMgrctor_CGoldenBoxItemMgr8_next);
        };
        void CGoldenBoxItemMgrCheck_Event_Status10_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           CGoldenBoxItemMgrCheck_Event_Status10_user(_this, CGoldenBoxItemMgrCheck_Event_Status10_next);
        };
        void CGoldenBoxItemMgrCheck_Loaded_Event_Status12_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           CGoldenBoxItemMgrCheck_Loaded_Event_Status12_user(_this, CGoldenBoxItemMgrCheck_Loaded_Event_Status12_next);
        };
        struct _db_golden_box_item* CGoldenBoxItemMgrGetGodBoxItemInfoPtr14_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           return CGoldenBoxItemMgrGetGodBoxItemInfoPtr14_user(_this, CGoldenBoxItemMgrGetGodBoxItemInfoPtr14_next);
        };
        uint16_t CGoldenBoxItemMgrGetGoldBoxItemIndex16_wrapper(struct CGoldenBoxItemMgr* _this, uint16_t wIndex)
        {
           return CGoldenBoxItemMgrGetGoldBoxItemIndex16_user(_this, wIndex, CGoldenBoxItemMgrGetGoldBoxItemIndex16_next);
        };
        char* CGoldenBoxItemMgrGetGoldBoxItemPtr18_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           return CGoldenBoxItemMgrGetGoldBoxItemPtr18_user(_this, CGoldenBoxItemMgrGetGoldBoxItemPtr18_next);
        };
        char CGoldenBoxItemMgrGetLoopCount20_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           return CGoldenBoxItemMgrGetLoopCount20_user(_this, CGoldenBoxItemMgrGetLoopCount20_next);
        };
        uint16_t CGoldenBoxItemMgrGetOreItemTotalCnt22_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           return CGoldenBoxItemMgrGetOreItemTotalCnt22_user(_this, CGoldenBoxItemMgrGetOreItemTotalCnt22_next);
        };
        char* CGoldenBoxItemMgrGetStarterBoxCode24_wrapper(struct CGoldenBoxItemMgr* _this, uint16_t wIndex)
        {
           return CGoldenBoxItemMgrGetStarterBoxCode24_user(_this, wIndex, CGoldenBoxItemMgrGetStarterBoxCode24_next);
        };
        uint16_t CGoldenBoxItemMgrGet_BoxItem_Count26_wrapper(struct CGoldenBoxItemMgr* _this, char byIndex, unsigned int dwIndex)
        {
           return CGoldenBoxItemMgrGet_BoxItem_Count26_user(_this, byIndex, dwIndex, CGoldenBoxItemMgrGet_BoxItem_Count26_next);
        };
        uint16_t CGoldenBoxItemMgrGet_Box_Count28_wrapper(struct CGoldenBoxItemMgr* _this, char byIndex)
        {
           return CGoldenBoxItemMgrGet_Box_Count28_user(_this, byIndex, CGoldenBoxItemMgrGet_Box_Count28_next);
        };
        char CGoldenBoxItemMgrGet_Event_Status30_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           return CGoldenBoxItemMgrGet_Event_Status30_user(_this, CGoldenBoxItemMgrGet_Event_Status30_next);
        };
        uint16_t CGoldenBoxItemMgrGet_StarterBox_Count32_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           return CGoldenBoxItemMgrGet_StarterBox_Count32_user(_this, CGoldenBoxItemMgrGet_StarterBox_Count32_next);
        };
        bool CGoldenBoxItemMgrInitialize34_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           return CGoldenBoxItemMgrInitialize34_user(_this, CGoldenBoxItemMgrInitialize34_next);
        };
        struct CGoldenBoxItemMgr* CGoldenBoxItemMgrInstance36_wrapper()
        {
           return CGoldenBoxItemMgrInstance36_user(CGoldenBoxItemMgrInstance36_next);
        };
        char CGoldenBoxItemMgrIsBuyRaceBossGoldBox38_wrapper(struct CGoldenBoxItemMgr* _this, struct CPlayer* pOne)
        {
           return CGoldenBoxItemMgrIsBuyRaceBossGoldBox38_user(_this, pOne, CGoldenBoxItemMgrIsBuyRaceBossGoldBox38_next);
        };
        bool CGoldenBoxItemMgrLoad_Event_INI40_wrapper(struct CGoldenBoxItemMgr* _this, struct _golden_box_item_ini* pIni)
        {
           return CGoldenBoxItemMgrLoad_Event_INI40_user(_this, pIni, CGoldenBoxItemMgrLoad_Event_INI40_next);
        };
        bool CGoldenBoxItemMgrLoad_Golden_Box_Item_Event42_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           return CGoldenBoxItemMgrLoad_Golden_Box_Item_Event42_user(_this, CGoldenBoxItemMgrLoad_Golden_Box_Item_Event42_next);
        };
        void CGoldenBoxItemMgrLoop_Event44_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           CGoldenBoxItemMgrLoop_Event44_user(_this, CGoldenBoxItemMgrLoop_Event44_next);
        };
        void CGoldenBoxItemMgrPushDQSUpdate46_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           CGoldenBoxItemMgrPushDQSUpdate46_user(_this, CGoldenBoxItemMgrPushDQSUpdate46_next);
        };
        void CGoldenBoxItemMgrRateCheck48_wrapper(struct CGoldenBoxItemMgr* _this, char byIndex)
        {
           CGoldenBoxItemMgrRateCheck48_user(_this, byIndex, CGoldenBoxItemMgrRateCheck48_next);
        };
        void CGoldenBoxItemMgrSendMsg_RaceChat50_wrapper(struct CGoldenBoxItemMgr* _this, struct CPlayer* pOne, char* pwszChatData)
        {
           CGoldenBoxItemMgrSendMsg_RaceChat50_user(_this, pOne, pwszChatData, CGoldenBoxItemMgrSendMsg_RaceChat50_next);
        };
        void CGoldenBoxItemMgrSetDBSerial52_wrapper(struct CGoldenBoxItemMgr* _this, int nDBSerial)
        {
           CGoldenBoxItemMgrSetDBSerial52_user(_this, nDBSerial, CGoldenBoxItemMgrSetDBSerial52_next);
        };
        bool CGoldenBoxItemMgrSetGoldBoxItemIndex54_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           return CGoldenBoxItemMgrSetGoldBoxItemIndex54_user(_this, CGoldenBoxItemMgrSetGoldBoxItemIndex54_next);
        };
        void CGoldenBoxItemMgrSet_BoxItem_Count56_wrapper(struct CGoldenBoxItemMgr* _this, char byIndex, unsigned int dwIndex)
        {
           CGoldenBoxItemMgrSet_BoxItem_Count56_user(_this, byIndex, dwIndex, CGoldenBoxItemMgrSet_BoxItem_Count56_next);
        };
        void CGoldenBoxItemMgrSet_Box_Count58_wrapper(struct CGoldenBoxItemMgr* _this, char byIndex)
        {
           CGoldenBoxItemMgrSet_Box_Count58_user(_this, byIndex, CGoldenBoxItemMgrSet_Box_Count58_next);
        };
        void CGoldenBoxItemMgrSet_DCK60_wrapper(struct CGoldenBoxItemMgr* _this, char byDCK)
        {
           CGoldenBoxItemMgrSet_DCK60_user(_this, byDCK, CGoldenBoxItemMgrSet_DCK60_next);
        };
        void CGoldenBoxItemMgrSet_Event_Status62_wrapper(struct CGoldenBoxItemMgr* _this, char byStatus)
        {
           CGoldenBoxItemMgrSet_Event_Status62_user(_this, byStatus, CGoldenBoxItemMgrSet_Event_Status62_next);
        };
        void CGoldenBoxItemMgrSet_FromINIToStruct64_wrapper(struct CGoldenBoxItemMgr* _this, struct _golden_box_item_ini* pIni)
        {
           CGoldenBoxItemMgrSet_FromINIToStruct64_user(_this, pIni, CGoldenBoxItemMgrSet_FromINIToStruct64_next);
        };
        void CGoldenBoxItemMgrSet_FromStruct66_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           CGoldenBoxItemMgrSet_FromStruct66_user(_this, CGoldenBoxItemMgrSet_FromStruct66_next);
        };
        void CGoldenBoxItemMgrSet_StarterBox_Count68_wrapper(struct CGoldenBoxItemMgr* _this, unsigned int dwNum, bool bAdd)
        {
           CGoldenBoxItemMgrSet_StarterBox_Count68_user(_this, dwNum, bAdd, CGoldenBoxItemMgrSet_StarterBox_Count68_next);
        };
        void CGoldenBoxItemMgrSet_ToStruct70_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           CGoldenBoxItemMgrSet_ToStruct70_user(_this, CGoldenBoxItemMgrSet_ToStruct70_next);
        };
        bool CGoldenBoxItemMgrStarterBox_InsertToInven72_wrapper(struct CGoldenBoxItemMgr* _this, struct CPlayer* pOne, char* szItemCode)
        {
           return CGoldenBoxItemMgrStarterBox_InsertToInven72_user(_this, pOne, szItemCode, CGoldenBoxItemMgrStarterBox_InsertToInven72_next);
        };
        bool CGoldenBoxItemMgrSynchINIANDDB74_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           return CGoldenBoxItemMgrSynchINIANDDB74_user(_this, CGoldenBoxItemMgrSynchINIANDDB74_next);
        };
        void CGoldenBoxItemMgrWriteEventCouponLog76_wrapper(struct CGoldenBoxItemMgr* _this, struct CPlayer* pOne, struct _STORAGE_LIST::_db_con* pItem)
        {
           CGoldenBoxItemMgrWriteEventCouponLog76_user(_this, pOne, pItem, CGoldenBoxItemMgrWriteEventCouponLog76_next);
        };
        void CGoldenBoxItemMgrWriteGetGoldBarLog78_wrapper(struct CGoldenBoxItemMgr* _this, struct CPlayer* pOne, struct _STORAGE_LIST::_db_con* pItem)
        {
           CGoldenBoxItemMgrWriteGetGoldBarLog78_user(_this, pOne, pItem, CGoldenBoxItemMgrWriteGetGoldBarLog78_next);
        };
        bool CGoldenBoxItemMgr_init_loggers80_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           return CGoldenBoxItemMgr_init_loggers80_user(_this, CGoldenBoxItemMgr_init_loggers80_next);
        };
        bool CGoldenBoxItemMgr_insert_to_inven82_wrapper(struct CGoldenBoxItemMgr* _this, struct CPlayer* pOne, char byTableCode, uint16_t wItemIndex)
        {
           return CGoldenBoxItemMgr_insert_to_inven82_user(_this, pOne, byTableCode, wItemIndex, CGoldenBoxItemMgr_insert_to_inven82_next);
        };
        
        void CGoldenBoxItemMgrdtor_CGoldenBoxItemMgr84_wrapper(struct CGoldenBoxItemMgr* _this)
        {
           CGoldenBoxItemMgrdtor_CGoldenBoxItemMgr84_user(_this, CGoldenBoxItemMgrdtor_CGoldenBoxItemMgr84_next);
        };
        
        ::std::array<hook_record, 42> CGoldenBoxItemMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x140415500L,
                (LPVOID *)&CGoldenBoxItemMgrBoxItemDataCopy2_user,
                (LPVOID *)&CGoldenBoxItemMgrBoxItemDataCopy2_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrBoxItemDataCopy2_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::BoxItemDataCopy)
            },
            _hook_record {
                (LPVOID)0x140414800L,
                (LPVOID *)&CGoldenBoxItemMgrBoxItemOpen4_user,
                (LPVOID *)&CGoldenBoxItemMgrBoxItemOpen4_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrBoxItemOpen4_wrapper),
                (LPVOID)cast_pointer_function((struct _ItemExchange_fld::_output*(CGoldenBoxItemMgr::*)(char))&CGoldenBoxItemMgr::BoxItemOpen)
            },
            _hook_record {
                (LPVOID)0x140415580L,
                (LPVOID *)&CGoldenBoxItemMgrBoxItemOpenEffectType6_user,
                (LPVOID *)&CGoldenBoxItemMgrBoxItemOpenEffectType6_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrBoxItemOpenEffectType6_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(char*, char*, char*, bool*))&CGoldenBoxItemMgr::BoxItemOpenEffectType)
            },
            _hook_record {
                (LPVOID)0x140411e60L,
                (LPVOID *)&CGoldenBoxItemMgrctor_CGoldenBoxItemMgr8_user,
                (LPVOID *)&CGoldenBoxItemMgrctor_CGoldenBoxItemMgr8_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrctor_CGoldenBoxItemMgr8_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::ctor_CGoldenBoxItemMgr)
            },
            _hook_record {
                (LPVOID)0x140412b80L,
                (LPVOID *)&CGoldenBoxItemMgrCheck_Event_Status10_user,
                (LPVOID *)&CGoldenBoxItemMgrCheck_Event_Status10_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrCheck_Event_Status10_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::Check_Event_Status)
            },
            _hook_record {
                (LPVOID)0x140412320L,
                (LPVOID *)&CGoldenBoxItemMgrCheck_Loaded_Event_Status12_user,
                (LPVOID *)&CGoldenBoxItemMgrCheck_Loaded_Event_Status12_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrCheck_Loaded_Event_Status12_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::Check_Loaded_Event_Status)
            },
            _hook_record {
                (LPVOID)0x1402059f0L,
                (LPVOID *)&CGoldenBoxItemMgrGetGodBoxItemInfoPtr14_user,
                (LPVOID *)&CGoldenBoxItemMgrGetGodBoxItemInfoPtr14_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrGetGodBoxItemInfoPtr14_wrapper),
                (LPVOID)cast_pointer_function((struct _db_golden_box_item*(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::GetGodBoxItemInfoPtr)
            },
            _hook_record {
                (LPVOID)0x1400d3e70L,
                (LPVOID *)&CGoldenBoxItemMgrGetGoldBoxItemIndex16_user,
                (LPVOID *)&CGoldenBoxItemMgrGetGoldBoxItemIndex16_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrGetGoldBoxItemIndex16_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CGoldenBoxItemMgr::*)(uint16_t))&CGoldenBoxItemMgr::GetGoldBoxItemIndex)
            },
            _hook_record {
                (LPVOID)0x140415230L,
                (LPVOID *)&CGoldenBoxItemMgrGetGoldBoxItemPtr18_user,
                (LPVOID *)&CGoldenBoxItemMgrGetGoldBoxItemPtr18_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrGetGoldBoxItemPtr18_wrapper),
                (LPVOID)cast_pointer_function((char*(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::GetGoldBoxItemPtr)
            },
            _hook_record {
                (LPVOID)0x1400b84c0L,
                (LPVOID *)&CGoldenBoxItemMgrGetLoopCount20_user,
                (LPVOID *)&CGoldenBoxItemMgrGetLoopCount20_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrGetLoopCount20_wrapper),
                (LPVOID)cast_pointer_function((char(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::GetLoopCount)
            },
            _hook_record {
                (LPVOID)0x140415180L,
                (LPVOID *)&CGoldenBoxItemMgrGetOreItemTotalCnt22_user,
                (LPVOID *)&CGoldenBoxItemMgrGetOreItemTotalCnt22_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrGetOreItemTotalCnt22_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::GetOreItemTotalCnt)
            },
            _hook_record {
                (LPVOID)0x1400798f0L,
                (LPVOID *)&CGoldenBoxItemMgrGetStarterBoxCode24_user,
                (LPVOID *)&CGoldenBoxItemMgrGetStarterBoxCode24_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrGetStarterBoxCode24_wrapper),
                (LPVOID)cast_pointer_function((char*(CGoldenBoxItemMgr::*)(uint16_t))&CGoldenBoxItemMgr::GetStarterBoxCode)
            },
            _hook_record {
                (LPVOID)0x140414070L,
                (LPVOID *)&CGoldenBoxItemMgrGet_BoxItem_Count26_user,
                (LPVOID *)&CGoldenBoxItemMgrGet_BoxItem_Count26_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrGet_BoxItem_Count26_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CGoldenBoxItemMgr::*)(char, unsigned int))&CGoldenBoxItemMgr::Get_BoxItem_Count)
            },
            _hook_record {
                (LPVOID)0x140413ee0L,
                (LPVOID *)&CGoldenBoxItemMgrGet_Box_Count28_user,
                (LPVOID *)&CGoldenBoxItemMgrGet_Box_Count28_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrGet_Box_Count28_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CGoldenBoxItemMgr::*)(char))&CGoldenBoxItemMgr::Get_Box_Count)
            },
            _hook_record {
                (LPVOID)0x140412300L,
                (LPVOID *)&CGoldenBoxItemMgrGet_Event_Status30_user,
                (LPVOID *)&CGoldenBoxItemMgrGet_Event_Status30_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrGet_Event_Status30_wrapper),
                (LPVOID)cast_pointer_function((char(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::Get_Event_Status)
            },
            _hook_record {
                (LPVOID)0x140413f90L,
                (LPVOID *)&CGoldenBoxItemMgrGet_StarterBox_Count32_user,
                (LPVOID *)&CGoldenBoxItemMgrGet_StarterBox_Count32_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrGet_StarterBox_Count32_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::Get_StarterBox_Count)
            },
            _hook_record {
                (LPVOID)0x1404120d0L,
                (LPVOID *)&CGoldenBoxItemMgrInitialize34_user,
                (LPVOID *)&CGoldenBoxItemMgrInitialize34_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrInitialize34_wrapper),
                (LPVOID)cast_pointer_function((bool(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::Initialize)
            },
            _hook_record {
                (LPVOID)0x140079920L,
                (LPVOID *)&CGoldenBoxItemMgrInstance36_user,
                (LPVOID *)&CGoldenBoxItemMgrInstance36_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrInstance36_wrapper),
                (LPVOID)cast_pointer_function((struct CGoldenBoxItemMgr*(*)())&CGoldenBoxItemMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x140414a70L,
                (LPVOID *)&CGoldenBoxItemMgrIsBuyRaceBossGoldBox38_user,
                (LPVOID *)&CGoldenBoxItemMgrIsBuyRaceBossGoldBox38_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrIsBuyRaceBossGoldBox38_wrapper),
                (LPVOID)cast_pointer_function((char(CGoldenBoxItemMgr::*)(struct CPlayer*))&CGoldenBoxItemMgr::IsBuyRaceBossGoldBox)
            },
            _hook_record {
                (LPVOID)0x140412ca0L,
                (LPVOID *)&CGoldenBoxItemMgrLoad_Event_INI40_user,
                (LPVOID *)&CGoldenBoxItemMgrLoad_Event_INI40_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrLoad_Event_INI40_wrapper),
                (LPVOID)cast_pointer_function((bool(CGoldenBoxItemMgr::*)(struct _golden_box_item_ini*))&CGoldenBoxItemMgr::Load_Event_INI)
            },
            _hook_record {
                (LPVOID)0x1404121a0L,
                (LPVOID *)&CGoldenBoxItemMgrLoad_Golden_Box_Item_Event42_user,
                (LPVOID *)&CGoldenBoxItemMgrLoad_Golden_Box_Item_Event42_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrLoad_Golden_Box_Item_Event42_wrapper),
                (LPVOID)cast_pointer_function((bool(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::Load_Golden_Box_Item_Event)
            },
            _hook_record {
                (LPVOID)0x1404129a0L,
                (LPVOID *)&CGoldenBoxItemMgrLoop_Event44_user,
                (LPVOID *)&CGoldenBoxItemMgrLoop_Event44_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrLoop_Event44_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::Loop_Event)
            },
            _hook_record {
                (LPVOID)0x140414490L,
                (LPVOID *)&CGoldenBoxItemMgrPushDQSUpdate46_user,
                (LPVOID *)&CGoldenBoxItemMgrPushDQSUpdate46_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrPushDQSUpdate46_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::PushDQSUpdate)
            },
            _hook_record {
                (LPVOID)0x1404145d0L,
                (LPVOID *)&CGoldenBoxItemMgrRateCheck48_user,
                (LPVOID *)&CGoldenBoxItemMgrRateCheck48_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrRateCheck48_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(char))&CGoldenBoxItemMgr::RateCheck)
            },
            _hook_record {
                (LPVOID)0x140414f60L,
                (LPVOID *)&CGoldenBoxItemMgrSendMsg_RaceChat50_user,
                (LPVOID *)&CGoldenBoxItemMgrSendMsg_RaceChat50_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSendMsg_RaceChat50_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(struct CPlayer*, char*))&CGoldenBoxItemMgr::SendMsg_RaceChat)
            },
            _hook_record {
                (LPVOID)0x140412170L,
                (LPVOID *)&CGoldenBoxItemMgrSetDBSerial52_user,
                (LPVOID *)&CGoldenBoxItemMgrSetDBSerial52_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSetDBSerial52_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(int))&CGoldenBoxItemMgr::SetDBSerial)
            },
            _hook_record {
                (LPVOID)0x140415250L,
                (LPVOID *)&CGoldenBoxItemMgrSetGoldBoxItemIndex54_user,
                (LPVOID *)&CGoldenBoxItemMgrSetGoldBoxItemIndex54_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSetGoldBoxItemIndex54_wrapper),
                (LPVOID)cast_pointer_function((bool(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::SetGoldBoxItemIndex)
            },
            _hook_record {
                (LPVOID)0x140414130L,
                (LPVOID *)&CGoldenBoxItemMgrSet_BoxItem_Count56_user,
                (LPVOID *)&CGoldenBoxItemMgrSet_BoxItem_Count56_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSet_BoxItem_Count56_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(char, unsigned int))&CGoldenBoxItemMgr::Set_BoxItem_Count)
            },
            _hook_record {
                (LPVOID)0x140413f10L,
                (LPVOID *)&CGoldenBoxItemMgrSet_Box_Count58_user,
                (LPVOID *)&CGoldenBoxItemMgrSet_Box_Count58_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSet_Box_Count58_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(char))&CGoldenBoxItemMgr::Set_Box_Count)
            },
            _hook_record {
                (LPVOID)0x140413c90L,
                (LPVOID *)&CGoldenBoxItemMgrSet_DCK60_user,
                (LPVOID *)&CGoldenBoxItemMgrSet_DCK60_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSet_DCK60_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(char))&CGoldenBoxItemMgr::Set_DCK)
            },
            _hook_record {
                (LPVOID)0x140412280L,
                (LPVOID *)&CGoldenBoxItemMgrSet_Event_Status62_user,
                (LPVOID *)&CGoldenBoxItemMgrSet_Event_Status62_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSet_Event_Status62_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(char))&CGoldenBoxItemMgr::Set_Event_Status)
            },
            _hook_record {
                (LPVOID)0x140413900L,
                (LPVOID *)&CGoldenBoxItemMgrSet_FromINIToStruct64_user,
                (LPVOID *)&CGoldenBoxItemMgrSet_FromINIToStruct64_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSet_FromINIToStruct64_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(struct _golden_box_item_ini*))&CGoldenBoxItemMgr::Set_FromINIToStruct)
            },
            _hook_record {
                (LPVOID)0x140413cc0L,
                (LPVOID *)&CGoldenBoxItemMgrSet_FromStruct66_user,
                (LPVOID *)&CGoldenBoxItemMgrSet_FromStruct66_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSet_FromStruct66_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::Set_FromStruct)
            },
            _hook_record {
                (LPVOID)0x140413fb0L,
                (LPVOID *)&CGoldenBoxItemMgrSet_StarterBox_Count68_user,
                (LPVOID *)&CGoldenBoxItemMgrSet_StarterBox_Count68_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSet_StarterBox_Count68_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(unsigned int, bool))&CGoldenBoxItemMgr::Set_StarterBox_Count)
            },
            _hook_record {
                (LPVOID)0x140414260L,
                (LPVOID *)&CGoldenBoxItemMgrSet_ToStruct70_user,
                (LPVOID *)&CGoldenBoxItemMgrSet_ToStruct70_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSet_ToStruct70_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::Set_ToStruct)
            },
            _hook_record {
                (LPVOID)0x140414d70L,
                (LPVOID *)&CGoldenBoxItemMgrStarterBox_InsertToInven72_user,
                (LPVOID *)&CGoldenBoxItemMgrStarterBox_InsertToInven72_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrStarterBox_InsertToInven72_wrapper),
                (LPVOID)cast_pointer_function((bool(CGoldenBoxItemMgr::*)(struct CPlayer*, char*))&CGoldenBoxItemMgr::StarterBox_InsertToInven)
            },
            _hook_record {
                (LPVOID)0x140412560L,
                (LPVOID *)&CGoldenBoxItemMgrSynchINIANDDB74_user,
                (LPVOID *)&CGoldenBoxItemMgrSynchINIANDDB74_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrSynchINIANDDB74_wrapper),
                (LPVOID)cast_pointer_function((bool(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::SynchINIANDDB)
            },
            _hook_record {
                (LPVOID)0x1404158a0L,
                (LPVOID *)&CGoldenBoxItemMgrWriteEventCouponLog76_user,
                (LPVOID *)&CGoldenBoxItemMgrWriteEventCouponLog76_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrWriteEventCouponLog76_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(struct CPlayer*, struct _STORAGE_LIST::_db_con*))&CGoldenBoxItemMgr::WriteEventCouponLog)
            },
            _hook_record {
                (LPVOID)0x140415730L,
                (LPVOID *)&CGoldenBoxItemMgrWriteGetGoldBarLog78_user,
                (LPVOID *)&CGoldenBoxItemMgrWriteGetGoldBarLog78_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrWriteGetGoldBarLog78_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)(struct CPlayer*, struct _STORAGE_LIST::_db_con*))&CGoldenBoxItemMgr::WriteGetGoldBarLog)
            },
            _hook_record {
                (LPVOID)0x140414e30L,
                (LPVOID *)&CGoldenBoxItemMgr_init_loggers80_user,
                (LPVOID *)&CGoldenBoxItemMgr_init_loggers80_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgr_init_loggers80_wrapper),
                (LPVOID)cast_pointer_function((bool(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::_init_loggers)
            },
            _hook_record {
                (LPVOID)0x140414b50L,
                (LPVOID *)&CGoldenBoxItemMgr_insert_to_inven82_user,
                (LPVOID *)&CGoldenBoxItemMgr_insert_to_inven82_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgr_insert_to_inven82_wrapper),
                (LPVOID)cast_pointer_function((bool(CGoldenBoxItemMgr::*)(struct CPlayer*, char, uint16_t))&CGoldenBoxItemMgr::_insert_to_inven)
            },
            _hook_record {
                (LPVOID)0x140411fc0L,
                (LPVOID *)&CGoldenBoxItemMgrdtor_CGoldenBoxItemMgr84_user,
                (LPVOID *)&CGoldenBoxItemMgrdtor_CGoldenBoxItemMgr84_next,
                (LPVOID)cast_pointer_function(CGoldenBoxItemMgrdtor_CGoldenBoxItemMgr84_wrapper),
                (LPVOID)cast_pointer_function((void(CGoldenBoxItemMgr::*)())&CGoldenBoxItemMgr::dtor_CGoldenBoxItemMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
