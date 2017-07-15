#include <COreAmountMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::COreAmountMgrctor_COreAmountMgr2_ptr COreAmountMgrctor_COreAmountMgr2_next(nullptr);
        Info::COreAmountMgrctor_COreAmountMgr2_clbk COreAmountMgrctor_COreAmountMgr2_user(nullptr);
        
        Info::COreAmountMgrCheatOreAmount4_ptr COreAmountMgrCheatOreAmount4_next(nullptr);
        Info::COreAmountMgrCheatOreAmount4_clbk COreAmountMgrCheatOreAmount4_user(nullptr);
        
        Info::COreAmountMgrDecreaseOre6_ptr COreAmountMgrDecreaseOre6_next(nullptr);
        Info::COreAmountMgrDecreaseOre6_clbk COreAmountMgrDecreaseOre6_user(nullptr);
        
        Info::COreAmountMgrGetDepositRate8_ptr COreAmountMgrGetDepositRate8_next(nullptr);
        Info::COreAmountMgrGetDepositRate8_clbk COreAmountMgrGetDepositRate8_user(nullptr);
        
        Info::COreAmountMgrGetMultipleRate10_ptr COreAmountMgrGetMultipleRate10_next(nullptr);
        Info::COreAmountMgrGetMultipleRate10_clbk COreAmountMgrGetMultipleRate10_user(nullptr);
        
        Info::COreAmountMgrGetOreTransferAmount12_ptr COreAmountMgrGetOreTransferAmount12_next(nullptr);
        Info::COreAmountMgrGetOreTransferAmount12_clbk COreAmountMgrGetOreTransferAmount12_user(nullptr);
        
        Info::COreAmountMgrGetOreTransferCount14_ptr COreAmountMgrGetOreTransferCount14_next(nullptr);
        Info::COreAmountMgrGetOreTransferCount14_clbk COreAmountMgrGetOreTransferCount14_user(nullptr);
        
        Info::COreAmountMgrGetRemainOre16_ptr COreAmountMgrGetRemainOre16_next(nullptr);
        Info::COreAmountMgrGetRemainOre16_clbk COreAmountMgrGetRemainOre16_user(nullptr);
        
        Info::COreAmountMgrGetTotalOre18_ptr COreAmountMgrGetTotalOre18_next(nullptr);
        Info::COreAmountMgrGetTotalOre18_clbk COreAmountMgrGetTotalOre18_user(nullptr);
        
        Info::COreAmountMgrIncreaseOreAmount20_ptr COreAmountMgrIncreaseOreAmount20_next(nullptr);
        Info::COreAmountMgrIncreaseOreAmount20_clbk COreAmountMgrIncreaseOreAmount20_user(nullptr);
        
        Info::COreAmountMgrIncreaseOreCount22_ptr COreAmountMgrIncreaseOreCount22_next(nullptr);
        Info::COreAmountMgrIncreaseOreCount22_clbk COreAmountMgrIncreaseOreCount22_user(nullptr);
        
        Info::COreAmountMgrInitRemainOreAmount24_ptr COreAmountMgrInitRemainOreAmount24_next(nullptr);
        Info::COreAmountMgrInitRemainOreAmount24_clbk COreAmountMgrInitRemainOreAmount24_user(nullptr);
        
        Info::COreAmountMgrInitTransferOre26_ptr COreAmountMgrInitTransferOre26_next(nullptr);
        Info::COreAmountMgrInitTransferOre26_clbk COreAmountMgrInitTransferOre26_user(nullptr);
        
        Info::COreAmountMgrInsertOreLog28_ptr COreAmountMgrInsertOreLog28_next(nullptr);
        Info::COreAmountMgrInsertOreLog28_clbk COreAmountMgrInsertOreLog28_user(nullptr);
        
        Info::COreAmountMgrInstance30_ptr COreAmountMgrInstance30_next(nullptr);
        Info::COreAmountMgrInstance30_clbk COreAmountMgrInstance30_user(nullptr);
        
        Info::COreAmountMgrIsINIFileChanged32_ptr COreAmountMgrIsINIFileChanged32_next(nullptr);
        Info::COreAmountMgrIsINIFileChanged32_clbk COreAmountMgrIsINIFileChanged32_user(nullptr);
        
        Info::COreAmountMgrIsOreRemain34_ptr COreAmountMgrIsOreRemain34_next(nullptr);
        Info::COreAmountMgrIsOreRemain34_clbk COreAmountMgrIsOreRemain34_user(nullptr);
        
        Info::COreAmountMgrLoadINI36_ptr COreAmountMgrLoadINI36_next(nullptr);
        Info::COreAmountMgrLoadINI36_clbk COreAmountMgrLoadINI36_user(nullptr);
        
        Info::COreAmountMgrLoop38_ptr COreAmountMgrLoop38_next(nullptr);
        Info::COreAmountMgrLoop38_clbk COreAmountMgrLoop38_user(nullptr);
        
        Info::COreAmountMgrLoopSubProcSendInform40_ptr COreAmountMgrLoopSubProcSendInform40_next(nullptr);
        Info::COreAmountMgrLoopSubProcSendInform40_clbk COreAmountMgrLoopSubProcSendInform40_user(nullptr);
        
        Info::COreAmountMgrReLoad42_ptr COreAmountMgrReLoad42_next(nullptr);
        Info::COreAmountMgrReLoad42_clbk COreAmountMgrReLoad42_user(nullptr);
        
        Info::COreAmountMgrRelease44_ptr COreAmountMgrRelease44_next(nullptr);
        Info::COreAmountMgrRelease44_clbk COreAmountMgrRelease44_user(nullptr);
        
        Info::COreAmountMgrSetOreTransferAmount46_ptr COreAmountMgrSetOreTransferAmount46_next(nullptr);
        Info::COreAmountMgrSetOreTransferAmount46_clbk COreAmountMgrSetOreTransferAmount46_user(nullptr);
        
        Info::COreAmountMgrUpdateDepositeRate48_ptr COreAmountMgrUpdateDepositeRate48_next(nullptr);
        Info::COreAmountMgrUpdateDepositeRate48_clbk COreAmountMgrUpdateDepositeRate48_user(nullptr);
        
        Info::COreAmountMgrUpdateForce50_ptr COreAmountMgrUpdateForce50_next(nullptr);
        Info::COreAmountMgrUpdateForce50_clbk COreAmountMgrUpdateForce50_user(nullptr);
        
        
        Info::COreAmountMgrdtor_COreAmountMgr55_ptr COreAmountMgrdtor_COreAmountMgr55_next(nullptr);
        Info::COreAmountMgrdtor_COreAmountMgr55_clbk COreAmountMgrdtor_COreAmountMgr55_user(nullptr);
        
        
        void COreAmountMgrctor_COreAmountMgr2_wrapper(struct COreAmountMgr* _this)
        {
           COreAmountMgrctor_COreAmountMgr2_user(_this, COreAmountMgrctor_COreAmountMgr2_next);
        };
        bool COreAmountMgrCheatOreAmount4_wrapper(struct COreAmountMgr* _this, unsigned int dwTot, unsigned int dwRemain)
        {
           return COreAmountMgrCheatOreAmount4_user(_this, dwTot, dwRemain, COreAmountMgrCheatOreAmount4_next);
        };
        void COreAmountMgrDecreaseOre6_wrapper(struct COreAmountMgr* _this, unsigned int dwAlt)
        {
           COreAmountMgrDecreaseOre6_user(_this, dwAlt, COreAmountMgrDecreaseOre6_next);
        };
        char COreAmountMgrGetDepositRate8_wrapper(struct COreAmountMgr* _this)
        {
           return COreAmountMgrGetDepositRate8_user(_this, COreAmountMgrGetDepositRate8_next);
        };
        float* COreAmountMgrGetMultipleRate10_wrapper(struct COreAmountMgr* _this)
        {
           return COreAmountMgrGetMultipleRate10_user(_this, COreAmountMgrGetMultipleRate10_next);
        };
        unsigned int COreAmountMgrGetOreTransferAmount12_wrapper(struct COreAmountMgr* _this)
        {
           return COreAmountMgrGetOreTransferAmount12_user(_this, COreAmountMgrGetOreTransferAmount12_next);
        };
        char COreAmountMgrGetOreTransferCount14_wrapper(struct COreAmountMgr* _this)
        {
           return COreAmountMgrGetOreTransferCount14_user(_this, COreAmountMgrGetOreTransferCount14_next);
        };
        unsigned int COreAmountMgrGetRemainOre16_wrapper(struct COreAmountMgr* _this)
        {
           return COreAmountMgrGetRemainOre16_user(_this, COreAmountMgrGetRemainOre16_next);
        };
        unsigned int COreAmountMgrGetTotalOre18_wrapper(struct COreAmountMgr* _this)
        {
           return COreAmountMgrGetTotalOre18_user(_this, COreAmountMgrGetTotalOre18_next);
        };
        void COreAmountMgrIncreaseOreAmount20_wrapper(struct COreAmountMgr* _this)
        {
           COreAmountMgrIncreaseOreAmount20_user(_this, COreAmountMgrIncreaseOreAmount20_next);
        };
        void COreAmountMgrIncreaseOreCount22_wrapper(struct COreAmountMgr* _this)
        {
           COreAmountMgrIncreaseOreCount22_user(_this, COreAmountMgrIncreaseOreCount22_next);
        };
        void COreAmountMgrInitRemainOreAmount24_wrapper(struct COreAmountMgr* _this, unsigned int dwRemain, unsigned int dwTotal)
        {
           COreAmountMgrInitRemainOreAmount24_user(_this, dwRemain, dwTotal, COreAmountMgrInitRemainOreAmount24_next);
        };
        void COreAmountMgrInitTransferOre26_wrapper(struct COreAmountMgr* _this, unsigned int dwTransAmount, char byTransCount)
        {
           COreAmountMgrInitTransferOre26_user(_this, dwTransAmount, byTransCount, COreAmountMgrInitTransferOre26_next);
        };
        void COreAmountMgrInsertOreLog28_wrapper(struct COreAmountMgr* _this, char byType)
        {
           COreAmountMgrInsertOreLog28_user(_this, byType, COreAmountMgrInsertOreLog28_next);
        };
        struct COreAmountMgr* COreAmountMgrInstance30_wrapper()
        {
           return COreAmountMgrInstance30_user(COreAmountMgrInstance30_next);
        };
        bool COreAmountMgrIsINIFileChanged32_wrapper(struct COreAmountMgr* _this)
        {
           return COreAmountMgrIsINIFileChanged32_user(_this, COreAmountMgrIsINIFileChanged32_next);
        };
        int COreAmountMgrIsOreRemain34_wrapper(struct COreAmountMgr* _this)
        {
           return COreAmountMgrIsOreRemain34_user(_this, COreAmountMgrIsOreRemain34_next);
        };
        int COreAmountMgrLoadINI36_wrapper(struct COreAmountMgr* _this)
        {
           return COreAmountMgrLoadINI36_user(_this, COreAmountMgrLoadINI36_next);
        };
        void COreAmountMgrLoop38_wrapper(struct COreAmountMgr* _this)
        {
           COreAmountMgrLoop38_user(_this, COreAmountMgrLoop38_next);
        };
        void COreAmountMgrLoopSubProcSendInform40_wrapper(struct COreAmountMgr* _this)
        {
           COreAmountMgrLoopSubProcSendInform40_user(_this, COreAmountMgrLoopSubProcSendInform40_next);
        };
        bool COreAmountMgrReLoad42_wrapper(struct COreAmountMgr* _this)
        {
           return COreAmountMgrReLoad42_user(_this, COreAmountMgrReLoad42_next);
        };
        void COreAmountMgrRelease44_wrapper(struct COreAmountMgr* _this)
        {
           COreAmountMgrRelease44_user(_this, COreAmountMgrRelease44_next);
        };
        void COreAmountMgrSetOreTransferAmount46_wrapper(struct COreAmountMgr* _this)
        {
           COreAmountMgrSetOreTransferAmount46_user(_this, COreAmountMgrSetOreTransferAmount46_next);
        };
        void COreAmountMgrUpdateDepositeRate48_wrapper(struct COreAmountMgr* _this)
        {
           COreAmountMgrUpdateDepositeRate48_user(_this, COreAmountMgrUpdateDepositeRate48_next);
        };
        void COreAmountMgrUpdateForce50_wrapper(struct COreAmountMgr* _this)
        {
           COreAmountMgrUpdateForce50_user(_this, COreAmountMgrUpdateForce50_next);
        };
        
        void COreAmountMgrdtor_COreAmountMgr55_wrapper(struct COreAmountMgr* _this)
        {
           COreAmountMgrdtor_COreAmountMgr55_user(_this, COreAmountMgrdtor_COreAmountMgr55_next);
        };
        
        ::std::array<hook_record, 26> COreAmountMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x1403f8da0L,
                (LPVOID *)&COreAmountMgrctor_COreAmountMgr2_user,
                (LPVOID *)&COreAmountMgrctor_COreAmountMgr2_next,
                (LPVOID)cast_pointer_function(COreAmountMgrctor_COreAmountMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)())&COreAmountMgr::ctor_COreAmountMgr)
            },
            _hook_record {
                (LPVOID)0x1403f9b90L,
                (LPVOID *)&COreAmountMgrCheatOreAmount4_user,
                (LPVOID *)&COreAmountMgrCheatOreAmount4_next,
                (LPVOID)cast_pointer_function(COreAmountMgrCheatOreAmount4_wrapper),
                (LPVOID)cast_pointer_function((bool(COreAmountMgr::*)(unsigned int, unsigned int))&COreAmountMgr::CheatOreAmount)
            },
            _hook_record {
                (LPVOID)0x1400d3ea0L,
                (LPVOID *)&COreAmountMgrDecreaseOre6_user,
                (LPVOID *)&COreAmountMgrDecreaseOre6_next,
                (LPVOID)cast_pointer_function(COreAmountMgrDecreaseOre6_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)(unsigned int))&COreAmountMgr::DecreaseOre)
            },
            _hook_record {
                (LPVOID)0x1400f06b0L,
                (LPVOID *)&COreAmountMgrGetDepositRate8_user,
                (LPVOID *)&COreAmountMgrGetDepositRate8_next,
                (LPVOID)cast_pointer_function(COreAmountMgrGetDepositRate8_wrapper),
                (LPVOID)cast_pointer_function((char(COreAmountMgr::*)())&COreAmountMgr::GetDepositRate)
            },
            _hook_record {
                (LPVOID)0x14029d840L,
                (LPVOID *)&COreAmountMgrGetMultipleRate10_user,
                (LPVOID *)&COreAmountMgrGetMultipleRate10_next,
                (LPVOID)cast_pointer_function(COreAmountMgrGetMultipleRate10_wrapper),
                (LPVOID)cast_pointer_function((float*(COreAmountMgr::*)())&COreAmountMgr::GetMultipleRate)
            },
            _hook_record {
                (LPVOID)0x1402845d0L,
                (LPVOID *)&COreAmountMgrGetOreTransferAmount12_user,
                (LPVOID *)&COreAmountMgrGetOreTransferAmount12_next,
                (LPVOID)cast_pointer_function(COreAmountMgrGetOreTransferAmount12_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(COreAmountMgr::*)())&COreAmountMgr::GetOreTransferAmount)
            },
            _hook_record {
                (LPVOID)0x1400f06d0L,
                (LPVOID *)&COreAmountMgrGetOreTransferCount14_user,
                (LPVOID *)&COreAmountMgrGetOreTransferCount14_next,
                (LPVOID)cast_pointer_function(COreAmountMgrGetOreTransferCount14_wrapper),
                (LPVOID)cast_pointer_function((char(COreAmountMgr::*)())&COreAmountMgr::GetOreTransferCount)
            },
            _hook_record {
                (LPVOID)0x140284590L,
                (LPVOID *)&COreAmountMgrGetRemainOre16_user,
                (LPVOID *)&COreAmountMgrGetRemainOre16_next,
                (LPVOID)cast_pointer_function(COreAmountMgrGetRemainOre16_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(COreAmountMgr::*)())&COreAmountMgr::GetRemainOre)
            },
            _hook_record {
                (LPVOID)0x1402845b0L,
                (LPVOID *)&COreAmountMgrGetTotalOre18_user,
                (LPVOID *)&COreAmountMgrGetTotalOre18_next,
                (LPVOID)cast_pointer_function(COreAmountMgrGetTotalOre18_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(COreAmountMgr::*)())&COreAmountMgr::GetTotalOre)
            },
            _hook_record {
                (LPVOID)0x140284910L,
                (LPVOID *)&COreAmountMgrIncreaseOreAmount20_user,
                (LPVOID *)&COreAmountMgrIncreaseOreAmount20_next,
                (LPVOID)cast_pointer_function(COreAmountMgrIncreaseOreAmount20_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)())&COreAmountMgr::IncreaseOreAmount)
            },
            _hook_record {
                (LPVOID)0x140284880L,
                (LPVOID *)&COreAmountMgrIncreaseOreCount22_user,
                (LPVOID *)&COreAmountMgrIncreaseOreCount22_next,
                (LPVOID)cast_pointer_function(COreAmountMgrIncreaseOreCount22_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)())&COreAmountMgr::IncreaseOreCount)
            },
            _hook_record {
                (LPVOID)0x1403f93e0L,
                (LPVOID *)&COreAmountMgrInitRemainOreAmount24_user,
                (LPVOID *)&COreAmountMgrInitRemainOreAmount24_next,
                (LPVOID)cast_pointer_function(COreAmountMgrInitRemainOreAmount24_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)(unsigned int, unsigned int))&COreAmountMgr::InitRemainOreAmount)
            },
            _hook_record {
                (LPVOID)0x1403f98b0L,
                (LPVOID *)&COreAmountMgrInitTransferOre26_user,
                (LPVOID *)&COreAmountMgrInitTransferOre26_next,
                (LPVOID)cast_pointer_function(COreAmountMgrInitTransferOre26_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)(unsigned int, char))&COreAmountMgr::InitTransferOre)
            },
            _hook_record {
                (LPVOID)0x1403f9680L,
                (LPVOID *)&COreAmountMgrInsertOreLog28_user,
                (LPVOID *)&COreAmountMgrInsertOreLog28_next,
                (LPVOID)cast_pointer_function(COreAmountMgrInsertOreLog28_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)(char))&COreAmountMgr::InsertOreLog)
            },
            _hook_record {
                (LPVOID)0x1403f8ff0L,
                (LPVOID *)&COreAmountMgrInstance30_user,
                (LPVOID *)&COreAmountMgrInstance30_next,
                (LPVOID)cast_pointer_function(COreAmountMgrInstance30_wrapper),
                (LPVOID)cast_pointer_function((struct COreAmountMgr*(*)())&COreAmountMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x1403f9ca0L,
                (LPVOID *)&COreAmountMgrIsINIFileChanged32_user,
                (LPVOID *)&COreAmountMgrIsINIFileChanged32_next,
                (LPVOID)cast_pointer_function(COreAmountMgrIsINIFileChanged32_wrapper),
                (LPVOID)cast_pointer_function((bool(COreAmountMgr::*)())&COreAmountMgr::IsINIFileChanged)
            },
            _hook_record {
                (LPVOID)0x1400d3df0L,
                (LPVOID *)&COreAmountMgrIsOreRemain34_user,
                (LPVOID *)&COreAmountMgrIsOreRemain34_next,
                (LPVOID)cast_pointer_function(COreAmountMgrIsOreRemain34_wrapper),
                (LPVOID)cast_pointer_function((int(COreAmountMgr::*)())&COreAmountMgr::IsOreRemain)
            },
            _hook_record {
                (LPVOID)0x1403f9130L,
                (LPVOID *)&COreAmountMgrLoadINI36_user,
                (LPVOID *)&COreAmountMgrLoadINI36_next,
                (LPVOID)cast_pointer_function(COreAmountMgrLoadINI36_wrapper),
                (LPVOID)cast_pointer_function((int(COreAmountMgr::*)())&COreAmountMgr::LoadINI)
            },
            _hook_record {
                (LPVOID)0x1403f9a40L,
                (LPVOID *)&COreAmountMgrLoop38_user,
                (LPVOID *)&COreAmountMgrLoop38_next,
                (LPVOID)cast_pointer_function(COreAmountMgrLoop38_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)())&COreAmountMgr::Loop)
            },
            _hook_record {
                (LPVOID)0x1403f9a90L,
                (LPVOID *)&COreAmountMgrLoopSubProcSendInform40_user,
                (LPVOID *)&COreAmountMgrLoopSubProcSendInform40_next,
                (LPVOID)cast_pointer_function(COreAmountMgrLoopSubProcSendInform40_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)())&COreAmountMgr::LoopSubProcSendInform)
            },
            _hook_record {
                (LPVOID)0x1403f9c20L,
                (LPVOID *)&COreAmountMgrReLoad42_user,
                (LPVOID *)&COreAmountMgrReLoad42_next,
                (LPVOID)cast_pointer_function(COreAmountMgrReLoad42_wrapper),
                (LPVOID)cast_pointer_function((bool(COreAmountMgr::*)())&COreAmountMgr::ReLoad)
            },
            _hook_record {
                (LPVOID)0x1403f90b0L,
                (LPVOID *)&COreAmountMgrRelease44_user,
                (LPVOID *)&COreAmountMgrRelease44_next,
                (LPVOID)cast_pointer_function(COreAmountMgrRelease44_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)())&COreAmountMgr::Release)
            },
            _hook_record {
                (LPVOID)0x1402849e0L,
                (LPVOID *)&COreAmountMgrSetOreTransferAmount46_user,
                (LPVOID *)&COreAmountMgrSetOreTransferAmount46_next,
                (LPVOID)cast_pointer_function(COreAmountMgrSetOreTransferAmount46_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)())&COreAmountMgr::SetOreTransferAmount)
            },
            _hook_record {
                (LPVOID)0x1403f9940L,
                (LPVOID *)&COreAmountMgrUpdateDepositeRate48_user,
                (LPVOID *)&COreAmountMgrUpdateDepositeRate48_next,
                (LPVOID)cast_pointer_function(COreAmountMgrUpdateDepositeRate48_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)())&COreAmountMgr::UpdateDepositeRate)
            },
            _hook_record {
                (LPVOID)0x1403f97d0L,
                (LPVOID *)&COreAmountMgrUpdateForce50_user,
                (LPVOID *)&COreAmountMgrUpdateForce50_next,
                (LPVOID)cast_pointer_function(COreAmountMgrUpdateForce50_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)())&COreAmountMgr::UpdateForce)
            },
            _hook_record {
                (LPVOID)0x1403f8f90L,
                (LPVOID *)&COreAmountMgrdtor_COreAmountMgr55_user,
                (LPVOID *)&COreAmountMgrdtor_COreAmountMgr55_next,
                (LPVOID)cast_pointer_function(COreAmountMgrdtor_COreAmountMgr55_wrapper),
                (LPVOID)cast_pointer_function((void(COreAmountMgr::*)())&COreAmountMgr::dtor_COreAmountMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
