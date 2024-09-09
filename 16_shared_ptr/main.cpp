#include <iostream>
#include <memory>
#include "Node.h"

using samples::Node;
using std::cout;
using std::endl;
using std::make_shared;
using std::shared_ptr;

int main()
{
    shared_ptr<Node> root = make_shared<Node>(1);
    root->SetNext(make_shared<Node>(2));
    root->GetNext()->SetNext(make_shared<Node>(3));
    root->GetNext()->GetNext()->SetNext(make_shared<Node>(4));

    shared_ptr<Node> lastNode = make_shared<Node>(5);
    root->GetNext()->GetNext()->GetNext()->SetNext(lastNode);

    shared_ptr<Node> node = root;

    while (node != nullptr)
    {
        cout << node->GetData() << endl;
        node = node->GetNext();
    }

    cout << "use count of lastNode: " << lastNode.use_count() << endl;

    return 0;
}
