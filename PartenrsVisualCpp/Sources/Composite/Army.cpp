#include <cstdarg>
#include "stdafx.h"
#include "Army.h"

using namespace std;

namespace Composite {
    void Army::RemoveUnit(int index) {
        Units.erase(Units.begin() + index);
    }

    string Army::GetName() const {
        string output;
        for (auto unit : Units) {
            output += unit->GetName() + '\n';
        }
        return output;
    }
}