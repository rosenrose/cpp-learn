#include "Node.h"

namespace samples
{
    Node::Node(const int data)
        : mData(data), mNext(nullptr)
    {
    }

    shared_ptr<Node> Node::GetNext() const
    {
        return mNext;
    }

    void Node::SetNext(const shared_ptr<Node> next)
    {
        mNext = next;
    }

    int Node::GetData() const
    {
        return mData;
    }
}
