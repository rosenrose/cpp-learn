#pragma once

#include <string>
#include "Animal.h"

namespace samples
{
    class Cat : public Animal
    {
    public:
        Cat(const int age);
        std::string Meow() const;
    };
}
