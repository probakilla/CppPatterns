#pragma once

#include <vector>
#include <memory>
#include "IUnit.h"

namespace Composite {
    class Army : public IUnit {
        public:
        virtual ~Army() = default;

        template<typename... T> void InsertUnit(T... args) {
            int a[] = { 0, (Units.push_back(std::move(args)), 0)... };
            static_cast<void>(a);
        }

        virtual void RemoveUnit(int index);
        virtual std::string GetName() const;

        private:
        std::vector<std::shared_ptr<IUnit>> Units;
    };
}
