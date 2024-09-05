#pragma once

#include <string>
#include "Animal.h"

namespace samples
{
    class Cat : public Animal
    {
    public:
        Cat(const int age);

        virtual void Move() const;
        virtual void Speak() const;
    };
}
