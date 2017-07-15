#include <CRecallRequestDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CRecallRequestctor_CRecallRequest2_ptr CRecallRequestctor_CRecallRequest2_next(nullptr);
        Info::CRecallRequestctor_CRecallRequest2_clbk CRecallRequestctor_CRecallRequest2_user(nullptr);
        
        Info::CRecallRequestClear4_ptr CRecallRequestClear4_next(nullptr);
        Info::CRecallRequestClear4_clbk CRecallRequestClear4_user(nullptr);
        
        Info::CRecallRequestClose6_ptr CRecallRequestClose6_next(nullptr);
        Info::CRecallRequestClose6_clbk CRecallRequestClose6_user(nullptr);
        
        Info::CRecallRequestGetID8_ptr CRecallRequestGetID8_next(nullptr);
        Info::CRecallRequestGetID8_clbk CRecallRequestGetID8_user(nullptr);
        
        Info::CRecallRequestGetOwner10_ptr CRecallRequestGetOwner10_next(nullptr);
        Info::CRecallRequestGetOwner10_clbk CRecallRequestGetOwner10_user(nullptr);
        
        Info::CRecallRequestIsBattleModeUse12_ptr CRecallRequestIsBattleModeUse12_next(nullptr);
        Info::CRecallRequestIsBattleModeUse12_clbk CRecallRequestIsBattleModeUse12_user(nullptr);
        
        Info::CRecallRequestIsClose14_ptr CRecallRequestIsClose14_next(nullptr);
        Info::CRecallRequestIsClose14_clbk CRecallRequestIsClose14_user(nullptr);
        
        Info::CRecallRequestIsRecallAfterStoneState16_ptr CRecallRequestIsRecallAfterStoneState16_next(nullptr);
        Info::CRecallRequestIsRecallAfterStoneState16_clbk CRecallRequestIsRecallAfterStoneState16_user(nullptr);
        
        Info::CRecallRequestIsRecallParty18_ptr CRecallRequestIsRecallParty18_next(nullptr);
        Info::CRecallRequestIsRecallParty18_clbk CRecallRequestIsRecallParty18_user(nullptr);
        
        Info::CRecallRequestIsTimeOut20_ptr CRecallRequestIsTimeOut20_next(nullptr);
        Info::CRecallRequestIsTimeOut20_clbk CRecallRequestIsTimeOut20_user(nullptr);
        
        Info::CRecallRequestIsWait22_ptr CRecallRequestIsWait22_next(nullptr);
        Info::CRecallRequestIsWait22_clbk CRecallRequestIsWait22_user(nullptr);
        
        Info::CRecallRequestRecall24_ptr CRecallRequestRecall24_next(nullptr);
        Info::CRecallRequestRecall24_clbk CRecallRequestRecall24_user(nullptr);
        
        Info::CRecallRequestRegist26_ptr CRecallRequestRegist26_next(nullptr);
        Info::CRecallRequestRegist26_clbk CRecallRequestRegist26_user(nullptr);
        
        
        Info::CRecallRequestdtor_CRecallRequest30_ptr CRecallRequestdtor_CRecallRequest30_next(nullptr);
        Info::CRecallRequestdtor_CRecallRequest30_clbk CRecallRequestdtor_CRecallRequest30_user(nullptr);
        
        
        void CRecallRequestctor_CRecallRequest2_wrapper(struct CRecallRequest* _this, uint16_t usID)
        {
           CRecallRequestctor_CRecallRequest2_user(_this, usID, CRecallRequestctor_CRecallRequest2_next);
        };
        void CRecallRequestClear4_wrapper(struct CRecallRequest* _this)
        {
           CRecallRequestClear4_user(_this, CRecallRequestClear4_next);
        };
        void CRecallRequestClose6_wrapper(struct CRecallRequest* _this, bool bDone)
        {
           CRecallRequestClose6_user(_this, bDone, CRecallRequestClose6_next);
        };
        uint16_t CRecallRequestGetID8_wrapper(struct CRecallRequest* _this)
        {
           return CRecallRequestGetID8_user(_this, CRecallRequestGetID8_next);
        };
        struct CPlayer* CRecallRequestGetOwner10_wrapper(struct CRecallRequest* _this)
        {
           return CRecallRequestGetOwner10_user(_this, CRecallRequestGetOwner10_next);
        };
        bool CRecallRequestIsBattleModeUse12_wrapper(struct CRecallRequest* _this)
        {
           return CRecallRequestIsBattleModeUse12_user(_this, CRecallRequestIsBattleModeUse12_next);
        };
        bool CRecallRequestIsClose14_wrapper(struct CRecallRequest* _this)
        {
           return CRecallRequestIsClose14_user(_this, CRecallRequestIsClose14_next);
        };
        bool CRecallRequestIsRecallAfterStoneState16_wrapper(struct CRecallRequest* _this)
        {
           return CRecallRequestIsRecallAfterStoneState16_user(_this, CRecallRequestIsRecallAfterStoneState16_next);
        };
        bool CRecallRequestIsRecallParty18_wrapper(struct CRecallRequest* _this)
        {
           return CRecallRequestIsRecallParty18_user(_this, CRecallRequestIsRecallParty18_next);
        };
        bool CRecallRequestIsTimeOut20_wrapper(struct CRecallRequest* _this)
        {
           return CRecallRequestIsTimeOut20_user(_this, CRecallRequestIsTimeOut20_next);
        };
        bool CRecallRequestIsWait22_wrapper(struct CRecallRequest* _this)
        {
           return CRecallRequestIsWait22_user(_this, CRecallRequestIsWait22_next);
        };
        char CRecallRequestRecall24_wrapper(struct CRecallRequest* _this, struct CPlayer* pkDest, bool bStone)
        {
           return CRecallRequestRecall24_user(_this, pkDest, bStone, CRecallRequestRecall24_next);
        };
        char CRecallRequestRegist26_wrapper(struct CRecallRequest* _this, struct CPlayer* pkObj, struct CCharacter* pkDest, bool bRecallParty, bool bStone, bool bBattleModeUse)
        {
           return CRecallRequestRegist26_user(_this, pkObj, pkDest, bRecallParty, bStone, bBattleModeUse, CRecallRequestRegist26_next);
        };
        
        void CRecallRequestdtor_CRecallRequest30_wrapper(struct CRecallRequest* _this)
        {
           CRecallRequestdtor_CRecallRequest30_user(_this, CRecallRequestdtor_CRecallRequest30_next);
        };
        
        ::std::array<hook_record, 14> CRecallRequest_functions = 
        {
            _hook_record {
                (LPVOID)0x14024d4d0L,
                (LPVOID *)&CRecallRequestctor_CRecallRequest2_user,
                (LPVOID *)&CRecallRequestctor_CRecallRequest2_next,
                (LPVOID)cast_pointer_function(CRecallRequestctor_CRecallRequest2_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallRequest::*)(uint16_t))&CRecallRequest::ctor_CRecallRequest)
            },
            _hook_record {
                (LPVOID)0x14024dc90L,
                (LPVOID *)&CRecallRequestClear4_user,
                (LPVOID *)&CRecallRequestClear4_next,
                (LPVOID)cast_pointer_function(CRecallRequestClear4_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallRequest::*)())&CRecallRequest::Clear)
            },
            _hook_record {
                (LPVOID)0x14024dd10L,
                (LPVOID *)&CRecallRequestClose6_user,
                (LPVOID *)&CRecallRequestClose6_next,
                (LPVOID)cast_pointer_function(CRecallRequestClose6_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallRequest::*)(bool))&CRecallRequest::Close)
            },
            _hook_record {
                (LPVOID)0x14024fc80L,
                (LPVOID *)&CRecallRequestGetID8_user,
                (LPVOID *)&CRecallRequestGetID8_next,
                (LPVOID)cast_pointer_function(CRecallRequestGetID8_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CRecallRequest::*)())&CRecallRequest::GetID)
            },
            _hook_record {
                (LPVOID)0x14024fca0L,
                (LPVOID *)&CRecallRequestGetOwner10_user,
                (LPVOID *)&CRecallRequestGetOwner10_next,
                (LPVOID)cast_pointer_function(CRecallRequestGetOwner10_wrapper),
                (LPVOID)cast_pointer_function((struct CPlayer*(CRecallRequest::*)())&CRecallRequest::GetOwner)
            },
            _hook_record {
                (LPVOID)0x14024fd00L,
                (LPVOID *)&CRecallRequestIsBattleModeUse12_user,
                (LPVOID *)&CRecallRequestIsBattleModeUse12_next,
                (LPVOID)cast_pointer_function(CRecallRequestIsBattleModeUse12_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecallRequest::*)())&CRecallRequest::IsBattleModeUse)
            },
            _hook_record {
                (LPVOID)0x14024dc20L,
                (LPVOID *)&CRecallRequestIsClose14_user,
                (LPVOID *)&CRecallRequestIsClose14_next,
                (LPVOID)cast_pointer_function(CRecallRequestIsClose14_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecallRequest::*)())&CRecallRequest::IsClose)
            },
            _hook_record {
                (LPVOID)0x14024fce0L,
                (LPVOID *)&CRecallRequestIsRecallAfterStoneState16_user,
                (LPVOID *)&CRecallRequestIsRecallAfterStoneState16_next,
                (LPVOID)cast_pointer_function(CRecallRequestIsRecallAfterStoneState16_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecallRequest::*)())&CRecallRequest::IsRecallAfterStoneState)
            },
            _hook_record {
                (LPVOID)0x14024fcc0L,
                (LPVOID *)&CRecallRequestIsRecallParty18_user,
                (LPVOID *)&CRecallRequestIsRecallParty18_next,
                (LPVOID)cast_pointer_function(CRecallRequestIsRecallParty18_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecallRequest::*)())&CRecallRequest::IsRecallParty)
            },
            _hook_record {
                (LPVOID)0x14024ffe0L,
                (LPVOID *)&CRecallRequestIsTimeOut20_user,
                (LPVOID *)&CRecallRequestIsTimeOut20_next,
                (LPVOID)cast_pointer_function(CRecallRequestIsTimeOut20_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecallRequest::*)())&CRecallRequest::IsTimeOut)
            },
            _hook_record {
                (LPVOID)0x14024ff80L,
                (LPVOID *)&CRecallRequestIsWait22_user,
                (LPVOID *)&CRecallRequestIsWait22_next,
                (LPVOID)cast_pointer_function(CRecallRequestIsWait22_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecallRequest::*)())&CRecallRequest::IsWait)
            },
            _hook_record {
                (LPVOID)0x14024dac0L,
                (LPVOID *)&CRecallRequestRecall24_user,
                (LPVOID *)&CRecallRequestRecall24_next,
                (LPVOID)cast_pointer_function(CRecallRequestRecall24_wrapper),
                (LPVOID)cast_pointer_function((char(CRecallRequest::*)(struct CPlayer*, bool))&CRecallRequest::Recall)
            },
            _hook_record {
                (LPVOID)0x14024d530L,
                (LPVOID *)&CRecallRequestRegist26_user,
                (LPVOID *)&CRecallRequestRegist26_next,
                (LPVOID)cast_pointer_function(CRecallRequestRegist26_wrapper),
                (LPVOID)cast_pointer_function((char(CRecallRequest::*)(struct CPlayer*, struct CCharacter*, bool, bool, bool))&CRecallRequest::Regist)
            },
            _hook_record {
                (LPVOID)0x14024d520L,
                (LPVOID *)&CRecallRequestdtor_CRecallRequest30_user,
                (LPVOID *)&CRecallRequestdtor_CRecallRequest30_next,
                (LPVOID)cast_pointer_function(CRecallRequestdtor_CRecallRequest30_wrapper),
                (LPVOID)cast_pointer_function((void(CRecallRequest::*)())&CRecallRequest::dtor_CRecallRequest)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
