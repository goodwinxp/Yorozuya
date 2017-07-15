#include <CPvpCashPointDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CPvpCashPointctor_CPvpCashPoint2_ptr CPvpCashPointctor_CPvpCashPoint2_next(nullptr);
        Info::CPvpCashPointctor_CPvpCashPoint2_clbk CPvpCashPointctor_CPvpCashPoint2_user(nullptr);
        
        Info::CPvpCashPointCalPvpCashPoint4_ptr CPvpCashPointCalPvpCashPoint4_next(nullptr);
        Info::CPvpCashPointCalPvpCashPoint4_clbk CPvpCashPointCalPvpCashPoint4_user(nullptr);
        
        Info::CPvpCashPointCheckPvpHaveCondition6_ptr CPvpCashPointCheckPvpHaveCondition6_next(nullptr);
        Info::CPvpCashPointCheckPvpHaveCondition6_clbk CPvpCashPointCheckPvpHaveCondition6_user(nullptr);
        
        Info::CPvpCashPointCheckPvpLoseCondition8_ptr CPvpCashPointCheckPvpLoseCondition8_next(nullptr);
        Info::CPvpCashPointCheckPvpLoseCondition8_clbk CPvpCashPointCheckPvpLoseCondition8_user(nullptr);
        
        Info::CPvpCashPointGetContPvpHave10_ptr CPvpCashPointGetContPvpHave10_next(nullptr);
        Info::CPvpCashPointGetContPvpHave10_clbk CPvpCashPointGetContPvpHave10_user(nullptr);
        
        Info::CPvpCashPointGetContPvpLose12_ptr CPvpCashPointGetContPvpLose12_next(nullptr);
        Info::CPvpCashPointGetContPvpLose12_clbk CPvpCashPointGetContPvpLose12_user(nullptr);
        
        Info::CPvpCashPointGetMaxTempPoint14_ptr CPvpCashPointGetMaxTempPoint14_next(nullptr);
        Info::CPvpCashPointGetMaxTempPoint14_clbk CPvpCashPointGetMaxTempPoint14_user(nullptr);
        
        Info::CPvpCashPointGetMinTempPoint16_ptr CPvpCashPointGetMinTempPoint16_next(nullptr);
        Info::CPvpCashPointGetMinTempPoint16_clbk CPvpCashPointGetMinTempPoint16_user(nullptr);
        
        Info::CPvpCashPointGetMyClassVal18_ptr CPvpCashPointGetMyClassVal18_next(nullptr);
        Info::CPvpCashPointGetMyClassVal18_clbk CPvpCashPointGetMyClassVal18_user(nullptr);
        
        Info::CPvpCashPointGetRaceWarRecvr20_ptr CPvpCashPointGetRaceWarRecvr20_next(nullptr);
        Info::CPvpCashPointGetRaceWarRecvr20_clbk CPvpCashPointGetRaceWarRecvr20_user(nullptr);
        
        Info::CPvpCashPointGetTalikRecvrPoint22_ptr CPvpCashPointGetTalikRecvrPoint22_next(nullptr);
        Info::CPvpCashPointGetTalikRecvrPoint22_clbk CPvpCashPointGetTalikRecvrPoint22_user(nullptr);
        
        Info::CPvpCashPointInit24_ptr CPvpCashPointInit24_next(nullptr);
        Info::CPvpCashPointInit24_clbk CPvpCashPointInit24_user(nullptr);
        
        Info::CPvpCashPointIsPvpMap26_ptr CPvpCashPointIsPvpMap26_next(nullptr);
        Info::CPvpCashPointIsPvpMap26_clbk CPvpCashPointIsPvpMap26_user(nullptr);
        
        Info::CPvpCashPointKillerListInit28_ptr CPvpCashPointKillerListInit28_next(nullptr);
        Info::CPvpCashPointKillerListInit28_clbk CPvpCashPointKillerListInit28_user(nullptr);
        
        Info::CPvpCashPointSendMsg_PvpCashInform30_ptr CPvpCashPointSendMsg_PvpCashInform30_next(nullptr);
        Info::CPvpCashPointSendMsg_PvpCashInform30_clbk CPvpCashPointSendMsg_PvpCashInform30_user(nullptr);
        
        Info::CPvpCashPointSendMsg_RecoverResult32_ptr CPvpCashPointSendMsg_RecoverResult32_next(nullptr);
        Info::CPvpCashPointSendMsg_RecoverResult32_clbk CPvpCashPointSendMsg_RecoverResult32_user(nullptr);
        
        Info::CPvpCashPointSendMsg_TalikList34_ptr CPvpCashPointSendMsg_TalikList34_next(nullptr);
        Info::CPvpCashPointSendMsg_TalikList34_clbk CPvpCashPointSendMsg_TalikList34_user(nullptr);
        
        Info::CPvpCashPointSetContPvpHave36_ptr CPvpCashPointSetContPvpHave36_next(nullptr);
        Info::CPvpCashPointSetContPvpHave36_clbk CPvpCashPointSetContPvpHave36_user(nullptr);
        
        Info::CPvpCashPointSetContPvpLose38_ptr CPvpCashPointSetContPvpLose38_next(nullptr);
        Info::CPvpCashPointSetContPvpLose38_clbk CPvpCashPointSetContPvpLose38_user(nullptr);
        
        Info::CPvpCashPointSetKillerList40_ptr CPvpCashPointSetKillerList40_next(nullptr);
        Info::CPvpCashPointSetKillerList40_clbk CPvpCashPointSetKillerList40_user(nullptr);
        
        Info::CPvpCashPointSetRaceWarRecvr42_ptr CPvpCashPointSetRaceWarRecvr42_next(nullptr);
        Info::CPvpCashPointSetRaceWarRecvr42_clbk CPvpCashPointSetRaceWarRecvr42_user(nullptr);
        
        Info::CPvpCashPointUpdateKillerList44_ptr CPvpCashPointUpdateKillerList44_next(nullptr);
        Info::CPvpCashPointUpdateKillerList44_clbk CPvpCashPointUpdateKillerList44_user(nullptr);
        
        
        Info::CPvpCashPointdtor_CPvpCashPoint46_ptr CPvpCashPointdtor_CPvpCashPoint46_next(nullptr);
        Info::CPvpCashPointdtor_CPvpCashPoint46_clbk CPvpCashPointdtor_CPvpCashPoint46_user(nullptr);
        
        
        void CPvpCashPointctor_CPvpCashPoint2_wrapper(struct CPvpCashPoint* _this)
        {
           CPvpCashPointctor_CPvpCashPoint2_user(_this, CPvpCashPointctor_CPvpCashPoint2_next);
        };
        long double CPvpCashPointCalPvpCashPoint4_wrapper(struct CPvpCashPoint* _this, int nDstLv, int nSrcLv, char* pSrcClass, char nParty)
        {
           return CPvpCashPointCalPvpCashPoint4_user(_this, nDstLv, nSrcLv, pSrcClass, nParty, CPvpCashPointCalPvpCashPoint4_next);
        };
        bool CPvpCashPointCheckPvpHaveCondition6_wrapper(struct CPvpCashPoint* _this, struct CPlayer* pKiller, struct CPlayer* pDier, long double dOldTempPoint)
        {
           return CPvpCashPointCheckPvpHaveCondition6_user(_this, pKiller, pDier, dOldTempPoint, CPvpCashPointCheckPvpHaveCondition6_next);
        };
        bool CPvpCashPointCheckPvpLoseCondition8_wrapper(struct CPvpCashPoint* _this, struct CPlayer* pKiller, struct CPlayer* pDier)
        {
           return CPvpCashPointCheckPvpLoseCondition8_user(_this, pKiller, pDier, CPvpCashPointCheckPvpLoseCondition8_next);
        };
        int CPvpCashPointGetContPvpHave10_wrapper(struct CPvpCashPoint* _this)
        {
           return CPvpCashPointGetContPvpHave10_user(_this, CPvpCashPointGetContPvpHave10_next);
        };
        int CPvpCashPointGetContPvpLose12_wrapper(struct CPvpCashPoint* _this)
        {
           return CPvpCashPointGetContPvpLose12_user(_this, CPvpCashPointGetContPvpLose12_next);
        };
        int CPvpCashPointGetMaxTempPoint14_wrapper(struct CPvpCashPoint* _this, char nLv, bool bPremium)
        {
           return CPvpCashPointGetMaxTempPoint14_user(_this, nLv, bPremium, CPvpCashPointGetMaxTempPoint14_next);
        };
        int CPvpCashPointGetMinTempPoint16_wrapper(struct CPvpCashPoint* _this, char nLv)
        {
           return CPvpCashPointGetMinTempPoint16_user(_this, nLv, CPvpCashPointGetMinTempPoint16_next);
        };
        int CPvpCashPointGetMyClassVal18_wrapper(struct CPvpCashPoint* _this, char* pClass)
        {
           return CPvpCashPointGetMyClassVal18_user(_this, pClass, CPvpCashPointGetMyClassVal18_next);
        };
        bool CPvpCashPointGetRaceWarRecvr20_wrapper(struct CPvpCashPoint* _this)
        {
           return CPvpCashPointGetRaceWarRecvr20_user(_this, CPvpCashPointGetRaceWarRecvr20_next);
        };
        int CPvpCashPointGetTalikRecvrPoint22_wrapper(struct CPvpCashPoint* _this, char byTblCode, unsigned int dwIndex)
        {
           return CPvpCashPointGetTalikRecvrPoint22_user(_this, byTblCode, dwIndex, CPvpCashPointGetTalikRecvrPoint22_next);
        };
        void CPvpCashPointInit24_wrapper(struct CPvpCashPoint* _this, struct _PVP_ORDER_VIEW_DB_BASE* pkInfo)
        {
           CPvpCashPointInit24_user(_this, pkInfo, CPvpCashPointInit24_next);
        };
        bool CPvpCashPointIsPvpMap26_wrapper(struct CPvpCashPoint* _this, struct CPlayer* pOne)
        {
           return CPvpCashPointIsPvpMap26_user(_this, pOne, CPvpCashPointIsPvpMap26_next);
        };
        void CPvpCashPointKillerListInit28_wrapper(struct CPvpCashPoint* _this)
        {
           CPvpCashPointKillerListInit28_user(_this, CPvpCashPointKillerListInit28_next);
        };
        void CPvpCashPointSendMsg_PvpCashInform30_wrapper(struct CPvpCashPoint* _this, int n, char byError)
        {
           CPvpCashPointSendMsg_PvpCashInform30_user(_this, n, byError, CPvpCashPointSendMsg_PvpCashInform30_next);
        };
        void CPvpCashPointSendMsg_RecoverResult32_wrapper(struct CPvpCashPoint* _this, int n, char byRet, int nRecvrPoint)
        {
           CPvpCashPointSendMsg_RecoverResult32_user(_this, n, byRet, nRecvrPoint, CPvpCashPointSendMsg_RecoverResult32_next);
        };
        void CPvpCashPointSendMsg_TalikList34_wrapper(struct CPvpCashPoint* _this, int n)
        {
           CPvpCashPointSendMsg_TalikList34_user(_this, n, CPvpCashPointSendMsg_TalikList34_next);
        };
        void CPvpCashPointSetContPvpHave36_wrapper(struct CPvpCashPoint* _this, char byCnt)
        {
           CPvpCashPointSetContPvpHave36_user(_this, byCnt, CPvpCashPointSetContPvpHave36_next);
        };
        void CPvpCashPointSetContPvpLose38_wrapper(struct CPvpCashPoint* _this, int byCnt)
        {
           CPvpCashPointSetContPvpLose38_user(_this, byCnt, CPvpCashPointSetContPvpLose38_next);
        };
        bool CPvpCashPointSetKillerList40_wrapper(struct CPvpCashPoint* _this, unsigned int dwKillerSerial)
        {
           return CPvpCashPointSetKillerList40_user(_this, dwKillerSerial, CPvpCashPointSetKillerList40_next);
        };
        void CPvpCashPointSetRaceWarRecvr42_wrapper(struct CPvpCashPoint* _this, bool bUsed)
        {
           CPvpCashPointSetRaceWarRecvr42_user(_this, bUsed, CPvpCashPointSetRaceWarRecvr42_next);
        };
        void CPvpCashPointUpdateKillerList44_wrapper(struct CPvpCashPoint* _this, struct _PVP_ORDER_VIEW_DB_BASE* pkInfo)
        {
           CPvpCashPointUpdateKillerList44_user(_this, pkInfo, CPvpCashPointUpdateKillerList44_next);
        };
        
        void CPvpCashPointdtor_CPvpCashPoint46_wrapper(struct CPvpCashPoint* _this)
        {
           CPvpCashPointdtor_CPvpCashPoint46_user(_this, CPvpCashPointdtor_CPvpCashPoint46_next);
        };
        
        ::std::array<hook_record, 23> CPvpCashPoint_functions = 
        {
            _hook_record {
                (LPVOID)0x1403f4f80L,
                (LPVOID *)&CPvpCashPointctor_CPvpCashPoint2_user,
                (LPVOID *)&CPvpCashPointctor_CPvpCashPoint2_next,
                (LPVOID)cast_pointer_function(CPvpCashPointctor_CPvpCashPoint2_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashPoint::*)())&CPvpCashPoint::ctor_CPvpCashPoint)
            },
            _hook_record {
                (LPVOID)0x1403f50e0L,
                (LPVOID *)&CPvpCashPointCalPvpCashPoint4_user,
                (LPVOID *)&CPvpCashPointCalPvpCashPoint4_next,
                (LPVOID)cast_pointer_function(CPvpCashPointCalPvpCashPoint4_wrapper),
                (LPVOID)cast_pointer_function((long double(CPvpCashPoint::*)(int, int, char*, char))&CPvpCashPoint::CalPvpCashPoint)
            },
            _hook_record {
                (LPVOID)0x1403f54f0L,
                (LPVOID *)&CPvpCashPointCheckPvpHaveCondition6_user,
                (LPVOID *)&CPvpCashPointCheckPvpHaveCondition6_next,
                (LPVOID)cast_pointer_function(CPvpCashPointCheckPvpHaveCondition6_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpCashPoint::*)(struct CPlayer*, struct CPlayer*, long double))&CPvpCashPoint::CheckPvpHaveCondition)
            },
            _hook_record {
                (LPVOID)0x1403f5370L,
                (LPVOID *)&CPvpCashPointCheckPvpLoseCondition8_user,
                (LPVOID *)&CPvpCashPointCheckPvpLoseCondition8_next,
                (LPVOID)cast_pointer_function(CPvpCashPointCheckPvpLoseCondition8_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpCashPoint::*)(struct CPlayer*, struct CPlayer*))&CPvpCashPoint::CheckPvpLoseCondition)
            },
            _hook_record {
                (LPVOID)0x14007d610L,
                (LPVOID *)&CPvpCashPointGetContPvpHave10_user,
                (LPVOID *)&CPvpCashPointGetContPvpHave10_next,
                (LPVOID)cast_pointer_function(CPvpCashPointGetContPvpHave10_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashPoint::*)())&CPvpCashPoint::GetContPvpHave)
            },
            _hook_record {
                (LPVOID)0x14007d630L,
                (LPVOID *)&CPvpCashPointGetContPvpLose12_user,
                (LPVOID *)&CPvpCashPointGetContPvpLose12_next,
                (LPVOID)cast_pointer_function(CPvpCashPointGetContPvpLose12_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashPoint::*)())&CPvpCashPoint::GetContPvpLose)
            },
            _hook_record {
                (LPVOID)0x1403f5230L,
                (LPVOID *)&CPvpCashPointGetMaxTempPoint14_user,
                (LPVOID *)&CPvpCashPointGetMaxTempPoint14_next,
                (LPVOID)cast_pointer_function(CPvpCashPointGetMaxTempPoint14_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashPoint::*)(char, bool))&CPvpCashPoint::GetMaxTempPoint)
            },
            _hook_record {
                (LPVOID)0x1403f5280L,
                (LPVOID *)&CPvpCashPointGetMinTempPoint16_user,
                (LPVOID *)&CPvpCashPointGetMinTempPoint16_next,
                (LPVOID)cast_pointer_function(CPvpCashPointGetMinTempPoint16_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashPoint::*)(char))&CPvpCashPoint::GetMinTempPoint)
            },
            _hook_record {
                (LPVOID)0x1403f51e0L,
                (LPVOID *)&CPvpCashPointGetMyClassVal18_user,
                (LPVOID *)&CPvpCashPointGetMyClassVal18_next,
                (LPVOID)cast_pointer_function(CPvpCashPointGetMyClassVal18_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashPoint::*)(char*))&CPvpCashPoint::GetMyClassVal)
            },
            _hook_record {
                (LPVOID)0x140284cf0L,
                (LPVOID *)&CPvpCashPointGetRaceWarRecvr20_user,
                (LPVOID *)&CPvpCashPointGetRaceWarRecvr20_next,
                (LPVOID)cast_pointer_function(CPvpCashPointGetRaceWarRecvr20_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpCashPoint::*)())&CPvpCashPoint::GetRaceWarRecvr)
            },
            _hook_record {
                (LPVOID)0x1403f5190L,
                (LPVOID *)&CPvpCashPointGetTalikRecvrPoint22_user,
                (LPVOID *)&CPvpCashPointGetTalikRecvrPoint22_next,
                (LPVOID)cast_pointer_function(CPvpCashPointGetTalikRecvrPoint22_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashPoint::*)(char, unsigned int))&CPvpCashPoint::GetTalikRecvrPoint)
            },
            _hook_record {
                (LPVOID)0x1403f5010L,
                (LPVOID *)&CPvpCashPointInit24_user,
                (LPVOID *)&CPvpCashPointInit24_next,
                (LPVOID)cast_pointer_function(CPvpCashPointInit24_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashPoint::*)(struct _PVP_ORDER_VIEW_DB_BASE*))&CPvpCashPoint::Init)
            },
            _hook_record {
                (LPVOID)0x1403f52d0L,
                (LPVOID *)&CPvpCashPointIsPvpMap26_user,
                (LPVOID *)&CPvpCashPointIsPvpMap26_next,
                (LPVOID)cast_pointer_function(CPvpCashPointIsPvpMap26_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpCashPoint::*)(struct CPlayer*))&CPvpCashPoint::IsPvpMap)
            },
            _hook_record {
                (LPVOID)0x1403f59d0L,
                (LPVOID *)&CPvpCashPointKillerListInit28_user,
                (LPVOID *)&CPvpCashPointKillerListInit28_next,
                (LPVOID)cast_pointer_function(CPvpCashPointKillerListInit28_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashPoint::*)())&CPvpCashPoint::KillerListInit)
            },
            _hook_record {
                (LPVOID)0x1403f5940L,
                (LPVOID *)&CPvpCashPointSendMsg_PvpCashInform30_user,
                (LPVOID *)&CPvpCashPointSendMsg_PvpCashInform30_next,
                (LPVOID)cast_pointer_function(CPvpCashPointSendMsg_PvpCashInform30_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashPoint::*)(int, char))&CPvpCashPoint::SendMsg_PvpCashInform)
            },
            _hook_record {
                (LPVOID)0x1403f58a0L,
                (LPVOID *)&CPvpCashPointSendMsg_RecoverResult32_user,
                (LPVOID *)&CPvpCashPointSendMsg_RecoverResult32_next,
                (LPVOID)cast_pointer_function(CPvpCashPointSendMsg_RecoverResult32_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashPoint::*)(int, char, int))&CPvpCashPoint::SendMsg_RecoverResult)
            },
            _hook_record {
                (LPVOID)0x1403f57a0L,
                (LPVOID *)&CPvpCashPointSendMsg_TalikList34_user,
                (LPVOID *)&CPvpCashPointSendMsg_TalikList34_next,
                (LPVOID)cast_pointer_function(CPvpCashPointSendMsg_TalikList34_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashPoint::*)(int))&CPvpCashPoint::SendMsg_TalikList)
            },
            _hook_record {
                (LPVOID)0x14007d5b0L,
                (LPVOID *)&CPvpCashPointSetContPvpHave36_user,
                (LPVOID *)&CPvpCashPointSetContPvpHave36_next,
                (LPVOID)cast_pointer_function(CPvpCashPointSetContPvpHave36_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashPoint::*)(char))&CPvpCashPoint::SetContPvpHave)
            },
            _hook_record {
                (LPVOID)0x14007d5e0L,
                (LPVOID *)&CPvpCashPointSetContPvpLose38_user,
                (LPVOID *)&CPvpCashPointSetContPvpLose38_next,
                (LPVOID)cast_pointer_function(CPvpCashPointSetContPvpLose38_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashPoint::*)(int))&CPvpCashPoint::SetContPvpLose)
            },
            _hook_record {
                (LPVOID)0x1403f5640L,
                (LPVOID *)&CPvpCashPointSetKillerList40_user,
                (LPVOID *)&CPvpCashPointSetKillerList40_next,
                (LPVOID)cast_pointer_function(CPvpCashPointSetKillerList40_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpCashPoint::*)(unsigned int))&CPvpCashPoint::SetKillerList)
            },
            _hook_record {
                (LPVOID)0x14007c320L,
                (LPVOID *)&CPvpCashPointSetRaceWarRecvr42_user,
                (LPVOID *)&CPvpCashPointSetRaceWarRecvr42_next,
                (LPVOID)cast_pointer_function(CPvpCashPointSetRaceWarRecvr42_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashPoint::*)(bool))&CPvpCashPoint::SetRaceWarRecvr)
            },
            _hook_record {
                (LPVOID)0x1403f56e0L,
                (LPVOID *)&CPvpCashPointUpdateKillerList44_user,
                (LPVOID *)&CPvpCashPointUpdateKillerList44_next,
                (LPVOID)cast_pointer_function(CPvpCashPointUpdateKillerList44_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashPoint::*)(struct _PVP_ORDER_VIEW_DB_BASE*))&CPvpCashPoint::UpdateKillerList)
            },
            _hook_record {
                (LPVOID)0x140074750L,
                (LPVOID *)&CPvpCashPointdtor_CPvpCashPoint46_user,
                (LPVOID *)&CPvpCashPointdtor_CPvpCashPoint46_next,
                (LPVOID)cast_pointer_function(CPvpCashPointdtor_CPvpCashPoint46_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashPoint::*)())&CPvpCashPoint::dtor_CPvpCashPoint)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
