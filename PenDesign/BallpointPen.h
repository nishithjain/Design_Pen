#pragma once
#include <iostream>

#include "Pen.h"
#include "Refill.h"

class BallpointPen final : public Pen
{
public:
    Refill refill_;

    BallpointPen(const std::string& name, const std::string& brand, double price, 
                 std::unique_ptr<IClosingBehavior> closing_behavior,
                 Refill refill);

    void Write() override;
};

