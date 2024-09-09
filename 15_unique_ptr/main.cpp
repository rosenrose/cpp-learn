#include <iostream>
#include <memory>
#include "MyVector.h"

using std::cout;
using std::endl;
using std::make_unique;
using std::unique_ptr;

int main()
{
    unique_ptr<int> num = make_unique<int>(10);
    unique_ptr<char> ch = make_unique<char>('z');

    cout << *num << " " << *ch << endl;

    unique_ptr<samples::MyVector> vec = make_unique<samples::MyVector>(3, 9);
    vec->Print();

    vec.reset(new samples::MyVector(10, 20));
    vec->Print();

    num.reset();
    vec = nullptr;

    return 0;
}
