#pragma once
class IWriteStrategy
{
public:
    virtual void write() = 0;
    virtual ~IWriteStrategy() = default;
};

