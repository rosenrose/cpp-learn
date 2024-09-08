#include <iostream>
#include "Ball.h"
#include "EColor.h"

using std::cout;
using std::endl;

namespace samples
{
    Ball::Ball(eColor color)
        : mColor(color)
    {
    }

    void Ball::SayColor() const
    {
        cout << "Color is ";

        switch (mColor)
        {
        case eColor::Red:
            cout << "Red";
            break;
        case eColor::Green:
            cout << "Green";
            break;
        case eColor::Blue:
            cout << "Blue";
            break;

        default:
            std::cerr << "unreachable" << endl;
            break;
        }

        cout << endl;
    }
}
