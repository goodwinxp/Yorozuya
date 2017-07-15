#include <CMergeFileManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CMergeFileManagerGetFileSize1_ptr CMergeFileManagerGetFileSize1_next(nullptr);
        Info::CMergeFileManagerGetFileSize1_clbk CMergeFileManagerGetFileSize1_user(nullptr);
        
        Info::CMergeFileManagerInitMergeFile2_ptr CMergeFileManagerInitMergeFile2_next(nullptr);
        Info::CMergeFileManagerInitMergeFile2_clbk CMergeFileManagerInitMergeFile2_user(nullptr);
        
        Info::CMergeFileManagerIsExistFile3_ptr CMergeFileManagerIsExistFile3_next(nullptr);
        Info::CMergeFileManagerIsExistFile3_clbk CMergeFileManagerIsExistFile3_user(nullptr);
        
        Info::CMergeFileManagerLoadFileOffset4_ptr CMergeFileManagerLoadFileOffset4_next(nullptr);
        Info::CMergeFileManagerLoadFileOffset4_clbk CMergeFileManagerLoadFileOffset4_user(nullptr);
        
        Info::CMergeFileManagerReleaseMergeFile5_ptr CMergeFileManagerReleaseMergeFile5_next(nullptr);
        Info::CMergeFileManagerReleaseMergeFile5_clbk CMergeFileManagerReleaseMergeFile5_user(nullptr);
        
        
        Info::CMergeFileManagerdtor_CMergeFileManager6_ptr CMergeFileManagerdtor_CMergeFileManager6_next(nullptr);
        Info::CMergeFileManagerdtor_CMergeFileManager6_clbk CMergeFileManagerdtor_CMergeFileManager6_user(nullptr);
        
        uint32_t CMergeFileManagerGetFileSize1_wrapper(struct CMergeFileManager* _this, char* arg_0)
        {
           return CMergeFileManagerGetFileSize1_user(_this, arg_0, CMergeFileManagerGetFileSize1_next);
        };
        void CMergeFileManagerInitMergeFile2_wrapper(struct CMergeFileManager* _this, char* arg_0)
        {
           CMergeFileManagerInitMergeFile2_user(_this, arg_0, CMergeFileManagerInitMergeFile2_next);
        };
        int CMergeFileManagerIsExistFile3_wrapper(struct CMergeFileManager* _this, char* arg_0)
        {
           return CMergeFileManagerIsExistFile3_user(_this, arg_0, CMergeFileManagerIsExistFile3_next);
        };
        struct _iobuf* CMergeFileManagerLoadFileOffset4_wrapper(struct CMergeFileManager* _this, char* arg_0, char* arg_1)
        {
           return CMergeFileManagerLoadFileOffset4_user(_this, arg_0, arg_1, CMergeFileManagerLoadFileOffset4_next);
        };
        void CMergeFileManagerReleaseMergeFile5_wrapper(struct CMergeFileManager* _this)
        {
           CMergeFileManagerReleaseMergeFile5_user(_this, CMergeFileManagerReleaseMergeFile5_next);
        };
        
        int64_t CMergeFileManagerdtor_CMergeFileManager6_wrapper(struct CMergeFileManager* _this)
        {
           return CMergeFileManagerdtor_CMergeFileManager6_user(_this, CMergeFileManagerdtor_CMergeFileManager6_next);
        };
        
        ::std::array<hook_record, 6> CMergeFileManager_functions = 
        {
            _hook_record {
                (LPVOID)0x14050a920L,
                (LPVOID *)&CMergeFileManagerGetFileSize1_user,
                (LPVOID *)&CMergeFileManagerGetFileSize1_next,
                (LPVOID)cast_pointer_function(CMergeFileManagerGetFileSize1_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CMergeFileManager::*)(char*))&CMergeFileManager::GetFileSize)
            },
            _hook_record {
                (LPVOID)0x14050a490L,
                (LPVOID *)&CMergeFileManagerInitMergeFile2_user,
                (LPVOID *)&CMergeFileManagerInitMergeFile2_next,
                (LPVOID)cast_pointer_function(CMergeFileManagerInitMergeFile2_wrapper),
                (LPVOID)cast_pointer_function((void(CMergeFileManager::*)(char*))&CMergeFileManager::InitMergeFile)
            },
            _hook_record {
                (LPVOID)0x14050a890L,
                (LPVOID *)&CMergeFileManagerIsExistFile3_user,
                (LPVOID *)&CMergeFileManagerIsExistFile3_next,
                (LPVOID)cast_pointer_function(CMergeFileManagerIsExistFile3_wrapper),
                (LPVOID)cast_pointer_function((int(CMergeFileManager::*)(char*))&CMergeFileManager::IsExistFile)
            },
            _hook_record {
                (LPVOID)0x14050a810L,
                (LPVOID *)&CMergeFileManagerLoadFileOffset4_user,
                (LPVOID *)&CMergeFileManagerLoadFileOffset4_next,
                (LPVOID)cast_pointer_function(CMergeFileManagerLoadFileOffset4_wrapper),
                (LPVOID)cast_pointer_function((struct _iobuf*(CMergeFileManager::*)(char*, char*))&CMergeFileManager::LoadFileOffset)
            },
            _hook_record {
                (LPVOID)0x14050a790L,
                (LPVOID *)&CMergeFileManagerReleaseMergeFile5_user,
                (LPVOID *)&CMergeFileManagerReleaseMergeFile5_next,
                (LPVOID)cast_pointer_function(CMergeFileManagerReleaseMergeFile5_wrapper),
                (LPVOID)cast_pointer_function((void(CMergeFileManager::*)())&CMergeFileManager::ReleaseMergeFile)
            },
            _hook_record {
                (LPVOID)0x14050aab0L,
                (LPVOID *)&CMergeFileManagerdtor_CMergeFileManager6_user,
                (LPVOID *)&CMergeFileManagerdtor_CMergeFileManager6_next,
                (LPVOID)cast_pointer_function(CMergeFileManagerdtor_CMergeFileManager6_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CMergeFileManager::*)())&CMergeFileManager::dtor_CMergeFileManager)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
