#pragma once
#include <string>

namespace AbstractFactory {
    class IComputer {
        public:
        virtual ~IComputer() = default;
        virtual std::string GetBrand() const = 0;
    };
}

