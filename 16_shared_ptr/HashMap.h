#pragma once

#include <memory>
#include "Node.h"

namespace samples
{
    class HashMap
    {
    public:
        HashMap() = default;
        ~HashMap() = default;

        void Add(const char *const key, const unsigned long hash, const int value);
        int Get(const char *const key, const unsigned long hash) const;

        void Print() const;

    private:
        static constexpr int MAX_SIZE = 10;
        std::shared_ptr<Node> mArray[MAX_SIZE];
    };
}
