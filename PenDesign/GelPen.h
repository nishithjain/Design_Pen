#pragma once
#include "Pen.h"
#include "Refill.h"
#include <string>

class GelPen final : public Pen
{
public:
    Refill refill_;
    GelPen(const std::string& name, const std::string& brand, double price, 
           Refill refill, std::unique_ptr<IClosingBehavior> closing_behavior);
    void Write() override;
};

