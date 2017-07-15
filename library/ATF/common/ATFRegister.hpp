#pragma once

#include <memory>

class IRegister
{
public:
    using _ptr = ::std::shared_ptr<IRegister>;
    virtual void Register() = 0;
};

using Register_ptr = IRegister::_ptr;
