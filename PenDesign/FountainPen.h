#pragma once
#include "Ink.h"
#include "Nib.h"
#include "Pen.h"
class FountainPen final : public Pen
{
public:
    Nib nib_;
    Ink ink_;

    FountainPen(const std::string& name, const std::string& brand, double price,
                std::unique_ptr<IClosingBehavior> closing_behavior,
                Nib nib, Ink ink);

    void Write() override;
};

