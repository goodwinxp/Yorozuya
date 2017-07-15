#include <CLuaEventMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CLuaEventMgrAttachEvent2_ptr CLuaEventMgrAttachEvent2_next(nullptr);
        Info::CLuaEventMgrAttachEvent2_clbk CLuaEventMgrAttachEvent2_user(nullptr);
        
        
        Info::CLuaEventMgrctor_CLuaEventMgr4_ptr CLuaEventMgrctor_CLuaEventMgr4_next(nullptr);
        Info::CLuaEventMgrctor_CLuaEventMgr4_clbk CLuaEventMgrctor_CLuaEventMgr4_user(nullptr);
        
        Info::CLuaEventMgrDestroy6_ptr CLuaEventMgrDestroy6_next(nullptr);
        Info::CLuaEventMgrDestroy6_clbk CLuaEventMgrDestroy6_user(nullptr);
        
        Info::CLuaEventMgrDettachEvent8_ptr CLuaEventMgrDettachEvent8_next(nullptr);
        Info::CLuaEventMgrDettachEvent8_clbk CLuaEventMgrDettachEvent8_user(nullptr);
        
        Info::CLuaEventMgrInitSDM10_ptr CLuaEventMgrInitSDM10_next(nullptr);
        Info::CLuaEventMgrInitSDM10_clbk CLuaEventMgrInitSDM10_user(nullptr);
        
        Info::CLuaEventMgrInstance12_ptr CLuaEventMgrInstance12_next(nullptr);
        Info::CLuaEventMgrInstance12_clbk CLuaEventMgrInstance12_user(nullptr);
        
        Info::CLuaEventMgrLoop14_ptr CLuaEventMgrLoop14_next(nullptr);
        Info::CLuaEventMgrLoop14_clbk CLuaEventMgrLoop14_user(nullptr);
        
        Info::CLuaEventMgrNewEvent16_ptr CLuaEventMgrNewEvent16_next(nullptr);
        Info::CLuaEventMgrNewEvent16_clbk CLuaEventMgrNewEvent16_user(nullptr);
        
        Info::CLuaEventMgrRemoveEvent18_ptr CLuaEventMgrRemoveEvent18_next(nullptr);
        Info::CLuaEventMgrRemoveEvent18_clbk CLuaEventMgrRemoveEvent18_user(nullptr);
        
        Info::CLuaEventMgrSearchEvent20_ptr CLuaEventMgrSearchEvent20_next(nullptr);
        Info::CLuaEventMgrSearchEvent20_clbk CLuaEventMgrSearchEvent20_user(nullptr);
        
        
        Info::CLuaEventMgrdtor_CLuaEventMgr24_ptr CLuaEventMgrdtor_CLuaEventMgr24_next(nullptr);
        Info::CLuaEventMgrdtor_CLuaEventMgr24_clbk CLuaEventMgrdtor_CLuaEventMgr24_user(nullptr);
        
        bool CLuaEventMgrAttachEvent2_wrapper(struct CLuaEventMgr* _this, struct CLuaEventNode* pEvent)
        {
           return CLuaEventMgrAttachEvent2_user(_this, pEvent, CLuaEventMgrAttachEvent2_next);
        };
        
        void CLuaEventMgrctor_CLuaEventMgr4_wrapper(struct CLuaEventMgr* _this)
        {
           CLuaEventMgrctor_CLuaEventMgr4_user(_this, CLuaEventMgrctor_CLuaEventMgr4_next);
        };
        void CLuaEventMgrDestroy6_wrapper()
        {
           CLuaEventMgrDestroy6_user(CLuaEventMgrDestroy6_next);
        };
        bool CLuaEventMgrDettachEvent8_wrapper(struct CLuaEventMgr* _this, struct CLuaEventNode* pEvent)
        {
           return CLuaEventMgrDettachEvent8_user(_this, pEvent, CLuaEventMgrDettachEvent8_next);
        };
        bool CLuaEventMgrInitSDM10_wrapper(struct CLuaEventMgr* _this)
        {
           return CLuaEventMgrInitSDM10_user(_this, CLuaEventMgrInitSDM10_next);
        };
        struct CLuaEventMgr* CLuaEventMgrInstance12_wrapper()
        {
           return CLuaEventMgrInstance12_user(CLuaEventMgrInstance12_next);
        };
        void CLuaEventMgrLoop14_wrapper(struct CLuaEventMgr* _this)
        {
           CLuaEventMgrLoop14_user(_this, CLuaEventMgrLoop14_next);
        };
        struct CLuaEventNode* CLuaEventMgrNewEvent16_wrapper(struct CLuaEventMgr* _this)
        {
           return CLuaEventMgrNewEvent16_user(_this, CLuaEventMgrNewEvent16_next);
        };
        void CLuaEventMgrRemoveEvent18_wrapper(struct CLuaEventMgr* _this, struct CLuaEventNode* pEvent)
        {
           CLuaEventMgrRemoveEvent18_user(_this, pEvent, CLuaEventMgrRemoveEvent18_next);
        };
        struct CLuaEventNode* CLuaEventMgrSearchEvent20_wrapper(struct CLuaEventMgr* _this, char* strFileName)
        {
           return CLuaEventMgrSearchEvent20_user(_this, strFileName, CLuaEventMgrSearchEvent20_next);
        };
        
        void CLuaEventMgrdtor_CLuaEventMgr24_wrapper(struct CLuaEventMgr* _this)
        {
           CLuaEventMgrdtor_CLuaEventMgr24_user(_this, CLuaEventMgrdtor_CLuaEventMgr24_next);
        };
        
        ::std::array<hook_record, 11> CLuaEventMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x140403690L,
                (LPVOID *)&CLuaEventMgrAttachEvent2_user,
                (LPVOID *)&CLuaEventMgrAttachEvent2_next,
                (LPVOID)cast_pointer_function(CLuaEventMgrAttachEvent2_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaEventMgr::*)(struct CLuaEventNode*))&CLuaEventMgr::AttachEvent)
            },
            _hook_record {
                (LPVOID)0x1404034a0L,
                (LPVOID *)&CLuaEventMgrctor_CLuaEventMgr4_user,
                (LPVOID *)&CLuaEventMgrctor_CLuaEventMgr4_next,
                (LPVOID)cast_pointer_function(CLuaEventMgrctor_CLuaEventMgr4_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaEventMgr::*)())&CLuaEventMgr::ctor_CLuaEventMgr)
            },
            _hook_record {
                (LPVOID)0x1402034f0L,
                (LPVOID *)&CLuaEventMgrDestroy6_user,
                (LPVOID *)&CLuaEventMgrDestroy6_next,
                (LPVOID)cast_pointer_function(CLuaEventMgrDestroy6_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CLuaEventMgr::Destroy)
            },
            _hook_record {
                (LPVOID)0x1404037c0L,
                (LPVOID *)&CLuaEventMgrDettachEvent8_user,
                (LPVOID *)&CLuaEventMgrDettachEvent8_next,
                (LPVOID)cast_pointer_function(CLuaEventMgrDettachEvent8_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaEventMgr::*)(struct CLuaEventNode*))&CLuaEventMgr::DettachEvent)
            },
            _hook_record {
                (LPVOID)0x140403570L,
                (LPVOID *)&CLuaEventMgrInitSDM10_user,
                (LPVOID *)&CLuaEventMgrInitSDM10_next,
                (LPVOID)cast_pointer_function(CLuaEventMgrInitSDM10_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaEventMgr::*)())&CLuaEventMgr::InitSDM)
            },
            _hook_record {
                (LPVOID)0x140401010L,
                (LPVOID *)&CLuaEventMgrInstance12_user,
                (LPVOID *)&CLuaEventMgrInstance12_next,
                (LPVOID)cast_pointer_function(CLuaEventMgrInstance12_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaEventMgr*(*)())&CLuaEventMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x140403820L,
                (LPVOID *)&CLuaEventMgrLoop14_user,
                (LPVOID *)&CLuaEventMgrLoop14_next,
                (LPVOID)cast_pointer_function(CLuaEventMgrLoop14_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaEventMgr::*)())&CLuaEventMgr::Loop)
            },
            _hook_record {
                (LPVOID)0x140403580L,
                (LPVOID *)&CLuaEventMgrNewEvent16_user,
                (LPVOID *)&CLuaEventMgrNewEvent16_next,
                (LPVOID)cast_pointer_function(CLuaEventMgrNewEvent16_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaEventNode*(CLuaEventMgr::*)())&CLuaEventMgr::NewEvent)
            },
            _hook_record {
                (LPVOID)0x140403610L,
                (LPVOID *)&CLuaEventMgrRemoveEvent18_user,
                (LPVOID *)&CLuaEventMgrRemoveEvent18_next,
                (LPVOID)cast_pointer_function(CLuaEventMgrRemoveEvent18_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaEventMgr::*)(struct CLuaEventNode*))&CLuaEventMgr::RemoveEvent)
            },
            _hook_record {
                (LPVOID)0x140403700L,
                (LPVOID *)&CLuaEventMgrSearchEvent20_user,
                (LPVOID *)&CLuaEventMgrSearchEvent20_next,
                (LPVOID)cast_pointer_function(CLuaEventMgrSearchEvent20_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaEventNode*(CLuaEventMgr::*)(char*))&CLuaEventMgr::SearchEvent)
            },
            _hook_record {
                (LPVOID)0x140403530L,
                (LPVOID *)&CLuaEventMgrdtor_CLuaEventMgr24_user,
                (LPVOID *)&CLuaEventMgrdtor_CLuaEventMgr24_next,
                (LPVOID)cast_pointer_function(CLuaEventMgrdtor_CLuaEventMgr24_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaEventMgr::*)())&CLuaEventMgr::dtor_CLuaEventMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
