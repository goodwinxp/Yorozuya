#include <_DTRADE_ITEMDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_DTRADE_ITEMReleaseData2_ptr _DTRADE_ITEMReleaseData2_next(nullptr);
        Info::_DTRADE_ITEMReleaseData2_clbk _DTRADE_ITEMReleaseData2_user(nullptr);
        
        Info::_DTRADE_ITEMSetData4_ptr _DTRADE_ITEMSetData4_next(nullptr);
        Info::_DTRADE_ITEMSetData4_clbk _DTRADE_ITEMSetData4_user(nullptr);
        
        void _DTRADE_ITEMReleaseData2_wrapper(struct _DTRADE_ITEM* _this)
        {
           _DTRADE_ITEMReleaseData2_user(_this, _DTRADE_ITEMReleaseData2_next);
        };
        void _DTRADE_ITEMSetData4_wrapper(struct _DTRADE_ITEM* _this, char p_byStorageCode, unsigned int p_dwSerial, char p_byAmount)
        {
           _DTRADE_ITEMSetData4_user(_this, p_byStorageCode, p_dwSerial, p_byAmount, _DTRADE_ITEMSetData4_next);
        };
        
        ::std::array<hook_record, 2> _DTRADE_ITEM_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f79f0L,
                (LPVOID *)&_DTRADE_ITEMReleaseData2_user,
                (LPVOID *)&_DTRADE_ITEMReleaseData2_next,
                (LPVOID)cast_pointer_function(_DTRADE_ITEMReleaseData2_wrapper),
                (LPVOID)cast_pointer_function((void(_DTRADE_ITEM::*)())&_DTRADE_ITEM::ReleaseData)
            },
            _hook_record {
                (LPVOID)0x1400f7a10L,
                (LPVOID *)&_DTRADE_ITEMSetData4_user,
                (LPVOID *)&_DTRADE_ITEMSetData4_next,
                (LPVOID)cast_pointer_function(_DTRADE_ITEMSetData4_wrapper),
                (LPVOID)cast_pointer_function((void(_DTRADE_ITEM::*)(char, unsigned int, char))&_DTRADE_ITEM::SetData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
