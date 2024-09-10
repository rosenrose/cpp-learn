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
        cout << "copy constructor" << endl;

        mString = new char[mSize];
        memcpy(mString, other.mString, mSize);
    }

    String::String(String &&other)
        : mString(other.mString), mSize(other.mSize)
    {
        cout << "move constructor" << endl;

        other.mString = nullptr;
        other.mSize = 0;
    }

    String::~String()
    {
        delete[] mString;
    }

    const String &String::operator=(const String &rhs)
    {
        cout << "copy assign" << endl;

        if (this != &rhs)
        {
            String::~String();

            mSize = rhs.mSize;
            mString = new char[mSize];
            memcpy(mString, rhs.mString, mSize);
        }

        return *this;
    }

    const String &String::operator=(String &&rhs)
    {
        cout << "move assign" << endl;

        if (this != &rhs)
        {
            String::~String();

            mString = rhs.mString;
            mSize = rhs.mSize;

            rhs.mString = nullptr;
            rhs.mSize = 0;
        }

        return *this;
    }

    char *String::GetString() const
    {
        return mString;
    }

    int String::GetSize() const
    {
        return mSize;
    }

    std::ostream &operator<<(std::ostream &os, const String &rhs)
    {
        os << rhs.mString << endl;

        return os;
    }
}
