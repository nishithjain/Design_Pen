#include "PenFactory.h"

#include "BallpointPen.h"
#include "CapClosingBehavior.h"
#include "ClickClosingBehavior.h"
#include "FountainPen.h"
#include "GelPen.h"

std::unique_ptr<Pen> PenFactory::CreatePen(const PenType type,
	const std::string& name,
	const std::string& color,
	const std::string& brand, double price)
{
	std::unique_ptr<IClosingBehavior> closingBehavior =
		std::make_unique<ClickClosingBehavior>();
	switch (type) {
	case PenType::GEL_PEN:
		return std::make_unique<GelPen>(name, brand, price,
			Refill(Nib(0.5), Ink(color, InkType::WATERPROOF)),
			std::make_unique<CapClosingBehavior>());
	case PenType::BALLPOINT_PEN:
		return std::make_unique<BallpointPen>(name, brand, price,
			std::make_unique<ClickClosingBehavior>(), Refill(Nib(0.7), Ink(color, InkType::FRAGRANCE)));
	case PenType::FOUNTAIN_PEN:
		return std::make_unique<FountainPen>(name, brand, price,
			std::make_unique<CapClosingBehavior>(), Nib(0.4), Ink(color, InkType::SPARKLE));
	default:
		throw std::invalid_argument("Invalid pen type");
	}
}
