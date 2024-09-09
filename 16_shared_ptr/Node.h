#pragma once

#include <memory>

using std::shared_ptr;

namespace samples
{
    class Node final
    {
    public:
        Node() = delete;
        Node(const int data);

        ~Node() = default;

        shared_ptr<Node> GetNext() const;
        void SetNext(const shared_ptr<Node> next);

        int GetData() const;

    private:
        int mData;
        shared_ptr<Node> mNext;
    };
}
