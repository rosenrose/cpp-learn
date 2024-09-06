#pragma once

#include <iostream>

class Vector
{
    friend std::ostream &operator<<(std::ostream &os, const Vector &rhs);

public:
    Vector();
    Vector(const int x, const int y);

    inline int GetX() const;
    inline void SetX(const int x);

    inline int GetY() const;
    inline void SetY(const int y);

    inline bool operator==(const Vector &rhs) const;

    inline Vector operator+(const Vector &rhs) const;
    inline const Vector &operator+=(const Vector &rhs);

    inline Vector operator*(const Vector &rhs) const;
    inline Vector operator*(const int rhs) const;
    friend inline Vector operator*(const int lhs, const Vector &rhs);

    inline const Vector &operator*=(const Vector &rhs);
    inline const Vector &operator*=(const int rhs);

private:
    int mX;
    int mY;
};

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

const Vector &Vector::operator+=(const Vector &rhs)
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

const Vector &Vector::operator*=(const Vector &rhs)
{
    mX *= rhs.mX;
    mY *= rhs.mY;

    return *this;
}

const Vector &Vector::operator*=(const int rhs)
{
    mX *= rhs;
    mY *= rhs;

    return *this;
}
