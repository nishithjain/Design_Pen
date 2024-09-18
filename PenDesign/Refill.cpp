#include "Refill.h"

Refill::Refill(const Nib nib, Ink ink)
	: nib_(nib), ink_(std::move(ink))
{
}
