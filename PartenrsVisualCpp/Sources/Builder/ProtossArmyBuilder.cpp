#include "stdafx.h"
#include "ProtossArmyBuilder.h"

using namespace std;
using namespace Composite;

namespace Builder {
    shared_ptr<Army> ProtossArmyBuilder::GetArmy() const {
        return make_shared<Army>(ProtossArmy);
    }

    void ProtossArmyBuilder::AddFootman() {
        AddUnit("Zealot");
    }

    void ProtossArmyBuilder::AddTank() {
        AddUnit("Immortal");
    }

    void ProtossArmyBuilder::AddAircraft() {
        AddUnit("Disloker");
    }

    void ProtossArmyBuilder::AddUnit(string name) {
        ProtossArmy.InsertUnit(make_shared<ProtossUnit>(name));
    }
}