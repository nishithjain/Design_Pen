#include "Ink.h"

Ink::Ink(std::string color, const InkType type)
	: color_(std::move(color)), type_(type) {}
