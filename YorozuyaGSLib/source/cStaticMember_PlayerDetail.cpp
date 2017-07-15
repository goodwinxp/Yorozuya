#include <cStaticMember_PlayerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::cStaticMember_PlayerGetLimitExp2_ptr cStaticMember_PlayerGetLimitExp2_next(nullptr);
        Info::cStaticMember_PlayerGetLimitExp2_clbk cStaticMember_PlayerGetLimitExp2_user(nullptr);
        
        Info::cStaticMember_PlayerGetMaxLv4_ptr cStaticMember_PlayerGetMaxLv4_next(nullptr);
        Info::cStaticMember_PlayerGetMaxLv4_clbk cStaticMember_PlayerGetMaxLv4_user(nullptr);
        
        Info::cStaticMember_PlayerInitialize6_ptr cStaticMember_PlayerInitialize6_next(nullptr);
        Info::cStaticMember_PlayerInitialize6_clbk cStaticMember_PlayerInitialize6_user(nullptr);
        
        Info::cStaticMember_PlayerInstance8_ptr cStaticMember_PlayerInstance8_next(nullptr);
        Info::cStaticMember_PlayerInstance8_clbk cStaticMember_PlayerInstance8_user(nullptr);
        
        Info::cStaticMember_PlayerRelease10_ptr cStaticMember_PlayerRelease10_next(nullptr);
        Info::cStaticMember_PlayerRelease10_clbk cStaticMember_PlayerRelease10_user(nullptr);
        
        
        Info::cStaticMember_Playerctor_cStaticMember_Player14_ptr cStaticMember_Playerctor_cStaticMember_Player14_next(nullptr);
        Info::cStaticMember_Playerctor_cStaticMember_Player14_clbk cStaticMember_Playerctor_cStaticMember_Player14_user(nullptr);
        
        Info::cStaticMember_PlayerloadLimitExpData16_ptr cStaticMember_PlayerloadLimitExpData16_next(nullptr);
        Info::cStaticMember_PlayerloadLimitExpData16_clbk cStaticMember_PlayerloadLimitExpData16_user(nullptr);
        
        
        Info::cStaticMember_Playerdtor_cStaticMember_Player18_ptr cStaticMember_Playerdtor_cStaticMember_Player18_next(nullptr);
        Info::cStaticMember_Playerdtor_cStaticMember_Player18_clbk cStaticMember_Playerdtor_cStaticMember_Player18_user(nullptr);
        
        long double cStaticMember_PlayerGetLimitExp2_wrapper(struct cStaticMember_Player* _this, int lv)
        {
           return cStaticMember_PlayerGetLimitExp2_user(_this, lv, cStaticMember_PlayerGetLimitExp2_next);
        };
        int cStaticMember_PlayerGetMaxLv4_wrapper(struct cStaticMember_Player* _this)
        {
           return cStaticMember_PlayerGetMaxLv4_user(_this, cStaticMember_PlayerGetMaxLv4_next);
        };
        bool cStaticMember_PlayerInitialize6_wrapper(struct cStaticMember_Player* _this)
        {
           return cStaticMember_PlayerInitialize6_user(_this, cStaticMember_PlayerInitialize6_next);
        };
        struct cStaticMember_Player* cStaticMember_PlayerInstance8_wrapper()
        {
           return cStaticMember_PlayerInstance8_user(cStaticMember_PlayerInstance8_next);
        };
        void cStaticMember_PlayerRelease10_wrapper()
        {
           cStaticMember_PlayerRelease10_user(cStaticMember_PlayerRelease10_next);
        };
        
        void cStaticMember_Playerctor_cStaticMember_Player14_wrapper(struct cStaticMember_Player* _this)
        {
           cStaticMember_Playerctor_cStaticMember_Player14_user(_this, cStaticMember_Playerctor_cStaticMember_Player14_next);
        };
        bool cStaticMember_PlayerloadLimitExpData16_wrapper(struct cStaticMember_Player* _this)
        {
           return cStaticMember_PlayerloadLimitExpData16_user(_this, cStaticMember_PlayerloadLimitExpData16_next);
        };
        
        void cStaticMember_Playerdtor_cStaticMember_Player18_wrapper(struct cStaticMember_Player* _this)
        {
           cStaticMember_Playerdtor_cStaticMember_Player18_user(_this, cStaticMember_Playerdtor_cStaticMember_Player18_next);
        };
        
        ::std::array<hook_record, 8> cStaticMember_Player_functions = 
        {
            _hook_record {
                (LPVOID)0x14010e5e0L,
                (LPVOID *)&cStaticMember_PlayerGetLimitExp2_user,
                (LPVOID *)&cStaticMember_PlayerGetLimitExp2_next,
                (LPVOID)cast_pointer_function(cStaticMember_PlayerGetLimitExp2_wrapper),
                (LPVOID)cast_pointer_function((long double(cStaticMember_Player::*)(int))&cStaticMember_Player::GetLimitExp)
            },
            _hook_record {
                (LPVOID)0x14010e640L,
                (LPVOID *)&cStaticMember_PlayerGetMaxLv4_user,
                (LPVOID *)&cStaticMember_PlayerGetMaxLv4_next,
                (LPVOID)cast_pointer_function(cStaticMember_PlayerGetMaxLv4_wrapper),
                (LPVOID)cast_pointer_function((int(cStaticMember_Player::*)())&cStaticMember_Player::GetMaxLv)
            },
            _hook_record {
                (LPVOID)0x14010e590L,
                (LPVOID *)&cStaticMember_PlayerInitialize6_user,
                (LPVOID *)&cStaticMember_PlayerInitialize6_next,
                (LPVOID)cast_pointer_function(cStaticMember_PlayerInitialize6_wrapper),
                (LPVOID)cast_pointer_function((bool(cStaticMember_Player::*)())&cStaticMember_Player::Initialize)
            },
            _hook_record {
                (LPVOID)0x14010e450L,
                (LPVOID *)&cStaticMember_PlayerInstance8_user,
                (LPVOID *)&cStaticMember_PlayerInstance8_next,
                (LPVOID)cast_pointer_function(cStaticMember_PlayerInstance8_wrapper),
                (LPVOID)cast_pointer_function((struct cStaticMember_Player*(*)())&cStaticMember_Player::Instance)
            },
            _hook_record {
                (LPVOID)0x14010e510L,
                (LPVOID *)&cStaticMember_PlayerRelease10_user,
                (LPVOID *)&cStaticMember_PlayerRelease10_next,
                (LPVOID)cast_pointer_function(cStaticMember_PlayerRelease10_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&cStaticMember_Player::Release)
            },
            _hook_record {
                (LPVOID)0x14010e3d0L,
                (LPVOID *)&cStaticMember_Playerctor_cStaticMember_Player14_user,
                (LPVOID *)&cStaticMember_Playerctor_cStaticMember_Player14_next,
                (LPVOID)cast_pointer_function(cStaticMember_Playerctor_cStaticMember_Player14_wrapper),
                (LPVOID)cast_pointer_function((void(cStaticMember_Player::*)())&cStaticMember_Player::ctor_cStaticMember_Player)
            },
            _hook_record {
                (LPVOID)0x14010e660L,
                (LPVOID *)&cStaticMember_PlayerloadLimitExpData16_user,
                (LPVOID *)&cStaticMember_PlayerloadLimitExpData16_next,
                (LPVOID)cast_pointer_function(cStaticMember_PlayerloadLimitExpData16_wrapper),
                (LPVOID)cast_pointer_function((bool(cStaticMember_Player::*)())&cStaticMember_Player::loadLimitExpData)
            },
            _hook_record {
                (LPVOID)0x14010e3f0L,
                (LPVOID *)&cStaticMember_Playerdtor_cStaticMember_Player18_user,
                (LPVOID *)&cStaticMember_Playerdtor_cStaticMember_Player18_next,
                (LPVOID)cast_pointer_function(cStaticMember_Playerdtor_cStaticMember_Player18_wrapper),
                (LPVOID)cast_pointer_function((void(cStaticMember_Player::*)())&cStaticMember_Player::dtor_cStaticMember_Player)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
