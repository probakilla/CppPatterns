#pragma once

#include <string>

namespace AbstractFactory {
    class IPhone {
        public:
        virtual ~IPhone() = default;
        virtual std::string GetBrand() const = 0;
    };
}

