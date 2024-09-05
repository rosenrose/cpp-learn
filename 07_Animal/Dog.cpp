#include <iostream>
#include "Dog.h"

using std::cout;
using std::endl;

namespace samples
{
    Dog::Dog(const int age)
        : Animal(age) {}

    void Dog::Move() const
    {
        cout << "dog move" << endl;
    }

    void Dog::Speak() const
    {
        cout << "BowWow" << endl;
    }
}
