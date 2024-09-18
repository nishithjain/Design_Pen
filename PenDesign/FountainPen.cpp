#include "FountainPen.h"

#include <iostream>

FountainPen::FountainPen(const std::string& name, const std::string& brand, const double price,
                         std::unique_ptr<IClosingBehavior> closing_behavior,
                         const Nib nib, Ink ink)
    : Pen(name, brand, price, PenType::FOUNTAIN_PEN, 
        std::move(closing_behavior)), nib_(nib), ink_(std::move(ink))
{
}


void FountainPen::Write()
{
    std::cout << "Writing with FountainPen.\n";
}
