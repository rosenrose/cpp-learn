#pragma once

#include <string>
#include <memory>

class Person;

class Pet final
{
public:
    Pet() = delete;
    Pet(const std::string &name);

    ~Pet() = default;

    void SetOwner(const std::shared_ptr<Person> &owner);

private:
    std::string mName;
    std::weak_ptr<Person> mOwner;
};
