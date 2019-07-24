#include "stdafx.h"
#include "Army.h"

using namespace std;

namespace Composite {
    void Army::InsertUnit(shared_ptr<IUnit> unit) {
        Units.push_back(move(unit));
    }

    void Army::RemoveUnit(int index) {
        Units.erase(Units.begin() + index);
    }

    string Army::GetName() const {
        string output;
        for each (auto unit in Units) {
            output += unit->GetName() + '\n';
        }
        return output;
    }
}