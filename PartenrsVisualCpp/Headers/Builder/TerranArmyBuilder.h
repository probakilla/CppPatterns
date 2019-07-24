#pragma once

#include "IBuilder.h"


namespace Builder {
    class TerranArmyBuilder : public IBuilder {
        public: 
        TerranArmyBuilder();
        virtual std::shared_ptr<Composite::Army> GetArmy() const;
        virtual void AddFootman();
        virtual void AddTank();
        virtual void AddAircraft();

        private:
        Composite::Army TerranArmy;
        virtual void AddUnit(std::string name);
    };
}
