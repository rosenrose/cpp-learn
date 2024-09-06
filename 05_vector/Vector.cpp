#include <iostream>
#include "Vector.h"

using std::cout;
using std::endl;

Vector::Vector()
    : mX(0),
      mY(0)
{
    cout << "Vector(): (" << *this << ")" << endl;
}

Vector::Vector(const int x, const int y)
    : mX(x),
      mY(y)
{
    cout << "Vector(const int x, const int y): (" << *this << ")" << endl;
}

std::ostream &operator<<(std::ostream &os, const Vector &rhs)
{
    os << rhs.mX << ", " << rhs.mY;

    return os;
}
