#include "my.h"

class A {
    protected:
        int a;
    public:
        int c;
        A(int p=100): a(p) {c = 101;cout << "default A " << p << endl;}
        virtual int get() {return a;}

};

class B: public A {
    private:
        int b;
    public:
        B(int p=20):b(p) {cout << "in constructor B" << endl;}
        int get() override {cout << "return a " << endl; return a;}
        virtual int get2()  = 0;
};

class C: public B {
    public:
        int get2() { cout << "in get2 " << endl; return 2;}
        int get() override {cout << "return a " << endl; return a;}
};

int main() {
    C c;
    A &a = c;
    B &b = c;
    cout << a.get()  << endl;
    cout << c.get()  << endl;
    return 0;
}

