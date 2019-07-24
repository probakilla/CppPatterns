#pragma once

#include <string>

namespace Composite {
    class IUnit {
        public:
        virtual ~IUnit() = default;
        virtual std::string GetName() const = 0;
    };
}
