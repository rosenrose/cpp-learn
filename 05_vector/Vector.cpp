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

int Vector::GetX() const
{
    return mX;
}
void Vector::SetX(const int x)
{
    mX = x;
}

int Vector::GetY() const
{
    return mY;
}
void Vector::SetY(const int y)
{
    mY = y;
}

void Vector::Add(const Vector &other)
{
    mX += other.mX;
    mY += other.mY;
}

bool Vector::IsEqual(const Vector &other) const
{
    return (mX == other.mX) && (mY == other.mY);
}

Vector Vector::Multiply(const Vector &other) const
{
    return Vector(mX * other.mX, mY * other.mY);
}

Vector Vector::Multiply(const int multiplier) const
{
    return Vector(mX * multiplier, mY * multiplier);
}

void Vector::Scale(const Vector &other)
{
    mX *= other.mX;
    mY *= other.mY;
}

void Vector::Scale(const int multiplier)
{
    mX *= multiplier;
    mY *= multiplier;
}

void Vector::Print() const
{
    cout << mX << ", " << mY << endl;
}
