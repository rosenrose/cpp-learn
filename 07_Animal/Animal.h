#pragma once

namespace samples
{
    class Animal
    {
    public:
        Animal();
        Animal(const int age);

        int GetAge() const;

    private:
        int mAge;
    };
}
