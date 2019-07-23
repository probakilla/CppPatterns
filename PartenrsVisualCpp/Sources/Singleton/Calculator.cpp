#include "stdafx.h"
#include "Calculator.h"

namespace Singleton {
    Calculator* Calculator::instance = nullptr;

    Calculator::Calculator() { }

    Calculator::~Calculator() {
        delete(instance);
    }

    void Calculator::Add(int a, int b) {
        result = a + b;
    }

    void Calculator::Substract(int a, int b) {
        result = a - b;
    }

    void Calculator::Multiply(int a, int b) {
        result = a * b;
    }

    void Calculator::Divide(int a, int b) {
        result = a / b;
    }

    int Calculator::GetResult() {
        return result;
    }

    Calculator* Calculator::GetInstance() {
        if (!instance) {
            instance = new Calculator();
        }
        return instance;
    }
}
