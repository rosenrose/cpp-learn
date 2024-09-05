#pragma once

namespace samples
{
    class String
    {
    public:
        String(const char *const str);
        String(const String &other);
        const String &operator=(const String &rhs);

        virtual ~String();

        void Print() const;

    private:
        char *mString;
        size_t mSize;
    };
}
