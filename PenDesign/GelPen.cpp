#include "GelPen.h"

#include <iostream>

GelPen::GelPen(const std::string& name, const std::string& brand, const double price,
               Refill refill, std::unique_ptr<IClosingBehavior> closing_behavior) :
	Pen(name, brand, price, PenType::GEL_PEN,
		std::move(closing_behavior)), refill_(std::move(refill))
{

}

void GelPen::Write()
{
	std::cout << "Writing with GelPen.\n";
}