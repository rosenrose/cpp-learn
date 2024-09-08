#pragma once

#include "IFlyable.h"
#include "IWalkable.h"

namespace samples
{
    class Bat : public IFlyable, public IWalkable
    {
    public:
        virtual void Fly() const override;
        virtual void Walk() const override;
    };
}
