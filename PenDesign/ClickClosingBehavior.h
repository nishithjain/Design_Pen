#pragma once
#include "IClosingBehavior.h"
class ClickClosingBehavior final : public IClosingBehavior
{
public:
	void close() override;
	~ClickClosingBehavior() override = default;
};

