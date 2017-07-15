#include <AINetFileDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::AINetFilector_AINetFile2_ptr AINetFilector_AINetFile2_next(nullptr);
        Info::AINetFilector_AINetFile2_clbk AINetFilector_AINetFile2_user(nullptr);
        
        Info::AINetFileClose4_ptr AINetFileClose4_next(nullptr);
        Info::AINetFileClose4_clbk AINetFileClose4_user(nullptr);
        
        Info::AINetFileRead6_ptr AINetFileRead6_next(nullptr);
        Info::AINetFileRead6_clbk AINetFileRead6_user(nullptr);
        
        Info::AINetFileWrite8_ptr AINetFileWrite8_next(nullptr);
        Info::AINetFileWrite8_clbk AINetFileWrite8_user(nullptr);
        
        Info::AINetFileWriteString10_ptr AINetFileWriteString10_next(nullptr);
        Info::AINetFileWriteString10_clbk AINetFileWriteString10_user(nullptr);
        
        
        Info::AINetFiledtor_AINetFile15_ptr AINetFiledtor_AINetFile15_next(nullptr);
        Info::AINetFiledtor_AINetFile15_clbk AINetFiledtor_AINetFile15_user(nullptr);
        
        
        void AINetFilector_AINetFile2_wrapper(struct AINetFile* _this, void* hFile, unsigned int dwAccess)
        {
           AINetFilector_AINetFile2_user(_this, hFile, dwAccess, AINetFilector_AINetFile2_next);
        };
        void AINetFileClose4_wrapper(struct AINetFile* _this)
        {
           AINetFileClose4_user(_this, AINetFileClose4_next);
        };
        unsigned int AINetFileRead6_wrapper(struct AINetFile* _this, void* lpBuf, unsigned int nCount)
        {
           return AINetFileRead6_user(_this, lpBuf, nCount, AINetFileRead6_next);
        };
        unsigned int AINetFileWrite8_wrapper(struct AINetFile* _this, void* lpBuf, unsigned int nCount)
        {
           return AINetFileWrite8_user(_this, lpBuf, nCount, AINetFileWrite8_next);
        };
        int AINetFileWriteString10_wrapper(struct AINetFile* _this, char* str)
        {
           return AINetFileWriteString10_user(_this, str, AINetFileWriteString10_next);
        };
        
        void AINetFiledtor_AINetFile15_wrapper(struct AINetFile* _this)
        {
           AINetFiledtor_AINetFile15_user(_this, AINetFiledtor_AINetFile15_next);
        };
        
        ::std::array<hook_record, 6> AINetFile_functions = 
        {
            _hook_record {
                (LPVOID)0x140432380L,
                (LPVOID *)&AINetFilector_AINetFile2_user,
                (LPVOID *)&AINetFilector_AINetFile2_next,
                (LPVOID)cast_pointer_function(AINetFilector_AINetFile2_wrapper),
                (LPVOID)cast_pointer_function((void(AINetFile::*)(void*, unsigned int))&AINetFile::ctor_AINetFile)
            },
            _hook_record {
                (LPVOID)0x140432600L,
                (LPVOID *)&AINetFileClose4_user,
                (LPVOID *)&AINetFileClose4_next,
                (LPVOID)cast_pointer_function(AINetFileClose4_wrapper),
                (LPVOID)cast_pointer_function((void(AINetFile::*)())&AINetFile::Close)
            },
            _hook_record {
                (LPVOID)0x140432420L,
                (LPVOID *)&AINetFileRead6_user,
                (LPVOID *)&AINetFileRead6_next,
                (LPVOID)cast_pointer_function(AINetFileRead6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(AINetFile::*)(void*, unsigned int))&AINetFile::Read)
            },
            _hook_record {
                (LPVOID)0x1404324a0L,
                (LPVOID *)&AINetFileWrite8_user,
                (LPVOID *)&AINetFileWrite8_next,
                (LPVOID)cast_pointer_function(AINetFileWrite8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(AINetFile::*)(void*, unsigned int))&AINetFile::Write)
            },
            _hook_record {
                (LPVOID)0x140432520L,
                (LPVOID *)&AINetFileWriteString10_user,
                (LPVOID *)&AINetFileWriteString10_next,
                (LPVOID)cast_pointer_function(AINetFileWriteString10_wrapper),
                (LPVOID)cast_pointer_function((int(AINetFile::*)(char*))&AINetFile::WriteString)
            },
            _hook_record {
                (LPVOID)0x1404323d0L,
                (LPVOID *)&AINetFiledtor_AINetFile15_user,
                (LPVOID *)&AINetFiledtor_AINetFile15_next,
                (LPVOID)cast_pointer_function(AINetFiledtor_AINetFile15_wrapper),
                (LPVOID)cast_pointer_function((void(AINetFile::*)())&AINetFile::dtor_AINetFile)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
