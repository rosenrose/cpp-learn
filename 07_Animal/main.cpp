#include <iostream>
#include "Dog.h"
#include "Cat.h"

using std::cout;
using std::endl;

int main()
{
    samples::Dog dog(3);
    samples::Cat cat(10);

    cout << dog.Bark() << ", " << cat.Meow() << endl;

    return 0;
}
