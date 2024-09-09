#pragma once

namespace samples
{
    class MyVector
    {
    public:
        MyVector() = delete;
        MyVector(const int x, const int y);

        virtual ~MyVector() = default;

        int GetX() const;
        int GetY() const;

        void Print() const;

    private:
        int mX;
        int mY;
    };
}
