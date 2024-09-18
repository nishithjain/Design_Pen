#pragma once
#include "IWriteStrategy.h"
class AddGelTrimaxWriteStrategy final : public IWriteStrategy
{
public:
	void write() override;
};

