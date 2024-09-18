#pragma once

class IClosingBehavior {
public:
    virtual void close() = 0;
    virtual ~IClosingBehavior() = default;
};