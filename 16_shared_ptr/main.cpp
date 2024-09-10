#include <iostream>
#include <memory>
#include "Node.h"
#include "HashMap.h"

using samples::Node;
using std::cout;
using std::endl;
using std::make_shared;
using std::shared_ptr;

constexpr unsigned long HashFunc(const char *str)
{
    unsigned long sum = 0;

    for (; *str != '\0'; str++)
    {
        sum += *str;
    }

    return sum;
}

int main()
{
    shared_ptr<Node> root = make_shared<Node>("1", 1);
    root->SetNext(make_shared<Node>("2", 2));
    root->GetNext()->SetNext(make_shared<Node>("3", 3));
    root->GetNext()->GetNext()->SetNext(make_shared<Node>("4", 4));

    shared_ptr<Node> lastNode = make_shared<Node>("5", 5);
    root->GetNext()->GetNext()->GetNext()->SetNext(lastNode);

    shared_ptr<Node> node = root;

    while (node != nullptr)
    {
        cout << node->GetData() << endl;
        node = node->GetNext();
    }

    cout << "use count of lastNode: " << lastNode.use_count() << endl;

    samples::HashMap map;
    constexpr unsigned long test1 = HashFunc("test1");

    map.Add("test1", test1, 1);
    map.Add("test2", HashFunc("test2"), 2);
    map.Add("test3", HashFunc("test3"), 3);
    map.Add("1test", HashFunc("test1"), 4);
    map.Add("te1st", HashFunc("te1st"), 5);
    map.Print();
    cout << endl;

    map.Add("test1", HashFunc("test1"), 10);
    map.Add("test3", HashFunc("test3"), 100);
    map.Print();
    cout << endl;

    cout << map.Get("test2", HashFunc("test2")) << endl;
    cout << map.Get("1test", HashFunc("1test")) << endl;
    cout << map.Get("te1st", HashFunc("te1st")) << endl;
    cout << map.Get("foo", HashFunc("foo")) << endl;

    return 0;
}

// constexpr unsigned long HashFuncCompileError(const char *const str)
// {
//     strlen은 컴파일 도중에 평가할 수 없음
//     size_t len = strlen(str);
//     unsigned long sum = 0;

//     for (size_t i = 0; i < len; i++)
//     {
//         sum += str[i];
//     }

//     return sum;
// }
