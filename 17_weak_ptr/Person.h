#pragma once

#include <string>
#include <memory>

class Pet;

class Person final
{
public:
    Person() = delete;
    Person(const std::string &name);

    ~Person() = default;

    void SetPet(const std::shared_ptr<Pet> &pet);

private:
    std::string mName;
    std::shared_ptr<Pet> mPet;
};
