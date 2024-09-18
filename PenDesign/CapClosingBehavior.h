#pragma once
#include "IClosingBehavior.h"
class CapClosingBehavior final : public IClosingBehavior
{
public:
	void close() override;
	~CapClosingBehavior() override = default;
};

