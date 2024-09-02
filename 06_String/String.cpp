#include <iostream>
#include <string>
#include "String.h"

using std::cout;
using std::endl;

namespace samples
{
    String::String(const char *const str)
        : mSize(strlen(str) + 1)
    {
        mString = new char[mSize];
        memcpy(mString, str, mSize);
    }

    String::String(const String &other)
        : mSize(other.mSize)
    {
        mString = new char[mSize];
        memcpy(mString, other.mString, mSize);
    }

    String::~String()
    {
        delete[] mString;
    }

    void String::Print() const
    {
        cout << mString << endl;
    }
}
