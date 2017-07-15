#include <AINetFtpDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::AINetFtpctor_AINetFtp2_ptr AINetFtpctor_AINetFtp2_next(nullptr);
        Info::AINetFtpctor_AINetFtp2_clbk AINetFtpctor_AINetFtp2_user(nullptr);
        
        Info::AINetFtpClose4_ptr AINetFtpClose4_next(nullptr);
        Info::AINetFtpClose4_clbk AINetFtpClose4_user(nullptr);
        
        Info::AINetFtpCreateDirectoryA6_ptr AINetFtpCreateDirectoryA6_next(nullptr);
        Info::AINetFtpCreateDirectoryA6_clbk AINetFtpCreateDirectoryA6_user(nullptr);
        
        Info::AINetFtpGetCurrentDirectoryA8_ptr AINetFtpGetCurrentDirectoryA8_next(nullptr);
        Info::AINetFtpGetCurrentDirectoryA8_clbk AINetFtpGetCurrentDirectoryA8_user(nullptr);
        
        Info::AINetFtpGetFile10_ptr AINetFtpGetFile10_next(nullptr);
        Info::AINetFtpGetFile10_clbk AINetFtpGetFile10_user(nullptr);
        
        Info::AINetFtpOpen12_ptr AINetFtpOpen12_next(nullptr);
        Info::AINetFtpOpen12_clbk AINetFtpOpen12_user(nullptr);
        
        Info::AINetFtpOpenFile14_ptr AINetFtpOpenFile14_next(nullptr);
        Info::AINetFtpOpenFile14_clbk AINetFtpOpenFile14_user(nullptr);
        
        Info::AINetFtpPutFile16_ptr AINetFtpPutFile16_next(nullptr);
        Info::AINetFtpPutFile16_clbk AINetFtpPutFile16_user(nullptr);
        
        Info::AINetFtpRemove18_ptr AINetFtpRemove18_next(nullptr);
        Info::AINetFtpRemove18_clbk AINetFtpRemove18_user(nullptr);
        
        Info::AINetFtpRemoveDirectoryA20_ptr AINetFtpRemoveDirectoryA20_next(nullptr);
        Info::AINetFtpRemoveDirectoryA20_clbk AINetFtpRemoveDirectoryA20_user(nullptr);
        
        Info::AINetFtpRename22_ptr AINetFtpRename22_next(nullptr);
        Info::AINetFtpRename22_clbk AINetFtpRename22_user(nullptr);
        
        Info::AINetFtpSetCurrentDirectoryA24_ptr AINetFtpSetCurrentDirectoryA24_next(nullptr);
        Info::AINetFtpSetCurrentDirectoryA24_clbk AINetFtpSetCurrentDirectoryA24_user(nullptr);
        
        
        Info::AINetFtpdtor_AINetFtp29_ptr AINetFtpdtor_AINetFtp29_next(nullptr);
        Info::AINetFtpdtor_AINetFtp29_clbk AINetFtpdtor_AINetFtp29_user(nullptr);
        
        
        void AINetFtpctor_AINetFtp2_wrapper(struct AINetFtp* _this)
        {
           AINetFtpctor_AINetFtp2_user(_this, AINetFtpctor_AINetFtp2_next);
        };
        void AINetFtpClose4_wrapper(struct AINetFtp* _this)
        {
           AINetFtpClose4_user(_this, AINetFtpClose4_next);
        };
        int AINetFtpCreateDirectoryA6_wrapper(struct AINetFtp* _this, char* pstrDirName)
        {
           return AINetFtpCreateDirectoryA6_user(_this, pstrDirName, AINetFtpCreateDirectoryA6_next);
        };
        int AINetFtpGetCurrentDirectoryA8_wrapper(struct AINetFtp* _this, char* pstrDirName, unsigned int* lpdwLen)
        {
           return AINetFtpGetCurrentDirectoryA8_user(_this, pstrDirName, lpdwLen, AINetFtpGetCurrentDirectoryA8_next);
        };
        int AINetFtpGetFile10_wrapper(struct AINetFtp* _this, char* pstrRemoteFile, char* pstrLocalFile, int bFailIfExists, unsigned int dwAttributes, unsigned int dwFlags, unsigned int dwContext)
        {
           return AINetFtpGetFile10_user(_this, pstrRemoteFile, pstrLocalFile, bFailIfExists, dwAttributes, dwFlags, dwContext, AINetFtpGetFile10_next);
        };
        int AINetFtpOpen12_wrapper(struct AINetFtp* _this, char* pstrServer, char* pstrUserName, char* pstrPassword, uint16_t nPort, int bPassive, unsigned int dwContext)
        {
           return AINetFtpOpen12_user(_this, pstrServer, pstrUserName, pstrPassword, nPort, bPassive, dwContext, AINetFtpOpen12_next);
        };
        struct AINetFile* AINetFtpOpenFile14_wrapper(struct AINetFtp* _this, char* pstrFileName, unsigned int dwAccess, unsigned int dwFlags, unsigned int dwContext)
        {
           return AINetFtpOpenFile14_user(_this, pstrFileName, dwAccess, dwFlags, dwContext, AINetFtpOpenFile14_next);
        };
        int AINetFtpPutFile16_wrapper(struct AINetFtp* _this, char* pstrLocalFile, char* pstrRemoteFile, unsigned int dwFlags, unsigned int dwContext)
        {
           return AINetFtpPutFile16_user(_this, pstrLocalFile, pstrRemoteFile, dwFlags, dwContext, AINetFtpPutFile16_next);
        };
        int AINetFtpRemove18_wrapper(struct AINetFtp* _this, char* pstrFileName)
        {
           return AINetFtpRemove18_user(_this, pstrFileName, AINetFtpRemove18_next);
        };
        int AINetFtpRemoveDirectoryA20_wrapper(struct AINetFtp* _this, char* pstrDirName)
        {
           return AINetFtpRemoveDirectoryA20_user(_this, pstrDirName, AINetFtpRemoveDirectoryA20_next);
        };
        int AINetFtpRename22_wrapper(struct AINetFtp* _this, char* pstrExisting, char* pstrNew)
        {
           return AINetFtpRename22_user(_this, pstrExisting, pstrNew, AINetFtpRename22_next);
        };
        int AINetFtpSetCurrentDirectoryA24_wrapper(struct AINetFtp* _this, char* pstrDirName)
        {
           return AINetFtpSetCurrentDirectoryA24_user(_this, pstrDirName, AINetFtpSetCurrentDirectoryA24_next);
        };
        
        void AINetFtpdtor_AINetFtp29_wrapper(struct AINetFtp* _this)
        {
           AINetFtpdtor_AINetFtp29_user(_this, AINetFtpdtor_AINetFtp29_next);
        };
        
        ::std::array<hook_record, 13> AINetFtp_functions = 
        {
            _hook_record {
                (LPVOID)0x140432660L,
                (LPVOID *)&AINetFtpctor_AINetFtp2_user,
                (LPVOID *)&AINetFtpctor_AINetFtp2_next,
                (LPVOID)cast_pointer_function(AINetFtpctor_AINetFtp2_wrapper),
                (LPVOID)cast_pointer_function((void(AINetFtp::*)())&AINetFtp::ctor_AINetFtp)
            },
            _hook_record {
                (LPVOID)0x140432840L,
                (LPVOID *)&AINetFtpClose4_user,
                (LPVOID *)&AINetFtpClose4_next,
                (LPVOID)cast_pointer_function(AINetFtpClose4_wrapper),
                (LPVOID)cast_pointer_function((void(AINetFtp::*)())&AINetFtp::Close)
            },
            _hook_record {
                (LPVOID)0x140432a70L,
                (LPVOID *)&AINetFtpCreateDirectoryA6_user,
                (LPVOID *)&AINetFtpCreateDirectoryA6_next,
                (LPVOID)cast_pointer_function(AINetFtpCreateDirectoryA6_wrapper),
                (LPVOID)cast_pointer_function((int(AINetFtp::*)(char*))&AINetFtp::CreateDirectoryA)
            },
            _hook_record {
                (LPVOID)0x140432b60L,
                (LPVOID *)&AINetFtpGetCurrentDirectoryA8_user,
                (LPVOID *)&AINetFtpGetCurrentDirectoryA8_next,
                (LPVOID)cast_pointer_function(AINetFtpGetCurrentDirectoryA8_wrapper),
                (LPVOID)cast_pointer_function((int(AINetFtp::*)(char*, unsigned int*))&AINetFtp::GetCurrentDirectoryA)
            },
            _hook_record {
                (LPVOID)0x140432920L,
                (LPVOID *)&AINetFtpGetFile10_user,
                (LPVOID *)&AINetFtpGetFile10_next,
                (LPVOID)cast_pointer_function(AINetFtpGetFile10_wrapper),
                (LPVOID)cast_pointer_function((int(AINetFtp::*)(char*, char*, int, unsigned int, unsigned int, unsigned int))&AINetFtp::GetFile)
            },
            _hook_record {
                (LPVOID)0x140432770L,
                (LPVOID *)&AINetFtpOpen12_user,
                (LPVOID *)&AINetFtpOpen12_next,
                (LPVOID)cast_pointer_function(AINetFtpOpen12_wrapper),
                (LPVOID)cast_pointer_function((int(AINetFtp::*)(char*, char*, char*, uint16_t, int, unsigned int))&AINetFtp::Open)
            },
            _hook_record {
                (LPVOID)0x140432bc0L,
                (LPVOID *)&AINetFtpOpenFile14_user,
                (LPVOID *)&AINetFtpOpenFile14_next,
                (LPVOID)cast_pointer_function(AINetFtpOpenFile14_wrapper),
                (LPVOID)cast_pointer_function((struct AINetFile*(AINetFtp::*)(char*, unsigned int, unsigned int, unsigned int))&AINetFtp::OpenFile)
            },
            _hook_record {
                (LPVOID)0x1404328a0L,
                (LPVOID *)&AINetFtpPutFile16_user,
                (LPVOID *)&AINetFtpPutFile16_next,
                (LPVOID)cast_pointer_function(AINetFtpPutFile16_wrapper),
                (LPVOID)cast_pointer_function((int(AINetFtp::*)(char*, char*, unsigned int, unsigned int))&AINetFtp::PutFile)
            },
            _hook_record {
                (LPVOID)0x1404329c0L,
                (LPVOID *)&AINetFtpRemove18_user,
                (LPVOID *)&AINetFtpRemove18_next,
                (LPVOID)cast_pointer_function(AINetFtpRemove18_wrapper),
                (LPVOID)cast_pointer_function((int(AINetFtp::*)(char*))&AINetFtp::Remove)
            },
            _hook_record {
                (LPVOID)0x140432ac0L,
                (LPVOID *)&AINetFtpRemoveDirectoryA20_user,
                (LPVOID *)&AINetFtpRemoveDirectoryA20_next,
                (LPVOID)cast_pointer_function(AINetFtpRemoveDirectoryA20_wrapper),
                (LPVOID)cast_pointer_function((int(AINetFtp::*)(char*))&AINetFtp::RemoveDirectoryA)
            },
            _hook_record {
                (LPVOID)0x140432a10L,
                (LPVOID *)&AINetFtpRename22_user,
                (LPVOID *)&AINetFtpRename22_next,
                (LPVOID)cast_pointer_function(AINetFtpRename22_wrapper),
                (LPVOID)cast_pointer_function((int(AINetFtp::*)(char*, char*))&AINetFtp::Rename)
            },
            _hook_record {
                (LPVOID)0x140432b10L,
                (LPVOID *)&AINetFtpSetCurrentDirectoryA24_user,
                (LPVOID *)&AINetFtpSetCurrentDirectoryA24_next,
                (LPVOID)cast_pointer_function(AINetFtpSetCurrentDirectoryA24_wrapper),
                (LPVOID)cast_pointer_function((int(AINetFtp::*)(char*))&AINetFtp::SetCurrentDirectoryA)
            },
            _hook_record {
                (LPVOID)0x1404326e0L,
                (LPVOID *)&AINetFtpdtor_AINetFtp29_user,
                (LPVOID *)&AINetFtpdtor_AINetFtp29_next,
                (LPVOID)cast_pointer_function(AINetFtpdtor_AINetFtp29_wrapper),
                (LPVOID)cast_pointer_function((void(AINetFtp::*)())&AINetFtp::dtor_AINetFtp)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
