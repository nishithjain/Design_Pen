#pragma once
#include "IWriteStrategy.h"
class ButterFlowWriteStrategy final : public IWriteStrategy
{
public:
	void write() override;
};

