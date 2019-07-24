#include "stdafx.h"
#include "LinuxFactory.h"
#include "LinuxComputer.h"
#include "LinuxPhone.h"

namespace AbstractFactory {
    IComputer* LinuxFactory::GetComputer() const {
        return new LinuxComputer();
    }

    IPhone* LinuxFactory::GetPhone() const {
        return new LinuxPhone();
    }
}