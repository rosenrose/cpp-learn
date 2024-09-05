#pragma once

#include "IWalkable.h"

namespace samples
{
    class Cat : public IWalkable
    {
    public:
        void Walk() const;
    };
}
