#pragma once

class Vector
{
public:
    Vector();
    Vector(const int x, const int y);
    void SetX(const int x);
    void SetY(const int y);
    int GetX() const;
    int GetY() const;
    void Add(const Vector &other);

private:
    int mX;
    int mY;
};
