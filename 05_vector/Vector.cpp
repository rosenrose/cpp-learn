#include <iostream>
#include "Vector.h"

using std::cout;
using std::endl;

Vector::Vector()
    : mX(0),
      mY(0)
{
    cout << "Vector(): (" << mX << ", " << mY << ")" << endl;
}

Vector::Vector(const int x, const int y)
    : mX(x),
      mY(y)
{
    cout << "Vector(const int x, const int y): (" << mX << ", " << mY << ")" << endl;
}

void Vector::SetX(const int x)
{
    mX = x;
}
void Vector::SetY(const int y)
{
    mY = y;
}

int Vector::GetX() const
{
    return mX;
}
int Vector::GetY() const
{
    return mY;
}

void Vector::Add(const Vector &other)
{
    mX += other.mX;
    mY += other.mY;
}
