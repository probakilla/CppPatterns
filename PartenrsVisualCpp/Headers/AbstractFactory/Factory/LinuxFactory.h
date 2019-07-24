#pragma once

#include "IFactory.h"

namespace AbstractFactory {
    class LinuxFactory : public IFactory {
        public:
        LinuxFactory() = default;
        virtual IComputer* GetComputer() const;
        virtual IPhone* GetPhone() const;
    };
}

