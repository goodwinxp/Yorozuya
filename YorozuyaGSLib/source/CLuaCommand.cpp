#include <CLuaCommand.hpp>


START_ATF_NAMESPACE
    CLuaCommand::CLuaCommand()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommand*);
        (org_ptr(0x14029d880L))(this);
    };
    void CLuaCommand::ctor_CLuaCommand()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommand*);
        (org_ptr(0x14029d880L))(this);
    };
    char* CLuaCommand::GetBuffer()
    {
        using org_ptr = char* (WINAPIV*)(struct CLuaCommand*);
        return (org_ptr(0x140400fd0L))(this);
    };
    char CLuaCommand::GetType()
    {
        using org_ptr = char (WINAPIV*)(struct CLuaCommand*);
        return (org_ptr(0x140400fb0L))(this);
    };
    void CLuaCommand::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommand*);
        (org_ptr(0x14029d910L))(this);
    };
    void CLuaCommand::SetCmd(char byType, char* strName)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommand*, char, char*);
        (org_ptr(0x14029d930L))(this, byType, strName);
    };
    CLuaCommand::~CLuaCommand()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommand*);
        (org_ptr(0x14029d8f0L))(this);
    };
    void CLuaCommand::dtor_CLuaCommand()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommand*);
        (org_ptr(0x14029d8f0L))(this);
    };
    
END_ATF_NAMESPACE
