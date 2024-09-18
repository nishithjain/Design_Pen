#pragma once
#include <string>

#include "InkType.h"

class Ink {
public:
    std::string color_;
    InkType type_;

    Ink(std::string color, InkType type);
};

