#pragma once

#include "IComputer.h"
#include "IPhone.h"

namespace AbstractFactory {
    class IFactory {
        public:
        virtual ~IFactory() {}
        virtual IComputer* GetComputer() const = 0;
        virtual IPhone* GetPhone() const = 0;
    };
}