#pragma once

#include <string>
#include <unordered_map>
#include <memory>

namespace samples
{
    class Cache final
    {
    public:
        Cache() = default;
        ~Cache() = default;

        void Add(const std::string &key, std::weak_ptr<int> ptr);

        std::shared_ptr<int> Get(const std::string &key);

    private:
        std::unordered_map<std::string, std::weak_ptr<int>> mCache;
    };
}
