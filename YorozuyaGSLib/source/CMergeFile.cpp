#include <CMergeFile.hpp>


START_ATF_NAMESPACE
    uint32_t CMergeFile::GetFileOffset(uint32_t arg_0, char* arg_1)
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CMergeFile*, uint32_t, char*);
        return (org_ptr(0x14050a060L))(this, arg_0, arg_1);
    };
    uint32_t CMergeFile::GetFileSize(uint32_t arg_0, char* arg_1)
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CMergeFile*, uint32_t, char*);
        return (org_ptr(0x14050a1e0L))(this, arg_0, arg_1);
    };
    int CMergeFile::IsExistFile(char* arg_0)
    {
        using org_ptr = int (WINAPIV*)(struct CMergeFile*, char*);
        return (org_ptr(0x14050a3e0L))(this, arg_0);
    };
    struct _iobuf* CMergeFile::LoadFileOffset(char* Mode, char* arg_0)
    {
        using org_ptr = struct _iobuf* (WINAPIV*)(struct CMergeFile*, char*, char*);
        return (org_ptr(0x14050a370L))(this, Mode, arg_0);
    };
    int64_t CMergeFile::LoadMergeFileHeader(char* arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CMergeFile*, char*);
        return (org_ptr(0x140509dd0L))(this, arg_0);
    };
    void CMergeFile::ReleaseMergeFileHeader()
    {
        using org_ptr = void (WINAPIV*)(struct CMergeFile*);
        (org_ptr(0x140509f50L))(this);
    };
END_ATF_NAMESPACE
