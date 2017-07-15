#include <LtdWriterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::LtdWriterInitLogDB2_ptr LtdWriterInitLogDB2_next(nullptr);
        Info::LtdWriterInitLogDB2_clbk LtdWriterInitLogDB2_user(nullptr);
        
        
        Info::LtdWriterctor_LtdWriter4_ptr LtdWriterctor_LtdWriter4_next(nullptr);
        Info::LtdWriterctor_LtdWriter4_clbk LtdWriterctor_LtdWriter4_user(nullptr);
        
        Info::LtdWriterPtrInstance6_ptr LtdWriterPtrInstance6_next(nullptr);
        Info::LtdWriterPtrInstance6_clbk LtdWriterPtrInstance6_user(nullptr);
        
        Info::LtdWriterPushLog8_ptr LtdWriterPushLog8_next(nullptr);
        Info::LtdWriterPushLog8_clbk LtdWriterPushLog8_user(nullptr);
        
        Info::LtdWriterRelease10_ptr LtdWriterRelease10_next(nullptr);
        Info::LtdWriterRelease10_clbk LtdWriterRelease10_user(nullptr);
        
        Info::LtdWriter_CreateTable12_ptr LtdWriter_CreateTable12_next(nullptr);
        Info::LtdWriter_CreateTable12_clbk LtdWriter_CreateTable12_user(nullptr);
        
        Info::LtdWriter_GetLocalDate14_ptr LtdWriter_GetLocalDate14_next(nullptr);
        Info::LtdWriter_GetLocalDate14_clbk LtdWriter_GetLocalDate14_user(nullptr);
        
        Info::LtdWriter_PushItemCut16_ptr LtdWriter_PushItemCut16_next(nullptr);
        Info::LtdWriter_PushItemCut16_clbk LtdWriter_PushItemCut16_user(nullptr);
        
        Info::LtdWriter_PushItemMove18_ptr LtdWriter_PushItemMove18_next(nullptr);
        Info::LtdWriter_PushItemMove18_clbk LtdWriter_PushItemMove18_user(nullptr);
        
        Info::LtdWriter_SetExpend20_ptr LtdWriter_SetExpend20_next(nullptr);
        Info::LtdWriter_SetExpend20_clbk LtdWriter_SetExpend20_user(nullptr);
        
        Info::LtdWriter_SetItemInfo22_ptr LtdWriter_SetItemInfo22_next(nullptr);
        Info::LtdWriter_SetItemInfo22_clbk LtdWriter_SetItemInfo22_user(nullptr);
        
        Info::LtdWriter_SetLtd24_ptr LtdWriter_SetLtd24_next(nullptr);
        Info::LtdWriter_SetLtd24_clbk LtdWriter_SetLtd24_user(nullptr);
        
        Info::LtdWriter_WriteDB26_ptr LtdWriter_WriteDB26_next(nullptr);
        Info::LtdWriter_WriteDB26_clbk LtdWriter_WriteDB26_user(nullptr);
        
        Info::LtdWriters_Working30_ptr LtdWriters_Working30_next(nullptr);
        Info::LtdWriters_Working30_clbk LtdWriters_Working30_user(nullptr);
        
        Info::LtdWriterstart32_ptr LtdWriterstart32_next(nullptr);
        Info::LtdWriterstart32_clbk LtdWriterstart32_user(nullptr);
        
        Info::LtdWriterstop34_ptr LtdWriterstop34_next(nullptr);
        Info::LtdWriterstop34_clbk LtdWriterstop34_user(nullptr);
        
        
        Info::LtdWriterdtor_LtdWriter36_ptr LtdWriterdtor_LtdWriter36_next(nullptr);
        Info::LtdWriterdtor_LtdWriter36_clbk LtdWriterdtor_LtdWriter36_user(nullptr);
        
        bool LtdWriterInitLogDB2_wrapper(struct LtdWriter* _this, char* szDBName, char* szIP)
        {
           return LtdWriterInitLogDB2_user(_this, szDBName, szIP, LtdWriterInitLogDB2_next);
        };
        
        void LtdWriterctor_LtdWriter4_wrapper(struct LtdWriter* _this)
        {
           LtdWriterctor_LtdWriter4_user(_this, LtdWriterctor_LtdWriter4_next);
        };
        struct LtdWriter* LtdWriterPtrInstance6_wrapper()
        {
           return LtdWriterPtrInstance6_user(LtdWriterPtrInstance6_next);
        };
        void LtdWriterPushLog8_wrapper(struct LtdWriter* _this, char* byLogType, struct _LTD_PARAM* pParam)
        {
           LtdWriterPushLog8_user(_this, byLogType, pParam, LtdWriterPushLog8_next);
        };
        void LtdWriterRelease10_wrapper(struct LtdWriter* _this)
        {
           LtdWriterRelease10_user(_this, LtdWriterRelease10_next);
        };
        void LtdWriter_CreateTable12_wrapper(struct LtdWriter* _this)
        {
           LtdWriter_CreateTable12_user(_this, LtdWriter_CreateTable12_next);
        };
        int LtdWriter_GetLocalDate14_wrapper(struct LtdWriter* _this)
        {
           return LtdWriter_GetLocalDate14_user(_this, LtdWriter_GetLocalDate14_next);
        };
        void LtdWriter_PushItemCut16_wrapper(struct LtdWriter* _this, char bySubLogType, struct _LTD_PARAM* pParam, struct _LTD* pl)
        {
           LtdWriter_PushItemCut16_user(_this, bySubLogType, pParam, pl, LtdWriter_PushItemCut16_next);
        };
        void LtdWriter_PushItemMove18_wrapper(struct LtdWriter* _this, char bySubLogType, struct _LTD_PARAM* pParam, struct _LTD* pl)
        {
           LtdWriter_PushItemMove18_user(_this, bySubLogType, pParam, pl, LtdWriter_PushItemMove18_next);
        };
        void LtdWriter_SetExpend20_wrapper(struct LtdWriter* _this, char* pszExpend, struct _LTD_EXPEND* pe)
        {
           LtdWriter_SetExpend20_user(_this, pszExpend, pe, LtdWriter_SetExpend20_next);
        };
        void LtdWriter_SetItemInfo22_wrapper(struct LtdWriter* _this, char byIndex, struct _STORAGE_LIST::_db_con* pItem, char byOverlapNum, struct _LTD_ITEMINFO* pi, int nMoveType)
        {
           LtdWriter_SetItemInfo22_user(_this, byIndex, pItem, byOverlapNum, pi, nMoveType, LtdWriter_SetItemInfo22_next);
        };
        void LtdWriter_SetLtd24_wrapper(struct LtdWriter* _this, struct CUserDB* pUserDB, struct _LTD* pl, bool bItemInfo, bool bExpend)
        {
           LtdWriter_SetLtd24_user(_this, pUserDB, pl, bItemInfo, bExpend, LtdWriter_SetLtd24_next);
        };
        void LtdWriter_WriteDB26_wrapper(struct LtdWriter* _this, unsigned int dwIndex)
        {
           LtdWriter_WriteDB26_user(_this, dwIndex, LtdWriter_WriteDB26_next);
        };
        void LtdWriters_Working30_wrapper(void* pv)
        {
           LtdWriters_Working30_user(pv, LtdWriters_Working30_next);
        };
        bool LtdWriterstart32_wrapper(struct LtdWriter* _this)
        {
           return LtdWriterstart32_user(_this, LtdWriterstart32_next);
        };
        void LtdWriterstop34_wrapper(struct LtdWriter* _this)
        {
           LtdWriterstop34_user(_this, LtdWriterstop34_next);
        };
        
        void LtdWriterdtor_LtdWriter36_wrapper(struct LtdWriter* _this)
        {
           LtdWriterdtor_LtdWriter36_user(_this, LtdWriterdtor_LtdWriter36_next);
        };
        
        ::std::array<hook_record, 17> LtdWriter_functions = 
        {
            _hook_record {
                (LPVOID)0x14024a850L,
                (LPVOID *)&LtdWriterInitLogDB2_user,
                (LPVOID *)&LtdWriterInitLogDB2_next,
                (LPVOID)cast_pointer_function(LtdWriterInitLogDB2_wrapper),
                (LPVOID)cast_pointer_function((bool(LtdWriter::*)(char*, char*))&LtdWriter::InitLogDB)
            },
            _hook_record {
                (LPVOID)0x14024a130L,
                (LPVOID *)&LtdWriterctor_LtdWriter4_user,
                (LPVOID *)&LtdWriterctor_LtdWriter4_next,
                (LPVOID)cast_pointer_function(LtdWriterctor_LtdWriter4_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)())&LtdWriter::ctor_LtdWriter)
            },
            _hook_record {
                (LPVOID)0x14024a700L,
                (LPVOID *)&LtdWriterPtrInstance6_user,
                (LPVOID *)&LtdWriterPtrInstance6_next,
                (LPVOID)cast_pointer_function(LtdWriterPtrInstance6_wrapper),
                (LPVOID)cast_pointer_function((struct LtdWriter*(*)())&LtdWriter::PtrInstance)
            },
            _hook_record {
                (LPVOID)0x14024ad10L,
                (LPVOID *)&LtdWriterPushLog8_user,
                (LPVOID *)&LtdWriterPushLog8_next,
                (LPVOID)cast_pointer_function(LtdWriterPushLog8_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)(char*, struct _LTD_PARAM*))&LtdWriter::PushLog)
            },
            _hook_record {
                (LPVOID)0x14024a7c0L,
                (LPVOID *)&LtdWriterRelease10_user,
                (LPVOID *)&LtdWriterRelease10_next,
                (LPVOID)cast_pointer_function(LtdWriterRelease10_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)())&LtdWriter::Release)
            },
            _hook_record {
                (LPVOID)0x14024a3d0L,
                (LPVOID *)&LtdWriter_CreateTable12_user,
                (LPVOID *)&LtdWriter_CreateTable12_next,
                (LPVOID)cast_pointer_function(LtdWriter_CreateTable12_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)())&LtdWriter::_CreateTable)
            },
            _hook_record {
                (LPVOID)0x14024a300L,
                (LPVOID *)&LtdWriter_GetLocalDate14_user,
                (LPVOID *)&LtdWriter_GetLocalDate14_next,
                (LPVOID)cast_pointer_function(LtdWriter_GetLocalDate14_wrapper),
                (LPVOID)cast_pointer_function((int(LtdWriter::*)())&LtdWriter::_GetLocalDate)
            },
            _hook_record {
                (LPVOID)0x14024aeb0L,
                (LPVOID *)&LtdWriter_PushItemCut16_user,
                (LPVOID *)&LtdWriter_PushItemCut16_next,
                (LPVOID)cast_pointer_function(LtdWriter_PushItemCut16_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)(char, struct _LTD_PARAM*, struct _LTD*))&LtdWriter::_PushItemCut)
            },
            _hook_record {
                (LPVOID)0x14024b300L,
                (LPVOID *)&LtdWriter_PushItemMove18_user,
                (LPVOID *)&LtdWriter_PushItemMove18_next,
                (LPVOID)cast_pointer_function(LtdWriter_PushItemMove18_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)(char, struct _LTD_PARAM*, struct _LTD*))&LtdWriter::_PushItemMove)
            },
            _hook_record {
                (LPVOID)0x14024c110L,
                (LPVOID *)&LtdWriter_SetExpend20_user,
                (LPVOID *)&LtdWriter_SetExpend20_next,
                (LPVOID)cast_pointer_function(LtdWriter_SetExpend20_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)(char*, struct _LTD_EXPEND*))&LtdWriter::_SetExpend)
            },
            _hook_record {
                (LPVOID)0x14024b760L,
                (LPVOID *)&LtdWriter_SetItemInfo22_user,
                (LPVOID *)&LtdWriter_SetItemInfo22_next,
                (LPVOID)cast_pointer_function(LtdWriter_SetItemInfo22_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)(char, struct _STORAGE_LIST::_db_con*, char, struct _LTD_ITEMINFO*, int))&LtdWriter::_SetItemInfo)
            },
            _hook_record {
                (LPVOID)0x14024c0a0L,
                (LPVOID *)&LtdWriter_SetLtd24_user,
                (LPVOID *)&LtdWriter_SetLtd24_next,
                (LPVOID)cast_pointer_function(LtdWriter_SetLtd24_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)(struct CUserDB*, struct _LTD*, bool, bool))&LtdWriter::_SetLtd)
            },
            _hook_record {
                (LPVOID)0x14024abe0L,
                (LPVOID *)&LtdWriter_WriteDB26_user,
                (LPVOID *)&LtdWriter_WriteDB26_next,
                (LPVOID)cast_pointer_function(LtdWriter_WriteDB26_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)(unsigned int))&LtdWriter::_WriteDB)
            },
            _hook_record {
                (LPVOID)0x14024a5d0L,
                (LPVOID *)&LtdWriters_Working30_user,
                (LPVOID *)&LtdWriters_Working30_next,
                (LPVOID)cast_pointer_function(LtdWriters_Working30_wrapper),
                (LPVOID)cast_pointer_function((void(*)(void*))&LtdWriter::s_Working)
            },
            _hook_record {
                (LPVOID)0x14024a9e0L,
                (LPVOID *)&LtdWriterstart32_user,
                (LPVOID *)&LtdWriterstart32_next,
                (LPVOID)cast_pointer_function(LtdWriterstart32_wrapper),
                (LPVOID)cast_pointer_function((bool(LtdWriter::*)())&LtdWriter::start)
            },
            _hook_record {
                (LPVOID)0x14024ab90L,
                (LPVOID *)&LtdWriterstop34_user,
                (LPVOID *)&LtdWriterstop34_next,
                (LPVOID)cast_pointer_function(LtdWriterstop34_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)())&LtdWriter::stop)
            },
            _hook_record {
                (LPVOID)0x14024a230L,
                (LPVOID *)&LtdWriterdtor_LtdWriter36_user,
                (LPVOID *)&LtdWriterdtor_LtdWriter36_next,
                (LPVOID)cast_pointer_function(LtdWriterdtor_LtdWriter36_wrapper),
                (LPVOID)cast_pointer_function((void(LtdWriter::*)())&LtdWriter::dtor_LtdWriter)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
