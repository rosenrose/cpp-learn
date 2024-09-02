#pragma once

class Vector
{
public:
    Vector();
    Vector(const int x, const int y);

    int GetX() const;
    void SetX(const int x);

    int GetY() const;
    void SetY(const int y);

    void Add(const Vector &other);

    bool IsEqual(const Vector &other) const;
    Vector Multiply(const Vector &other) const;
    Vector Multiply(const int multiplier) const;

    void Scale(const Vector &other);
    void Scale(const int multiplier);

    void Print() const;

private:
    int mX;
    int mY;
};
