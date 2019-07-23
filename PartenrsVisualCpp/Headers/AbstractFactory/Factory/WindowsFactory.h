#pragma once
#include "IFactory.h"

namespace AbstractFactory {
    class WindowsFactory : public IFactory {
        public:
        WindowsFactory() = default;
        virtual IComputer* GetComputer();
        virtual IPhone* GetPhone();
    };
}
