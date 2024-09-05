#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Animal.h"

using std::cout;
using std::endl;

int main()
{
    samples::Animal *cat = new samples::Cat(3);
    samples::Animal *dog = new samples::Dog(10);

    cat->Move();
    dog->Move();

    cat->Speak();
    dog->Speak();

    delete cat;
    delete dog;

    samples::Cat dd(3);
    samples::Animal &d = dd;

    d.Speak();

    auto a = samples::Animal::Speak;

    return 0;
}
