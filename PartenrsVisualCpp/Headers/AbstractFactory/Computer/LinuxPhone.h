#pragma once

#include "IPhone.h"

namespace AbstractFactory {
    class LinuxPhone : public IPhone {
        public:
        LinuxPhone() = default;
        virtual std::string GetBrand() const;
    };
}

