#pragma once

#include "IUnit.h"

namespace Composite {
    class AbstractUnit : public IUnit {
        public:
        AbstractUnit(std::string name);
        virtual std::string GetName() const;

        private:
        std::string Name;
    };
}
