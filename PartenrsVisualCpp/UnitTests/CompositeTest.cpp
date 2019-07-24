#include <memory>
#include <string>
#include "stdafx.h"
#include "CppUnitTest.h"
#include "IUnit.h"
#include "ZergUnit.h"
#include "TerranUnit.h"
#include "ProtossUnit.h"
#include "Army.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Composite;
using namespace std;

namespace UnitTests {
    TEST_CLASS(CompositeTest) {
    public:
    unique_ptr<Army> Fixture;

    TEST_METHOD_INITIALIZE(SetUp) {
        Fixture = make_unique<Army>();
    }

    TEST_METHOD_CLEANUP(TearDown) {
        Fixture = nullptr;
    }

    TEST_METHOD(TestSingleInsert) {
        shared_ptr<IUnit> zerg = make_shared<ZergUnit>("Zergling");
        shared_ptr<IUnit> protoss = make_shared<ProtossUnit>("Zealot");
        shared_ptr<IUnit> terran = make_shared<TerranUnit>("Marine");
        Fixture->InsertUnit(zerg, terran, protoss);
        string expected("Zergling\nMarine\nZealot\n");
        Assert::AreEqual(expected, Fixture->GetName());
    }
    };
}