#include "stdafx.h"
#include "WindowsPhone.h"

using namespace std;

namespace AbstractFactory {
    string WindowsPhone::GetBrand() const {
        return "Windows Phone";
    }
}