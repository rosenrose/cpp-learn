#include "Animal.h"

namespace samples
{
    Animal::Animal() {}
    Animal::Animal(const int age)
        : mAge(age) {}

    int Animal::GetAge() const
    {
        return mAge;
    }
}
