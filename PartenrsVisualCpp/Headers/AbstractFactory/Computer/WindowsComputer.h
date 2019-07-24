#pragma once

#include "IComputer.h"
#include <string>

namespace AbstractFactory {
    class WindowsComputer : public IComputer {
        public:
        WindowsComputer() = default;
        std::string GetBrand() const;
    };
}
