#include <CMergeFileDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CMergeFileGetFileOffset1_ptr CMergeFileGetFileOffset1_next(nullptr);
        Info::CMergeFileGetFileOffset1_clbk CMergeFileGetFileOffset1_user(nullptr);
        
        Info::CMergeFileGetFileSize2_ptr CMergeFileGetFileSize2_next(nullptr);
        Info::CMergeFileGetFileSize2_clbk CMergeFileGetFileSize2_user(nullptr);
        
        Info::CMergeFileIsExistFile3_ptr CMergeFileIsExistFile3_next(nullptr);
        Info::CMergeFileIsExistFile3_clbk CMergeFileIsExistFile3_user(nullptr);
        
        Info::CMergeFileLoadFileOffset4_ptr CMergeFileLoadFileOffset4_next(nullptr);
        Info::CMergeFileLoadFileOffset4_clbk CMergeFileLoadFileOffset4_user(nullptr);
        
        Info::CMergeFileLoadMergeFileHeader5_ptr CMergeFileLoadMergeFileHeader5_next(nullptr);
        Info::CMergeFileLoadMergeFileHeader5_clbk CMergeFileLoadMergeFileHeader5_user(nullptr);
        
        Info::CMergeFileReleaseMergeFileHeader6_ptr CMergeFileReleaseMergeFileHeader6_next(nullptr);
        Info::CMergeFileReleaseMergeFileHeader6_clbk CMergeFileReleaseMergeFileHeader6_user(nullptr);
        
        uint32_t CMergeFileGetFileOffset1_wrapper(struct CMergeFile* _this, uint32_t arg_0, char* arg_1)
        {
           return CMergeFileGetFileOffset1_user(_this, arg_0, arg_1, CMergeFileGetFileOffset1_next);
        };
        uint32_t CMergeFileGetFileSize2_wrapper(struct CMergeFile* _this, uint32_t arg_0, char* arg_1)
        {
           return CMergeFileGetFileSize2_user(_this, arg_0, arg_1, CMergeFileGetFileSize2_next);
        };
        int CMergeFileIsExistFile3_wrapper(struct CMergeFile* _this, char* arg_0)
        {
           return CMergeFileIsExistFile3_user(_this, arg_0, CMergeFileIsExistFile3_next);
        };
        struct _iobuf* CMergeFileLoadFileOffset4_wrapper(struct CMergeFile* _this, char* Mode, char* arg_0)
        {
           return CMergeFileLoadFileOffset4_user(_this, Mode, arg_0, CMergeFileLoadFileOffset4_next);
        };
        int64_t CMergeFileLoadMergeFileHeader5_wrapper(struct CMergeFile* _this, char* arg_0)
        {
           return CMergeFileLoadMergeFileHeader5_user(_this, arg_0, CMergeFileLoadMergeFileHeader5_next);
        };
        void CMergeFileReleaseMergeFileHeader6_wrapper(struct CMergeFile* _this)
        {
           CMergeFileReleaseMergeFileHeader6_user(_this, CMergeFileReleaseMergeFileHeader6_next);
        };
        
        ::std::array<hook_record, 6> CMergeFile_functions = 
        {
            _hook_record {
                (LPVOID)0x14050a060L,
                (LPVOID *)&CMergeFileGetFileOffset1_user,
                (LPVOID *)&CMergeFileGetFileOffset1_next,
                (LPVOID)cast_pointer_function(CMergeFileGetFileOffset1_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CMergeFile::*)(uint32_t, char*))&CMergeFile::GetFileOffset)
            },
            _hook_record {
                (LPVOID)0x14050a1e0L,
                (LPVOID *)&CMergeFileGetFileSize2_user,
                (LPVOID *)&CMergeFileGetFileSize2_next,
                (LPVOID)cast_pointer_function(CMergeFileGetFileSize2_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CMergeFile::*)(uint32_t, char*))&CMergeFile::GetFileSize)
            },
            _hook_record {
                (LPVOID)0x14050a3e0L,
                (LPVOID *)&CMergeFileIsExistFile3_user,
                (LPVOID *)&CMergeFileIsExistFile3_next,
                (LPVOID)cast_pointer_function(CMergeFileIsExistFile3_wrapper),
                (LPVOID)cast_pointer_function((int(CMergeFile::*)(char*))&CMergeFile::IsExistFile)
            },
            _hook_record {
                (LPVOID)0x14050a370L,
                (LPVOID *)&CMergeFileLoadFileOffset4_user,
                (LPVOID *)&CMergeFileLoadFileOffset4_next,
                (LPVOID)cast_pointer_function(CMergeFileLoadFileOffset4_wrapper),
                (LPVOID)cast_pointer_function((struct _iobuf*(CMergeFile::*)(char*, char*))&CMergeFile::LoadFileOffset)
            },
            _hook_record {
                (LPVOID)0x140509dd0L,
                (LPVOID *)&CMergeFileLoadMergeFileHeader5_user,
                (LPVOID *)&CMergeFileLoadMergeFileHeader5_next,
                (LPVOID)cast_pointer_function(CMergeFileLoadMergeFileHeader5_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CMergeFile::*)(char*))&CMergeFile::LoadMergeFileHeader)
            },
            _hook_record {
                (LPVOID)0x140509f50L,
                (LPVOID *)&CMergeFileReleaseMergeFileHeader6_user,
                (LPVOID *)&CMergeFileReleaseMergeFileHeader6_next,
                (LPVOID)cast_pointer_function(CMergeFileReleaseMergeFileHeader6_wrapper),
                (LPVOID)cast_pointer_function((void(CMergeFile::*)())&CMergeFile::ReleaseMergeFileHeader)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
