#include "stdafx.h"
#include "WindowsFactory.h"
#include "WindowsComputer.h"
#include "WindowsPhone.h"

namespace AbstractFactory {
    IComputer* WindowsFactory::GetComputer() {
        return new WindowsComputer();
    }

    IPhone* WindowsFactory::GetPhone() {
        return new WindowsPhone();
    }
}