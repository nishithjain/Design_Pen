#pragma once
#include <string>

#include "Pen.h"
#include "PenType.h"

class PenFactory
{
public:
	static std::unique_ptr<Pen> CreatePen(PenType type, 
		const std::string& name,
		const std::string& color,
		const std::string& brand, 
		double price);
};

