#pragma once

#include "AbstractUnit.h"

namespace Composite {
    class ZergUnit : public AbstractUnit {
        ZergUnit(std::string name) : AbstractUnit(name) {}
    };
}
