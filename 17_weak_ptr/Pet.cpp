#include "Pet.h"

Pet::Pet(const std::string &name)
    : mName(name)
{
}

void Pet::SetOwner(const std::shared_ptr<Person> &owner)
{
    mOwner = owner;
}
