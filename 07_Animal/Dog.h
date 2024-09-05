#pragma once

#include <string>
#include "Animal.h"

namespace samples
{
    class Dog : public Animal
    {
    public:
        Dog(const int age);
        std::string Bark() const;
    };
}
