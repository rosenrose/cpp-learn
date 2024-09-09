#include <iostream>
#include "MyVector.h"

using std::cout;
using std::endl;

namespace samples
{
    MyVector::MyVector(const int x, const int y)
        : mX(x), mY(y)
    {
    }

    int MyVector::GetX() const
    {
        return mX;
    }

    int MyVector::GetY() const
    {
        return mY;
    }

    void MyVector::Print() const
    {
        cout << mX << "," << mY << endl;
    }
}
