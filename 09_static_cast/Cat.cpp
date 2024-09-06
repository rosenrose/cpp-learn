#include <string>
#include "Cat.h"

namespace samples
{
    const char *Cat::mAnimalType = "Cat";

    Cat::Cat(const char *const name)
    {
        mName = new char[strlen(name) + 1];
        memcpy(mName, name, strlen(name) + 1);
    }

    Cat::~Cat()
    {
        delete[] mName;
    }

    const char *Cat::GetName() const
    {
        return mName;
    }

    const char *Cat::GetType()
    {
        return mAnimalType;
    }
}
