#include "my.h"

using std::function;

int f1(int a, int b) {
    cout << "in f1" << endl;
    return a + b;
}

class A {
    public:
        int operator()(int a, int b) { 
            cout << "in class" << endl;
            return a * b;
        }
        int sum(int a, int b) {
            cout << "in div" << endl;
            return b != 0 ? a / b : 0;
        }
};

int main() {
    A a;
    auto ff = bind(f1, _1, _2);
    auto fg = bind(A(), _1, _2);
    auto fh = bind(&A::sum, a, _1, _2);
    ff(1,2);
    fg(1,2);
    fh(1,2);
    return 0;
}


