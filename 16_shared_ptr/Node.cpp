#include "Node.h"

namespace samples
{
    Node::Node(const std::string &key, const int data)
        : mKey(key), mData(data), mNext(nullptr)
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

    const std::string &Node::GetKey() const
    {
        return mKey;
    }

    int Node::GetData() const
    {
        return mData;
    }
}
