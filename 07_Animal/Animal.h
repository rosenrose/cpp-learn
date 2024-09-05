#pragma once

namespace samples
{
    class Animal
    {
    public:
        Animal();
        Animal(const int age);
        virtual ~Animal();

        virtual void Move() const;
        virtual void Speak() const;

        int GetAge() const;

    private:
        int mAge;
    };
}
