#include "Person.h"

Person::Person(const std::string &name)
    : mName(name)
{
}

void Person::SetPet(const std::shared_ptr<Pet> &pet)
{
    mPet = pet;
}
