#pragma once

#include <iostream>

namespace samples
{
    class String
    {
    public:
        String() = delete;
        String(const char *const str);
        String(const String &other);
        String(String &&other);

        virtual ~String();

        const String &operator=(const String &rhs);
        const String &operator=(String &&rhs);

        char *GetString() const;
        int GetSize() const;

        friend std::ostream &operator<<(std::ostream &os, const String &rhs);

    private:
        char *mString;
        size_t mSize;
    };
}
