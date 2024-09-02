#pragma once

#include <iostream>

class Vector
{
    friend std::ostream &operator<<(std::ostream &os, const Vector &rhs);

public:
    Vector();
    Vector(const int x, const int y);

    int GetX() const;
    void SetX(const int x);

    int GetY() const;
    void SetY(const int y);

    bool operator==(const Vector &rhs) const;

    Vector operator+(const Vector &rhs) const;
    Vector &operator+=(const Vector &rhs);

    Vector operator*(const Vector &rhs) const;
    Vector operator*(const int rhs) const;
    friend Vector operator*(const int lhs, const Vector &rhs);

    Vector &operator*=(const Vector &rhs);
    Vector &operator*=(const int rhs);

private:
    int mX;
    int mY;
};
