#pragma once

#include "EColor.h"

namespace samples
{
    class Ball
    {
    public:
        Ball() = delete;
        Ball(eColor color);

        virtual ~Ball() = default;

        void SayColor() const;

    private:
        eColor mColor;
    };
}