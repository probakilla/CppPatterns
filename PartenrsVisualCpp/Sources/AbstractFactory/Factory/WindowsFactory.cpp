#include "stdafx.h"
#include "WindowsFactory.h"
#include "WindowsComputer.h"
#include "WindowsPhone.h"

namespace AbstractFactory {
    IComputer* WindowsFactory::GetComputer() const {
        return new WindowsComputer();
    }

    IPhone* WindowsFactory::GetPhone() const {
        return new WindowsPhone();
    }
}