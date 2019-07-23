#pragma once

namespace Singleton {
    class Calculator {
        public:
        static Calculator* GetInstance();
        ~Calculator();
        void Add(int a, int b);
        void Substract(int a, int b);
        void Multiply(int a, int b);
        void Divide(int a, int b);
        int GetResult();

        private:
        static Calculator* instance;
        int result;
        Calculator();
    };
}

