#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

using namespace samples;
using std::cout;
using std::endl;

int main()
{
    Animal *pet1 = new Cat("Nabi");
    Animal *pet2 = new Dog("bar");

    Cat *cat = static_cast<Cat *>(pet1);
    Dog *dog1 = static_cast<Dog *>(pet2);
    Dog *dog2 = static_cast<Dog *>(pet1);

    cout << "cat name: " << cat->GetName() << endl;
    cout << "dog1 address: " << dog1->GetAddress() << endl;
    cout << "dog2 address: " << dog2->GetAddress() << endl;

    cout << "type: " << cat->GetType() << endl;
    cout << "type: " << Cat::GetType() << endl;

    delete pet1;
    delete pet2;

    return 0;
}
