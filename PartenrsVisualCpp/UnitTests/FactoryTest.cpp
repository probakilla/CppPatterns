#include "stdafx.h"
#include "CppUnitTest.h"
#include "IFactory.h"
#include "IComputer.h"
#include "IPhone.h"
#include "WindowsFactory.h"
#include "LinuxFactory.h"
#include <memory>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace AbstractFactory;
using namespace std;

namespace UnitTests {
    TEST_CLASS(FactoryTest) {
    public:
    unique_ptr<IFactory> Fixture;

    TEST_METHOD_CLEANUP(TearDown) {
        Fixture = nullptr;
    }

    TEST_METHOD(TestWindowsFactoryComputer) {
        InitializeWindowsFactory();
        IComputer* computer = Fixture->GetComputer();
        string expected = "Windows Computer";
        Assert::AreEqual(expected, computer->GetBrand());
        delete(computer);
    }

    TEST_METHOD(TestWindowsFactoryPhone) {
        InitializeWindowsFactory();
        IPhone* phone = Fixture->GetPhone();
        string expected = "Windows Phone";
        Assert::AreEqual(expected, phone->GetBrand());
        delete(phone);
    }

    TEST_METHOD(TestLinuxFactoryComputer) {
        InitializeLinuxFactory();
        IComputer* computer = Fixture->GetComputer();
        string expected = "Linux Computer";
        Assert::AreEqual(expected, computer->GetBrand());
        delete(computer);
    }

    TEST_METHOD(TestLinuxFactoryPhone) {
        InitializeLinuxFactory();
        unique_ptr<IPhone> phone = make_unique<IPhone>(Fixture->GetPhone());
        string expected = "Linux Phone";
        Assert::AreEqual(expected, phone->GetBrand());
    }

    private:
    void InitializeWindowsFactory() {
        Fixture = make_unique<IFactory>(new WindowsFactory());
    }

    void InitializeLinuxFactory() {
        Fixture = make_unique<IFactory>(new LinuxFactory());
    }
    };
}