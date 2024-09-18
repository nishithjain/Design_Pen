#pragma once
#include <memory>
#include <string>

#include "IClosingBehavior.h"
#include "PenType.h"

class Pen
{
public:
	virtual ~Pen() = default;
	std::string name_;
    std::string brand_;
    double price_;
    PenType type_;
    std::unique_ptr<IClosingBehavior> closing_behavior_;

    Pen(std::string name, std::string brand, double price, 
        PenType type, std::unique_ptr<IClosingBehavior> closing_behavior);
    virtual void Write() = 0;
    void Close() const;
};

