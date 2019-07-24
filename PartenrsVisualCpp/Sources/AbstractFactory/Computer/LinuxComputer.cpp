#include "stdafx.h"
#include "LinuxComputer.h"

using namespace std;

namespace AbstractFactory {
    string LinuxComputer::GetBrand() const {
        return "Linux Computer";
    }
}
