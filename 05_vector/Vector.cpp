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

bool Vector::operator==(const Vector &rhs) const
{
    return (mX == rhs.mX) && (mY == rhs.mY);
}

Vector Vector::operator+(const Vector &rhs) const
{
    return Vector(mX + rhs.mX, mY + rhs.mY);
}

Vector &Vector::operator+=(const Vector &rhs)
{
    mX += rhs.mX;
    mY += rhs.mY;

    return *this;
}

Vector Vector::operator*(const Vector &rhs) const
{
    return Vector(mX * rhs.mX, mY * rhs.mY);
}

Vector Vector::operator*(const int rhs) const
{
    return Vector(mX * rhs, mY * rhs);
}

Vector operator*(const int lhs, const Vector &rhs)
{
    return Vector(lhs * rhs.mX, lhs * rhs.mY);
}

Vector &Vector::operator*=(const Vector &rhs)
{
    mX *= rhs.mX;
    mY *= rhs.mY;

    return *this;
}

Vector &Vector::operator*=(const int rhs)
{
    mX *= rhs;
    mY *= rhs;

    return *this;
}

std::ostream &operator<<(std::ostream &os, const Vector &rhs)
{
    os << rhs.mX << ", " << rhs.mY;

    return os;
}
