#include <string>
#include "Dog.h"

namespace samples
{
    Dog::Dog(const char *const address)
    {
        mAddress = new char[strlen(address) + 1];
        memcpy(mAddress, address, strlen(address) + 1);
    }

    Dog::~Dog()
    {
        delete[] mAddress;
    }

    const char *Dog::GetAddress() const
    {
        return mAddress;
    }
}
