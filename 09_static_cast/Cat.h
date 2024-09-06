#pragma once

#include "Animal.h"

namespace samples
{
    class Cat : public Animal
    {
    public:
        Cat(const char *const name);
        virtual ~Cat();

        const char *GetName() const;
        static const char *GetType();

    private:
        char *mName;
        static const char *mAnimalType;
    };
}
