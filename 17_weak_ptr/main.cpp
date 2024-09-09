#include <iostream>
#include <memory>
#include <cassert>
#include "Person.h"
#include "Pet.h"
#include "Cache.h"

using std::cout;
using std::endl;
using std::make_shared;
using std::shared_ptr;
using std::weak_ptr;

int main()
{
    shared_ptr<Person> owner = make_shared<Person>("Pope");
    shared_ptr<Pet> pet = make_shared<Pet>("Coco");

    cout << "Owner: " << owner.use_count() << ", Pet: " << pet.use_count() << endl;

    owner->SetPet(pet);
    pet->SetOwner(owner);

    cout << "Owner: " << owner.use_count() << ", Pet: " << pet.use_count() << endl;
    cout << endl;

    shared_ptr<int> p1 = make_shared<int>(99);
    shared_ptr<int> p2 = make_shared<int>(101);
    shared_ptr<int> p3 = make_shared<int>(13);

    samples::Cache cache;
    cache.Add("candy", p1);
    cache.Add("icecream", p2);
    cache.Add("chocolate", p3);

    shared_ptr<int> cachedPtr = cache.Get("icecream");

    cout << "icecream count: " << cachedPtr.use_count() << endl;
    cout << "icecream val: " << *cachedPtr << endl;
    cout << endl;

    cache.Add("icecream", p3);
    cachedPtr = cache.Get("icecream");

    cout << "icecream count: " << cachedPtr.use_count() << endl;
    cout << "icecream val: " << *cachedPtr << endl;
    cout << endl;

    p1 = nullptr;
    cachedPtr = cache.Get("candy");

    cout << "candy count: " << cachedPtr.use_count() << endl;
    assert(cachedPtr == nullptr);

    return 0;
}
