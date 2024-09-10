#pragma once

#include <string>
#include <memory>

using std::shared_ptr;

namespace samples
{
    class Node final
    {
    public:
        Node() = delete;
        Node(const std::string &key, const int data);

        ~Node() = default;

        shared_ptr<Node> GetNext() const;
        void SetNext(const shared_ptr<Node> next);

        const std::string &GetKey() const;

        int GetData() const;

    private:
        std::string mKey;
        int mData;
        shared_ptr<Node> mNext;
    };
}
