#include <CIniFileDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CIniFilector_CIniFile2_ptr CIniFilector_CIniFile2_next(nullptr);
        Info::CIniFilector_CIniFile2_clbk CIniFilector_CIniFile2_user(nullptr);
        
        
        Info::CIniFilector_CIniFile4_ptr CIniFilector_CIniFile4_next(nullptr);
        Info::CIniFilector_CIniFile4_clbk CIniFilector_CIniFile4_user(nullptr);
        
        Info::CIniFileClear6_ptr CIniFileClear6_next(nullptr);
        Info::CIniFileClear6_clbk CIniFileClear6_user(nullptr);
        
        Info::CIniFileDeleteKey8_ptr CIniFileDeleteKey8_next(nullptr);
        Info::CIniFileDeleteKey8_clbk CIniFileDeleteKey8_user(nullptr);
        
        Info::CIniFileDeleteKey10_ptr CIniFileDeleteKey10_next(nullptr);
        Info::CIniFileDeleteKey10_clbk CIniFileDeleteKey10_user(nullptr);
        
        Info::CIniFileDeleteSection12_ptr CIniFileDeleteSection12_next(nullptr);
        Info::CIniFileDeleteSection12_clbk CIniFileDeleteSection12_user(nullptr);
        
        Info::CIniFileDeleteSection14_ptr CIniFileDeleteSection14_next(nullptr);
        Info::CIniFileDeleteSection14_clbk CIniFileDeleteSection14_user(nullptr);
        
        Info::CIniFileGetKey16_ptr CIniFileGetKey16_next(nullptr);
        Info::CIniFileGetKey16_clbk CIniFileGetKey16_user(nullptr);
        
        Info::CIniFileGetSection18_ptr CIniFileGetSection18_next(nullptr);
        Info::CIniFileGetSection18_clbk CIniFileGetSection18_user(nullptr);
        
        Info::CIniFileGetSection20_ptr CIniFileGetSection20_next(nullptr);
        Info::CIniFileGetSection20_clbk CIniFileGetSection20_user(nullptr);
        
        Info::CIniFileGetSectionSize22_ptr CIniFileGetSectionSize22_next(nullptr);
        Info::CIniFileGetSectionSize22_clbk CIniFileGetSectionSize22_user(nullptr);
        
        Info::CIniFileLoad24_ptr CIniFileLoad24_next(nullptr);
        Info::CIniFileLoad24_clbk CIniFileLoad24_user(nullptr);
        
        Info::CIniFileLoadKey26_ptr CIniFileLoadKey26_next(nullptr);
        Info::CIniFileLoadKey26_clbk CIniFileLoadKey26_user(nullptr);
        
        Info::CIniFileLoadSection28_ptr CIniFileLoadSection28_next(nullptr);
        Info::CIniFileLoadSection28_clbk CIniFileLoadSection28_user(nullptr);
        
        Info::CIniFileMerge_Intersection30_ptr CIniFileMerge_Intersection30_next(nullptr);
        Info::CIniFileMerge_Intersection30_clbk CIniFileMerge_Intersection30_user(nullptr);
        
        Info::CIniFileMerge_SumOfSets32_ptr CIniFileMerge_SumOfSets32_next(nullptr);
        Info::CIniFileMerge_SumOfSets32_clbk CIniFileMerge_SumOfSets32_user(nullptr);
        
        Info::CIniFileSave34_ptr CIniFileSave34_next(nullptr);
        Info::CIniFileSave34_clbk CIniFileSave34_user(nullptr);
        
        Info::CIniFileSaveKey36_ptr CIniFileSaveKey36_next(nullptr);
        Info::CIniFileSaveKey36_clbk CIniFileSaveKey36_user(nullptr);
        
        Info::CIniFileSaveSection38_ptr CIniFileSaveSection38_next(nullptr);
        Info::CIniFileSaveSection38_clbk CIniFileSaveSection38_user(nullptr);
        
        Info::CIniFileSetIniFilename40_ptr CIniFileSetIniFilename40_next(nullptr);
        Info::CIniFileSetIniFilename40_clbk CIniFileSetIniFilename40_user(nullptr);
        
        Info::CIniFileSplitKey42_ptr CIniFileSplitKey42_next(nullptr);
        Info::CIniFileSplitKey42_clbk CIniFileSplitKey42_user(nullptr);
        
        Info::CIniFileWriteString44_ptr CIniFileWriteString44_next(nullptr);
        Info::CIniFileWriteString44_clbk CIniFileWriteString44_user(nullptr);
        
        
        Info::CIniFiledtor_CIniFile49_ptr CIniFiledtor_CIniFile49_next(nullptr);
        Info::CIniFiledtor_CIniFile49_clbk CIniFiledtor_CIniFile49_user(nullptr);
        
        
        void CIniFilector_CIniFile2_wrapper(struct CIniFile* _this, char* strPath)
        {
           CIniFilector_CIniFile2_user(_this, strPath, CIniFilector_CIniFile2_next);
        };
        
        void CIniFilector_CIniFile4_wrapper(struct CIniFile* _this)
        {
           CIniFilector_CIniFile4_user(_this, CIniFilector_CIniFile4_next);
        };
        void CIniFileClear6_wrapper(struct CIniFile* _this)
        {
           CIniFileClear6_user(_this, CIniFileClear6_next);
        };
        bool CIniFileDeleteKey8_wrapper(struct CIniFile* _this, struct INI_Key* pKey)
        {
           return CIniFileDeleteKey8_user(_this, pKey, CIniFileDeleteKey8_next);
        };
        int CIniFileDeleteKey10_wrapper(struct CIniFile* _this, char* lpSection, char* lpKey)
        {
           return CIniFileDeleteKey10_user(_this, lpSection, lpKey, CIniFileDeleteKey10_next);
        };
        bool CIniFileDeleteSection12_wrapper(struct CIniFile* _this, struct INI_Section* pSection)
        {
           return CIniFileDeleteSection12_user(_this, pSection, CIniFileDeleteSection12_next);
        };
        int CIniFileDeleteSection14_wrapper(struct CIniFile* _this, char* lpSection)
        {
           return CIniFileDeleteSection14_user(_this, lpSection, CIniFileDeleteSection14_next);
        };
        struct INI_Key* CIniFileGetKey16_wrapper(struct CIniFile* _this, char* strSection, char* strKey)
        {
           return CIniFileGetKey16_user(_this, strSection, strKey, CIniFileGetKey16_next);
        };
        struct INI_Section* CIniFileGetSection18_wrapper(struct CIniFile* _this, char* strSection)
        {
           return CIniFileGetSection18_user(_this, strSection, CIniFileGetSection18_next);
        };
        struct INI_Section* CIniFileGetSection20_wrapper(struct CIniFile* _this, unsigned int dwIndex)
        {
           return CIniFileGetSection20_user(_this, dwIndex, CIniFileGetSection20_next);
        };
        unsigned int CIniFileGetSectionSize22_wrapper(struct CIniFile* _this)
        {
           return CIniFileGetSectionSize22_user(_this, CIniFileGetSectionSize22_next);
        };
        bool CIniFileLoad24_wrapper(struct CIniFile* _this)
        {
           return CIniFileLoad24_user(_this, CIniFileLoad24_next);
        };
        struct INI_Key* CIniFileLoadKey26_wrapper(struct CIniFile* _this, char* strSection, char* strKey)
        {
           return CIniFileLoadKey26_user(_this, strSection, strKey, CIniFileLoadKey26_next);
        };
        struct INI_Section* CIniFileLoadSection28_wrapper(struct CIniFile* _this, char* strSection)
        {
           return CIniFileLoadSection28_user(_this, strSection, CIniFileLoadSection28_next);
        };
        bool CIniFileMerge_Intersection30_wrapper(struct CIniFile* _this, struct CIniFile* rhs)
        {
           return CIniFileMerge_Intersection30_user(_this, rhs, CIniFileMerge_Intersection30_next);
        };
        bool CIniFileMerge_SumOfSets32_wrapper(struct CIniFile* _this, struct CIniFile* rhs)
        {
           return CIniFileMerge_SumOfSets32_user(_this, rhs, CIniFileMerge_SumOfSets32_next);
        };
        void CIniFileSave34_wrapper(struct CIniFile* _this)
        {
           CIniFileSave34_user(_this, CIniFileSave34_next);
        };
        bool CIniFileSaveKey36_wrapper(struct CIniFile* _this, struct INI_Key* pKey)
        {
           return CIniFileSaveKey36_user(_this, pKey, CIniFileSaveKey36_next);
        };
        bool CIniFileSaveSection38_wrapper(struct CIniFile* _this, struct INI_Section* pSection)
        {
           return CIniFileSaveSection38_user(_this, pSection, CIniFileSaveSection38_next);
        };
        void CIniFileSetIniFilename40_wrapper(struct CIniFile* _this, char* strPath)
        {
           CIniFileSetIniFilename40_user(_this, strPath, CIniFileSetIniFilename40_next);
        };
        bool CIniFileSplitKey42_wrapper(struct CIniFile* _this, char* strBase, char* strKey, int nKeyLen)
        {
           return CIniFileSplitKey42_user(_this, strBase, strKey, nKeyLen, CIniFileSplitKey42_next);
        };
        bool CIniFileWriteString44_wrapper(struct CIniFile* _this, char* strSection, char* strKey, char* strValue)
        {
           return CIniFileWriteString44_user(_this, strSection, strKey, strValue, CIniFileWriteString44_next);
        };
        
        void CIniFiledtor_CIniFile49_wrapper(struct CIniFile* _this)
        {
           CIniFiledtor_CIniFile49_user(_this, CIniFiledtor_CIniFile49_next);
        };
        
        ::std::array<hook_record, 23> CIniFile_functions = 
        {
            _hook_record {
                (LPVOID)0x14046c530L,
                (LPVOID *)&CIniFilector_CIniFile2_user,
                (LPVOID *)&CIniFilector_CIniFile2_next,
                (LPVOID)cast_pointer_function(CIniFilector_CIniFile2_wrapper),
                (LPVOID)cast_pointer_function((void(CIniFile::*)(char*))&CIniFile::ctor_CIniFile)
            },
            _hook_record {
                (LPVOID)0x14046c4d0L,
                (LPVOID *)&CIniFilector_CIniFile4_user,
                (LPVOID *)&CIniFilector_CIniFile4_next,
                (LPVOID)cast_pointer_function(CIniFilector_CIniFile4_wrapper),
                (LPVOID)cast_pointer_function((void(CIniFile::*)())&CIniFile::ctor_CIniFile)
            },
            _hook_record {
                (LPVOID)0x14046c8c0L,
                (LPVOID *)&CIniFileClear6_user,
                (LPVOID *)&CIniFileClear6_next,
                (LPVOID)cast_pointer_function(CIniFileClear6_wrapper),
                (LPVOID)cast_pointer_function((void(CIniFile::*)())&CIniFile::Clear)
            },
            _hook_record {
                (LPVOID)0x14046da40L,
                (LPVOID *)&CIniFileDeleteKey8_user,
                (LPVOID *)&CIniFileDeleteKey8_next,
                (LPVOID)cast_pointer_function(CIniFileDeleteKey8_wrapper),
                (LPVOID)cast_pointer_function((bool(CIniFile::*)(struct INI_Key*))&CIniFile::DeleteKey)
            },
            _hook_record {
                (LPVOID)0x14046d490L,
                (LPVOID *)&CIniFileDeleteKey10_user,
                (LPVOID *)&CIniFileDeleteKey10_next,
                (LPVOID)cast_pointer_function(CIniFileDeleteKey10_wrapper),
                (LPVOID)cast_pointer_function((int(CIniFile::*)(char*, char*))&CIniFile::DeleteKey)
            },
            _hook_record {
                (LPVOID)0x14046d4f0L,
                (LPVOID *)&CIniFileDeleteSection12_user,
                (LPVOID *)&CIniFileDeleteSection12_next,
                (LPVOID)cast_pointer_function(CIniFileDeleteSection12_wrapper),
                (LPVOID)cast_pointer_function((bool(CIniFile::*)(struct INI_Section*))&CIniFile::DeleteSection)
            },
            _hook_record {
                (LPVOID)0x14046d430L,
                (LPVOID *)&CIniFileDeleteSection14_user,
                (LPVOID *)&CIniFileDeleteSection14_next,
                (LPVOID)cast_pointer_function(CIniFileDeleteSection14_wrapper),
                (LPVOID)cast_pointer_function((int(CIniFile::*)(char*))&CIniFile::DeleteSection)
            },
            _hook_record {
                (LPVOID)0x14046d3c0L,
                (LPVOID *)&CIniFileGetKey16_user,
                (LPVOID *)&CIniFileGetKey16_next,
                (LPVOID)cast_pointer_function(CIniFileGetKey16_wrapper),
                (LPVOID)cast_pointer_function((struct INI_Key*(CIniFile::*)(char*, char*))&CIniFile::GetKey)
            },
            _hook_record {
                (LPVOID)0x14046d160L,
                (LPVOID *)&CIniFileGetSection18_user,
                (LPVOID *)&CIniFileGetSection18_next,
                (LPVOID)cast_pointer_function(CIniFileGetSection18_wrapper),
                (LPVOID)cast_pointer_function((struct INI_Section*(CIniFile::*)(char*))&CIniFile::GetSection)
            },
            _hook_record {
                (LPVOID)0x14041b830L,
                (LPVOID *)&CIniFileGetSection20_user,
                (LPVOID *)&CIniFileGetSection20_next,
                (LPVOID)cast_pointer_function(CIniFileGetSection20_wrapper),
                (LPVOID)cast_pointer_function((struct INI_Section*(CIniFile::*)(unsigned int))&CIniFile::GetSection)
            },
            _hook_record {
                (LPVOID)0x14041b7e0L,
                (LPVOID *)&CIniFileGetSectionSize22_user,
                (LPVOID *)&CIniFileGetSectionSize22_next,
                (LPVOID)cast_pointer_function(CIniFileGetSectionSize22_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CIniFile::*)())&CIniFile::GetSectionSize)
            },
            _hook_record {
                (LPVOID)0x14046c6d0L,
                (LPVOID *)&CIniFileLoad24_user,
                (LPVOID *)&CIniFileLoad24_next,
                (LPVOID)cast_pointer_function(CIniFileLoad24_wrapper),
                (LPVOID)cast_pointer_function((bool(CIniFile::*)())&CIniFile::Load)
            },
            _hook_record {
                (LPVOID)0x14046cf90L,
                (LPVOID *)&CIniFileLoadKey26_user,
                (LPVOID *)&CIniFileLoadKey26_next,
                (LPVOID)cast_pointer_function(CIniFileLoadKey26_wrapper),
                (LPVOID)cast_pointer_function((struct INI_Key*(CIniFile::*)(char*, char*))&CIniFile::LoadKey)
            },
            _hook_record {
                (LPVOID)0x14046cc20L,
                (LPVOID *)&CIniFileLoadSection28_user,
                (LPVOID *)&CIniFileLoadSection28_next,
                (LPVOID)cast_pointer_function(CIniFileLoadSection28_wrapper),
                (LPVOID)cast_pointer_function((struct INI_Section*(CIniFile::*)(char*))&CIniFile::LoadSection)
            },
            _hook_record {
                (LPVOID)0x14046e6a0L,
                (LPVOID *)&CIniFileMerge_Intersection30_user,
                (LPVOID *)&CIniFileMerge_Intersection30_next,
                (LPVOID)cast_pointer_function(CIniFileMerge_Intersection30_wrapper),
                (LPVOID)cast_pointer_function((bool(CIniFile::*)(struct CIniFile*))&CIniFile::Merge_Intersection)
            },
            _hook_record {
                (LPVOID)0x14046e230L,
                (LPVOID *)&CIniFileMerge_SumOfSets32_user,
                (LPVOID *)&CIniFileMerge_SumOfSets32_next,
                (LPVOID)cast_pointer_function(CIniFileMerge_SumOfSets32_wrapper),
                (LPVOID)cast_pointer_function((bool(CIniFile::*)(struct CIniFile*))&CIniFile::Merge_SumOfSets)
            },
            _hook_record {
                (LPVOID)0x14046dd10L,
                (LPVOID *)&CIniFileSave34_user,
                (LPVOID *)&CIniFileSave34_next,
                (LPVOID)cast_pointer_function(CIniFileSave34_wrapper),
                (LPVOID)cast_pointer_function((void(CIniFile::*)())&CIniFile::Save)
            },
            _hook_record {
                (LPVOID)0x14046e1a0L,
                (LPVOID *)&CIniFileSaveKey36_user,
                (LPVOID *)&CIniFileSaveKey36_next,
                (LPVOID)cast_pointer_function(CIniFileSaveKey36_wrapper),
                (LPVOID)cast_pointer_function((bool(CIniFile::*)(struct INI_Key*))&CIniFile::SaveKey)
            },
            _hook_record {
                (LPVOID)0x14046df30L,
                (LPVOID *)&CIniFileSaveSection38_user,
                (LPVOID *)&CIniFileSaveSection38_next,
                (LPVOID)cast_pointer_function(CIniFileSaveSection38_wrapper),
                (LPVOID)cast_pointer_function((bool(CIniFile::*)(struct INI_Section*))&CIniFile::SaveSection)
            },
            _hook_record {
                (LPVOID)0x14046c660L,
                (LPVOID *)&CIniFileSetIniFilename40_user,
                (LPVOID *)&CIniFileSetIniFilename40_next,
                (LPVOID)cast_pointer_function(CIniFileSetIniFilename40_wrapper),
                (LPVOID)cast_pointer_function((void(CIniFile::*)(char*))&CIniFile::SetIniFilename)
            },
            _hook_record {
                (LPVOID)0x14046cb30L,
                (LPVOID *)&CIniFileSplitKey42_user,
                (LPVOID *)&CIniFileSplitKey42_next,
                (LPVOID)cast_pointer_function(CIniFileSplitKey42_wrapper),
                (LPVOID)cast_pointer_function((bool(CIniFile::*)(char*, char*, int))&CIniFile::SplitKey)
            },
            _hook_record {
                (LPVOID)0x14046eb50L,
                (LPVOID *)&CIniFileWriteString44_user,
                (LPVOID *)&CIniFileWriteString44_next,
                (LPVOID)cast_pointer_function(CIniFileWriteString44_wrapper),
                (LPVOID)cast_pointer_function((bool(CIniFile::*)(char*, char*, char*))&CIniFile::WriteString)
            },
            _hook_record {
                (LPVOID)0x14046c5d0L,
                (LPVOID *)&CIniFiledtor_CIniFile49_user,
                (LPVOID *)&CIniFiledtor_CIniFile49_next,
                (LPVOID)cast_pointer_function(CIniFiledtor_CIniFile49_wrapper),
                (LPVOID)cast_pointer_function((void(CIniFile::*)())&CIniFile::dtor_CIniFile)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
