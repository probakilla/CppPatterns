#pragma once

#include "AbstractUnit.h"

namespace Composite {
    class ZergUnit : public AbstractUnit {
        public:
        ZergUnit(std::string name) : AbstractUnit(name) {}
    };
}
