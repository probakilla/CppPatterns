#pragma once

#include "AbstractUnit.h"

namespace Composite {
    class TerranUnit : public AbstractUnit {
        public:
        TerranUnit(std::string name) : AbstractUnit(name) {}
    };
}
