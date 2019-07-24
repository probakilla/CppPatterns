#pragma once

#include "AbstractUnit.h"

namespace Composite {
    class ProtossUnit : public AbstractUnit {
        ProtossUnit(std::string name) : AbstractUnit(name) {}
    };
}