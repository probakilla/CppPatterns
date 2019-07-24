#pragma once
#include "IFactory.h"

namespace AbstractFactory {
    class WindowsFactory : public IFactory {
        public:
        WindowsFactory() = default;
        virtual IComputer* GetComputer() const;
        virtual IPhone* GetPhone() const;
    };
}
