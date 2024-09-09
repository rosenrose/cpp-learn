#pragma once

#include "EColor.h"

namespace samples
{
    class Ball final
    {
    public:
        Ball() = delete;
        Ball(eColor color);

        ~Ball() = default;

        void SayColor() const;

    private:
        eColor mColor;
    };
}