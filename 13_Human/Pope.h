#pragma once

#include "Human.h"

namespace samples
{
    class Pope final : public Human
    {
    public:
        Pope();
        Pope(const Pope &other) = delete;

        virtual ~Pope() override = default; // override를 넣은 이유: 부모 소멸자가 가상 함수임을 보장하는 방법

        virtual void SayName() const override final;
    };
}
