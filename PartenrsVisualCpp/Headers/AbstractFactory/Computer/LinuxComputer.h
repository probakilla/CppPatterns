#pragma once

#include "IComputer.h"

namespace AbstractFactory {
    class LinuxComputer : public IComputer {
        public:
        LinuxComputer() = default;
        std::string GetBrand();
    };
}