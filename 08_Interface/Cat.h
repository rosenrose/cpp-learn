#pragma once

#include "IWalkable.h"

namespace samples
{
    class Cat : public IWalkable
    {
    public:
        virtual void Walk() const override;
    };
}
