#include "stdafx.h"
#include "TerranArmyBuilder.h"
#include "TerranUnit.h"

using namespace Composite;
using namespace std;

namespace Builder {
    TerranArmyBuilder::TerranArmyBuilder() : TerranArmy() {}

    shared_ptr<Army> TerranArmyBuilder::GetArmy() const {
        return make_shared<Army>(TerranArmy);
    }

    void TerranArmyBuilder::AddFootman() {
        AddUnit("Marine");
    }

    void TerranArmyBuilder::AddTank() {
        AddUnit("Tank");
    }

    void TerranArmyBuilder::AddAircraft() {
        AddUnit("Viking");
    }

    void TerranArmyBuilder::AddUnit(string name) {
        TerranArmy.InsertUnit(make_shared<TerranUnit>(name));
    }
}