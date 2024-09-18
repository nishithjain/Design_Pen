#include "BallpointPen.h"

BallpointPen::BallpointPen(const std::string& name, const std::string& brand, const double price,
                           std::unique_ptr<IClosingBehavior> closing_behavior, Refill refill)
	: Pen(name, brand, price, PenType::BALLPOINT_PEN, std::move(closing_behavior)),
	refill_(std::move(refill))
{
}


void BallpointPen::Write()
{
	std::cout << "Writing with BallpointPen.\n";
}
