#pragma once

#include "AbstractUnit.h"

namespace Composite {
    class ProtossUnit : public AbstractUnit {
        public:
        ProtossUnit(std::string name) : AbstractUnit(name) {}
    };
}