#include <_PVP_RANK_REFRESH_USERDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_PVP_RANK_REFRESH_USERInit2_ptr _PVP_RANK_REFRESH_USERInit2_next(nullptr);
        Info::_PVP_RANK_REFRESH_USERInit2_clbk _PVP_RANK_REFRESH_USERInit2_user(nullptr);
        
        Info::_PVP_RANK_REFRESH_USERIsFilled4_ptr _PVP_RANK_REFRESH_USERIsFilled4_next(nullptr);
        Info::_PVP_RANK_REFRESH_USERIsFilled4_clbk _PVP_RANK_REFRESH_USERIsFilled4_user(nullptr);
        
        Info::_PVP_RANK_REFRESH_USERSetData6_ptr _PVP_RANK_REFRESH_USERSetData6_next(nullptr);
        Info::_PVP_RANK_REFRESH_USERSetData6_clbk _PVP_RANK_REFRESH_USERSetData6_user(nullptr);
        
        void _PVP_RANK_REFRESH_USERInit2_wrapper(struct _PVP_RANK_REFRESH_USER* _this)
        {
           _PVP_RANK_REFRESH_USERInit2_user(_this, _PVP_RANK_REFRESH_USERInit2_next);
        };
        bool _PVP_RANK_REFRESH_USERIsFilled4_wrapper(struct _PVP_RANK_REFRESH_USER* _this)
        {
           return _PVP_RANK_REFRESH_USERIsFilled4_user(_this, _PVP_RANK_REFRESH_USERIsFilled4_next);
        };
        void _PVP_RANK_REFRESH_USERSetData6_wrapper(struct _PVP_RANK_REFRESH_USER* _this, unsigned int dwSerialP, char byLvP, char byRaceP)
        {
           _PVP_RANK_REFRESH_USERSetData6_user(_this, dwSerialP, byLvP, byRaceP, _PVP_RANK_REFRESH_USERSetData6_next);
        };
        
        ::std::array<hook_record, 3> _PVP_RANK_REFRESH_USER_functions = 
        {
            _hook_record {
                (LPVOID)0x140336aa0L,
                (LPVOID *)&_PVP_RANK_REFRESH_USERInit2_user,
                (LPVOID *)&_PVP_RANK_REFRESH_USERInit2_next,
                (LPVOID)cast_pointer_function(_PVP_RANK_REFRESH_USERInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_PVP_RANK_REFRESH_USER::*)())&_PVP_RANK_REFRESH_USER::Init)
            },
            _hook_record {
                (LPVOID)0x140336ac0L,
                (LPVOID *)&_PVP_RANK_REFRESH_USERIsFilled4_user,
                (LPVOID *)&_PVP_RANK_REFRESH_USERIsFilled4_next,
                (LPVOID)cast_pointer_function(_PVP_RANK_REFRESH_USERIsFilled4_wrapper),
                (LPVOID)cast_pointer_function((bool(_PVP_RANK_REFRESH_USER::*)())&_PVP_RANK_REFRESH_USER::IsFilled)
            },
            _hook_record {
                (LPVOID)0x140336ae0L,
                (LPVOID *)&_PVP_RANK_REFRESH_USERSetData6_user,
                (LPVOID *)&_PVP_RANK_REFRESH_USERSetData6_next,
                (LPVOID)cast_pointer_function(_PVP_RANK_REFRESH_USERSetData6_wrapper),
                (LPVOID)cast_pointer_function((void(_PVP_RANK_REFRESH_USER::*)(unsigned int, char, char))&_PVP_RANK_REFRESH_USER::SetData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
