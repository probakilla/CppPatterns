#pragma once

#include "IPhone.h"

namespace AbstractFactory {
    class WindowsPhone : public IPhone {
        public:
        WindowsPhone() = default;
        virtual std::string GetBrand() const;
    };
}

