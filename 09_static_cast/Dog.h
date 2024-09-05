#pragma once

#include "Animal.h"

namespace samples
{
    class Dog : public Animal
    {
    public:
        Dog(const char *const name);
        virtual ~Dog();

        const char *GetAddress() const;

    private:
        char *mAddress;
    };
}
