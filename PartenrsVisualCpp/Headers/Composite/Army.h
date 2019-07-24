#pragma once

#include <vector>
#include <memory>
#include "IUnit.h"

namespace Composite {
    class Army : public IUnit {
        public:
        virtual ~Army() = default;
        virtual void InsertUnit(std::shared_ptr<IUnit> unit);
        virtual void RemoveUnit(int index);
        virtual std::string GetName() const;

        private:
        std::vector<std::shared_ptr<IUnit>> Units;
    };
}
