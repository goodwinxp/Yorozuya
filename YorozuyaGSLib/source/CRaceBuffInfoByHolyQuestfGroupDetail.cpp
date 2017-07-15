#include <CRaceBuffInfoByHolyQuestfGroupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CRaceBuffInfoByHolyQuestfGroupApply2_ptr CRaceBuffInfoByHolyQuestfGroupApply2_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestfGroupApply2_clbk CRaceBuffInfoByHolyQuestfGroupApply2_user(nullptr);
        
        
        Info::CRaceBuffInfoByHolyQuestfGroupctor_CRaceBuffInfoByHolyQuestfGroup4_ptr CRaceBuffInfoByHolyQuestfGroupctor_CRaceBuffInfoByHolyQuestfGroup4_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestfGroupctor_CRaceBuffInfoByHolyQuestfGroup4_clbk CRaceBuffInfoByHolyQuestfGroupctor_CRaceBuffInfoByHolyQuestfGroup4_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestfGroupCreateComplete6_ptr CRaceBuffInfoByHolyQuestfGroupCreateComplete6_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestfGroupCreateComplete6_clbk CRaceBuffInfoByHolyQuestfGroupCreateComplete6_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestfGroupInit8_ptr CRaceBuffInfoByHolyQuestfGroupInit8_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestfGroupInit8_clbk CRaceBuffInfoByHolyQuestfGroupInit8_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestfGroupRelease10_ptr CRaceBuffInfoByHolyQuestfGroupRelease10_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestfGroupRelease10_clbk CRaceBuffInfoByHolyQuestfGroupRelease10_user(nullptr);
        
        
        Info::CRaceBuffInfoByHolyQuestfGroupdtor_CRaceBuffInfoByHolyQuestfGroup14_ptr CRaceBuffInfoByHolyQuestfGroupdtor_CRaceBuffInfoByHolyQuestfGroup14_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestfGroupdtor_CRaceBuffInfoByHolyQuestfGroup14_clbk CRaceBuffInfoByHolyQuestfGroupdtor_CRaceBuffInfoByHolyQuestfGroup14_user(nullptr);
        
        bool CRaceBuffInfoByHolyQuestfGroupApply2_wrapper(struct CRaceBuffInfoByHolyQuestfGroup* _this, int iResultType, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestfGroupApply2_user(_this, iResultType, pkDest, CRaceBuffInfoByHolyQuestfGroupApply2_next);
        };
        
        void CRaceBuffInfoByHolyQuestfGroupctor_CRaceBuffInfoByHolyQuestfGroup4_wrapper(struct CRaceBuffInfoByHolyQuestfGroup* _this, unsigned int uiNTh)
        {
           CRaceBuffInfoByHolyQuestfGroupctor_CRaceBuffInfoByHolyQuestfGroup4_user(_this, uiNTh, CRaceBuffInfoByHolyQuestfGroupctor_CRaceBuffInfoByHolyQuestfGroup4_next);
        };
        bool CRaceBuffInfoByHolyQuestfGroupCreateComplete6_wrapper(struct CRaceBuffInfoByHolyQuestfGroup* _this, int iResultType, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestfGroupCreateComplete6_user(_this, iResultType, pkDest, CRaceBuffInfoByHolyQuestfGroupCreateComplete6_next);
        };
        bool CRaceBuffInfoByHolyQuestfGroupInit8_wrapper(struct CRaceBuffInfoByHolyQuestfGroup* _this)
        {
           return CRaceBuffInfoByHolyQuestfGroupInit8_user(_this, CRaceBuffInfoByHolyQuestfGroupInit8_next);
        };
        bool CRaceBuffInfoByHolyQuestfGroupRelease10_wrapper(struct CRaceBuffInfoByHolyQuestfGroup* _this, int iResultType, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestfGroupRelease10_user(_this, iResultType, pkDest, CRaceBuffInfoByHolyQuestfGroupRelease10_next);
        };
        
        void CRaceBuffInfoByHolyQuestfGroupdtor_CRaceBuffInfoByHolyQuestfGroup14_wrapper(struct CRaceBuffInfoByHolyQuestfGroup* _this)
        {
           CRaceBuffInfoByHolyQuestfGroupdtor_CRaceBuffInfoByHolyQuestfGroup14_user(_this, CRaceBuffInfoByHolyQuestfGroupdtor_CRaceBuffInfoByHolyQuestfGroup14_next);
        };
        
        ::std::array<hook_record, 6> CRaceBuffInfoByHolyQuestfGroup_functions = 
        {
            _hook_record {
                (LPVOID)0x1403b4c70L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupApply2_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupApply2_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestfGroupApply2_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuestfGroup::*)(int, struct CPlayer*))&CRaceBuffInfoByHolyQuestfGroup::Apply)
            },
            _hook_record {
                (LPVOID)0x1403b7ab0L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupctor_CRaceBuffInfoByHolyQuestfGroup4_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupctor_CRaceBuffInfoByHolyQuestfGroup4_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestfGroupctor_CRaceBuffInfoByHolyQuestfGroup4_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuestfGroup::*)(unsigned int))&CRaceBuffInfoByHolyQuestfGroup::ctor_CRaceBuffInfoByHolyQuestfGroup)
            },
            _hook_record {
                (LPVOID)0x1403b4bd0L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupCreateComplete6_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupCreateComplete6_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestfGroupCreateComplete6_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuestfGroup::*)(int, struct CPlayer*))&CRaceBuffInfoByHolyQuestfGroup::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x1403b4a30L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupInit8_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupInit8_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestfGroupInit8_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuestfGroup::*)())&CRaceBuffInfoByHolyQuestfGroup::Init)
            },
            _hook_record {
                (LPVOID)0x1403b4d10L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupRelease10_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupRelease10_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestfGroupRelease10_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuestfGroup::*)(int, struct CPlayer*))&CRaceBuffInfoByHolyQuestfGroup::Release)
            },
            _hook_record {
                (LPVOID)0x1403b4790L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupdtor_CRaceBuffInfoByHolyQuestfGroup14_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestfGroupdtor_CRaceBuffInfoByHolyQuestfGroup14_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestfGroupdtor_CRaceBuffInfoByHolyQuestfGroup14_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuestfGroup::*)())&CRaceBuffInfoByHolyQuestfGroup::dtor_CRaceBuffInfoByHolyQuestfGroup)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
