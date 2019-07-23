#include "stdafx.h"
#include "CppUnitTest.h"
#include "Calculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Singleton;

namespace PartenrsVisualCpp {
    TEST_CLASS(SingletonTest) {
    public:
    Calculator* Fixture;
    const int DEFAULT_INT = 2;
    const int ADD_RESULT = 4;
    const int SUB_RESULT = 0;
    const int MULT_RESULT = 4;
    const int DIV_RESULT = 1;

    TEST_METHOD_INITIALIZE(SetUp) {
        Fixture = Calculator::GetInstance();
    }

    TEST_METHOD_CLEANUP(TearDown) {
        SingletonTest::Fixture = nullptr;
    }

    TEST_METHOD(TestCalculatorAdd) {
        Fixture->Add(DEFAULT_INT, DEFAULT_INT);
        Assert::AreEqual(ADD_RESULT, Fixture->GetResult());
    }

    TEST_METHOD(TestCalculatorSub) {
        Fixture->Sub(DEFAULT_INT, DEFAULT_INT);
        Assert::AreEqual(SUB_RESULT, Fixture->GetResult());
    }

    TEST_METHOD(TestCalculatorMult) {
        Fixture->Mult(DEFAULT_INT, DEFAULT_INT);
        Assert::AreEqual(MULT_RESULT, Fixture->GetResult());
    }

    TEST_METHOD(TestCalculatorDiv) {
        Fixture->Div(DEFAULT_INT, DEFAULT_INT);
        Assert::AreEqual(DIV_RESULT, Fixture->GetResult());
    }
    };
}