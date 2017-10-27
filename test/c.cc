#include "my.h"

class A {
    public:
        virtual void out(int a = 2) {
            cout << "in base, a is " << a << endl;
        }
};

class B: public A { 
    public:
        void out(int a = 3) {
            A::out(a);
        }
/*        void out(int a = 3) {
            cout << "in inherit, a is " << a << endl;
        }
        */
};

int main() {
    B b;
    A &a = b;
    b.out();
    return 0;
}
