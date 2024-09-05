#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Animal.h"

using std::cout;
using std::endl;

int main()
{
    samples::Animal *animal = new samples::Animal(1);
    samples::Animal *cat = new samples::Cat(3);
    samples::Animal *dog = new samples::Dog(10);

    animal->Move();
    cat->Move();
    dog->Move();

    animal->Speak();
    cat->Speak();
    dog->Speak();

    delete animal;
    delete cat;
    delete dog;

    return 0;
}
