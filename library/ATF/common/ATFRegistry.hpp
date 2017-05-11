#pragma once

#include <memory>

class IRegistry
{
public:
	virtual void registry() = 0;
};

using ImplWrapper_ptr = std::shared_ptr<IRegistry>;