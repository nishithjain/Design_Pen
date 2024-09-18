#include "Pen.h"

Pen::Pen(std::string name, std::string brand, const double price,
	const PenType type, std::unique_ptr<IClosingBehavior> closing_behavior)
	: name_(std::move(name)),
	brand_(std::move(brand)),
	price_(price),
	type_(type),
	closing_behavior_(std::move(closing_behavior))
{
}

void Pen::Close() const
{
	closing_behavior_->close();
}
