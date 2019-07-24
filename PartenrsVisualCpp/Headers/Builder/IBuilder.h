#pragma once

#include <memory>
#include "Army.h"
#include "IUnit.h"

namespace Builder {
    class IBuilder {
        public:
        virtual ~IBuilder() = default;
        virtual std::shared_ptr<Composite::Army> GetArmy() const = 0;
        virtual void AddFootman() = 0;
        virtual void AddTank() = 0;
        virtual void AddAircraft() = 0;
    };
}
