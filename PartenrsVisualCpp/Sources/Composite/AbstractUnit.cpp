#include "stdafx.h"
#include "AbstractUnit.h"

using namespace std;

namespace Composite {
    AbstractUnit::AbstractUnit(string name) : Name(name) {}

    string AbstractUnit::GetName() const {
        return Name;
    }
}