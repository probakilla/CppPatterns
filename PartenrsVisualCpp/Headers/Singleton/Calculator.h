#pragma once

namespace Singleton {
    class Calculator {
        public:
        static Calculator* GetInstance();
        ~Calculator();
        void Add(int a, int b);
        void Sub(int a, int b);
        void Mult(int a, int b);
        void Div(int a, int b);
        int GetResult();

        private:
        static Calculator* instance;
        int result;
        Calculator();
    };
}

