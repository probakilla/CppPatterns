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

    void Calculator::Sub(int a, int b) {
        result = a - b;
    }

    void Calculator::Mult(int a, int b) {
        result = a * b;
    }

    void Calculator::Div(int a, int b) {
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
