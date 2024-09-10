#include <iostream>
#include "HashMap.h"

using std::cout;
using std::endl;

namespace samples
{
    void HashMap::Add(const char *const key, const unsigned long hash, const int value)
    {
        std::shared_ptr<Node> newNode = std::make_shared<Node>(key, value);
        const int idx = hash % MAX_SIZE;

        if (mArray[idx] == nullptr)
        {
            mArray[idx] = newNode;
            return;
        }

        shared_ptr<Node> current = mArray[idx];

        if (current->GetKey() == key)
        {
            newNode->SetNext(current->GetNext());
            mArray[idx] = newNode;
            return;
        }

        while (current->GetNext() != nullptr)
        {
            if (current->GetNext()->GetKey() == key)
            {
                newNode->SetNext(current->GetNext()->GetNext());
                break;
            }

            current = current->GetNext();
        }

        current->SetNext(newNode);
    }

    int HashMap::Get(const char *const key, const unsigned long hash) const
    {
        const int idx = hash % MAX_SIZE;

        shared_ptr<Node> current = mArray[idx];

        while (current != nullptr)
        {
            if (current->GetKey() == key)
            {
                return current->GetData();
            }

            current = current->GetNext();
        }

        return -1;
    }

    void HashMap::Print() const
    {
        for (size_t i = 0; i < MAX_SIZE; i++)
        {
            cout << "bucket " << i << ": ";
            shared_ptr<Node> current = mArray[i];

            while (current != nullptr)
            {
                cout << "Key: " << current->GetKey() << ", Val: " << current->GetData() << " | ";
                current = current->GetNext();
            }

            cout << endl;
        }
    }
}
