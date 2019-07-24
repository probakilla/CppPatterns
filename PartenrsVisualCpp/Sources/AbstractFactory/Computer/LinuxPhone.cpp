#include "stdafx.h"
#include "LinuxPhone.h"

using namespace std;

namespace AbstractFactory {
    string LinuxPhone::GetBrand() const {
        return "Linux Phone";
    }
}
