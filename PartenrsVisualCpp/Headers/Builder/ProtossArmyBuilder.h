#pragma once

#include "IBuilder.h"
#include "ProtossUnit.h"

namespace Builder {
    class ProtossArmyBuilder : public IBuilder {
        public:
        ProtossArmyBuilder() : ProtossArmy() {}
        virtual std::shared_ptr<Composite::Army> GetArmy() const;
        virtual void AddFootman();
        virtual void AddTank();
        virtual void AddAircraft();

        private:
        Composite::Army ProtossArmy;
        void AddUnit(std::string name);
    };
}