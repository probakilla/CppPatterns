#include "stdafx.h"
#include "LinuxFactory.h"
#include "LinuxComputer.h"
#include "LinuxPhone.h"

namespace AbstractFactory {
    IComputer* LinuxFactory::GetComputer() {
        return new LinuxComputer();
    }

    IPhone* LinuxFactory::GetPhone() {
        return new LinuxPhone();
    }
}