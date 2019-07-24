#include "stdafx.h"
#include "WindowsComputer.h"

using namespace std;

namespace AbstractFactory {
    string WindowsComputer::GetBrand() const {
        return "Windows Computer";
    }
}