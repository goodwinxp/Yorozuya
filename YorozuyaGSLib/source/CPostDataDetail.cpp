#include <CPostDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CPostDatactor_CPostData2_ptr CPostDatactor_CPostData2_next(nullptr);
        Info::CPostDatactor_CPostData2_clbk CPostDatactor_CPostData2_user(nullptr);
        
        Info::CPostDataGetState4_ptr CPostDataGetState4_next(nullptr);
        Info::CPostDataGetState4_clbk CPostDataGetState4_user(nullptr);
        
        Info::CPostDataInit6_ptr CPostDataInit6_next(nullptr);
        Info::CPostDataInit6_clbk CPostDataInit6_user(nullptr);
        
        Info::CPostDataSetPostContent8_ptr CPostDataSetPostContent8_next(nullptr);
        Info::CPostDataSetPostContent8_clbk CPostDataSetPostContent8_user(nullptr);
        
        Info::CPostDataSetPostData10_ptr CPostDataSetPostData10_next(nullptr);
        Info::CPostDataSetPostData10_clbk CPostDataSetPostData10_user(nullptr);
        
        Info::CPostDataSetPostItemSerial12_ptr CPostDataSetPostItemSerial12_next(nullptr);
        Info::CPostDataSetPostItemSerial12_clbk CPostDataSetPostItemSerial12_user(nullptr);
        
        Info::CPostDataSetPostTitleData14_ptr CPostDataSetPostTitleData14_next(nullptr);
        Info::CPostDataSetPostTitleData14_clbk CPostDataSetPostTitleData14_user(nullptr);
        
        Info::CPostDataSetReturnPostData16_ptr CPostDataSetReturnPostData16_next(nullptr);
        Info::CPostDataSetReturnPostData16_clbk CPostDataSetReturnPostData16_user(nullptr);
        
        Info::CPostDataSetState18_ptr CPostDataSetState18_next(nullptr);
        Info::CPostDataSetState18_clbk CPostDataSetState18_user(nullptr);
        
        
        Info::CPostDatadtor_CPostData22_ptr CPostDatadtor_CPostData22_next(nullptr);
        Info::CPostDatadtor_CPostData22_clbk CPostDatadtor_CPostData22_user(nullptr);
        
        
        void CPostDatactor_CPostData2_wrapper(struct CPostData* _this)
        {
           CPostDatactor_CPostData2_user(_this, CPostDatactor_CPostData2_next);
        };
        char CPostDataGetState4_wrapper(struct CPostData* _this)
        {
           return CPostDataGetState4_user(_this, CPostDataGetState4_next);
        };
        void CPostDataInit6_wrapper(struct CPostData* _this)
        {
           CPostDataInit6_user(_this, CPostDataInit6_next);
        };
        void CPostDataSetPostContent8_wrapper(struct CPostData* _this, char* wszContent)
        {
           CPostDataSetPostContent8_user(_this, wszContent, CPostDataSetPostContent8_next);
        };
        void CPostDataSetPostData10_wrapper(struct CPostData* _this, int nNumber, unsigned int dwSenderSerial, char* wszSendName, char* wszRecvName, char* wszTitle, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, unsigned int dwPSSerial, char bySendRace, char bySenderDgr)
        {
           CPostDataSetPostData10_user(_this, nNumber, dwSenderSerial, wszSendName, wszRecvName, wszTitle, Key, dwDur, dwUpt, dwGold, dwPSSerial, bySendRace, bySenderDgr, CPostDataSetPostData10_next);
        };
        void CPostDataSetPostItemSerial12_wrapper(struct CPostData* _this, uint64_t lnUID)
        {
           CPostDataSetPostItemSerial12_user(_this, lnUID, CPostDataSetPostItemSerial12_next);
        };
        void CPostDataSetPostTitleData14_wrapper(struct CPostData* _this, int nNumber, unsigned int dwPSSerial, char byState, char* wszSendName, char* wszTitle, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, bool bUpdateIndex)
        {
           CPostDataSetPostTitleData14_user(_this, nNumber, dwPSSerial, byState, wszSendName, wszTitle, Key, dwDur, dwUpt, dwGold, bUpdateIndex, CPostDataSetPostTitleData14_next);
        };
        void CPostDataSetReturnPostData16_wrapper(struct CPostData* _this, char byErrCode, unsigned int dwPostSerial, char* wszRecvName, char* wszTitle, char* wszContent, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold)
        {
           CPostDataSetReturnPostData16_user(_this, byErrCode, dwPostSerial, wszRecvName, wszTitle, wszContent, Key, dwDur, dwUpt, dwGold, CPostDataSetReturnPostData16_next);
        };
        void CPostDataSetState18_wrapper(struct CPostData* _this, char byState)
        {
           CPostDataSetState18_user(_this, byState, CPostDataSetState18_next);
        };
        
        void CPostDatadtor_CPostData22_wrapper(struct CPostData* _this)
        {
           CPostDatadtor_CPostData22_user(_this, CPostDatadtor_CPostData22_next);
        };
        
        ::std::array<hook_record, 10> CPostData_functions = 
        {
            _hook_record {
                (LPVOID)0x140322720L,
                (LPVOID *)&CPostDatactor_CPostData2_user,
                (LPVOID *)&CPostDatactor_CPostData2_next,
                (LPVOID)cast_pointer_function(CPostDatactor_CPostData2_wrapper),
                (LPVOID)cast_pointer_function((void(CPostData::*)())&CPostData::ctor_CPostData)
            },
            _hook_record {
                (LPVOID)0x140322ca0L,
                (LPVOID *)&CPostDataGetState4_user,
                (LPVOID *)&CPostDataGetState4_next,
                (LPVOID)cast_pointer_function(CPostDataGetState4_wrapper),
                (LPVOID)cast_pointer_function((char(CPostData::*)())&CPostData::GetState)
            },
            _hook_record {
                (LPVOID)0x140322790L,
                (LPVOID *)&CPostDataInit6_user,
                (LPVOID *)&CPostDataInit6_next,
                (LPVOID)cast_pointer_function(CPostDataInit6_wrapper),
                (LPVOID)cast_pointer_function((void(CPostData::*)())&CPostData::Init)
            },
            _hook_record {
                (LPVOID)0x140322c10L,
                (LPVOID *)&CPostDataSetPostContent8_user,
                (LPVOID *)&CPostDataSetPostContent8_next,
                (LPVOID)cast_pointer_function(CPostDataSetPostContent8_wrapper),
                (LPVOID)cast_pointer_function((void(CPostData::*)(char*))&CPostData::SetPostContent)
            },
            _hook_record {
                (LPVOID)0x1403228d0L,
                (LPVOID *)&CPostDataSetPostData10_user,
                (LPVOID *)&CPostDataSetPostData10_next,
                (LPVOID)cast_pointer_function(CPostDataSetPostData10_wrapper),
                (LPVOID)cast_pointer_function((void(CPostData::*)(int, unsigned int, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, unsigned int, char, char))&CPostData::SetPostData)
            },
            _hook_record {
                (LPVOID)0x140324050L,
                (LPVOID *)&CPostDataSetPostItemSerial12_user,
                (LPVOID *)&CPostDataSetPostItemSerial12_next,
                (LPVOID)cast_pointer_function(CPostDataSetPostItemSerial12_wrapper),
                (LPVOID)cast_pointer_function((void(CPostData::*)(uint64_t))&CPostData::SetPostItemSerial)
            },
            _hook_record {
                (LPVOID)0x140322b10L,
                (LPVOID *)&CPostDataSetPostTitleData14_user,
                (LPVOID *)&CPostDataSetPostTitleData14_next,
                (LPVOID)cast_pointer_function(CPostDataSetPostTitleData14_wrapper),
                (LPVOID)cast_pointer_function((void(CPostData::*)(int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, bool))&CPostData::SetPostTitleData)
            },
            _hook_record {
                (LPVOID)0x140322a10L,
                (LPVOID *)&CPostDataSetReturnPostData16_user,
                (LPVOID *)&CPostDataSetReturnPostData16_next,
                (LPVOID)cast_pointer_function(CPostDataSetReturnPostData16_wrapper),
                (LPVOID)cast_pointer_function((void(CPostData::*)(char, unsigned int, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int))&CPostData::SetReturnPostData)
            },
            _hook_record {
                (LPVOID)0x140322c80L,
                (LPVOID *)&CPostDataSetState18_user,
                (LPVOID *)&CPostDataSetState18_next,
                (LPVOID)cast_pointer_function(CPostDataSetState18_wrapper),
                (LPVOID)cast_pointer_function((void(CPostData::*)(char))&CPostData::SetState)
            },
            _hook_record {
                (LPVOID)0x140322780L,
                (LPVOID *)&CPostDatadtor_CPostData22_user,
                (LPVOID *)&CPostDatadtor_CPostData22_next,
                (LPVOID)cast_pointer_function(CPostDatadtor_CPostData22_wrapper),
                (LPVOID)cast_pointer_function((void(CPostData::*)())&CPostData::dtor_CPostData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
