#include <iostream>
#include "Animal.h"

using std::cout;
using std::endl;

namespace samples
{
    Animal::Animal(const int age)
        : mAge(age) {}

    int Animal::GetAge() const
    {
        return mAge;
    }

    void Animal::Move() const
    {
        cout << "animal move" << endl;
    }
}
