#include "Dog.h"

using std::string;

namespace samples
{
    Dog::Dog(const int age)
        : Animal(age) {}

    string Dog::Bark() const
    {
        return string("BowWow");
    }
}
