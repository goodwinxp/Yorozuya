#include <CPcBangFavorDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CPcBangFavorctor_CPcBangFavor2_ptr CPcBangFavorctor_CPcBangFavor2_next(nullptr);
        Info::CPcBangFavorctor_CPcBangFavor2_clbk CPcBangFavorctor_CPcBangFavor2_user(nullptr);
        
        Info::CPcBangFavorClassCodePasing4_ptr CPcBangFavorClassCodePasing4_next(nullptr);
        Info::CPcBangFavorClassCodePasing4_clbk CPcBangFavorClassCodePasing4_user(nullptr);
        
        Info::CPcBangFavorInitialzie6_ptr CPcBangFavorInitialzie6_next(nullptr);
        Info::CPcBangFavorInitialzie6_clbk CPcBangFavorInitialzie6_user(nullptr);
        
        Info::CPcBangFavorInstance8_ptr CPcBangFavorInstance8_next(nullptr);
        Info::CPcBangFavorInstance8_clbk CPcBangFavorInstance8_user(nullptr);
        
        Info::CPcBangFavorIsEnable10_ptr CPcBangFavorIsEnable10_next(nullptr);
        Info::CPcBangFavorIsEnable10_clbk CPcBangFavorIsEnable10_user(nullptr);
        
        Info::CPcBangFavorLoadPcBangData12_ptr CPcBangFavorLoadPcBangData12_next(nullptr);
        Info::CPcBangFavorLoadPcBangData12_clbk CPcBangFavorLoadPcBangData12_user(nullptr);
        
        Info::CPcBangFavorPcBangDeleteItem14_ptr CPcBangFavorPcBangDeleteItem14_next(nullptr);
        Info::CPcBangFavorPcBangDeleteItem14_clbk CPcBangFavorPcBangDeleteItem14_user(nullptr);
        
        Info::CPcBangFavorPcBangGiveItem16_ptr CPcBangFavorPcBangGiveItem16_next(nullptr);
        Info::CPcBangFavorPcBangGiveItem16_clbk CPcBangFavorPcBangGiveItem16_user(nullptr);
        
        
        Info::CPcBangFavordtor_CPcBangFavor21_ptr CPcBangFavordtor_CPcBangFavor21_next(nullptr);
        Info::CPcBangFavordtor_CPcBangFavor21_clbk CPcBangFavordtor_CPcBangFavor21_user(nullptr);
        
        
        void CPcBangFavorctor_CPcBangFavor2_wrapper(struct CPcBangFavor* _this)
        {
           CPcBangFavorctor_CPcBangFavor2_user(_this, CPcBangFavorctor_CPcBangFavor2_next);
        };
        unsigned int CPcBangFavorClassCodePasing4_wrapper(struct CPcBangFavor* _this, struct _AVATOR_DATA* pData, struct CPlayer* pOne)
        {
           return CPcBangFavorClassCodePasing4_user(_this, pData, pOne, CPcBangFavorClassCodePasing4_next);
        };
        int CPcBangFavorInitialzie6_wrapper(struct CPcBangFavor* _this)
        {
           return CPcBangFavorInitialzie6_user(_this, CPcBangFavorInitialzie6_next);
        };
        struct CPcBangFavor* CPcBangFavorInstance8_wrapper()
        {
           return CPcBangFavorInstance8_user(CPcBangFavorInstance8_next);
        };
        int CPcBangFavorIsEnable10_wrapper(struct CPcBangFavor* _this)
        {
           return CPcBangFavorIsEnable10_user(_this, CPcBangFavorIsEnable10_next);
        };
        int CPcBangFavorLoadPcBangData12_wrapper(struct CPcBangFavor* _this)
        {
           return CPcBangFavorLoadPcBangData12_user(_this, CPcBangFavorLoadPcBangData12_next);
        };
        void CPcBangFavorPcBangDeleteItem14_wrapper(struct CPcBangFavor* _this, struct CPlayer* pOne)
        {
           CPcBangFavorPcBangDeleteItem14_user(_this, pOne, CPcBangFavorPcBangDeleteItem14_next);
        };
        bool CPcBangFavorPcBangGiveItem16_wrapper(struct CPcBangFavor* _this, struct CPlayer* pOne, unsigned int dwRecIndex, char* bySeletItemIndex, int nSelectCount)
        {
           return CPcBangFavorPcBangGiveItem16_user(_this, pOne, dwRecIndex, bySeletItemIndex, nSelectCount, CPcBangFavorPcBangGiveItem16_next);
        };
        
        void CPcBangFavordtor_CPcBangFavor21_wrapper(struct CPcBangFavor* _this)
        {
           CPcBangFavordtor_CPcBangFavor21_user(_this, CPcBangFavordtor_CPcBangFavor21_next);
        };
        
        ::std::array<hook_record, 9> CPcBangFavor_functions = 
        {
            _hook_record {
                (LPVOID)0x14040bb10L,
                (LPVOID *)&CPcBangFavorctor_CPcBangFavor2_user,
                (LPVOID *)&CPcBangFavorctor_CPcBangFavor2_next,
                (LPVOID)cast_pointer_function(CPcBangFavorctor_CPcBangFavor2_wrapper),
                (LPVOID)cast_pointer_function((void(CPcBangFavor::*)())&CPcBangFavor::ctor_CPcBangFavor)
            },
            _hook_record {
                (LPVOID)0x14040bd90L,
                (LPVOID *)&CPcBangFavorClassCodePasing4_user,
                (LPVOID *)&CPcBangFavorClassCodePasing4_next,
                (LPVOID)cast_pointer_function(CPcBangFavorClassCodePasing4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CPcBangFavor::*)(struct _AVATOR_DATA*, struct CPlayer*))&CPcBangFavor::ClassCodePasing)
            },
            _hook_record {
                (LPVOID)0x14040bca0L,
                (LPVOID *)&CPcBangFavorInitialzie6_user,
                (LPVOID *)&CPcBangFavorInitialzie6_next,
                (LPVOID)cast_pointer_function(CPcBangFavorInitialzie6_wrapper),
                (LPVOID)cast_pointer_function((int(CPcBangFavor::*)())&CPcBangFavor::Initialzie)
            },
            _hook_record {
                (LPVOID)0x140079730L,
                (LPVOID *)&CPcBangFavorInstance8_user,
                (LPVOID *)&CPcBangFavorInstance8_next,
                (LPVOID)cast_pointer_function(CPcBangFavorInstance8_wrapper),
                (LPVOID)cast_pointer_function((struct CPcBangFavor*(*)())&CPcBangFavor::Instance)
            },
            _hook_record {
                (LPVOID)0x14040bc80L,
                (LPVOID *)&CPcBangFavorIsEnable10_user,
                (LPVOID *)&CPcBangFavorIsEnable10_next,
                (LPVOID)cast_pointer_function(CPcBangFavorIsEnable10_wrapper),
                (LPVOID)cast_pointer_function((int(CPcBangFavor::*)())&CPcBangFavor::IsEnable)
            },
            _hook_record {
                (LPVOID)0x14040bbc0L,
                (LPVOID *)&CPcBangFavorLoadPcBangData12_user,
                (LPVOID *)&CPcBangFavorLoadPcBangData12_next,
                (LPVOID)cast_pointer_function(CPcBangFavorLoadPcBangData12_wrapper),
                (LPVOID)cast_pointer_function((int(CPcBangFavor::*)())&CPcBangFavor::LoadPcBangData)
            },
            _hook_record {
                (LPVOID)0x14040c540L,
                (LPVOID *)&CPcBangFavorPcBangDeleteItem14_user,
                (LPVOID *)&CPcBangFavorPcBangDeleteItem14_next,
                (LPVOID)cast_pointer_function(CPcBangFavorPcBangDeleteItem14_wrapper),
                (LPVOID)cast_pointer_function((void(CPcBangFavor::*)(struct CPlayer*))&CPcBangFavor::PcBangDeleteItem)
            },
            _hook_record {
                (LPVOID)0x14040bff0L,
                (LPVOID *)&CPcBangFavorPcBangGiveItem16_user,
                (LPVOID *)&CPcBangFavorPcBangGiveItem16_next,
                (LPVOID)cast_pointer_function(CPcBangFavorPcBangGiveItem16_wrapper),
                (LPVOID)cast_pointer_function((bool(CPcBangFavor::*)(struct CPlayer*, unsigned int, char*, int))&CPcBangFavor::PcBangGiveItem)
            },
            _hook_record {
                (LPVOID)0x14040bb70L,
                (LPVOID *)&CPcBangFavordtor_CPcBangFavor21_user,
                (LPVOID *)&CPcBangFavordtor_CPcBangFavor21_next,
                (LPVOID)cast_pointer_function(CPcBangFavordtor_CPcBangFavor21_wrapper),
                (LPVOID)cast_pointer_function((void(CPcBangFavor::*)())&CPcBangFavor::dtor_CPcBangFavor)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
