#include "Cache.h"

namespace samples
{
    void Cache::Add(const std::string &key, std::weak_ptr<int> ptr)
    {
        auto it = mCache.find(key);

        if (it == mCache.end())
        {
            mCache.emplace(key, ptr);
            return;
        }

        mCache[key] = ptr;
    }

    std::shared_ptr<int> Cache::Get(const std::string &key)
    {
        auto it = mCache.find(key);

        if (it == mCache.end())
        {
            return nullptr;
        }

        if (it->second.expired())
        {
            mCache.erase(it);
            return nullptr;
        }

        return it->second.lock();
    }
}
