#pragma once

#include <string>
#include "Animal.h"

namespace samples
{
    class Dog : public Animal
    {
    public:
        Dog(const int age);

        virtual void Move() const;
        virtual void Speak() const;
    };
}
