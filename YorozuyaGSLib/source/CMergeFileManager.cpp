#include <CMergeFileManager.hpp>


START_ATF_NAMESPACE
    uint32_t CMergeFileManager::GetFileSize(char* arg_0)
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CMergeFileManager*, char*);
        return (org_ptr(0x14050a920L))(this, arg_0);
    };
    void CMergeFileManager::InitMergeFile(char* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CMergeFileManager*, char*);
        (org_ptr(0x14050a490L))(this, arg_0);
    };
    int CMergeFileManager::IsExistFile(char* arg_0)
    {
        using org_ptr = int (WINAPIV*)(struct CMergeFileManager*, char*);
        return (org_ptr(0x14050a890L))(this, arg_0);
    };
    struct _iobuf* CMergeFileManager::LoadFileOffset(char* arg_0, char* arg_1)
    {
        using org_ptr = struct _iobuf* (WINAPIV*)(struct CMergeFileManager*, char*, char*);
        return (org_ptr(0x14050a810L))(this, arg_0, arg_1);
    };
    void CMergeFileManager::ReleaseMergeFile()
    {
        using org_ptr = void (WINAPIV*)(struct CMergeFileManager*);
        (org_ptr(0x14050a790L))(this);
    };
    CMergeFileManager::~CMergeFileManager()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CMergeFileManager*);
        (org_ptr(0x14050aab0L))(this);
    };
    int64_t CMergeFileManager::dtor_CMergeFileManager()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CMergeFileManager*);
        return (org_ptr(0x14050aab0L))(this);
    };
END_ATF_NAMESPACE
